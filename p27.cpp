#include<iostream>
using namespace std;
int main()
{
    int row , col;
    for(row =4 ; row>=1;row--)
    {
        //space
        for(col = 1 ; col<=row;col++)
        cout<<"* ";
       
        for(col = 1 ; col<=8- 2*row;col++)
        {
            cout<<"  ";
        }
        for(col = 1 ; col<=row;col++)
        cout<<"* ";
        cout<<endl;
    }

    for(row =1 ; row<=4;row++)
    {
        //space
        for(col = 1 ; col<=row;col++)
        cout<<"* ";
       
        for(col = 1 ; col<=8- 2*row;col++)
        {
            cout<<"  ";
        }
        for(col = 1 ; col<=row;col++)
        cout<<"* ";
        cout<<endl;
    }
}