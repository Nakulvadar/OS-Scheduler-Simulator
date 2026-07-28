#ifndef PROCESS_H
#define PROCESS_H

class Process
{
private:
    int pid;
    int arrivalTime;
    int burstTime;
    bool completed;

    int remainingTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;

public:
    Process(int pid, int arrivalTime, int burstTime);

    int getPid() const;
    int getArrivalTime() const;
    int getburstTime() const;
    int getRemainingTime() const;
    int getCompletionTime() const;
    int getWaitingTime() const;
    int getTurnaroundTime() const;
    bool getcomplete() const;

    void setRemainingTime(int remainingTime);
    void setCompletionTime(int completionTime);
    void setWaitingTime(int waitingTime);
    void setTurnaroundTime(int turnaroundTime);
    void setcomplete(bool complete);
};

#endif
