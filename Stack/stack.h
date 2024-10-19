
template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(const T& value) : data(value), next(nullptr) {}
};

template <typename T>
class Stack {
private:
    Node<T>* top;

public:
    Stack() : top(nullptr) {}

    /**
     * Pushes a new node onto the top of the stack with the given value.
     * @param value The value to be stored in the new node.
     */
    void push(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = top;
        top = newNode;
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
        Node<T>* temp = top;
        top = top->next;
        delete temp;
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
    T topElement() const {
        if (top == nullptr) {
            throw std::runtime_error("Stack is empty");
        }
        return top->data;
    }
};
