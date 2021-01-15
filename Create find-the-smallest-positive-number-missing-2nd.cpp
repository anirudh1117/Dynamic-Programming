#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findMinPos(int n, int a[]){
    int i,pos,temp;
    for(i=0;i<n;i++){
        pos = a[i]-1;
        while(a[i]>0&&a[i]<=n&&a[pos]!=a[i]){
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
            pos = a[i]-1;
        }
    }
    for(i=0;i<n;i++){
        //cout<<a[i]<<endl;
        if((i+1)!=a[i])
        return i+1;
    }
    return i+1;
}

int main() {
	int arr[] = { 1,2,3,4,5,7 };
    int n = sizeof(arr) / sizeof(arr[0]);
	cout<<findMinPos(n,arr);
	return 0;
}
