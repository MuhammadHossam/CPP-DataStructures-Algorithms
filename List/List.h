template <typename T>
class Node {
public:
    T value;
    Node<T>* next;

    Node(const T& val) : value(val), next(nullptr) {}
};

template <typename T>
class List {
private:
    Node<T>* head_;
    Node<T>* tail_;
    size_t size_;

public:

    List() : head_(nullptr), tail_(nullptr), size_(0) {}

    /**
     * Destructor for the List class.
     * It deallocates memory used by the list by traversing
     * through each node and deleting them to prevent memory leaks.
     */
    ~List() {
        Node<T>* curr = head_;
        while (curr != nullptr) {
            Node<T>* next = curr->next;
            delete curr;
            curr = next;
        }
    }

    /**
     * Inserts a new node at the specified position in the list containing the given value.
     * @param position The index at which to insert the new node (0-based indexing).
     * @param value The value to be stored in the new node.
     */
    void insert(size_t position, const T& value) {
        if (position > size_) {
            throw std::out_of_range("Position out of range");
        }
    
        Node<T>* newNode = new Node<T>(value);
    
        if (position == 0) {
            newNode->next = head_;
            head_ = newNode;
            if (tail_ == nullptr) {
                tail_ = newNode;
            }
        } else if (position == size_) {
            tail_->next = newNode;
            tail_ = newNode;
        } else {
            Node<T>* prev = head_;
            for (size_t i = 0; i < position - 1; i++) {
                prev = prev->next;
            }
            newNode->next = prev->next;
            prev->next = newNode;
        }
    
        size_++;
    }

    /**
     * Removes the first occurrence of the given value from the list.
     * It iterates through the list and keeps track of the previous node.
     * If the value is found, it checks if the current node is the head_
     * and updates the head_ accordingly. If the current node is not the head_,
     * it updates the previous node's next pointer to skip over the current node.
     * Finally, it deletes the removed node and decrements the list size.
     * @param value The value to be removed from the list.
     */
    void Remove(const T& value) {
        Node<T>* curr = head_;
        Node<T>* prev = nullptr;
        while (curr != nullptr && curr->value != value) {
            prev = curr;
            curr = curr->next;
        }
        if (curr == nullptr) {
            return; // Empty List or value not found
        }
        if (prev == nullptr) {
            head_ = curr->next; // Update head_ if curr is the head_ (first node)
        } else {
            prev->next = curr->next; // Update prev->next if curr is not the head_
        }
        delete curr; // Delete the removed node
        size_--; // Decrement the list size
    }

    void Remove(size_t position,const T& value){
        if (position > size_) {
            throw std::out_of_range("Position out of range");
        }
        Node<T>* curr = head_;
        Node<T>* prev = nullptr;
        for (size_t i = 0; i < position; i++) {
            prev = curr;
            curr = curr->next;
        }
        if (prev == nullptr) {
            head_ = curr->next; // Update head_ if curr is the head_ (first node)
        } else {
            prev->next = curr->next; // Update prev->next if curr is not the head_
        }
        delete curr; // Delete the removed node
        size_--; // Decrement the list size
    }

    /**
     * Searches for the given value in the list.
     * It iterates through the list until either the value is found or
     * the end of the list is reached.
     * @param value The value to be searched for in the list.
     * @return FOUND if the value is found, NOT_FOUND otherwise.
     */
    SearchResult Search(const T& value) const {
        Node<T>* curr = head_;
        while (curr != nullptr) {
            if (curr->value == value) {
                return SearchResult::FOUND;
            }
            curr = curr->next;
        }
        return SearchResult::NOT_FOUND;
    }

    /**
     * Prints the elements of the list in order.
     * It iterates through the list from head_ to tail_ and prints
     * the value of each node.
     * @return TraversalResult::SUCCESS if the list is traversed successfully.
     */
    TraversalResult Traverse() const {
        Node<T>* curr = head_;
        while (curr != nullptr) {
            std::cout << curr->value << " ";
            curr = curr->next;
        }
        std::cout << std::endl;
        return TraversalResult::SUCCESS;
    }

/**
 * Returns the number of elements in the list.
 * @return The number of elements in the list.
 */
    size_t Size() const {
        return size_;
    }

    /**
     * Adds a new node to the end of the list containing the given value.
     * This is equivalent to calling insert(size_, value).
     * @param value The value to be stored in the new node.
     */
    void push_back(const T& value) {
        insert(size_, value);
    }
    
    /**
     * Adds a new node to the beginning of the list containing the given value.
     * This is equivalent to calling insert(0, value).
     * @param value The value to be stored in the new node.
     */
    void push_front(const T& value) {
        insert(0, value);
    }

    /**
     * Removes the last element from the list.
     * This is equivalent to calling Remove(size_-1).
     */
    void pop_back(){
        Remove(size_-1);
    }
    /**
     * Removes the first element from the list.
     * This is equivalent to calling Remove(0).
     */
    void pop_front(){
        Remove(0);
    }

};