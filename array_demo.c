#include <stdint.h>
#include <stdio.h>


int main(){
	
uint32_t array[3][5]; //array declaration

printf("\nPrinting Memory address's for each element in the 3x5 2D array\n");
printf("Each address represents a storage position in the memory that the CPU can access when needed\n\n");

for (int i = 0; i < 3; i++){			// printing address of the array positions
	for (int j = 0; j < 5; j++){
		printf("%p", &array[i][j]);
		printf("\n");
	}
	
}


return 0;

}
