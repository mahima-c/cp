//1.base condition
//2.(n-1) small problem
//3.updated processing
//postion of step 2 and 3 are changed






#include<bits/stdc++.h>
using namespace std;

bool CheckSorted2(int input[],int n){
	if(n <= 1){
		return true;
		}
	if(input[0]>input[1])
		return false;
	int small[n-1];
	for(int i=1;i<n;i++){
		small[i-1]=input[i];}

bool smallans=CheckSorted2(small,n-1);
return smallans;

}
int main() {
	int arr[] = { 4,1,2,3 }; 
    int n = sizeof(arr) / sizeof(arr[0]);
	bool a=CheckSorted2(arr,n);
	cout<<a;

	// your code goes here
	return 0;
}
