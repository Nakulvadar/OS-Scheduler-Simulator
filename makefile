scheduler : main.o Scheduler.o FCFS.o SJF.o RoundRobin.o
	g++ -o scheduler main.o Scheduler.o FCFS.o SJF.o RoundRobin.o

main.o : main.cpp
	g++ -c main.cpp

Scheduler.o : Scheduler.cpp
	g++ -c Scheduler.cpp

FCFS.o : FCFS.cpp
	g++ -c FCFS.cpp

SJF.o : SJF.cpp
	g++ -c SJF.cpp

RoundRobin.o : RoundRobin.cpp
	g++ -c RoundRobin.cpp

clean :
	rm -f *.o scheduler