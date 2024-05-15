#include "LinkedList.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

using namespace ToBeTested;

TEST(LinkedListTest, AddingWorks)
{
  ToBeTested::LinkedList<int> list{};
  list.Add(3);
  list.Add(5);
  list.Add(7);

  ASSERT_THAT(list, testing::ElementsAre(3,5,7));
}
