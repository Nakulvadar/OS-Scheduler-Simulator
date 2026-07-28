#include"Scheduler.h"
#include <algorithm>

 void FCFS::schedule(){

    int currentTime = 0; 

    stable_sort(processes.begin(), processes.end(),
    [](const Process &p1, const Process &p2)
    {
        return p1.getArrivalTime() < p2.getArrivalTime();
    });


    for(Process &p : processes){

        if(currentTime < p.getArrivalTime()){
            currentTime = p.getArrivalTime();
        }
        
        currentTime = currentTime + p.getburstTime();
        
        p.setCompletionTime(currentTime);
 
        int tat =  p.getCompletionTime() - p.getArrivalTime();
        p.setTurnaroundTime(tat);

        int wat =  p.getTurnaroundTime() - p.getburstTime();

        p.setWaitingTime(wat);
    }
 }