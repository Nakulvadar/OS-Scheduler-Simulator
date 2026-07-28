#include <iostream>
#include "Scheduler.h"
#include <vector>

using namespace std;

int main()
{
    cout << "===== CPU Scheduler Simulator =====" << endl;

    int choice = 0;

    cout << "1 : FCFS\n2 : SJF\n3 : Round Robin\n";
    cout << "Enter Choise\n";
    cin >> choice;

    int NP = 0;
    cout << "Enter the number of processes: ";
    cin >> NP;

    Scheduler *scheduler = nullptr;

    if (choice == 1)
    {
        scheduler = new FCFS();
    }
    else if (choice == 2)
    {

        scheduler = new SJF();
    }
    else if (choice == 3)
    {
        int q = 0;
        cout << "Enter Quantum Time : ";
        cin >> q;
        scheduler = new RoundRobin(q);
    }
    else
    {

        cout << "Wrong input";
        return 0;
    }

    for (int i = 0; i < NP; i++)
    {

        int pid, at, bt;
        cout << "\n----- Process " << i + 1 << " -----\n";
        cout << "\nPID: ";
        cin >> pid;
        cout << "\nArrival Time: ";
        cin >> at;
        cout << "\nBurst Time: ";
        cin >> bt;

        Process p(pid, at, bt);
        scheduler->addProcess(p);
    }

    scheduler->schedule();

    scheduler->displayProcesses();

    delete scheduler;

    return 0;
}