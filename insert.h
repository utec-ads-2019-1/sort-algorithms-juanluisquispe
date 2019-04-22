#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort : public Sort {       
    public:
        InsertSort(void *elements, size_t size) : Sort(elements, size) {}

        void execute(void (*compare)(void*, int, int)) {
            int* array = (int*) elements;
            for(int i = 1 ; i < size ; i++){
            	int temp = array[i];
            	int j = i-1;
            	while(j >= 0 && array[j] > temp){
            		array[j+1] = array[j];
            		j--;
            	}
            	array[j+1] = temp;
            }
        }

        inline string name() { return "InsertSort"; }
};

#endif