#include <gtest/gtest.h>
#include "../queue.h" // Include your Queue class header file

TEST(QueueTest, EmptyQueue) {
    Queue<int> queue;
    EXPECT_TRUE(queue.isEmpty());
}

TEST(QueueTest, EnqueueAndDequeue) {
    Queue<int> queue;
    queue.enqueue(1);
    EXPECT_FALSE(queue.isEmpty());
    EXPECT_EQ(1, queue.dequeue());
    EXPECT_TRUE(queue.isEmpty());
}

TEST(QueueTest, MultipleEnqueueAndDequeue) {
    Queue<int> queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    EXPECT_EQ(1, queue.dequeue());
    EXPECT_EQ(2, queue.dequeue());
    EXPECT_EQ(3, queue.dequeue());
    EXPECT_TRUE(queue.isEmpty());
}

TEST(QueueTest, front) {
    Queue<int> queue;
    queue.enqueue(1);
    EXPECT_EQ(1, queue.front());
    EXPECT_FALSE(queue.isEmpty());
}

TEST(QueueTest, DequeueFromEmptyQueue) {
    Queue<int> queue;
    EXPECT_THROW(queue.dequeue(), std::runtime_error);
}

TEST(QueueTest, PeekFromEmptyQueue) {
    Queue<int> queue;
    EXPECT_THROW(queue.front(), std::runtime_error);
}

TEST(QueueTest, EnqueueAndPeekMultipleTimes) {
    Queue<int> queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    EXPECT_EQ(1, queue.front());
    EXPECT_EQ(1, queue.front());
    EXPECT_EQ(1, queue.dequeue());
    EXPECT_EQ(2, queue.front());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}