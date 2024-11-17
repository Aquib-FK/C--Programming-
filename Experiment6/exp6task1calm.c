/*Aim : WAP to define a counter function to print how many times the function is called. use storage classes.
Name : Mohammed Aquib 
Roll no : 06
UIN : 241A006
Division :*/
#include<stdio.h>
void counter()  // void means no return data type;
{    //int count =0;
    static int count=0;  //static storage class;
    count++;
    printf("Counter Function Call : %d\n",count);
}
int main()
{
    printf("\t\t\t***Storage Class***\n\n");
    for(int i=1;i<=8;i++)
    {
        counter();   //counter function called 8 times;
    }
    return 0;
}
