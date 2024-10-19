template <typename T>
class Node{
    public:
        T data;
        std::shared_ptr<Node<T>> next;
        Node(const T& value) : data(value), next(nullptr) {}
};

template <typename T>
class Queue{
    private:
    /*
     * head and tail are pointers to the first and last nodes of the queue, they are used as shared pointer to avoid memory leaks 
     * and to ensure that the nodes are not deleted before the queue is destroyed.
     * head and tail are initialized to nullptr.
     * They are declared as shared pointer instead of unique pointer to avoid the multiple ownership of any node by the head and tail
     * pointers which is happening at enqueuing the first node.
    */
        std::shared_ptr<Node<T>> head; 
        std::shared_ptr<Node<T>> tail;
    public:
        Queue() : head(nullptr), tail(nullptr) {}

        /**
         * Adds a new node with the given value to the end of the queue.
         * @param value The value to be stored in the new node.
         */
        void enqueue(const T& value){
            std::shared_ptr<Node<T>> newNode = std::make_shared<Node<T>>(value);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        
        /**
         * Removes the node at the front of the queue and returns its value.
         * @throw std::runtime_error if the queue is empty
         * @return The value of the node at the front of the queue.
         */
        T dequeue(){
            T data;
            if(head == nullptr){
                throw std::runtime_error("Queue is empty");
            }else if(head == tail){
                data = head->data;
                head = nullptr;
                tail = nullptr;
            }else{
                data = head->data;
                head = head->next;
            }
            return data;
        }   

        /**
         * Returns the value of the node at the front of the queue.
         * @throw std::out_of_range if the queue is empty
         * @return The value of the node at the front of the queue
         */
        T front(){
            if(head == nullptr){
                throw std::runtime_error("Queue is empty");
            }
            return head->data;
        }

        bool isEmpty(){
            return head == nullptr;
        }
};