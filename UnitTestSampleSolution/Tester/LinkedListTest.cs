namespace Tester;
using ToBeTested;

public class LinkedListTest
{

    [Test]
    public void AddingElementsWorks()
    {
        //given
        var list = new LinkedList<int>();
        
        //when
        list.Add(3);
        list.Add(5);
        list.Add(7);
        
        //then
        CollectionAssert.AreEqual(new []{3,5,7}, list);
    }
}