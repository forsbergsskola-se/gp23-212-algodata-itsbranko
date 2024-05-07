
namespace TurboCollections
{
    public static class TurboSort
    {
        public static void SortingOutLists(List<int> list)
        {
            int n = list.Count;
            for (int i = 0; i < n - 1; i++)
            {
                int min = i;
                for (int j = i + 1; j < n; j++)
                {
                    if (list[j] < list[min])
                    {
                        min = j;
                    }
                }
                if (min != i)
                {
                    int newSlot = list[i];
                    list[i] = list[min];
                    list[min] = newSlot;
                }
            }
        }
    }
}
