#include<iostream>

using namespace std;

int binarysearch(int number[], int n,int key){

    int s=0;
    int e=n;

    while (s<=e)
    {
        int mid=(s+e)/2;

        if (number[mid]==key)
        {
            return mid;
        }
        else if (number[mid]>key){

            e=mid-1;

        }

        else{
            s=mid+1;
        }
        
    }
    
return -1;

    
}


int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;

    int key;
    cout<<"enter a number: "; 
    cin>>key;

    int number[n];

    cout<<"Enter "<<n<<" number: ";

    for (int i = 0; i < n; i++)
    {

        cin>>number[i];
        
    }
    
    cout<<binarysearch(number,n,key)<<endl;

return 0;

}