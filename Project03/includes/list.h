#ifndef __LIST_H__
#define __LIST_H__
#include "iterator.h"

typedef unsigned long size_t;

template <typename T>
class list{
    private:
        struct Node{
            T data;
            Node* next;
            Node* prev;
        };
        Node* head;
        Node* tail;
        size_t _size;

    public:
        class iterator: public Iterator<list<T>, T>{

        };

        list();
        list(size_t size);
        list(size_t size, const T& value);
        list(const list& other);
        template <class InputIt>
        list(InputIt first, InputIt last);
        ~list();

        list<T>& operator=(const list<T>& other);

        void assign(size_t count, const T& value);
        template <class InputIt>
        void assign(InputIt first, InputIt last);

        const T& front() const;
        const T& back() const;

        iterator begin();
        iterator end();
        iterator rbegin();
        iterator rend();

        bool empty();
        size_t size();

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
        void resize(size_t count, T& value = T());
        void swap(list<T>& other);

        void merge(list<T>& other);
        template <class Compare>
        void merge(list<T>& other, Compare comp);
        void splice(iterator pos, list<T>& other);
        void splice(iterator pos, list<T>& other, iterator it);
        void splice(iterator pos, list<T>& other, iterator first, iterator last);
        void remove(const T& value);
        template <class UnaryPredicate>
        void remove_if(UnaryPredicate pred);
        void reverse();
        void unique();
        template <class BinaryPredicate>
        void unique(BinaryPredicate binary_pred);
        void sort();
        template <class Compare>
        void sort(Compare comp);
};


#endif