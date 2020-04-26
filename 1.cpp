#include <iostream>
using namespace std;
int main(void){

int m=10,n,o;
int *z=&m;

cout<<"Pointer: Show the basic declaration of pointers: "<< endl;
cout<<"Here is m=10, n and o are two integer variable and *z is an integer."<< endl;
cout<<"z stores the address of m="<<&m<<endl;
cout<<"z stores the value of m="<<m<<endl;
cout<<"&m is the address of m= "<<&m<<endl;
cout<<"&n stores the address of n= "<<&n<<endl;
cout<<"&o stores the address of o= "<<&o<<endl;
cout<<"&z stores the address of z="<<&z<<endl;
cout<<n<<endl;

}