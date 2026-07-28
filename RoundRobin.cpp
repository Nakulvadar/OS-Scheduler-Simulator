#include "Scheduler.h"
#include <algorithm>
#include <queue>

void RoundRobin ::schedule()
{

    stable_sort(processes.begin(), processes.end(),
                [](const Process &p1, const Process &p2)
                {
                    return p1.getArrivalTime() < p2.getArrivalTime();
                });

    queue<int> readyQueue;

    int currentTime = 0;
    int complited = 0;
    int nextProcess = 0;
    int tat = 0, wt = 0;

    while (complited < processes.size())
    {

        while (nextProcess < processes.size() && currentTime >= processes[nextProcess].getArrivalTime())
        {

            readyQueue.push(nextProcess);

            nextProcess++;
        }

        if (readyQueue.empty())
        {

            currentTime = processes[nextProcess].getArrivalTime();

            continue;
        }

        int index = readyQueue.front();
        readyQueue.pop();

        if (processes[index].getRemainingTime() > quantum)
        {
            int remainT = processes[index].getRemainingTime() - quantum;
            processes[index].setRemainingTime(remainT);

            currentTime += quantum;

            while (nextProcess < processes.size() && currentTime >= processes[nextProcess].getArrivalTime())
            {
                readyQueue.push(nextProcess);
                nextProcess++;
            }

            if (processes[index].getRemainingTime())
            {
                readyQueue.push(index);
            }
        }
        else
        {
            currentTime += processes[index].getRemainingTime();
            processes[index].setRemainingTime(0);

            while (nextProcess < processes.size() && currentTime >= processes[nextProcess].getArrivalTime())
            {
                readyQueue.push(nextProcess);

                nextProcess++;
            }
            processes[index].setCompletionTime(currentTime);

            tat = processes[index].getCompletionTime() - processes[index].getArrivalTime();
            processes[index].setTurnaroundTime(tat);

            wt = processes[index].getTurnaroundTime() - processes[index].getburstTime();
            processes[index].setWaitingTime(wt);

            processes[index].setcomplete(true);
            complited++;
        }
    }
}