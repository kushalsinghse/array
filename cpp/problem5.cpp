// Multiple of 100

// Create a function that takes an integer and returns true if it's divisible by 100,
//  otherwise return false.

// Examples

// divisible(1) ➞ false

// divisible(1000) ➞ true

// divisible(100) ➞ true

#include<iostream>

using namespace std;

int main(){

    int d;
    cout<<"Enter a number: ";
    cin>>d;


    if (d%100==0)
    {
        cout<<"True"<<endl;
    }

    else{
        cout<<"false"<<endl;
    }
    

return 0;

}