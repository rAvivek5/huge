//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,s;
	int a[n];
	cout<<"nos. of array element /n/ \n";
	cin>>n;
	
	cout<<"enter array element /a[n]/ \n";
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
//	sort(a, a+n);
//	for(i=0; i<n; i++)
//	{
//		cout<< a[i] <<" ";
//	}
	
	cout<<"Sums up to /s/ \n";
	cin>>s;
	
//N = 5, S = 12
//A[] = {1,2,3,7,5}
//Output: 2 4
//Explanation: The sum of elements 
//from 2nd position to 4th position 
//is 12.
	for(i=0; i<n; i++) //1 2 3 7 5
	{
		for(j=i; j<n; j++) 
		{
			if(s>=0 && s==a[j]  )
			{
				cout<<" here\t"<<j <<i;
				break;
			}
			else
			{
				s = s - a[j];
			}
			cout<<s <<"\n\n";
		}
	}
}











