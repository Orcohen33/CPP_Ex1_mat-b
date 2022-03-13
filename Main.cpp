#include <iostream>
#include <string>
#include "mat.hpp"
#include <stdlib.h>
using namespace std;

int main(){
    char _case[1] = {'b'};              // set case char
    int col = 3, row = 3;                   // set default val for row and col
    char a[1] = {'a'}, b[1] = {'b'};         // set default chars
    while(*_case != 'c')
    {
        switch(_case[0])
        {
            case('a'):
                cout<<"Enter odd number(columns): ";
                cin >> col;
                cout<<"Enter odd number(rows): ";
                cin >> row;
                cout<<"Enter char(symbol a): ";
                cin >> *a;
                cout<<"Enter char(symbol b): ";
                cin >> *b;
                break;
            case('b'):
                col = 2*(rand()%8) + 1;
                row = 2*(rand()%8) + 1;
                *a = char(rand()%91 + 33);
                *b = char(rand()%91 + 33);
                cout<<"row: "<<row<<" , col:"<<col<<" , symbolA:"<<*a<<" , symbolB: "<<*b<<endl;
                break;
        }
        try
        {
            cout << ariel::mat(col,row,*a,*b) << endl;
        }
        catch(...)
        {
            cout<<"Invalid input"<<endl;
        }

        cout<<"To enter new values press a,\nTo randomize mat press b,\nTo quit press c :"<<endl;
        cin >> _case[0];
        cout<<endl;
    }
    return 1;
}