#include<iostream>
#include<stdio>
#include<stdlib>
using namespace std;

void main()
{
float num1,num2,res;
char choice,ch;

do
{
cout<<"\n1.Addition"<<endl;
cout<<"\n2.Subtraction"<<endl;
cout<<"\n3.Multiplication"<<endl;
cout<<"\n4.Division"<<endl;
cout<<"\n5.Exit"<<endl;
cout<<"\nEnter your choice:"<<endl;
cin>>choice;

switch(choice)
{
case 1: cout<<"\nEnter two numbers:"<<endl;
        cin>>num1>>num2;
        res = num1 + num2;
        cout<<"\nAddition: "<<res<<endl;
        break;
        
case 2: cout<<"\nEnter two numbers:"<<endl;
        cin>>num1>>num2;
        res = num1 - num2;
        cout<<"\nSubtraction: "<<res<<endl;
        break;
        
case 3: cout<<"\nEnter two numbers:"<<endl;
        cin>>num1>>num2;
        res = num1 * num2;
        cout<<"\nMultiplication: "<<res<<endl;
        break;
        
case 4: cout<<"\nEnter two numbers:"<<endl;
        cin>>num1>>num2;
        res = num1 / num2;
        cout<<"\nDivision: "<<res<<endl;
        break;
        
case 5: exit(0);
        break;

default: cout<<"\nWrong choice";
         break;
}

}while(choice!=5 && choice!=getchar());
getch();

}
