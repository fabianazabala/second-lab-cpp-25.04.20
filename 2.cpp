#include <iostream>
using namespace std;
int main(void){

int a = 7;
int b = 9;

int *newB = &a;
int *newA = &b;

cout<<"the original value of a is "<<a<<endl;
cout<<"the original value of b is "<<b<<"\n"<<endl;

swap(newB, newA);
cout << "now, the value of a is " << *newB << "\nAnd the value of b is " << *newA << endl;
return 0;



}