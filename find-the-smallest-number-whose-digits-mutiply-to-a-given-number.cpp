#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin>>n;
    int res[20],i,j=0;
    if(n<10){
        cout<<n+10;
        return 0;
    }
    a=n;
    for(i=9;i>1;i--){
        while(a%i==0){
            a = a/i;
            res[j]=i;
            j++;
        }
    }
    if(a>10){
        cout<<"invalid";
    }
    for(i=j-1;i>-1;i--){
        cout<<res[i];
    }
	return 0;
}
