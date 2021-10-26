// ArrayStack.h

#include <string>
#include <iostream>

#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

class ArrayStack {
    private:
    int _num_items; // number of items in the stack
    double* _items; // stack items
    int _allocated_size; // size of memory allocated

    void resize(int max_size) {
        if (max_size==0) max_size++;
        
        // Move stack to a new array of size max
        _allocated_size = max_size;
        double* temp = new double[max_size];
        // Copy 
        for (int i = 0; i < _num_items; ++i) {
            temp[i] = _items[i];
        }
        delete[] _items;
        _items = temp;
    }

public:
    // Constructors:
    ArrayStack(){
    /* COMPLETE ... init _num_items to 0, _allocated_size to 0, and
     * set _items to the null pointer, 
     */
    _num_items = 0;
    _allocated_size = 0;
    _items = NULL;
    }

    explicit ArrayStack(int allocated_size){
    /* COMPLETE ... init _num_items to 0, 
     * pre-allocate memory for an array of size allocated_size
     * and make _items point to it */
    _num_items = 0;
    _items = (double *)malloc(sizeof(double)*allocated_size);
    }

    ArrayStack(const ArrayStack& arraystack){
        std::cout<< "Copy Constructor" << std::endl;
        _num_items = arraystack._num_items;
        _allocated_size = arraystack._allocated_size;
        _items = (double *)malloc(sizeof(double)*_allocated_size);
        for(int i=0;i < arraystack._num_items;i++){
            _items[i] = arraystack._items[i];
        }
    }

    ArrayStack& operator= (const ArrayStack& arraystack){
        std::cout<< "Assignment Operator" << std::endl;
        if (this == &arraystack) return *this;
        _num_items = arraystack._num_items;
        _allocated_size = arraystack._allocated_size;
        _items = (double *)malloc(sizeof(double)*_allocated_size);
        for(int i=0;i < arraystack._num_items;i++){
            _items[i] = arraystack._items[i];
        }
        return *this;
    }

    // Destructor:
    ~ArrayStack() {
        // COMPLETE
        if (_items != NULL) delete[] _items;
    }

    void push(double item) {
        if (_num_items == _allocated_size) resize(2*_allocated_size);
        _items[_num_items++] = item;
    }

    void pop() {
        _num_items--;
        if (_num_items > 0 && _num_items == _allocated_size/4) resize(_allocated_size/2);
    }

    double top() {
        return _items[_num_items-1];
    }

    bool empty() const { return _num_items == 0; }

    int size() const { return _num_items; }
};

#endif // ARRAY_STACK_H