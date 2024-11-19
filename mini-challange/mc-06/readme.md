## Mini Programming Challenge #05 (Due Date 11/02/2023)

Mini-challenge problemsets are to be completed individually. You are not allowed to share your code with other students. The assignment is worth a total of 100 points. If you have any questions or need any help, please visit us during office hours and/or post questions on Piazza.


<!-- 
## 1. All Different Directions

If you walk through a big city and try to find your way around, you might try asking people for directions. However, asking n people for directions might result in n different sets of directions. But you believe in the law of averages: if you consider everyone’s advice, then you will have a good idea of where to go by computing the average destination that they all lead to. You would also like to know how far off were the worst directions. You compute this as the maximum straight-line distance between each direction’s destination and the averaged destination.

## Input
Input consists of up to 100 test cases. Each test case starts with an integer 1≤n≤20, which is the number of people you ask for directions. The following n lines each has two things: your (x,y) location when you meet the person (since you are walking around meeting people) and that person’s directions from where you are standing. Each person’s directions are built from instructions of the following form:

- ‘start α’, where α is the initial direction you are facing in degrees (east is 0 degrees, north is 90 degrees).

- ‘turn α’, where α is an angle in degrees you should turn. A positive α indicates to turn to the left.

- ‘walk x’, where x is a number of units to walk.

The ‘start’ instruction is always the first instruction, and only occurs at the beginning. Each person’s directions contain at most 25 instructions. All numeric inputs are real numbers in the range [−1000,1000] with at most four digits past the decimal. Input ends when n is zero.

## Output
For each test case, print a line with the x and y coordinates of the average destination, followed by the distance between the worst directions and the averaged destination. Answers should be accurate within 0.01 units.

### Sample Input 1
```
3
87.342 34.30 start 0 walk 10.0
2.6762 75.2811 start -45.0 walk 40 turn 40.0 walk 60
58.518 93.508 start 270 walk 50 turn 90 walk 40 turn 13 walk 5
2
30 40 start 90 walk 5
40 50 start 180 walk 10 turn 90 walk 5
0
```

### Sample Output 1
```
97.1547 40.2334 7.63097
30 45 0
```
 -->

## 1. Backspace

Shortly before the programming contest started, Bjarki decided to update his computer. He didn’t notice anything strange until he started coding in his favorite editor, Bim (Bjarki IMproved). Usually when he’s writing in an editor and presses the backspace key a single character is erased to the left. But after the update pressing that key outputs the character <. He’s tested all the editors on his machine, Bmacs, Neobim, bjedit, NoteBjad++ and Subjark Text, but they all seem to have the same problem. He doesn’t have time to search the web for a solution, and instead decides to temporarily circumvent the issue with a simple program.

Help Bjarki write a program that takes as input the string that was written in the text editor, and outputs the string as Bjarki intended to write it. You can assume that Bjarki never intended to write the character <, and that Bjarki never pressed the backspace key in an empty line.

# Input
One line containing the string that was written in the text editor. The length of the string is at most 106, and it will only contain lowercase letters from the English alphabet as well as the character <.

# Output
One line containing the string as Bjarki intended to write it.

### Sample Input 1
```
a<bc<
```
### Sample Output 1
```
b
```

### Sample Input 2
```
foss<<rritun
```
### Sample Output 2
```
forritun
```
### Sample Input 3
```
a<a<a<aa<<
```
### Sample Output 3
```
```


### Submission and Grading
You will submit a single _zip file_ named `mc5.zip` through Gradescope.  Your zip archive must contain your source files **only**.  For each of the problems, create a file called `main_<num>.cpp` where _num_ is the question number itself with no leading zeros. Ensure _all_ of your code resides within the `main()` function within that file.  All programs **must** compile and execute without warnings.  Your programs will be automatically graded.  For each of the questions you either pass the test cases (full points) or not (zero points).

>You must be reminded that students caught cheating or plagiarizing will receive `no credit`. Additional actions, including a failing grade in the class or referring the case for disciplinary action, may also be taken.
