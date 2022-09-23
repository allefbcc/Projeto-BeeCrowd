#include <stdio.h>

int main(){
	
	
	int x;
	int y;
	
	int i;
	int soma = 0;
	
	int temp;
	
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x < y){
		
		for(i = x; i <= y; i++){
			
			if(i % 13 != 0){
				soma = soma + i;
			}
			
	}
		
		
	}
	
	if(y < x){
		
		for(i = y;  i <= x; i++){
		
			if(i % 13 != 0){
				soma = soma + i;
			}
	
		
	}
	
}
	
	printf("%d\n", soma);
	
	return 0;
}
