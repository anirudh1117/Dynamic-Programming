#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool **dp;
void display(const vector<int>& p){
    for(int i=0;i<p.size();i++)
    cout<<p[i]<<" ";
    cout<<endl;
}

void printsubset(int total,int i,int a[],vector<int>& p){
    if(i==0&&total!=0&&dp[0][total]){
        p.push_back(a[0]);
        display(p);
        return;
    }
    if(i==0&&total==0){
        display(p);
        return;
    }
    if(dp[i-1][total]){
        vector<int> b=p;
        printsubset(total,i-1,a,b);
    }
    if(total>=a[i]&&dp[i-1][total-a[i]]){
        p.push_back(a[i]);
        printsubset(total-a[i],i-1,a,p);
    }
    
}



void cansum(int total,int a[],int n){
    dp = new bool*[n];
    int i,j;
    for(i=0;i<n;i++){
    dp[i] = new bool[total+1];
    dp[i][0]=true;
    }
    for(j=1;j<=total;j++)
    dp[0][j]=false;
     if (a[0] <= total) 
	dp[0][a[0]] = true; 
    for(i=1;i<n;i++){
        for(j=1;j<=total;j++){
            if(a[i]>j)
            dp[i][j]=dp[i-1][j];
            if(j>=a[i])
            dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i]];
        }
    }
    for (int i = 0; i < n; ++i) {
		for (int j = 0; j < total + 1; ++j) {
		    cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	vector<int> p;
	printsubset(total,n-1,a,p);
}


int main() {
	// your code goes here
	int a[]={1,2,4,5};
	cansum(6,a,4);
	return 0;
}
