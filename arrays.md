# ARRAYS

Used to hold values of same data type at contiguous memory locations.


>Think of arrays as post office boxes:
>
>- A block of contiguous space...
>- Partitioned into small, identically-sized blocks of space *(called **elements**)*...
>- All values are of the same data type such as ***int*** or ***char***...
>- Can be accessed directly by an index *(number)*.

### Arrays are always indexed starting from zero

> It's why we count from zero!

If an array consist of ``n`` elements, the first element is located at index 0 ``[0]``. THe last element is located at index (n-1) ``[n-1]``

``array[n, n-1]``

### ARRAYS CAN BE OVERLOADED

## Declarations

``type name[size]``

> ``type`` - What kind of variable each element of the array will be *(int, string, char...)*...
>
> ``name`` - What you want to call your array...
>
> ``[size]`` - How many elements you would like your array to contain.

    int student_grades[40];

    double menu_prices[8];

###### instantiation syntax

    bool truthtable[3] = { false, true, true };

> The compiler is smart enough to recognize the size of the array automagically if instantiation syntax is used, allowing user to leave size ``[n]`` empy ``[]``.

    bool truthtable[] = { false, true, true };

###### individual element syntax

    bool truthtable[3];
    truthtable[0] = false;
    truthtable[1] = true;
    truthtable[2] = true;

###### Arrays can consist of more than a sinlge dimension

    bool battleship[10][10];

> You can think of this as a 10x10 grid of cells...
>
>>In memory, however, it's really just a 100-element one-dimensional array.
>>
>>> Multi-dimensional arrays are great **abstratctions** to help visualize game baords or other complex representations.
>>>
>>> - We can treat individual elements of arrays as variables...
>>> - We cannot treat entire arrays themselves as variables.
>>> - We cannot assign one array to another using the assignment operator.
>>> - Instead, we must use a loop to copy over the elements **one at a time**.
>>>
>>> **Invalid loop**:
>>>
>>>
>>>     foo[5] = { 1, 2, 3, 4, 5 };
>>>     int bar[5];
>>>     
>>>     bar = foo;
>>>
>>> **Valid loop**:
>>>
>>>     int foo[5] = { 1, 2, 3, 4, 5 };
>>>
>>>     for (int j = 0; j < 5 ; j++)
>>>     {
>>>         bar[j] = foo[j];
>>>     }

Arrays are passed by **reference** rather than *value* like most variables. The callee receives the actual array, **not** a copy of it.

#### Example(s)

    void set_array(int array[4]);
    void set_int(int x);

    int main(void)
    {
        int a = 10;
        int b[4] = { 0, 1, 2, 3 };
        set_int(a);
        set_array(b);
        printf("%d %d\n", a, b[0]);
    }

    void set_array(int array[4])
    {
        array[0] = 22;
    }

    void set_int(int x)
    {
        x = 22;
    }

Returns...

    10, 22

### From Sections

