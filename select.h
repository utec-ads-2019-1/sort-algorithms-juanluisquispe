#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort : public Sort {       
    public:
        SelectSort(void *elements, size_t size) : Sort(elements, size) {}

        void execute(void (*compare)(void*, int, int)) {
            int *array = (int*) elements;
            for(int i = 0 ; i < size ; i++){
            	int min = i;
            	for(int j = i ; j < size ; j++){
            		if(array[min] > array[j]){
            			min = j;
            		}
            	}
            	swap(array[i],array[min]);
            }
        }

        inline string name() { return "SelectSort"; }
};

#endif