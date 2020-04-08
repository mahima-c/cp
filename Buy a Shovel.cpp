#include <bits/stdc++.h>
using namespace std;

int main() {
int k,r;
cin>>k>>r;
int i=1;
for(i;i<k;i++){
if(((i*k)%10==r )+ ((i*k)%10==0))
break;
}
cout<<i;
	// your code goes here
	return 0;
}
