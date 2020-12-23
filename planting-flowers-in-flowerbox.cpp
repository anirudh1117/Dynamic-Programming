#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a=0,b=0,c;
    cin>>n;
    int ar[n];
    int i;
    for(i=0;i<n;i++)
    cin>>ar[i];
    for(i=0;i<n;i++){
        c=b;
        b = max(a+ar[i],b);
        a=c;
    }
    cout<<b;
	return 0;
}
