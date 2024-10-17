## Homework Assignment 03

This assignment is primarily focused on arrays, strings, and functions. You will complete the assignment individually. The assignment is worth a total of 100 points. If you have any questions or need any help, please visit us during office hours and/or post questions on Piazza.

> If you need to post any of your actual source code on Piazza for any reason, **please** be sure to tag the post as being *visible to instructors only*, so that you don't inadvertently share code with others and violate class rules.

### Format details

Your submission will be tested and graded by an autograder, for this reason it cannot be stressed enough that your program must *exactly* follow the specifications for input and output upon submission.

> As usual, you will read input from `std::cin` and print output to `std::cout`.

For each problem you will create a program, however, this time you are highly encouraged to design and write your own functions in order to implement your solution.

### Questions

Before getting started, be advised that most of the questions will only require `std::cin` for reading the data (especially integers and floats).  If you need to read an arbitrary number of integers you can use a pattern like this, which will keep reading values until the end of the input:
```c++
while (std::cin >> value) {
  // do something with value
}
```
If otherwise, you want to read entire strings that include whitespaces the recommended fucntion is `std::getline`.  See below an example:
```c++
std::string name;
std::cout << "What is your name?";
std::getline(std::cin, name);
std::cout << "Hello " << name << "!\n";
```

#### 1. `count_first`
Write a program which reads a sequence of `0 < n <= 100` integers as input and prints out the number of occurrences of the first integer in the entire sequence. For example, if the input is `7 1 3 6 7 -10 98 11 7`, output should be `3` as `7` occurs `3` times.

#### 2. `palindrome`
Write a program that reads in a string of characters and prints out `True` if the string is palindrome and `False`, otherwise. A palindrome is a string that reads the same backward and forward. For example: `Tacocat`.  Your program must not be case-sensitive. Length of the input string: `1 <= n <= 100`.

#### 3. `reverse`
Write a program which reads in a string of characters and prints out the same characters in reverse order. For example, if the input is `Alright, alright, alright`, output must be `thgirla ,thgirla ,thgirlA`.  Note that your program must be case sensitive. Length of the input string: `1 <= n <= 100`.

#### 4. `sorted`
Write a program which reads a sequence of `0 < n <= 100` integers as input and prints `Sorted` if the input sequence is sorted in nonincreasing order and `Not Sorted` otherwise.

#### 5. `filter_dups`
Write a program that reads an input string and removes all its consecutive duplicates. For example, if the input string is `Trrryyyyy             Agaiinnnn`, the output should be `Try Again`.  Your program must be case-sensitive. Length of the input string: `1 <= n <= 100`.

#### 6. `str_hash`
Write a program that reads a string as input and prints its *hash value*. The hash value for this problem is defined as the sum of all characters in the string, in fact, the sum of their ascii values. Length of the input string: `1 <= n <= 100`.

#### 7. `diameter`
Write a program that reads a sequence 2D points, and calculates the diameter, which is the largest euclidean distance between any pair of such points. The input will be a sequence of `x1 y1 x2 y2 ... xn yn` integer values, and the output must be an integer representing the floor of the diameter.  The number of 2D points in the sequence can be anything between `1` and `100` (inclusive).

#### 8. `unique`
Write a program that reads a string of characters and prints out the number of unique characters in the array. For example if the input is `CSC 211 c++`, the output should be `7`, as there are `7` unique characters `CS 21c+`. Length of the input string: `1 <= n <= 100`.

#### 9. `same_gmail`
Create a program that reads in two strings separated by a whitespace, which are two valid gmail addresses.  Your program should print `True` if both addresses map to the same gmail address and `False` otherwise.  According to gmail:

- addresses are not case sensitive
- [dots don't matter](https://support.google.com/mail/answer/7436150?hl=en), and
- any `'+'` before the `'@'` and all characters after the `'+'` and before the `'@'` are ignored

For example, `"csc...2.1.1@gmail.com"`, `"csc211@gmail.com"`, `"CSC.211.@gmail.com"`, `"CSC211@GMail.Com"`, `"csc211+announce@gmail.com"`, `"csc.211+fall-2019@gmail.com"` are all the same, i.e. if e-mails are sent to those addresses, they will reach the same gmail account.

#### 10. `hostname`
Write a program that will read a string that contains a valid URL and will output its respective lower-case hostname (sometimes referred as subdomain/domain). For example, if the input is `"https://WWW.cs.uri.edu/homepage/class/csc211?year=2019&m=10"`, then the resulting value should be `"www.cs.uri.edu"`. You will need to read [what is a URL?](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/What_is_a_URL) before starting your implementation.

### Submission and Grading
You will submit a single zip file named `pa3.zip` through Gradescope. Your zip archive must contain your source files only. For each of the problems, create a file called `main_<num>.cpp` where `<num>` is the question number itself with no leading zeros. Your programs will be automatically graded. For each of the questions you either pass the test cases (full points) or not (zero points).

> You must be reminded that students caught cheating or plagiarizing will receive `no credit`. Additional actions, including a failing grade in the class or referring the case for disciplinary action, may also be taken.
