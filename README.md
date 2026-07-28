# OS Scheduler Simulator

A **CPU Scheduling Simulator** developed in **C++** that demonstrates how an Operating System schedules processes using different CPU scheduling algorithms.

## Features

* First Come First Serve (FCFS)
* Shortest Job First (SJF - Non-Preemptive)
* Round Robin (RR)
* Calculates:

  * Completion Time (CT)
  * Turnaround Time (TAT)
  * Waiting Time (WT)
* Menu-driven interface
* Object-Oriented Design using Inheritance and Polymorphism

---

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* Standard Template Library (STL)

  * `vector`
  * `queue`
* Makefile

---

## Project Structure

```text
OS-Scheduler-Simulator/
│
├── main.cpp
├── Scheduler.h
├── Scheduler.cpp
├── FCFS.cpp
├── SJF.cpp
├── RoundRobin.cpp
├── Makefile
└── README.md
```

---

## Scheduling Algorithms Implemented

### 1. First Come First Serve (FCFS)

* Non-preemptive scheduling
* Processes are executed in the order of arrival.

### 2. Shortest Job First (SJF)

* Non-preemptive scheduling
* Selects the process with the shortest burst time among the available processes.

### 3. Round Robin (RR)

* Preemptive scheduling
* Each process receives CPU time equal to the specified time quantum.

---

## Scheduling Parameters

* Arrival Time (AT)
* Burst Time (BT)
* Completion Time (CT)
* Turnaround Time (TAT)
* Waiting Time (WT)

Where:

* **TAT = CT − AT**
* **WT = TAT − BT**

---

## Build

Compile the project using:

```bash
make
```

Run:

```bash
./scheduler
```

Clean generated files:

```bash
make clean
```

---

## Sample Output

```text
===== CPU Scheduler Simulator =====
1 : FCFS
2 : SJF
3 : Round Robin

Enter Choice: 3
Enter Quantum Time: 2

PID     AT      BT      CT      TAT     WT
------------------------------------------
12      0       5       9       9       4
13      1       3       8       7       4
33      2       1       5       3       2
```

---

## Operating System Concepts Covered

* Process Scheduling
* Ready Queue
* Preemptive Scheduling
* Non-Preemptive Scheduling
* CPU Scheduling Algorithms
* Runtime Polymorphism
* Inheritance
* STL Containers

---

## Future Improvements

* Priority Scheduling
* Shortest Remaining Time First (SRTF)
* Priority Preemptive Scheduling
* Gantt Chart Visualization
* Average Waiting Time Calculation
* Average Turnaround Time Calculation
* File Input Support

---

## Author
Nakul Vadar

Developed as part of my Operating Systems and C++ learning journey.
