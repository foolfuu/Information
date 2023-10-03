#include <iostream>
#include <conio.h>
#include "struct1.h"
using namespace std;
int main()
{
    book book[1000];
    int n,
        i = 0,
        p,
        x;
    cin>>n;
    p = n;
    
    for(i ; i < p ; i++)
    {
        
        cout<<"-----------\n";
        
        cout<<"name book? ";
        
        cin>>book[i].name;
        
        cout<<"year book? ";
        
        cin>>book[i].year;
        
        cout<<"paje book?";
        
        cin>>book[i].paje;
        
        cout<<"-----------\n";
    
    }
    cout<<endl<<endl;
    x = i;
    for(int d = 0 ; d < p ; d++)
    {
        cout<<"---Book("<<d+1<<")---\n";
        cout<<"name book = "<<book[d].name<<endl;
        cout<<"year book = "<<book[d].year<<endl;
        cout<<"paje book = "<<book[d].paje<<endl;
        cout<<"#################"<<endl<<endl;
    }
    getch();
    return 1;
}