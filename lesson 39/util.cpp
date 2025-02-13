#include "util.h"

string convert(int* array, int  size) {

}

void init(int* array, int  size, int a, int b){
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
}
