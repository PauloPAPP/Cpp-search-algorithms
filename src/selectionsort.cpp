#include "../src/myheaders.h"

//by Paulo Piedade
void selectionsort(long int data[], long int size){
	for (int i = 0, j, least; i < size-1; i++){
		for(j = i+1, least = i; j < size; j++){
			if (data[j] < data[least])
				least = j;
		if (i != least)
			swap((data[least]), (data[i]));
		}
	}
}
