#include <bits/stdc++.h>
using namespace std;



int fact(int n)
{
	if(n==0)
		return 1;
	return n*fact(n-1);



}
int main() {
	int n;
  cin>>n;
  int p=fact(n);
  cout<<p;

	// your code goes here
	return 0;
}
