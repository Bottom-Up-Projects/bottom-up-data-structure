#ifndef __STACK_H__
#define __STACK_H__

typedef unsigned long size_t;

template <typename T>
class stack{
    private:
    T* values;
    size_t _size;

    public:
    stack();
    ~stack();
    
    void push(T value);
    void pop();

    T top();
    
    bool empty();
    size_t size();

    stack<T>& operator=(const stack<T>& other);
    bool operator==(const stack<T>& other);
    bool operator!=(const stack<T>& other);
    bool operator<(const stack<T>& other);
    bool operator>(const stack<T>& other);
    bool operator<=(const stack<T>& other);
    bool operator>=(const stack<T>& other);
};


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

#endif  // __STACK_H__ //
