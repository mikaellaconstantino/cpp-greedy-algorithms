# C++ Greedy Algorithms

A collection of C++ greedy algorithm implementations
developed as part of programming coursework at the
University of the Philippines Diliman.

## Algorithms Included

### 1. Event Scheduling with Priority
Selects the maximum number of non-overlapping events
from a list, using a greedy approach based on earliest
end time. When events share the same end time, the
higher priority event is selected first.

#### How It Works
1. Sort events by end time (earliest first)
2. If two events share the same end time,
   higher priority is selected first
3. Greedily select events that do not overlap
   with the previously selected event

#### Input Format

    n
    start1 end1 priority1
    start2 end2 priority2
    ...

#### Sample Input and Output

    Input:
    4
    1 4 1
    2 6 2
    5 8 3
    7 10 1

    Output:
    2
    1 4 1
    5 8 3

## Technologies Used
- **Language:** C++
- **Concepts:** Greedy Algorithms, Event Scheduling,
  Custom Sorting, Struct Design, Interval Scheduling

## Course
Data Structures and Algorithms
University of the Philippines Diliman

## Status
Completed — University Laboratory Exercise
