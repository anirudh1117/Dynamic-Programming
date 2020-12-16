#include <iostream>
using namespace std;
bool cansum(int total,int a[],int n){
    bool dp[n+1][total+1];
    int i,j;
    for(i=0;i<=n;i++)
    dp[i][0]=true;
    for(j=1;j<=total;j++)
    dp[0][j]=false;
    for(i=1;i<=n;i++){
        for(j=1;j<=total;j++){
            if(a[i-1]>j)
            dp[i][j]=dp[i-1][j];
            if(j>=a[i-1])
            dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
        }
    }
    
    return dp[n][total];
}


int main() {
	// your code goes here
	int a[]={7,14};
	cout<<cansum(300,a,2);
	return 0;
}
