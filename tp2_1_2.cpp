#include <stdio.h>
#define N 5
#define M 4

int main(){
	int f,c;
	double mt[N][M];
	double *ptr=&mt[0][0];
	
	for (f=0;f<N;f++){
		for(c=0;c<M;c++){
			printf("%4d  ",*(ptr +f*M+N));
		}
		printf("\n");
	}
	

	return 0;
}
