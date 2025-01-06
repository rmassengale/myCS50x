# DATA TYPES

``int``
>Stores vairable as integer
>
>Range ==  -2<sup>31</sup> : 2<sup>31</sup> - 1
>
>Memory == 32 bits

    int age = 20;

``unsigned int``
>Stores vairable as integer
>Doubles positive range of values
>
>Disallows negative  values.
>
>Range == 0 : 2<sup>32</sup>-1
>
>Memory == 32 bits

    unsigned int count = 50;

>*Other Qualifiers*

    const
    long
    short


``char``
>Stores vairable as single character
>
>Range == -2<sup>7</sup> :  2<sup>7</sup>-1
>
>Memory == 8 bits
>
>ASCII : Standardized the mapping of chars to numeric values in the positive side of range [0 : 127]

    char initial = 'A';

``float``
>Stores vairable as floating-point values, aka *real numbers*
>
>Memory == 32 bits
>
>limited to how precise we can be with only 32 bits of precision

    float temperature = 98.6;

``double``
>Stores vairable as floating-point values, aka *real numbers*
>
>8 bytes == 64 bits of memory
>
>double the precision of standard float

    double pi = 3.14159;

``void``
>Type, **not** a *data type*
>
>***void*** function(void) does not return a value
>
>void function(***void***) does not take an argument

    void function_name(void)
    {
        /* code */
    }



