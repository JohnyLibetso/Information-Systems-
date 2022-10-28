#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

int checkprime(long  n)      ///check if the number is a prime number
{
    long  temp=0;           /// assign temporary value that hold the number of factors
    for(long  i=1; i<=n; i++) /// loop n times to check factors of n
    {
           if(temp<3){  /// if number of factors exceed 3 then breack the loop
                if(n%i==0){
                    temp++;   /// otherwise if the factor is found increment the temp
                }
           }
           else break;
    }
    if(temp==2) return 1;  /// if number has only two factors then return 1 for true
    else return 0;  /// otherwise return 0 for false
}
 /// Implementation of the function to Check if the number is square
int CheckSquare(long  r, long x)         /// r is the reversed square and x is the reversed root of the square
{
    int check=0;                    /// check hold 1 and 0 only for true or false status
    if(r/x==x && r%r==0)            /// a number is square if number/divisor==divisor
        check=1;
    else check=0;           /// otherwise is not a square
    return check;    /// return the status of check
}


///implementation of the function reversenumber

long  reversenumber(long  n)   // A function to reverse the number
{
    long  reverse1=0;     ///  assign reversed number to reversel
    while(n>0)              /// loop until number (n) is 0
    {
        reverse1=reverse1*10+n%10;  /// increment reversel with 1
        n/=10;   /// number=numbe/10
    }
    return reverse1;   /// return the reversed number
}
/// implementation of the function that check if the number is palindrome
int checkpalindrome(int num1, int num2) /// Is a number and its reverse equal if yes then the number is palindrome
{
    if(num1==num2)     /// the number is palindrome if it equals its reverse
        return 1;
    else
        return 0;           /// otherwise is not a prime
}

int top=0;          /// top the index of the last element  in the array
 struct stack{
     enum{max=10};
    long  st[max];              ///stack array of integers
 }stk;

void push(long  var){
        stk.st[++top]=var;      ///put a number in the stack
}
long  pop()
{
    return stk.st[top--];       ///
}

int checktop()
{
    return top;
}

#endif // HEADERF_H_INCLUDED
