
#include<bits/stdc++.h>
using namespace std;


int main()
{

	    int n;
        cout<<"Enter a number: ";
	    cin>>n;
	    int arr[n];
        cout<<"Enter "<<n<<" numbers: ";        
	    for(int i=0;i<n;i++){

	      cin>>arr[i];

        }


        int max=arr[0];
        int min=arr[0];


        for(int i=1;i<n;i++){
            
            if(arr[i]<min){
                
                min=arr[i];
                              
            }

            if (arr[i]>max)
            {
                max=arr[i];
            }

            
            
            
        }


    cout<<"The max number is "<<max<<endl;

    cout<<"The min number is "<<min<<endl;


    int x=max+min;
    cout<<"Sum of min and max is "<<x<<endl;

	return 0;
}

