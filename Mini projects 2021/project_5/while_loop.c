#include <stdio.h>
#include <stdlib.h>

int main(){

	//Define variables
	int count = 1;
	int index_par = 0;
	int index_impar = 0;
	int par[5];
	int impar[5];

	while(count <= 10){

		if (count % 2 == 0){
			//printf("%d \n",count);
			//printf("%d", count);

			par[index_par] = count ;
//			printf("%d", par[index]);
			index_par++;
		}
		else {
			impar[index_impar] = count;
			index_impar++;
		}

		count++;
		//printf("%d", index);
	}


	printf("\n Los pares son: \n");
	for(int loop = 0; loop<5; loop++){
		//printf("%d\n", loop);
		printf("%d \n", par[loop]);
	}

	printf("\n Los impares son: \n");
	for(int loop=0; loop<5; loop++){
		printf("%d \n", impar[loop]);
	}
	return 0;

}
