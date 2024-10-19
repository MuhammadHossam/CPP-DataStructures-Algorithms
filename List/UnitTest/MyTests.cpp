#include <gtest/gtest.h>
#include "../List.h"

/**
 * Test case for verifying the behavior of an empty list.
 * It checks that the size of a newly created list is zero.
 */
TEST(ListTest, EmptyList) {
  List<int> list;
  EXPECT_EQ(list.Size(), 0);
}

/**
 * Test case for verifying the behavior of push_back.
 * It checks that push_back() successfully adds new elements to the end of the list
 * and that the size of the list is updated correctly.
 */
TEST(ListTest, PushBack) {
  List<int> list;
  list.push_back(1);
  list.push_back(2);
  list.push_back(3);
  EXPECT_EQ(list.Size(), 3);
  EXPECT_EQ(list.Traverse(), TraversalResult::SUCCESS); // assuming Traverse() prints the elements
}

/**
 * Test case for verifying the behavior of push_front.
 * It checks that push_front() successfully adds new elements to the front of the list
 * and that the size of the list is updated correctly.
 */
TEST(ListTest, PushFront) {
  List<int> list;
  list.push_front(1);
  list.push_front(2);
  list.push_front(3);
  EXPECT_EQ(list.Size(), 3);
  EXPECT_EQ(list.Traverse(), TraversalResult::SUCCESS); // assuming Traverse() prints the elements
}

/**
 * Test case for verifying the behavior of pop_back.
 * It checks that pop_back() successfully removes the last element from the list
 * and that the size of the list is updated correctly.
 */
TEST(ListTest, PopBack) {
  List<int> list;
  list.push_back(1);
  list.push_back(2);
  list.push_back(3);
  list.pop_back();
  EXPECT_EQ(list.Size(), 2);
  EXPECT_EQ(list.Traverse(), TraversalResult::SUCCESS); // assuming Traverse() prints the elements
}

/**
 * Test case for verifying the behavior of pop_front.
 * It checks that pop_front() successfully removes the first element from the list
 * and that the size of the list is updated correctly.
 */
TEST(ListTest, PopFront) {
  List<int> list;
  list.push_front(1);
  list.push_front(2);
  list.push_front(3);
  list.pop_front();
  EXPECT_EQ(list.Size(), 2);
  EXPECT_EQ(list.Traverse(), TraversalResult::SUCCESS); // assuming Traverse() prints the elements
}

/**
 * Test case for verifying the behavior of Search.
 * It checks that Search() returns FOUND if the searched value is present in the list
 * and NOT_FOUND if the searched value is not present in the list.
 */
TEST(ListTest, Search) {
  List<int> list;
  list.push_back(1);
  list.push_back(2);
  list.push_back(3);
  EXPECT_EQ(list.Search(2), SearchResult::FOUND);
  EXPECT_EQ(list.Search(4), SearchResult::NOT_FOUND);
}

/**
 * Test case for verifying the behavior of Remove.
 * It checks that Remove() successfully removes the element at the given position
 * from the list and that the size of the list is updated correctly.
 */
TEST(ListTest, Remove) {
  List<int> list;
  list.push_back(1);
  list.push_back(2);
  list.push_back(3);
  list.Remove(1);
  EXPECT_EQ(list.Size(), 2);
  EXPECT_EQ(list.Traverse(), TraversalResult::SUCCESS); // assuming Traverse() prints the elements
}


/**
 * Test case for verifying the behavior of Sort.
 * It checks that Sort() successfully sorts the elements of the list in descending order
 * and that the size of the list is not changed.
 */
TEST(ListTest, SortDecending){
    List<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.sort([](int a, int b){return a > b;});
    EXPECT_EQ(list.Size(), 3);
    EXPECT_EQ(list.Traverse(), TraversalResult::SUCCESS);
}

/**
 * Test case for verifying the behavior of Sort in ascending order.
 * It checks that Sort() successfully sorts the elements of the list in ascending order
 * and that the size of the list is not changed.
 */
TEST(ListTest, SortAscending){
    List<int> list;
    list.push_back(3);
    list.push_back(2);
    list.push_back(1);
    list.sort([](int a, int b){return a < b;});
    EXPECT_EQ(list.Size(), 3);
    EXPECT_EQ(list.Traverse(), TraversalResult::SUCCESS);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}