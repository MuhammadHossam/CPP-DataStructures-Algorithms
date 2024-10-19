
#include <memory>

template <typename T>
class Node {
public:
    T data;
    std::unique_ptr<Node<T>> next;

    Node(const T& value) : data(value), next(nullptr) {}
};

template <typename T>
class Stack {
private:
    std::unique_ptr<Node<T>> top;

public:
    Stack() : top(nullptr) {}

    /**
     * Pushes a new node onto the top of the stack with the given value.
     * @param value The value to be stored in the new node.
     */
    void push(const T& value) {
        std::unique_ptr<Node<T>> newNode = std::make_unique<Node<T>>(value); // Create a new node with the given value.
        newNode->next = std::move(top); // Top pointer is pointing now to nullptr.
        top = std::move(newNode); // Top pointer now is pointing to the new node and new node is pointing to nullptr.
    }

    /**
     * Removes the top element from the stack and returns its value.
     * @throw std::runtime_error if the stack is empty
     * @return The value of the top element
     */
    T pop() {
        if (top == nullptr) {
            throw std::runtime_error("Stack is empty");
        }
        T value = top->data;
        top = std::move(top->next);
        return value;
    }

    /**
     * @return True if the stack is empty, false otherwise.
     */
    bool isEmpty() const {
        return top == nullptr;
    }

    /**
     * Returns the value of the top element on the stack without removing it.
     * @throw std::runtime_error if the stack is empty
     * @return The value of the top element
     */
    T peek() const {
        if (top == nullptr) {
            throw std::runtime_error("Stack is empty");
        }
        return top->data;
    }
};
