#ifndef __ITERATOR_H__
#define __ITERATOR_H__


template<class Container, typename T>
class Iterator{
    private:
        T* pointer;
    public:
        Iterator();
        Iterator(const Iterator& other);

        Iterator& operator=(const Iterator& other);
        Iterator& operator++();
        Iterator& operator--();
        T& operator*();
        bool operator==(const Iterator& other);
        bool operator!=(const Iterator& other);
};

#endif  // __ITERATOR_H__ //