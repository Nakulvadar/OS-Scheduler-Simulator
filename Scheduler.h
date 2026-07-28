#include "Process.h"
#include <vector>
#include<iostream>

using namespace std;

class Scheduler{

protected:
    vector<Process> processes;
public:

    void addProcess(const Process &process);

    void displayProcesses() const;

    virtual void schedule() = 0;

};



class FCFS : public Scheduler
{
public:
    void schedule() override;
};

class SJF : public Scheduler
{
public:
    void schedule() override;
};

class RoundRobin : public Scheduler
{
    int quantum ;
public:
    RoundRobin(int q) : quantum(q)
    {
    }

    void schedule() override;
};