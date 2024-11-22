struct Node{
    int data;
    Node* left;
    Node* right;
};

class BST{
    public:
        Node* root;
        BST() : root(nullptr){}
        ~BST(){}        //TBD


    private:
        Node* newNode(int data){
            Node* node = new Node();
            node->data = data;
            node->left = nullptr;
            node->right = nullptr;
            return node;
        }

        Node* insertNode(Node* node, int data){
            if(node == nullptr){
                return newNode(data);
            }
            else if(node->data > data){
                node->left = insertNode(node->left, data);
            }
            else if(node->data < data){
                node->right = insertNode(node->right, data);
            }
            return node;
        }

};