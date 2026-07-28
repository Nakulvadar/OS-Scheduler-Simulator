#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "Process.h"

using namespace std;

class Scheduler
{
protected:
    vector<Process> processes;

public:
    virtual void schedule() = 0;

    void addProcess(Process p);
    void displayProcesses();

    virtual ~Scheduler() {}
};

#endif
