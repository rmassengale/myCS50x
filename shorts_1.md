# checksum

>Starting from the rightmost digit, double the value of every second digit,
>
>If doubling of a number results in a two digit number i.e greater than 9(e.g., 6 × 2 = 12), then add the digits of the product (e.g., 12: 1 + 2 = 3, 15: 1 + 5 = 6), to get a single digit number, (or subtract 9 from value),
>
>>Now take the sum of all the digits.
>
>>>If the total modulo 10 is equal to 0 (if the total ends in zero) then the number is valid according to the Luhn formula; else it is not valid.
>
>### Example:
>
>``79927398713``
>
>1 * 2 + 8 * 2 + 3 * 2 + 2 * 4 + 9 * 2 = 2 + 16 + 6 + 4 + 18 = ``2 + 1 + 6 + 6 + 4 + 1 + 8``
>
>>2 + 1 + 6 + 6 + 4 + 1 + 8 + 7 + 9 + 7 + 9 + 7 + 3 = ``70``
>
>>>70 % 10 = ``0``

# CONDITIONALS

### If

    if (x > y)
    {

    }

### If / Else

    if (x > y)
    {

    }
    else
    {

    }

### If / Else If

    if (x > y)
    {

    }
    else if (x < y)
    {

    }
    else if (x == y)
    {

    }
    else
    {

    }

### If / If / Else

    if (x > y)
    {

    }
    if (x < y)
    {

    }
    if (x == y)
    {

    }
    else
    {

    }

### Switch

    int = x GetInt();
    switch(x)
    {
        case 1:
            printf("One!\n");
                break;
                case 2:
            printf("Two!\n");
                break;
                case 3:
            printf("Three!\n")
                break;
                default:
            printf("Sorry!\n");
    }

# LOOPS

### Infinite Loop

    while (true)
    {

    }

### While
>Repeat unknown number of times, if at all

    while (x > y)
    {

    }

### Do / While
>Repeat unknown number of times, but at least once

    do
    {

    }
    while (x > y);

### For Loop
> Repeat a discrete number of times *(n)* based on *future* input

    for (int i = 0; x < n; i++)
    {

    }

# COMMAND LINE

``ls`` Print readout of all files and directories in current directory

    $ ls
    credit/  credit2.c  mario/  me/  pset1/  scratch*  scratch.c  world/

``pwd`` Current working directory

    $ pwd
    /workspaces/31711738

``cd <destination>`` Change directory

    $ pwd
    /workspaces/31711738
    $ ls
    mario/
    $ cd mario
    mario/ $ pwd
    /workspaces/31711738/mario

    mario/ $ pwd
    /workspaces/31711738/mario
    mario/ $ cd ..
    $ pwd
    /workspaces/31711738

    $ pwd
    /workspaces/31711738
    $ cd .
    $ pwd
    /workspaces/31711738

    mario/more/ $ pwd
    /workspaces/31711738/mario/more
    mario/more/ $ cd
    $ pwd
    /workspaces/31711738

``mkdir <directory>`` Make new directory

    $ pwd
    /workspaces/31711738
    $ ls
    credit/  credit2.c  mario/  me/  pset1/  scratch*  scratch.c  world/
    $ mkdir pset2
    $ ls
    credit/  credit2.c  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/
    $ cd pset2
    pset2/ $ pwd
    /workspaces/31711738/pset2

``cp <source> <destination>`` Copy a file

    $ ls
    credit/  credit2.c  hello.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/
    $ cp hello.txt hi.txt
    $ ls
    credit/  credit2.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/

    $ ls
    credit/  credit2.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/
    $ cd pset2
    pset2 $ ls
    sample/  sractch.sb2
    pset2 $ cd ..
    $
    $ cp -r pset2 pset3
    $ ls
    credit/  credit2.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  pset3/  scratch*  scratch.c  world/
    $ cd pset3
    pset3/ $ ls
    sample/  sractch.sb2

``rm <file>`` Remove file, with confirmation

    pset3/ $ ls
    badfileone.txt  badfiletwo.txt  goodfile.txt  sample/  sractch.sb2
    pset3/ $ rm badfileone.txt
    rm: remove regular file 'badfileone.txt'? y
    pset3/ $ ls
    badfiletwo.txt  goodfile.txt  sample/  sractch.sb2

``rm -f <file>`` Remove file, no confirmation

    pset3/ $ ls
    badfiletwo.txt  goodfile.txt  sample/  sractch.sb2
    pset3/ $ rm -f badfiletwo.txt
    pset3/ $ ls
    goodfile.txt  sample/  sractch.sb2

``rm -rf <directory>`` Remove directory

    $ ls
    credit/  credit2.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  pset3/  scratch*  scratch.c  world/
    $ rm -rf pset3
    $ ls
    credit/  credit2.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/

``mv <*current*filename> <*new*filename>`` Rename file

    $ ls
    credit/  credit2.c  greddy.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/
    $ mv greddy.c greedy.c
    $ ls
    credit/  credit2.c  greedy.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/

``Other Commands``

    chmod   ln      touch
    rmdir   man     diff
    sudo    clear   telnet
