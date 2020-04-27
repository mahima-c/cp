#include<bits/stdc++.h>
using namespace std;



//we use startindex to remove extra space for smallinput 

bool CheckSorted3(int input[],int s,int n){	
	if(s >= n-1){
		return true;
		}
	if(input[s]>input[s+1])
		return false;
	
bool smallans=CheckSorted3(input,s+1,n);
return smallans;

}
bool CheckSorted(int input[],int n){	
	return CheckSorted3(input,0,n);}

int main() {
	int arr[] = { 1,2,1,3,3 }; 
    int m= sizeof(arr) / sizeof(arr[0]);

	bool a=CheckSorted(arr,m);
	cout<<a;

	// your code goes here
	return 0;
}
