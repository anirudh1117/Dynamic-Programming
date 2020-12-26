#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int i,j,a[n][m];
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++)
	    cin>>a[i][j];
	}
	int s[n][m];
    for(i=0;i<n;i++){
        s[i][0]=a[i][0];
    }
    for(i=0;i<m;i++){
        s[0][i]=a[0][i];
    }
    for(i=1;i<n;i++){
        for(j=1;j<m;j++){
            if(a[i][j]==0)
              s[i][j]=0;
            else if(a[i][j]==1)
            s[i][j] = 1 + min(s[i-1][j],min(s[i-1][j-1],s[i][j-1]));
        }
    }
    int max_size=s[0][0],i_max=0,j_max=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s[i][j]>max_size){
                max_size = s[i][j];
                i_max = i;
                j_max = j;
            }
            //cout<<s[i][j]<<" ";
        }
       // cout<<endl;
    }
    
    for(i=i_max;i>i_max-max_size;i--){
        for(j=j_max;j>j_max-max_size;j--)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
	
	return 0;
}
