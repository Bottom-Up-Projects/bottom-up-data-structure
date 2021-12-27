#include "deque.h"

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
