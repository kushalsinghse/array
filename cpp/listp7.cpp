#include<iostream>

using namespace std;

int main(){

	    int n;
        cout<<"Enter a number: ";
	    cin>>n;
	    int arr[n];
        cout<<"Enter "<<n<<" numbers: ";        
	    for(int i=0;i<n;i++){

	      cin>>arr[i];

        }

        for (int i = 0; i < n; i++)
        {
           for (int j = i+1; j < n; j++)
           {
                 if (arr[j]==arr[i])
            {
                cout<<arr[j];
            }
           }
           
            
            
        }
        

return 0;

}