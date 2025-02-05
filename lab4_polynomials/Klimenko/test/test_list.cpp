#include <gtest.h>
#include "list.h"

TEST(List, can_initialize_list) {
	ASSERT_NO_THROW(List<int> l());
}

TEST(List, can_get_size_of_an_empty_list) {
	List<int> list;
	EXPECT_EQ(list.getSize(), 0);
}

TEST(List, can_copy_from_the_other_list) {
	List<int> l1();
	ASSERT_NO_THROW(List<int> l2());
}

TEST(List, can_copy_from_list_to_list) {
    List<int> original;
    original.insert(1, 0);
    original.insert(2, 1);
    original.insert(3, 2);

    List<int> copy(original);

    EXPECT_EQ(copy.getSize(), 3);
    EXPECT_EQ(copy.valueSearch(0), 1);
    EXPECT_EQ(copy.valueSearch(1), 2);
    EXPECT_EQ(copy.valueSearch(2), 3);
}

TEST(List, can_insert_at_beginning) {
    List<int> list;
    list.insert(1, 0);
    EXPECT_EQ(list.valueSearch(0), 1);
    EXPECT_EQ(list.getSize(), 1);
}

TEST(List, can_insert_at_end) {
    List<int> list;
    list.insert(1, 0);
    list.insert(2, 1);
    EXPECT_EQ(list.valueSearch(1), 2);
    EXPECT_EQ(list.getSize(), 2);
}

TEST(List, can_remove_first_element) {
    List<int> list;
    list.insert(1, 0);
    list.insert(2, 1);
    list.remove(0);
    EXPECT_EQ(list.getSize(), 1);
    EXPECT_EQ(list.valueSearch(0), 2);
}

TEST(List, can_remove_last_element) {
    List<int> list;
    list.insert(1, 0);
    list.insert(2, 1);
    list.remove(1);
    EXPECT_EQ(list.getSize(), 1);
    EXPECT_EQ(list.valueSearch(0), 1);
}

TEST(List, value_search_valid_index) {
    List<int> list;
    list.insert(1, 0);
    list.insert(2, 1);
    EXPECT_EQ(list.valueSearch(0), 1);
    EXPECT_EQ(list.valueSearch(1), 2);
}

TEST(List, value_search_invalid_index) {
    List<int> list;
    list.insert(1, 0);
    list.insert(2, 1);
    EXPECT_THROW(list.valueSearch(2), std::out_of_range);
}

TEST(List, is_empty_on_new_list) {
    List<int> list;
    EXPECT_TRUE(list.isEmpty());
}

TEST(List, is_empty_after_insert) {
    List<int> list;
    list.insert(1, 0);
    EXPECT_FALSE(list.isEmpty());
}

TEST(List, brackets_valid_index) {
    List<int> list;
    list.insert(1, 0);
    list.insert(2, 1);
    EXPECT_EQ(list[0], 1);
    EXPECT_EQ(list[1], 2);
}

TEST(List, brackets_invalid_index) {
    List<int> list;
    list.insert(1, 0);
    EXPECT_THROW(list[1], std::out_of_range);
}
