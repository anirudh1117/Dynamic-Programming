#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findMinPos(int n, int a[]){
    bool pos[n+1]={false};
    int i;
    for(i=0;i<n;i++){
        if(a[i]>0&&a[i]<=n){
            pos[a[i]-1]=true;
        }
    }
    for(i=0;i<n;i++){
        if(!pos[i])
        return i+1;
    }
}

int main() {
	int arr[] = { 0, 10, 2, -10, -20 };
    int n = sizeof(arr) / sizeof(arr[0]);
	cout<<findMinPos(n,arr);
	return 0;
}
