#include<iostream>
#include<array>

using namespace std;

int main(){

    int n;

    cout<<"How many subjects are there"<<endl;
    cin>>n;

    int marks[n]={};

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter  marks : ";
        cin>>marks[i];
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<marks[i]<<endl;
    }
 

return 0;

}