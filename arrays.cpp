

/*
Implementing Array as ADT

Operations:

*/

#include <iostream>
// Forward declarations
struct Array;
Array* initialize();
void append(Array *arr, int element);



// *******************************

struct Array {

    int *p; // pointer pointing to array on heap
    int capacity; // Max number of elements an array can hold
    int length; // To keep count of current number of elements in the array

};

int main() {

    Array* arr =  initialize();

    // operations
    append(arr, 10);

    // freeing the memory on heap
    delete[] arr->p;
    arr->p = nullptr;
    delete[] arr;
    return 0;
}

Array* initialize() {

    Array *arr = new Array; // create a pointer to Array structre

    // initialize the structre
    arr->capacity = 10;
    arr->length = 0;
    arr->p = new int[arr->capacity];

    return arr; // return this pointer to structre to main()

}



void append(Array *arr, int element) {

    *(arr->p + arr->length) = element;
    arr->length = arr->length++;
}
