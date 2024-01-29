#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
    int var,num,count=1;
           srand(time(NULL));
           var=rand()%100;
           //cout<<"Random Number is : "<<var;
           cout<<"\nGuess A number between 0 To 100 : ";
           cin>>num;
    while(var!=num)
    {
        if(var>num)
        {
           cout<<"\nYour Guess is Low";
           cout<<"\t Next try : ";
           cin>>num;
           count++;
        }
        else
        {
            cout<<"\nYour Guess is High";
           cout<<"\t Next try : ";
           cin>>num;
           count++; 
        }
    }   
           cout<<"\nYou Guessed It Right";
           cout<<"\nYou Guessed It in "<<count<<" Attempts ";
           return 0;
}