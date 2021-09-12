
# HW2 EE538 - Computing Principles for Electrical Engineers

- Please clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the homework.
- For non-coding questions, fill out the answers below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests). **Do Not change or modify any given function names and input or output formats in both [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests). Unexpected changes will result in **zero** credit.**
- For coding questions, there is a black box testing for each question. All points are only based on passing the test cases or not (i.e. we don't grade your work by your source code). So, try to do comprehensive testing before your final submission.
- For submission, please push your answers to Github before the deadline.
- Deadline: **Monday, September 20th by 6:30 pm**
- Total: 120 points. 100 points is considered full credit.

## Question 1 (10 Points. Easy)

Write several functions with the same name ```IsGreaterThan``` in [cpplib.cc](src/lib/cpplib.cc). And using function overloading to satisfy the following requirements:

- All functions take exactly 2 inputs.
- Each input is either an integer or a string.
- If both inputs are integers, and if the first input is larger than the second input, return true, otherwise return false.
- If both inputs are strings, compare the number of characters in each string. If the first string has more characters than the second string, return true, otherwise return false.
- If one input is an integer, and the other input is a string that contains only numeric characters, then compare the numeric value represented by the string and the value of the integer. If the first input value is larger than the second input value, return true, otherwise return false. 
- You need to skip the leading zeros in numeric strings when comparing with an integer input. For example, "05" denotes integer value 5. 
- If one input is an integer, and the other input is a string that contains non-numeric characters, return false.

Examples:

- input: (10, 5), output: true
- input: (3, 5), output: false
- input: (“aBcd”, “efg”), output: true
- input: (“a-b”, “cdefg”), output: false
- input: (“588”, 599), output: false
- input: ("007", 5), output: true
- input: (599, “598.9”), output: false

Write several tests using GTest for your function in [tests/q1_student_test.cc](tests/q1_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q1_student_test
```

## Question 2 (5 Points. Easy)

How would you find the size of a non-dynamic array? (We are asking about an array, not a vector). Provide the example and outputs of your run for:

- An array of double
- An array of chars
- An array of boolean

Answer:

## Question 3 (10 Points. Easy)

Write a function RemoveIntersection that will remove the values that appear in both input vectors. You may return the result in any order.
Implement this using

- **pass by pointers**

  ```void CPPLib::RemoveIntersectionByPointer(std::vector<int> *input1, std::vector<int> *input2);```

- **pass by references**

  ```void CPPLib::RemoveIntersectionByReference(std::vector<int> &input1, std::vector<int> &input2);```


Example :\
Before: x = [1, 2, 3], y = [3, 4, 5] \
We call RemoveIntersection(x,y) \
After: x = [1, 2], y = [4, 5]

Before: x = [1, 2, 2, 2], y = [2, 4, 5] \
We call RemoveIntersection(x,y) \
After: x = [1, 2, 2], y = [4, 5]

Write several tests using GTest for your function in [tests/q3_student_test.cc](tests/q3_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.

```bash
bazel test tests:q3_student_test
```

## Question 4 (25 Points. Easy)

- Write a function that takes a vector of positive integers as input. The output is the same vector where all duplicates are removed. Note that the output is the same vector means the function's return type should be void and do the modifications on the input vector.
  - Example: before: v=[2, 2, 3, 3, 4], after : v=[2, 3, 4]
  - Solve this for the following cases:
    - You cannot use std::set
  
    ```void CPPLib::UniqueVectorNotBySet(std::vector<int> &input)```
    - You can use std::set

    ```void CPPLib::UniqueVectorBySet(std::vector<int> &input)```
  
- Write a function ```void CPPLib::ReverseVector(std::vector<int> &input)``` that takes a vector of integers as an input. The output is the same vector but in the **reversed** order.

  - Example: before: [1, 2, 3], after:  [3, 2, 1]
  
- Write a function ```void CPPLib::ReverseString(std::string &input)``` that takes a string as an input and **reverse** its value.

  - Example: before: "EE538", after:  "835EE"
  - You cannot use any new local variable of type string or vector or array, but you can create extra O(1) space, such as *int*. The reverse should happen **in place** (i.e. on the input string). 
  
- Write a function ```void CPPLib::PrimeVector(std::vector<int> &input)``` that takes a vector of positive integers as input. The output should be the same vector where all numbers are prime numbers. The order of modified vector should follow the order of the input vector.
  
  - Example: before: [1, 2, 3, 6], after: [2, 3]
  
- Write a function ```std::vector<int> CPPLib::UnionVectors(std::vector<int> &input1, std::vector<int> &input2)``` that takes two vectors v1 and v2 and returns a new vector that is the **union** of the values in v1 and v2. All the value in return vector should be **unique**. 


Write several tests using GTest for your function in [tests/q4student_test.cc](tests/q4_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.

```
bazel test tests:q4_student_test
```

## Question 5 (10 Points. Easy)

Write a function that converts a string to lower case and remove all punctuation characters. Write a simple function ```void CPPLib::CleanString(std::string& input)``` in [cpplib.cc](src/lib/cpplib.cc). The input string is strictly alphanumeric.
  - Example: input: “This is the fifth question in HW2 for EE-538.......”, output: “this is the fifth question in hw2 for ee538"
  - Use of [transform](http://www.cplusplus.com/reference/algorithm/transform/) is recommended but not a must.

Write several tests using GTest for your function in [tests/q5_student_test.cc](tests/q5_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q5_student_test
```

## Question 6 (20 Points. Medium)

Given an array of integers input, a lucky integer is an integer which has a frequency in the array equal to its value.

Write a function ```int CPPLib::findLucky(std::vector<int> &input)``` in [cpplib.cc](src/lib/cpplib.cc) that returns a lucky integer in the array. If there are multiple lucky integers return the **largest** of them. If there is no lucky integer return **-1**.

Example 1:\
Input: arr = [2,2,3,4]\
Output: 2\
Explanation: The only lucky number in the array is 2 because frequency[2] == 2.

Example 2:\
Input: arr = [1,2,2,3,3,3]\
Output: 3\
Explanation: 1, 2 and 3 are all lucky numbers, return the largest of them.

Example 3:\
Input: arr = [5]\
Output: -1

several tests using GTest for your function in [tests/q6_student_test.cc](tests/q6_student_test.cc) and compute the time complexity of your implementation.

Please create your test cases and run the following command to verify the functionality of your program.

```
bazel test tests:q6_student_test
```

## Question 7 (20 Points. Easy)

 Write a function `void CPPLib::Rearrange(std::vector<int> &input, int k)`in [cpplib.cc](src/lib/cpplib.cc), where `std::vector<int> &input` is a non-empty unsorted vector with no duplicate numbers, and `k` is a positive integer and not greater than the size of input vector.

 The function should 
- find the kth largest number of the vector, called pivot. (k counts from 1, e.g. the 1st largest means the largest number in the vector.)
- then rearrange the vector such that all the numbers smaller than the pivot will be on pivot's left side and all the numbers larger than the pivot will be on pivot's right side. Keep the numbers in both sides in the original order.

Example 1:\
Input: vector is {7,3,4,6,5,2,1}, and k is 3.\
Output: {3,4,2,1,5,7,6}\
Here the pivot is 5, which is the 3rd largest number in the vector.

Write several tests using GTest for your function in [tests/q7_student_test.cc](tests/q8_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q7_student_test
```

Please also indicate the time complexity:

## Question 8 (20 Points. Medium)

Given a non-empty string `pattern` and a non-empty vector of string `strs`, write a function `bool CPPLib::Match(const std::string& pattern, const std::vector<std::string>& strs)` that returns true if the  `strs` follows the same `pattern` (i.e. each letter in `pattern` can be assigned to a string in `strs` and the order of strings in `strs` matches the order of the corresponding letters in `pattern`), and false if it does not.

Example 1:\
Input: pattern = "abba", strs = {bat, cat, cat, bat}\
Output: true (because 'bat' appears on the 1st and 4th place, 'cat' appears on the 2nd and 3rd place)

Example 2:\
Input: pattern = "abab", strs = {apple, banana, apple, banana}\
Output: true (because 'apple' appears on the 1st and 3rd place, 'banana' appears on the 2nd and 4th place)

Example 3:\
Input: pattern = "abc", strs = {rule, is, rule}\
Output: false (because the 1st and the 3rd words should be different)

Example 4:\
Input: pattern = "aba", strs = {USC, defeats, UCLA}\
Output: false (because 'USC' and 'UCLA' are not the same word)

Example 5:\
Input: pattern = "abc", strs = {USC, wins}\
Output: false (because the length of `pattern` and `strs` are not the same)

Note words with lower letters 

Write several tests using GTest for your function in [tests/q8_student_test.cc](tests/q8_student_test.cc).

Please create your test cases and run the following command to verify the functionality of your program. 
```
bazel test tests:q8_student_test
```

Please also indicate the time complexity:
