#include <iostream>
using namespace std;

int min_weight_triang(int dp[][],auto c[][],int opt[][], int n){
	int s=0;
	for (int i = 1; i < n-1; i++) 
		dp[i][i+1]=0;
        for (int gap = 2; j < n-1; j++) 
		for(i=1; i < n - gap; i++){
			j = i + 1;
            		int mn = INT_MAX;
            		int cost = c[i][j];
            		for (int k = opt[i][j-1]; k <= min(j-1, opt[i+1][j]); k++) {
                		if (mn >= dp[i][k] + dp[k+1][j] + cost) {
                  		  opt[i][j] = k; 
                   		  mn = dp[i][k] + dp[k+1][j] + cost; 
               			 }
           		 }
           	 dp[i][j] = mn; 
        	}
}

int main(){

	int dp[][];
	int opt[][];
	auto c[][];
	int n;
	
	min_weight_triang(dp[][], c[][], opt[][], n);

return 0;