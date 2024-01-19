#include<iostream>
using namespace std;
int main()
{
    for(int i =1 ; i<=21;i = i+5) // if i++ another pattern 
    {
        for(int j = i ;j<i+5;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //Second Approach
    for(int r = 1; r <=5;r++)
    {
        for(int c = 1;c <=5;c++)
        {
            cout<<(r-1)*5+c<<" ";
        }
        cout<<endl;
    }