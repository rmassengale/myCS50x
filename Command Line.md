# COMMAND LINE

``ls``
>Print readout of all files and directories in current directory

    $ ls
    credit/  credit2.c  mario/  me/  pset1/  scratch*  scratch.c  world/


``pwd``
>Print readout of current working directory

    $ pwd
    /workspaces/31711738


``cd <destination>``
>Change to specified directory

    $ pwd
    /workspaces/31711738
    $ ls
    mario/
    $ cd mario
    mario/ $ pwd
    /workspaces/31711738/mario

>Change to parent directory

    mario/ $ pwd
    /workspaces/31711738/mario
    mario/ $ cd ..
    $ pwd
    /workspaces/31711738

>Change to current working directory

    $ pwd
    /workspaces/31711738
    $ cd .
    $ pwd
    /workspaces/31711738

>Change to Home directory

    mario/more/ $ pwd
    /workspaces/31711738/mario/more
    mario/more/ $ cd
    $ pwd
    /workspaces/31711738


``mkdir <directory>``
>Make new directory

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


``cp <source> <destination>``
>Copy a file

    $ ls
    credit/  credit2.c  hello.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/
    $ cp hello.txt hi.txt
    $ ls
    credit/  credit2.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/

>Copy a directory

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


``rm <file>``
>Remove file, with confirmation

    pset3/ $ ls
    badfileone.txt  badfiletwo.txt  goodfile.txt  sample/  sractch.sb2
    pset3/ $ rm badfileone.txt
    rm: remove regular file 'badfileone.txt'? y
    pset3/ $ ls
    badfiletwo.txt  goodfile.txt  sample/  sractch.sb2


``rm -f <file>`` Remove file, no confirmation
>Remove file, no confirmation

    pset3/ $ ls
    badfiletwo.txt  goodfile.txt  sample/  sractch.sb2
    pset3/ $ rm -f badfiletwo.txt
    pset3/ $ ls
    goodfile.txt  sample/  sractch.sb2


``rm -rf <directory>`` Remove directory
>Remove directory

    $ ls
    credit/  credit2.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  pset3/  scratch*  scratch.c  world/
    $ rm -rf pset3
    $ ls
    credit/  credit2.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/


``mv <*current*filename> <*new*filename>``
>Rename file

    $ ls
    credit/  credit2.c  greddy.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/
    $ mv greddy.c greedy.c
    $ ls
    credit/  credit2.c  greedy.c  hello.txt  hi.txt  mario/  me/  pset1/  pset2/  scratch*  scratch.c  world/


``Other Commands``
>Other Commands

    chmod   ln      touch
    rmdir   man     diff
    sudo    clear   telnet
