#include "iterator.h"

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
