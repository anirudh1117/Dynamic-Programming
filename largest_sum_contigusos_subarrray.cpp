#include <iostream>
#include<climits>
using namespace std;

int main() {
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3,-20,-50,200}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int overall_max=INT_MIN,upto_max=0,start=0,end=0,s=0,i=0;
    for(i=0;i<n;i++){
        upto_max +=a[i];
        if(upto_max>overall_max){
            overall_max=upto_max;
            end=i;
            start=s;
        }
        if(upto_max<0){
        upto_max=0;
        s=i+1;
        }
    }
    cout<<overall_max<<" start "<<start<<" end "<<end;
	return 0;
}
