# FUNCTIONS

Structure of a function using the `main` function.
>

```
int main(void)
{

}
```

>**int** == *Return Type*
>
>**main** == *Name Of Function*
>
>**(void)** == *Argument-List* ; Comma separated set of inputs

    (type name)

    (type name, type name, type name, ...)

>Example

    int add_two_ints(int a, int b);

>Example: Write a function that would multiply two floating point numbers?

    float mul_floats(float one, float two);

    int main(void)
    {
        float x = get_float(What is the first number?  ");
        float y = get_float(What is the second number? ");

        float total = mul_floats(x, y);
        printf("Answer: %f\n", mul_floats);
    }

    float mul_floats(float x, float y)
        {
            float product = x * y
            return product;
        }








