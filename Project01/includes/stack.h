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

#endif  // __STACK_H__ //
