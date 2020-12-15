#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool cansum(int total,int a[],int check[]){
  
if(check[total]!=-1){
 if(check[total]==1)
   return true;
 else
 return false;
}

   if(total==0)
   return true;
   if(total<0)
   return false;
   for(int i=0;i<2;i++){
       //cout<<total<<endl;
       if(cansum(total-a[i],a,check)){
        check[total] = 1;
        return true;
       }
   }
   
   check[total]=0;
   return false;
}

int main() {
    int a[]={7,14};
    int check[300001];
    for(int i=0;i<300001;i++)
    check[i]=-1;
   cout<<cansum(300000,a,check);
	return 0;
}
