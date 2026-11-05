#include "../src/myheaders.h"
//test comment

//by Joshua Heyel
//moveDown function runs through the heap tree, swapping roots and children until done
void moveDown(long data[], long first, long last){
	long largest = 2 * first + 1;
	while(largest <= last){
		//if right child exists and is larger, use this instead
		if(largest< last && data[largest] < data[largest+1]){
			largest++;
		}

		if(data[first] < data[largest]){
			swap(data[first], data[largest]);
			first = largest;
			largest = 2 * first + 1;
		}
		else{
			largest = last+1;   //force loop exit when done
		}
	}
	return;
}

//sorts data from 0 to n-1 into increasing order. building a heap tree, swapping roots
void heapsort(long data[], long n){
	//creating the heap
	for(long i = n / 2 - 1; i >= 0; --i){
		moveDown(data, i, n-1);
	}

	//moving largest item to data[i] and restoring the heap
	for(long i = n - 1; i >= 1; --i){
		swap(data[0], data[i]);
		moveDown(data, 0, i-1);
	}
	return;
}





