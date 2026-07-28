

class Process
{

    int pid;
    int arrivalTime;
    int burstTime;
    bool completed;

    int remainingTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;

public:
    Process(int pid, int arrivalTime, int burstTime)
    {

        this->pid = pid;
        this->arrivalTime = arrivalTime;
        this->burstTime = burstTime;

        remainingTime = burstTime;
        completionTime = 0;
        waitingTime = 0;
        turnaroundTime = 0;
        completed = false;
    }

    int getPid() const
    {
        return pid;
    }

    int getArrivalTime() const
    {
        return arrivalTime;
    }

    int getburstTime() const
    {
        return burstTime;
    }

    int getRemainingTime() const
    {
        return remainingTime;
    }

    int getCompletionTime() const
    {
        return completionTime;
    }

    int getWaitingTime() const
    {
        return waitingTime;
    }

    int getTurnaroundTime() const
    {
        return turnaroundTime;
    }

    bool getcomplete() const
    {
        return completed;
    }
    void setRemainingTime(int remainingTime)
    {
        if (remainingTime >= 0 && remainingTime <= burstTime)
            this->remainingTime = remainingTime;
    }

    void setCompletionTime(int completionTime)
    {
        this->completionTime = completionTime;
    }

    void setWaitingTime(int waitingTime)
    {
        this->waitingTime = waitingTime;
    }

    void setTurnaroundTime(int turnaroundTime)
    {
        this->turnaroundTime = turnaroundTime;
    }

    void setcomplete(bool complete)
    {
        this->completed = complete;
    }
};
