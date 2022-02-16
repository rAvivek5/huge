#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter nos. of array element ypu want";
    cin>>n;
    
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }
     for(int i=0; i<n; i++)
    {
        cout<< a[i];
    }


}