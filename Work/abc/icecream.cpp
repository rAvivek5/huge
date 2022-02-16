#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// void sort(int costs[], int n) {
//   int i, j, min, temp;
//   for (i = 0; i < n - 1; i++) {
//       min = i;
//       for (j = i + 1; j < n; j++)
//       if (costs[j] < costs[min])
//       min = j;
//       temp = costs[i];
//       costs[i] = costs[min];
//       costs[min] = temp;
//   }
// }

int main()
{
    int n;
    int costs[n];
    int a;

    cout<<"ENTER number of icecream available \t";
    cin>>n;
    
    cout<<"ENTER cost of all icecream in anyorder \n";
    for(int i=0; i<n; i++)
    {
        cin>>costs[i];
    }

    // cout<<"ENTER amount you have";
    // cin>>a;

    cout<<"ENTER amout you have kid! \t";
    cin>>a;

    sort(costs, costs + n);
	
	cout<<"ICECREAM CHART \t";
    for(int i=0; i<n; i++)
    {
        cout<<costs[i] << " ";
    }
    cout<<"\n";

    for(int i=0; i<n; i++)
    {
        if(a==0)
        {
            cout<<"You had first "<< i <<" icecream DUDE";
            break;
        }
        else
        {
            a = a-costs[i];
            //cout<<costs[i] << "+";
        }
    }
    return 0;
}
