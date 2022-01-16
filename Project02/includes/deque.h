#ifndef __DEQUE_H__
#define __DEQUE_H__

typedef unsigned long size_t;

template <typename T>
class deque{
    private:
        T* data;
        size_t _size;
        size_t _capacity;

    public:
        class iterator: public Iterator<deque<T>, T>{

        };

        deque();
        deque(size_t size);
        deque(size_t size, const T& value);
        deque(const deque<T>& other);
        template <class InputIt>
        deque(InputIt first, InputIt last);
        ~deque();

        deque& operator=(const deque<T>& other);
        void assign(size_t count, const T& value);
        template <class InputIt>
        void assign(InputIt first, InputIt last);

        T& at(size_t index);
        T& operator[](size_t index);
        T& front();
        T& back();

        iterator begin();
        iterator end();
        iterator rbegin();
        iterator rend();

        bool empty() const;
        size_t size() const;
        
        void clear();
        iterator insert(iterator pos, const T& value);
        iterator insert(iterator pos, size_t count, const T& value);
        template <class InputIt>
        iterator insert(iterator pos, InputIt first, InputIt last);

        iterator erase(iterator pos);      
        iterator erase(iterator first, iterator last);
        void push_back(const T& value);
        void pop_back();
        void push_front(const T& value);
        void pop_front();
        void resize(size_t count);
        void resize(size_t count, const T& value);
};

template <typename T>
deque<T>::deque()
{

}

template <typename T>
deque<T>::deque(size_t size)
{

}

template <typename T>
deque<T>::deque(size_t size, const T& value)
{

}

template <typename T>
deque<T>::deque(const deque<T>& other)
{

}

template <typename T>
deque<T>::~deque()
{

}

template <typename T>
deque<T>& deque<T>::operator=(const deque<T>& other)
{
    return deque<T>();
}

template <typename T>
void deque<T>::assign(size_t count, const T& value)
{

}

template <typename T>
template <class InputIt>
void deque<T>::assign(InputIt first, InputIt last)
{

}

template <typename T>
T& deque<T>::at(size_t index)
{
    return T();
}

template <typename T>
T& deque<T>::operator[](size_t index)
{
    return T();
}

template <typename T>
T& deque<T>::front()
{
    return T();
}

template <typename T>
typename deque<T>::iterator deque<T>::begin()
{
    return iterator();
}

template <typename T>
typename deque<T>::iterator deque<T>::end()
{
    return iterator();
}

template <typename T>
typename deque<T>::iterator deque<T>::rbegin()
{
    return iterator();
}

template <typename T>
typename deque<T>::iterator deque<T>::rend()
{
    return iterator();
}

template <typename T>
bool deque<T>::empty() const
{
    return true;
}

template <typename T>
size_t deque<T>::size() const
{
    return 0;
}

template <typename T>
void deque<T>::push_back(const T& value)
{

}

template <typename T>
void deque<T>::push_front(const T& value)
{

}

template <typename T>
void deque<T>::pop_back()
{

}

template <typename T>
void deque<T>::pop_front()
{

}

template <typename T>
void deque<T>::resize(size_t count)
{

}

template <typename T>
void deque<T>::resize(size_t count, const T& value)
{

}

#endif // __DEQUE_H__ //