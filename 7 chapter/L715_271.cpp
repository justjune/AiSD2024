#include <iostream>
using namespace std;

void gen_rand_numb(){
	do {
		i = random_int(1,n); 
		j = random_int(1,n); 
		if (i > j) swap(&i,&j);
	} while (i==j);
}

