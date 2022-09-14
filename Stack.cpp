// Implementation file for linked StackType
#include "Stack.h"

template<class T>
Stack<T>::Stack() {
    top = -1;
    data = new T[MAX_ITEMS];
}

template<class T>
Stack<T>::~Stack() {
    delete data;
}

template<class T>
bool Stack<T>::IsFull() const {
    return top == MAX_ITEMS;
}

template<class T>
bool Stack<T>::IsEmpty() const {
    return top == -1;
}

template<class T>
void Stack<T>::Push(T item) {
    if (IsFull()) {
        return;
    }

    top++;

    data[top] = item;
}

template<class T>
void Stack<T>::Pop() {
    if (IsEmpty()) {
        return;
    }

    top--;
}

template<class T>
T Stack<T>::Top() {
    return data[top];
}