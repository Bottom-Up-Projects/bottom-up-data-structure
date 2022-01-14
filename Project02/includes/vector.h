#ifndef __VECTOR_H__
#define __VECTOR_H__
#include "iterator.h"

typedef unsigned long size_t;

template<typename T>
class vector{
    private:
        T* data;
        size_t _size;
        size_t _capacity;

    public:

        class iterator: public Iterator<vector<T>, T>{

        };

        vector();
        vector(size_t size);
        vector(size_t size, const T& value);
        vector(const vector<T>& other);
        ~vector();

        vector<T>& operator=(const vector<T>& other);
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
        void reserve(size_t new_cap);    
        size_t capacity() const;

        void clear();
        iterator insert(iterator pos, const T& value);
        iterator insert(iterator pos, size_t count, const T& value);

        template <class InputIt>
        iterator insert(iterator pos, InputIt first, InputIt last);

        iterator erase(iterator pos);
        iterator erase(iterator first, iterator last);

        void push_back(const T& value);
        void push_back(T& value);
        void pop_back();
        void resize(size_t count);
        void resize(size_t count, const T& value);
};

template <typename T>
vector<T>::vector()
{

}

template <typename T>
vector<T>::vector(size_t size)
{

}

template <typename T>
vector<T>::vector(size_t size, const T& value)
{

}

template <typename T>
vector<T>::vector(const vector<T>& other)
{

}

template <typename T>
vector<T>::~vector()
{

}

template <typename T>
vector<T>& vector<T>::operator=(const vector<T>& other)
{
    return vector<T>();
}

template <typename T>
void vector<T>::assign(size_t count, const T& value)
{

}

template <typename T>
template <class InputIt>
void vector<T>::assign(InputIt first, InputIt last)
{

}

template <typename T>
T& vector<T>::at(size_t index)
{
    return T();
}

template <typename T>
T& vector<T>::operator[](size_t index)
{
    return T();
}

template <typename T>
T& vector<T>::front()
{
    return T();
}

template <typename T>
T& vector<T>::back()
{
    return T();
}

template <typename T>
vector<T>::iterator vector<T>::begin()
{
    return vector<T>::iterator();
}

template <typename T>
vector<T>::iterator vector<T>::end()
{
    return vector<T>::iterator();
}

template <typename T>
vector<T>::iterator vector<T>::rbegin()
{
    return vector<T>::iterator();
}

template <typename T>
vector<T>::iterator vector<T>::rend()
{
    return vector<T>::iterator();
}

template <typename T>
bool vector<T>::empty() const
{
    return true;
}

template <typename T>
size_t vector<T>::size() const
{
    return 0;
}

template <typename T>
void vector<T>::reserve(size_t new_cap)
{

}

template <typename T>
size_t vector<T>::capacity() const
{
    return 0;
}

template <typename T>
void vector<T>::clear()
{

}

template <typename T>
vector<T>::iterator vector<T>::insert(vector<T>::iterator pos, const T& value)
{
    return vector<T>::iterator();
}

template <typename T>
vector<T>::iterator vector<T>::insert(vector<T>::iterator pos, size_t count, const T& value)
{
    return vector<T>::iterator();
}

template <typename T>
template <class InputIt>
vector<T>::iterator vector<T>::insert(vector<T>::iterator pos, InputIt first, InputIt last)
{
    return vector<T>::iterator();
}

template <typename T>
vector<T>::iterator vector<T>::erase(vector<T>::iterator pos)
{
    return vector<T>::iterator();
}

template <typename T>
vector<T>::iterator vector<T>::erase(vector<T>::iterator first, vector<T>::iterator last)
{
    return vector<T>::iterator();
}

template <typename T>
void vector<T>::push_back(const T& value)
{

}

template <typename T>
void vector<T>::push_back(T& value)
{

}

template <typename T>
void vector<T>::pop_back()
{

}

template <typename T>
void vector<T>::resize(size_t count)
{

}

template <typename T>
void vector<T>::resize(size_t count, const T& value)
{

}


#endif // __VECTOR_H__ //