#ifndef SJF_H
#define SJF_H

#include "Scheduler.h"

class SJF : public Scheduler
{
public:
    void schedule() override;
};

#endif
