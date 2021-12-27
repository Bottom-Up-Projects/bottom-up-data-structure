#include "vector.h"

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
