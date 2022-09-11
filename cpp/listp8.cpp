#include<iostream>

using namespace std;

int main(){

     int n;
    cout<<"enter a number: ";
    cin>>n;

    int number[n];

    cout<<"Enter "<<n<<" number: ";

    for (int i = 0; i < n; i++)
    {

        cin>>number[i];
        
    }
    
    int x;
    cout<<"Enter which number you whant to find in list: ";
    cin>>x;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (number[j]+number[i]==x)
            {
                cout<<"True"<<endl;
            }
            

            
        }
        
    }
    

return 0;

}