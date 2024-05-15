#pragma once
#include <vector>

namespace ToBeTested
{
    template<typename T>
    class LinkedList
    {
        std::vector<T> internalList{};
    public:
        using value_type = T;
        using iterator = typename std::vector<T>::iterator;
        using const_iterator = typename std::vector<T>::const_iterator;
        void Add(T item);
        iterator begin()
        {
            return internalList.begin();
        }
        iterator end()
        {
            return internalList.end();
        }
        const_iterator begin() const
        {
            return internalList.begin();
        }
        const_iterator end() const
        {
            return internalList.end();
        }
    };






    template <typename T>
    void LinkedList<T>::Add(T item)
    {
        internalList.push_back(item);
    }
}


