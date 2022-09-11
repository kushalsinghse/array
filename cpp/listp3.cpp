#include<iostream>

using namespace std;

int search(int number[], int n,int key){

    for (int i = 0; i < 6; i++)
    {
        if (i=8)
        {
            cout<<number[i]<<endl;
        }

    }
    
    return -1;
    
}


int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;

    int key;
    cout<<"ente a number: ";
    cin>>key;

    int number[n];
    cout<<"Enter any "<<n<<" number: ";
    for (int i = 0; i < n; i++)
    {

        cin>>number[i];
        
    }
    

    cout<<search(number,n,key)<<endl;


return 0;

}