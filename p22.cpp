#include<iostream>
using namespace std;
int main()
{
    int row , col;
    for(row =1 ; row<=5;row++)
    {
        //space
        for(col = 1 ; col<=5-row;col++)
        cout<<"  ";
       
        for(char col= 'A' ;col<='A'+ row -1;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}