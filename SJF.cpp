#include "Scheduler.h"
#include <algorithm>

void SJF::schedule()
{
    if (processes.empty())
        return;

    stable_sort(processes.begin(), processes.end(),
                [](const Process &p1, const Process &p2)
                {
                    return p1.getArrivalTime() < p2.getArrivalTime();
                });

    int currentTime = 0;
    int completed = 0;
    int tat = 0, wt = 0;

    currentTime = processes[0].getArrivalTime();
    currentTime += processes[0].getburstTime();
    completed++;

    processes[0].setCompletionTime(currentTime);
    tat = processes[0].getCompletionTime() - processes[0].getArrivalTime();

    processes[0].setTurnaroundTime(tat);
    wt = processes[0].getTurnaroundTime() - processes[0].getburstTime();

    processes[0].setWaitingTime(wt);

    processes[0].setcomplete(true);

    int index = -1;
    int minbt = __INT_MAX__;

    while (completed < processes.size())
    {

        index = -1;
        minbt = __INT_MAX__;
        for (int i = 0; i < processes.size(); i++)
        {

            if (!processes[i].getcomplete() &&
                currentTime >= processes[i].getArrivalTime() &&
                minbt > processes[i].getburstTime())
            {

                index = i;
                minbt = processes[i].getburstTime();
            }
        }

        if (index != -1)
        {

            currentTime += processes[index].getburstTime();

            processes[index].setCompletionTime(currentTime);

            tat = processes[index].getCompletionTime() - processes[index].getArrivalTime();
            processes[index].setTurnaroundTime(tat);

            wt = processes[index].getTurnaroundTime() - processes[index].getburstTime();

            processes[index].setWaitingTime(wt);

            processes[index].setcomplete(true);
            completed++;
        }
        else
        {

            for (int i = 0; i < processes.size(); i++)
            {

                if (!processes[i].getcomplete())
                {

                    currentTime = processes[i].getArrivalTime();
                    break;
                }
            }
        }
    }
}