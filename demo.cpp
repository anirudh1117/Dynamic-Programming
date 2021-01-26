#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n=4,i,j,k;
	int mat[n][n] = {{1, 2, -1, 4}, 
        {-8, -3, 4, 2}, 
        {3, 8, 10, -8}, 
        {-4, -1, 1, 7}
    }; 
    int sa[n];
    int left=0,right=0,up=0,down=0,max_overall=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        sa[j]=0;
        for(j=i;j<n;j++){
            for(k=0;k<n;k++){
                sa[k]+=mat[k][j];
            }
            int max_so_far=0,max_upto=INT_MIN,end=0,start=0,s=0;
            for(k=0;k<n;k++){
                max_so_far+=sa[k];
                if(max_so_far>max_upto){
                    max_upto=max_so_far;
                    end=i;
                    start=s;
                }
                if(max_so_far<0){
                    max_so_far=0;
                    start=s+1;
                }
            }
            cout<<"max_upto "<<max_upto<<endl;
            if(max_overall<max_upto){
                max_overall=max_upto;
                up=start;
                down=end;
                left=i;
                right=j;
            }
        }
    }
    cout<<max_overall<<endl;
    cout<<"up "<<up<<" down "<<down<<" left "<<left<<" right "<<right<<endl;
    for(i=up;i<down;i++){
        for(j=left;j<right;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
