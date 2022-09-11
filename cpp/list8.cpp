#include<iostream>

using namespace std;

int main(){

     int n;
    cout<<"enter a number: ";
    cin>>n;

    int m;
    cout<<"Enter m number of students: "
    cin>>m;

    int number[n];

    cout<<"Enter "<<n<<" number: ";

    for (int i = 0; i < n; i++)
    {

        cin>>number[i];
        
    }
    


    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (number[j]<number[i])
            {
                int val=number[j];
                number[j]=number[i];
                number[i]=val;
            }
            
        }
        
    }



    for (int i = 0; i < m; i++)
    {
        

        
    }
    



    for (int i = 0; i < n; i++)
    {
        cout<<number[i]<<" ";
    }




return 0;

}