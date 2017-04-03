#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	float p;
	int num,a,b,c,N,M;
	
	srand(time(NULL));

	printf("Probabilidad: ");
	scanf("%f", &p);
	
	printf("Número de filas: ");
	scanf("%i", &N);

	printf("Número de columnas: ");
	scanf("%i", &M);

	b=p*10000;
	int mat[N][M];
	a=0;
	for (int i=0;i<N;i++){  //para desplazarse por las columnas
    
        for (int j=0;j<M;j++){  //para desplazarse por las filas
        
		  	c= rand()%10000;
			if(c<=b){
			num=1;
			}
			else{
			num=0;
			}
			mat[i][j]=num;	//Agrega numero aleatorio a la posicion ij de la matriz
        	printf("\t%d",mat[i][j]);	//imprime elemento de la matriz en pantalla

			if (num==1){
			        	
				a=a+1;
			}	
        	else{
			
				a=a;
			}
		}	
		printf("\n\n");	//para dejar espacios entre filas.
	}
	printf("%d\n",a);
}
