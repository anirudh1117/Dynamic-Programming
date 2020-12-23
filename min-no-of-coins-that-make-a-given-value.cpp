#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,v;
    cin>>v;
    cin>>n;
    int coin[n],i,j;
    for(i=0;i<n;i++){
        cin>>coin[i];
    }
    
    int total[v+1];
    total[0]=0;
    for(i=1;i<=v;i++)
    total[i]=INT_MAX;
    
    for(i=1;i<=v;i++){
        for(j=0;j<n;j++){
            if(coin[j]<=i){
                int res = total[i-coin[j]];
                if(res!=INT_MAX && res+1<total[i])
                total[i] = res+1;
            }
        }
    }
    cout<<total[v];
    
	return 0;
}
