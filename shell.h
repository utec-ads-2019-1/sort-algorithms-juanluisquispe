#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort : public Sort {       
    public:
        ShellSort(void *elements, size_t size) : Sort(elements, size) {}

        void execute(void (*compare)(void*, int, int)) {
        	int* array = (int*) elements;
            int gap = size/2;
            while(gap > 0){
            	for(int i = gap ; i < size ; i++){
            		int temp = array[i];
            		int j;
            		for(j = i ; j >= gap && array[j - gap] > temp ; j -= gap){
            			array[j] = array[j - gap];
            		}
            		array[j] = temp;
            	}

            	gap /= 2;
            }

        }

        inline string name() { return "ShellSort"; }
};

#endif