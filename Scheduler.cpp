#include"Scheduler.h"


void Scheduler::addProcess(const Process &process)
{
    processes.push_back(process);
}

void Scheduler::displayProcesses() const
{
    cout << "PID\tAT\tBT\tCT\tTAT\tWT\n";
    cout << "--------------------------------------\n";

    for (const Process &p : processes)
    {
        cout << p.getPid() << "\t"
             << p.getArrivalTime() << "\t"
             << p.getburstTime() << "\t"
             << p.getCompletionTime() << "\t"
             << p.getTurnaroundTime() << "\t"
             << p.getWaitingTime() << '\n';
    }
}