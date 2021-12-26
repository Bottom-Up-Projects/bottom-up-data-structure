#include "stack.h"

template <typename T>
stack<T>::stack(){

}

template <typename T>
stack<T>::~stack(){

}

template <typename T>
void stack<T>::push(T value){

}

template <typename T>
void stack<T>::pop(){

}

template <typename T>
T stack<T>::top(){
    return T();
}

template <typename T>
bool stack<T>::empty(){
    return true;
}

template <typename T>
size_t stack<T>::size(){
    return 0;
}

template <typename T>
stack<T>& stack<T>::operator=(const stack<T>& other){
    return stack<T>();
}

template <typename T>
bool stack<T>::operator==(const stack<T>& other){
    return true;
}

template <typename T>
bool stack<T>::operator!=(const stack<T>& other){
    return true;
}

template <typename T>
bool stack<T>::operator<(const stack<T>& other){
    return true;
}

template <typename T>
bool stack<T>::operator>(const stack<T>& other){
    return true;
}

template <typename T>
bool stack<T>::operator<=(const stack<T>& other){
    return true;
}

template <typename T>
bool stack<T>::operator>=(const stack<T>& other){
    return true;
}
