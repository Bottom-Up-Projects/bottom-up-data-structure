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

#endif // __DEQUE_H__ //