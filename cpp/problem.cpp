// Divides Evenly
// Given two integers, a and b, return true if a can be divided evenly by b. Return false otherwise.

// Examples
// dividesEvenly(98, 7) ➞ true
// // 98/7 = 14

// dividesEvenly(85, 4) ➞ false
// // 85/4 = 21.25
// Notes
// a will always be greater than or equal to b.

#include<iostream>

using namespace std;

int main(){

int a,b,x;

cout<<"enter two numbers: ";
cin>>a>>b;

x=a/b;

if (x%2==0)
{
    cout<<"True"<<endl;
}

else{

    cout<<"false"<<endl;

}

return 0;

}