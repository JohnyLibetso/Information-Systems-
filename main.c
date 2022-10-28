#include <stdio.h>
#include <stdlib.h>
#include"headerf.h"     /// This program has its functions defined in the header file with name headerf.h

int main()
{
    printf("......Reversible Prime Square: By Tefonyane Libetso.....");
    int num=checktop(); /// num hold the number of reversible prime square that are found
    long  number=1;     /// (number) is the number to be incremented and checked if is the prime
    long  square;       /// square of the prime found


        while(num<10){                 ///loop while the numbers found are less than 10
        if(checkprime(number))      /// check if the present value of number is a prime
        {
            square= number*number;   /// if prime square it
            if(checkpalindrome(square,reversenumber(square) )){         /// check if the reversed square and square is the palindrome number
                number++;                                       /// increment the number if the palindrome Yes
            }
            else{
                   if(checkprime(reversenumber(number))){       /// if the number is not a palindrome check if the reversed number is a square
                        if(CheckSquare(reversenumber(square), reversenumber(number))){      /// if its a square then store the squared number into the Structure
                            push(square);                              /// if its a square then store the squared number into the Structure
                            number++;                               /// then increment the value of number and num( to show that one other number is found
                            num++;
                        }
                    else
                        number++;                          /// if the number is not the square increment the number
                }
                else number++;                       /// if the number is not the prime increment the number
            }
        }
        else{ number++;                         /// if the number is not the prime increment the number
        }
    }
    printf("\n***************************************\n***First 10 Reversible Prime Squares***\n");
    printf("***************************************\n");
    for(int i=0; i<10; i++)     /// loop 10 times to print the numbers found
    {
        printf(" (%d)",i+1);  /// for every number from the struct print its index +1
        printf(" %ld \n",stk.st[i+1]); /// Restore the Reversible prime squares from the struct and print them
    }

    return 0;

}

