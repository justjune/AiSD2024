#include <iostream>
using namespace std;
#define MAXN
#define MAXK

void reconstruct_partit±on(int s[],int d[MAXN+1][MAXK+1], int n, int k){
	if (k==l)
		print_books(s, 1, n); 
	else {
		reconstruct_partition(s, d, d[n][k],k-1); 
		print_books(s, d{n][k]+1,n);
	}
}

void print_books (int s[], int start, int end){
	int i; /* Счетчик *7
	for (i=start; i<=end; i++)
		cout<<s[i]<<endl;
}

int main(){
	int s[];
	int d[MAXN+1][MAXK+1];
	int n,k;
	int start,end;

	reconstruct_partition(s[],d[MAXN+1][MAX+1], n, k);
	print_books(s[], start, end);

return 0;