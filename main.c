#include <stdio.h>
#include <stdlib.h>

int a[3] = { 45, 24, 76 };
int b[3] = { 35, 54, 64};
int alice=0,bob=0;
int i;
int main() {
	for( i=0; i<3 ; i++){
		
		if(a[i]>b[i]){
		 alice++;	
		}
		
		else if(a[i]<b[i]){
			bob++;
		}
		
		else{	
		}	
	}
	printf("Donus Dizisi=[%d %d]",alice,bob);
	return 0;
}
