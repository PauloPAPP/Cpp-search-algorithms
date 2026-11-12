#include "../src/myheaders.h"


//by Paulo Piedade
void shellsort(long int data[], long int size){
	register int i, j, hCnt, h;
	int increments[20],k;

	for (h = 1, i = 0; h<size; i++){
		increments[i] = h;
		h = 3*h + 1;
	}

	for (i--; i>=0; i--){
		h = increments[i];
		for (hCnt = h; hCnt < 2*h; hCnt++){
			for (j = hCnt; j < size;){
				int tmp = data[j];
				k=j;
				while (k - h >= 0 && tmp > data[k-h]){
					data[k] = data[k-h];
					k -= h;
				}
				data[k] = tmp;
				j += h;
			}
		}
	}
}
