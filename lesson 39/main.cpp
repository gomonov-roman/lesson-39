#include "util.h"
#include "sort.h"
#include <ctime>

#define SIZE 10


int main() {
	srand(time(NULL));
	int array[SIZE]/*{1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};*/
	/*int array[]{1, 2, 3, 4, 5, 6, 7, 8, 9};*/
	init(array, SIZE, -20, 20);

	cout << "Before Array: " << convert(array, SIZE) << endl;

	/*bubble_sort(array, SIZE);*/
	(array, SIZE);
	cout << "After Array: " << convert(array, SIZE) << endl;

	
	return 0;
}







