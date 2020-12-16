#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long long a[n+1];
	int i,j;
	for(i=0;i<=n;i++)
	a[i]=1;
	for(i=2;i<=n;i++){
	    if(a[i]==1){
	        for(j=2;j*i<=n;j++){
	            a[i*j]=0;
	        }
	    }
	}
	for(i=0;i<=n;i++)
	cout<<i<<" "<<a[i]<<endl;
	return 0;
}
