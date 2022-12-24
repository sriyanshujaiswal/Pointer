#include <iostream>
using namespace std;
int main(){

    int i=5;
    int* p= &i;
    int** p2= &p;

    cout<<"Printing p :"<< p << endl;
    cout<<"Printing  address of p :"<< &p << endl;
    cout<<"Printing address of p :"<< p2 << endl;
    return 0;
}