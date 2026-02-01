## 🎓 Summary:
This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various
types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.

## 🎯 Objectives
Writing a sorting algorithm is always a very important step in a developer’s journey. It is often the first encounter with the concept of complexity.
Sorting algorithms and their complexity are part of the classic questions discussed during job interviews. It’s probably a good time to look at these concepts since you’ll have to face them at some point.
The learning objectives of this project are rigor, use of C, and use of basic algorithms. Especially focusing on their complexity.
Sorting values is simple. To sort them the fastest way possible is less simple. Especially because from one integers configuration to another, the most efficient sorting solution can differ.

## 👮🏻‍♂️ Mandatory part
### V.1 The rules
- You have 2 stacks named a and b.
- At the beginning:
 The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
	- The stack b is empty.
	- The goal is to sort in ascending order numbers into stack a. To do so you have the
following operations at your disposal:

H<sub>2</sub>O es la fórmula del agua.


| | | |
|:--|:--:|:--|
| sa | swap a | Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.|
| sb | swap b | Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.|
| ss | sa && sb| sa and sb at the same time.|
| pa | push a | Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.|
| pb | push b | Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.|
| ra | rotate a | Shift up all elements of stack a by 1. The first element becomes the last one. |
| rb | rotate b | Shift up all elements of stack b by 1. The first element becomes the last one. |
| rr | ra && rb| ra and rb at the same time. |
| rra | reverse rotate a | Shift down all elements of stack a by 1. The last element becomes the first one. |
| rrb | reverse rotate b | Shift down all elements of stack b by 1. The last element becomes the first one. |
| rrr | rra && rrb | rra and rrb at the same time. |

### Example
Integers from a get sorted in 12 instructions. Can you do better?
```c
Init a and b:
2
1
3
6
5
8
_ _
a b
-----------------------------
Exec sa:
1
2
3
6
5
8
_ _
a b
-----------------------------
Exec pb pb pb:
6 3
5 2
8 1
_ _
a b
-----------------------------
Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b
-----------------------------
Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b
-----------------------------
Exec sa:
5 3
6 2
8 1
_ _
a b
-----------------------------
Exec pa pa pa:
1
2
3
5
6
8
_ _
a b
-----------------------------
```
## The "push_swap" program
|Program name | push_swap|
|--|--|
|Turn in files | Makefile, *.h, *.c|
|Makefile | NAME, all, clean, fclean, re|
|Arguments | stack a: A list of integers|
|External functs | read, write, malloc, free, exit, ft_printf and any equivalent, YOU coded|
|Libft authorized | Yes|
|Description | Sort stacks|

Your project must comply with the following rules:
- You have to turn in a Makefile which will compile your source files. It must not relink.
- Global variables are forbidden.
- You have to write a program named push_swap that takes as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack (be careful about the order).
- The program must display the smallest list of instructions possible to sort the stack a, the smallest number being at the top.
- Instructions must be separated by a ’\n’ and nothing else.
- The goal is to sort the stack with the lowest possible number of operations. During the evaluation process, the number of instructions found by your program will be compared against a limit: the maximum number of operations tolerated. If your program either displays a longer list or if the numbers aren’t sorted properly, your grade will be 0.
- If no parameters are specified, the program must not display anything and give the
prompt back.
- In case of error, it must display "Error" followed by a ’\n’ on the standard error. Errors include for example: some arguments aren’t integers, some arguments are bigger than an integer and/or there are duplicates.
```c
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./push_swap 0 one 2 3
Error
$>
```
During the evaluation process, a binary will be provided in order to properly check your program.
It will work as follows:
```c
$>ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
6
$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
OK
$>
```
If the program checker_OS displays "KO", it means that your push_swap came up with a list of instructions that doesn’t sort the numbers.

#### 👉🏻 The checker_OS program is available in the resources of the project in the intranet. You can find a description of how it works in the Bonus Part of this document.
