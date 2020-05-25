# Algo_01_push_swap
Algo_01_push_swap project for WTC school in Cape Town

##  Running the program
```
// compile program
make all

// To run checker with manual commands
// Input commands directly to command line and 'enter'
// 'ctrl-d' to stop
// will check if you sorted succesfully and output OK, KO or ERROR accordingly
ARG="RANDOM VALUES"; ./checker $ARG

//To run the main sorting algorithm, push_swap 
// can add the -v to arguments for the visualiser
ARG="RANDOM VALUES"; ./push_swap $ARG

//to check if push_swap sorted everything correctly
ARG="RANDOM VALUES"; ./push_swap $ARG | ./checker $ARG

```
## Goal
"This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the one (of many) most appropriate solution for an optimized data sorting."

## Implementation
Implemented [Merge Sort](https://en.wikipedia.org/wiki/Merge_sort_). Used due to restriction of using only 2 stacks and a set amount of operations, and overall C fiddely-ness with more complex solutions.

Ultimate goal to sort lists of 100 & 500 integers with a set amount of available moves.

"Merge sort is often the best choice for sorting a linked list: in this situation it is implemented in such a way that it requires only Θ(1) extra space, as required by the restrictions. And the slow random-access performance of a linked list makes some other algorithms (such as quicksort) perform poorly, and others (such as heapsort) completely impossible."