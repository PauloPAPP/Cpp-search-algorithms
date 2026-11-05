#include "../src/myheaders.h"

//Kenneth Stettler Comb Sort

template<class T>
void combSort(T data[],const int n) {
	int step = n, j, k;
	while ((step = int(step/1.3)) > 1)
		for (j = n-1; j >= step; j--) {
			k = j-step;
			if(data[j] < data[k])
				swap(data[j], data[k]);
		}
	bool again = true;
	for (int i = 0; i < n-1 && again; i++)
		for (j = n-1, again = false; j > i; --j)
			if (data[j] < data[j-1]) {
				swap(data[j], data[j-1]);
				again = true;
			}


}



