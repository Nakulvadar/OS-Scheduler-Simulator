#ifndef FCFS_H
#define FCFS_H

#include "Scheduler.h"

class FCFS : public Scheduler
{
public:
    void schedule() override;
};

#endif
