// //assending oder

// #include<iostream>

// using namespace std;

// int main(){

//     // TAKING INPUT FROM USER
    //  int n;
    // cout<<"enter a number: ";
    // cin>>n;

    // int number[n]; // i make an array whos size is n

    // cout<<"Enter "<<n<<" number: ";

    // for (int i = 0; i < n; i++)
    // {

    //     cin>>number[i];
        
    // }
//     // up to hear


//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)  // this loop runs from i to j in an array
//         {
//             if (number[j]<number[i])    
//             {
//                 int val=number[j];
//                 number[j]=number[i];
//                 number[i]=val;
//             }
            
//         }
        
//     }


//     for (int i = 0; i < n; i++)
//     {
//         cout<<number[i]<<" "<<endl;
//     }
    
    



// return 0;

// }


//revise

#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;

    int number[n];

    cout<<"enter "<<n<<" numbers: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>number[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (number[j<number[i]])
            {
                int val = number[j];
                number[j]=number[i];
                number[i]=val;
            }
            
        }
        
    }
    


    for (int i = 0; i < n; i++)
    {
        cout<<number[i]<<" "<<endl;
    }
    



return 0;


}