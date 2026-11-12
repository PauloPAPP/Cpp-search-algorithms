#include "../src/myheaders.h"

//by Joshua Heyel
//Bubble sort, sorts array of ints in increasing order
//Repeatedly comparing and swapping adjacent elements
void bubblesort(long data[], long n){
	for(int i=0; i < n-1; i++){
		for(int j = n-1; j>i; j--){
			if (data[j] < data[j-1]){
				swap(data[j], data[j-1]);
			}
		}
	}
	return;

	//test
}


