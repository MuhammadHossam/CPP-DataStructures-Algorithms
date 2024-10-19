#include <gtest/gtest.h>
#include "../stack.h" // Include your Stack class header file

TEST(StackTest, EmptyStack) {
    Stack<int> Stack;
    EXPECT_TRUE(Stack.isEmpty());
}

TEST(StackTest, PushAndPop) {
    Stack<int> Stack;
    Stack.push(1);
    EXPECT_FALSE(Stack.isEmpty());
    EXPECT_EQ(1, Stack.pop());
    EXPECT_TRUE(Stack.isEmpty());
}

TEST(StackTest, MultiplePushAndPop) {
    Stack<int> Stack;
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    EXPECT_EQ(3, Stack.pop());
    EXPECT_EQ(2, Stack.pop());
    EXPECT_EQ(1, Stack.pop());
    EXPECT_TRUE(Stack.isEmpty());
}

TEST(StackTest, Peek) {
    Stack<int> Stack;
    Stack.push(1);
    EXPECT_EQ(1, Stack.peek());
    EXPECT_FALSE(Stack.isEmpty());
}

TEST(StackTest, PopFromEmptyStack) {
    Stack<int> Stack;
    EXPECT_THROW(Stack.pop(), std::runtime_error);
}

TEST(StackTest, PeekFromEmptyStack) {
    Stack<int> Stack;
    EXPECT_THROW(Stack.peek(), std::runtime_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}