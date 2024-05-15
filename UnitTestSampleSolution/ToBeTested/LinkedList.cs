using System.Collections;

namespace ToBeTested;

public class LinkedList<T> : IEnumerable<T>
{
    private List<T> internalList = new();

    public void Add(T item) => internalList.Add(item);
    public IEnumerator<T> GetEnumerator()
    {
        return internalList.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }
}