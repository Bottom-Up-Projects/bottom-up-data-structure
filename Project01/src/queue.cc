#include "queue.h"

template <typename T>
queue<T>::queue(){

}

template <typename T>
queue<T>::~queue(){

}

template <typename T>
void queue<T>::push(T value){

}

template <typename T>
void queue<T>::pop(){

}

template <typename T>
T queue<T>::front(){
    return T();
}

template <typename T>
T queue<T>::back(){
    return T();
}

template <typename T>
bool queue<T>::empty(){
    return true;
}

template <typename T>
size_t queue<T>::size(){
    return 0;
}

template <typename T>
queue<T>& queue<T>::operator=(const queue<T>& other){
    return queue<T>();
}

template <typename T>
bool queue<T>::operator==(const queue<T>& other){
    return true;
}

template <typename T>
bool queue<T>::operator!=(const queue<T>& other){
    return true;
}

template <typename T>
bool queue<T>::operator<(const queue<T>& other){
    return true;
}

template <typename T>
bool queue<T>::operator>(const queue<T>& other){
    return true;
}

template <typename T>
bool queue<T>::operator<=(const queue<T>& other){
    return true;
}

template <typename T>
bool queue<T>::operator>=(const queue<T>& other){
    return true;
}
