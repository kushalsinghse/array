#include<iostream>
#include<climits>

using namespace std;

int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;


    int number[n];
    cout<<"Enter any "<<n<<" number: ";
    for (int i = 0; i < n; i++){

        cin>>number[i];
        
    }

    int maxSum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;
            
            for (int k = i; k<=j; k++)
            {

                sum+=number[k];

                //cout<<number[k]<<" ";
            }//cout<<endl;
            maxSum=max(maxSum , sum);
        
        }
            
        
    }
    
    
cout<<maxSum<<endl;

return 0;

} 