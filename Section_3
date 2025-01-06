
# Section 3

## Table of Contents
- [Searching](#searching)
- [Sorting](#sorting)
- [Structs](#structs)
- [Recursion](#recursion)

## Searching

### Linear Search

Look though a a list of elements one-by-one, from left to right, until you find what you are looking for.

- List of objects does not have to be sorted

### Binary Search

Split problem in half and go left or right

- List of objects must be sorted

### Runtime Analysis

|               | Linear Search | Binary Search |
|---------------|---------------|---------------|
| Worst Case    | O(n)          | O(log n)      |
| Best Case     | Ω(1)          | Ω(1)          |
| O == Ω        | Θ(1)          | Θ(1)          |

## Sorting

### Runtime Analysis

| Algorithm       | O (Upper Bound)  | Ω (Lower Bound)   |
|-----------------|------------------|-------------------|
| Merge Sort      | O(n log n)       | Ω(n log n)        |
| Selection Sort  | O(n²)            | Ω(n²)             |
| Bubble Sort     | O(n²)            | Ω(n)              |

### Sort

To time how long a sorting algorithm takes on a given dataset: [Use real time in seconds, s]

    time ./sorting_program ./file_to_sort

| Algorithm | reversed50000.txt | sorted50000.txt |
|-----------|-------------------|-----------------|
| sort1     | 5.000s            | 0.319s          | 
| sort2     | 0.275s            | 0.586s          |
| sort3     | 2.438s            | 2.136s          |


## Structs

Define a data structure called 'candidate':
```c
typedef struct
{
    string name;
    int votes;
}
candidate;
```
Define a type:
```c
typedef struct
```

Specificy attributes

```c
{
string name;
int votes;
}
```
- Attributes (aka, members) are specifications to your data structure.

Name the data structure:
```c
candidate;
```
Create new variable
```c
candidate <variable name;

candidate president;
```

Use dot-sourcing to specify attributes
```c
president.name = "Alice";
president.votes = 10;
```
#### What if we have multiple candidates?

| name | Alice | Bob | Charlie |
|------|-------|-----|---------|
| votes| 2     | 1   | 3       |

```c
canditates[0].name;
```
```c
alice
```

## Recursion

#### Factorial

    1! = 1

    2! = 1 * 2

    3! = 1 * 2 * 3

    4! = 1 * 2 * 3 * 4


#### Reversed Factorial

    4! = 4 * 3!

    3! = 3 * 2!

    2! = 2 * 1!

    1! = 1
---

#### Factorial function f(x)

```
f(4)
    4 * f(3)
        3 * f(2)
            2 * f(1)
                1 * f(0)
```
```
f(4)
    4 * f(3)
        3 * f(2)
            2 * 1
                1
```
```
f(4)
    4 * f(3)
        3 * 2
            2
```
```
f(4)
    4 * 6
        6
```
```
24
    24
```
```
24
```
```
 4! = 24
 ```


## Attribution

This work was created using resources and contributions from the following:

- **Author/Contributor**: [Ryan](https://github.com/rmassengale/myCS50x)  
- **Inspiration/Source**: [CS50's Introduction to Computer Science](https://cs50.harvard.edu/x/), These tables and some of their information were provided by ChatGPT, an AI language model created by OpenAI.    
- **Tools Used**: [Visual Studio Code](https://code.visualstudio.com/), [Markdown Guide](https://www.markdownguide.org/)

---
