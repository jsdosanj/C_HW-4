/* (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. 
For ex- ample, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
a) Write a function that determines whether a number is prime.
b) Use this function in a program that determines and prints all the prime numbers be-
tween 1 and 10,000. How many of these 10,000 numbers do you really have to test be-
fore being sure that you have found all the primes?
c) Initially you might think that n/2 is the upper limit for which you must test to see
whether a number is prime, but you need go only as high as the square root of n. 
Re- write the program, and run it both ways. Estimate the performance improvement. */
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int primeNum(int num)
/* will see if a number between 1 and 1000*/
/* (inclusive) is prime or not */
{
    int i, num_root;
    num_root = sqrt(num);
 
    if (0 == (num%2))
    {
        return 0;
    } 
    for (i=3; i<=(num_root); i+=2)
    {
        if (0 == (num%i))
        {
              return 0;
        }
    }
    //printf("%d\n", num);
    return 1;
}