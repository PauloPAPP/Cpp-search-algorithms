#include "../src/myheaders.h"

//Kenneth Stettler Comb Sort

//code from data structures and algorithms in c++ by adam drozdek

#include "../src/myheaders.h"

// Kenneth Stettler Comb Sort
// code from data structures and algorithms in c++ by adam drozdek

void combsort(long data[], const long n) {
    long step = n, j, k;
    while ((step = long(step / 1.3)) > 1) {
        for (j = n - 1; j >= step; j--) {
            k = j - step;
            if (data[j] < data[k])
                swap(data[j], data[k]);
        }
    }
    bool again = true;
    for (long i = 0; i < n - 1 && again; i++) {
        for (j = n - 1, again = false; j > i; --j) {
            if (data[j] < data[j - 1]) {
                swap(data[j], data[j - 1]);
                again = true;
            }
        }
    }
}



