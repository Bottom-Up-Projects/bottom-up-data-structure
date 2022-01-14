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

template <class Container, typename T>
Iterator<Container, T>::Iterator()
{

}

template <class Container, typename T>
Iterator<Container, T>::Iterator(const Iterator& other)
{

}

template <class Container, typename T>
Iterator<Container, T>& Iterator<Container, T>::operator=(const Iterator& other)
{
    return Iterator();
}

template <class Container, typename T>
Iterator<Container, T>& Iterator<Container, T>::operator++()
{
    return Iterator();
}

template <class Container, typename T>
Iterator<Container, T>& Iterator<Container, T>::operator--()
{
    return Iterator();
}

template <class Container, typename T>
T& Iterator<Container, T>::operator*()
{
    return T();
}

template <class Container, typename T>
bool Iterator<Container, T>::operator==(const Iterator& other)
{
    return true;
}

template <class Container, typename T>
bool Iterator<Container, T>::operator!=(const Iterator& other)
{
    return true;
}

#endif  // __ITERATOR_H__ //