
// Inches to Feet
// Create a function that accepts a measurement value in inches and returns
//  the equivalent of the measurement value in feet.


// Examples

// inchesToFeet(324) ➞ 27

// inchesToFeet(12) ➞ 1

// inchesToFeet(36) ➞ 3

// Notes
// If inches are under 12, return 0.
// 12 inches = 1 foot.

#include<iostream>

using namespace std;

int main(){

int foot;
int inchs=12;
cout<<"Enter a number: ";
cin>>foot;

cout<<foot/inchs<<endl;


return 0;

}