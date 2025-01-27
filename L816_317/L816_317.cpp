#include <iostream>
#include L809_305.c
using namespace std;
#define MAXN
#define MAXK
#define MAXINT

partition(int s[], int n, int k){
	int m[MAXN+l][MAXK+1];	 /* Таблица значений */
	int d[MAXN+1][MAXK+1];	 /* Таблица разделителей */
	int p[MAXN+1];		 /* Массив префиксных сумм*/
	int cost; 		 /* Стоимость тестового разбиения */
	int i,j, х; 		 /* Счетчики */
	р[0] = 0;		 /* Создаем префиксные суммы */
	for (i=l; i<=n; i++) p[i]=p[i-1]+s[i];
		for (i=l; i<=n; i++) m[i][1] = p[i]; /* Инициализируем границы */
			for (j=l; j<=k; j++) m[l][j] = s[l];
				for (i=2; i<=n; i++)/*Вычисляем основное рекуррентное соотношение */ 
					for (j =2; j<=k; j++) { 
						m[i] [j] = MAXINT; 
							for (x=1; x<=(i-1); x++) {
								cost = max(m[x][j-1], 
								p[i]—p[x]); 
								if (m[i] [j] > cost) { 
									m[i ] [j] = cost; 
									d[i] [j] = x;
								}
							}
					}
	reconstruct_partition(s,d,n,k) /* Выводим решение разделения */
}

int main(){
	int s[];
	int n,k;
	partition(s[],n,k);
	
	return 0;
}