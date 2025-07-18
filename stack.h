#ifndef STACK_H
#define STACK_H

#include <iostream> 
#include <stdexcept>

const int DEFAULT_CAPACITY = 10;

template <typename T>
class Stack {
private:
    T* arr;         
    int top;       
    int capacity;   

public:
   
    Stack(int size = DEFAULT_CAPACITY);

   
    ~Stack();

  
    void push(T data);
    T pop();
    T peek() const;
    bool isEmpty() const;
    bool isFull() const;
    int size() const;
    void printStack() const; // Optional: for debugging/displaying stack content
};

template <typename T>
Stack<T>::Stack(int size) : capacity(size), top(-1) {
    if (size <= 0) {
        throw std::invalid_argument("Stack capacity must be positive.");
    }
    arr = new T[capacity];
   
}


template <typename T>
Stack<T>::~Stack() {
    delete[] arr; // Free the dynamically allocated memory
    arr = nullptr; // Set to nullptr to prevent dangling pointer issues
}


template <typename T>
void Stack<T>::push(T data) {
    if (isFull()) {
        throw std::overflow_error("Stack Overflow - Cannot push element onto full stack.");
    }
    arr[++top] = data; // Increment top and then assign data
}


template <typename T>
T Stack<T>::pop() {
    if (isEmpty()) {
        throw std::underflow_error("Stack Underflow - Cannot pop from empty stack.");
    }
    return arr[top--]; // Return top element and then decrement top
}

template <typename T>
T Stack<T>::peek() const {
    if (isEmpty()) {
        throw std::underflow_error("Stack is empty - Cannot peek.");
    }
    return arr[top];
}


template <typename T>
bool Stack<T>::isEmpty() const {
    return top == -1;
}

template <typename T>
bool Stack<T>::isFull() const {
    return top == capacity - 1;
}


template <typename T>
int Stack<T>::size() const {
    return top + 1;
}


template <typename T>
void Stack<T>::printStack() const {
    if (isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
        return;
    }
    std::cout << "Stack elements (bottom to top): ";
    for (int i = 0; i <= top; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

