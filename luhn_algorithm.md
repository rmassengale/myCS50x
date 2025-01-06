# Luhn's Algorithm

>Starting from the rightmost digit, double the value of every second digit,

    1 * 2 + 8 * 2 + 3 * 2 + 2 * 4 + 9 * 2
    2 + 16 + 6 + 4 + 18
    2 + 1 + 6 + 6 + 4 + 1 + 8

>If doubling of a number results in a two digit number i.e ***greater than*** 9 then add the digits of the product (e.g., ), to get a single digit number, (or subtract 9 from value)

    12: 1 + 2 = 3, 15: 1 + 5 = 6

>Now take the sum of all the digits.


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
