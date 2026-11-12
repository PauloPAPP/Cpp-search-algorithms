// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!


#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	testFileGenerator();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);
void	selectionsort(long int arr[],long int size);
void	shellsort(long int arr[], long int size);
void	combsort(long int arr[], long int size);
void	heapsort(long int arr[], long int size);
void	mergesort(long int arr[], long int size);
void	quicksort(long int arr[], long int size);
void	bubblesort(long int arr[], long int size);
