using TurboCollections;

namespace Tester;

public class Tests
{
    [Test]
    public void CountingUpOrder()
    {
        List<int> list = new List<int> { 5, 2, 4, 6, 1,3 };
        List<int> expected = new List<int> { 1, 2, 3, 4, 5, 6 };

        TurboSort.SortingOutLists(list);

        Assert.AreEqual(expected, list);
        
        //  I DONT KNOW WHAT ELSE TO TEST
        
    }
}