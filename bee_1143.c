#include <stdio.h>
#include <math.h>

int main(){
	
	int num;
	int i;
	
	int quadrado;
	int cubo;
	
	
	scanf("%d", &num);
	
	
	
	for(i = 1; i <= num; i++){
		
		quadrado = pow(i, 2);
		cubo = pow(i, 3);
		
		printf("%d %d %d\n", i, quadrado, cubo);
	}
	
	
	
	return 0;
}
