#ifndef __QUEUE_H__
#define __QUEUE_H__

typedef unsigned long size_t;

template <typename T>
class queue {
    private:
    T* values;
    size_t size_value;

    public:
    queue();
    ~queue();

    void push(T value);
    void pop();
    
    T front();
    T back();
    
    bool empty();
    size_t size();

    queue<T>& operator=(const queue<T>& other);
    bool operator==(const queue<T>& other);
    bool operator!=(const queue<T>& other);
    bool operator<(const queue<T>& other);
    bool operator>(const queue<T>& other);
    bool operator<=(const queue<T>& other);
    bool operator>=(const queue<T>& other);
};

#endif // __QUEUE_H__
