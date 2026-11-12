#include "../src/myheaders.h"

//Kenneth Stettler Quick Sort finished

//code from data structures and algorithms in c++ by adam drozdek

#include "../src/myheaders.h"

// Kenneth Stettler Quick Sort
// code from data structures and algorithms in c++ by adam drozdek

void quicksort(long data[], long first, long last) {
    long lower = first + 1, upper = last;
    swap(data[first], data[(first + last) / 2]);
    long bound = data[first];
    while (lower <= upper) {
        while (bound > data[lower])
            lower++;
        while (bound < data[upper])
            upper--;
        if (lower < upper)
            swap(data[lower++], data[upper--]);
        else
            lower++;
    }
    swap(data[upper], data[first]);
    if (first < upper - 1)
        quicksort(data, first, upper - 1);
    if (upper + 1 < last)
        quicksort(data, upper + 1, last);
}

void quicksort(long data[], long n) {
    long i, max;
    if (n < 2)
        return;
    for (i = 1, max = 0; i < n; i++) { // find the largest
        if (data[max] < data[i]) // element and put it
            max = i; // at the end of data[];
    }
    swap(data[n - 1], data[max]); // largest el is now in its
    quicksort(data, 0, n - 2); // final position;
}



