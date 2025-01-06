# Week 3 Algorithms

1. Linear Search - One by one from left to right.

```
For each door form left to right
    if 50 is behind door
        return true
return false

for i from 0 to n-1
    if 50 is behind doors[i]
        return true
return false
```
2. Binary Search - Split problem in half and go left or right

```
if no doors left
    return false
if 50 is behind doors[middle]
    return true
else if 50 < doors[middle]
    search doors[0] through doors[middle - 1]
else if 50 > doors[middle]
    search doors[middle + 1] through doors[n - 1]
```
3. Big O Notation

- O - on the order of...

```
O(n) - linear search
O(n/2) - linear search
O(log n) - binary search
```

- O - upper bound

- Omega - lower boound

```
omega(n)
omega(log n)
```

- Theta  - O == Omega

---

###### search.c
```c
#include <cs50.h>
#include <stdio.>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}
```

```c
#include <cs50.h>
#include <stdio.>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron". "thimble", "top hat"};

    string s = get_string("String: ");
    for (int i = 0; i < 6; 1++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
```

```c
#include <cs50.h>
#include <stdio.>
#include <string.h>

int main(void)
{
    string names[] = {"David", "John", "Yulia"}
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750", "+1-617-495-1000"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++);
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
```
---
#### Data Structures

```c
typedef struct
{
    string name;
    string number;
} person;
```

```c
#include <cs50.h>
#include <stdio.>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[3];

    people[0].name = "David";
    people[0].number = "+1-617-495-1000";

    people[1].name = "John";
    people[1].number = "+1-949-468-2750";

    people[2].name = "Yulia";
    people[2].number = "+1-617-495-1000";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++);
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
```

## Sorting

#### Selection Sort

    for i, from 0 to n-1
        Find smallest number between numbers[i] and numbers[n-1]
        Swap smallest number with numbers[i]

    O(n^2)

#### Bubble Sort

    Repeat n-1 times
        for i, from 0 to n-2
            if numbers[i] and numbers[i+1] out of order
                swap them

    Repeat n-1 times
        for i, from 0 to n-2
            if numbers[i] and numbers[i+1] out of order
                swap them
        if no swaps made
            quit

#### Recursion

- A function is recursive if it calls itself
 
###### iteration.c

```c
#include <cs50.h>
#include <stdio.>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    for (int i = o; i < n; i++)
    {
        for (int j = 0; i < i + 1; i++)
        {
            printf("#");
        }
    }
    printf("\n");
}
```

###### recursion.c

```c
#include <cs50.h>
#include <stdio.>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n - 1);

    (for int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
```

#### Merge Sort

    Sort left half of numbers
    Sort right half of numbers
    Merge sorted halves

    if only one number
        quit
    Else
        Sort left half of numbers
        Sort right half of numbers
        Merge sorted halves

    n log n




