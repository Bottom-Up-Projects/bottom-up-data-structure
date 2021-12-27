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


#endif // __VECTOR_H__ //