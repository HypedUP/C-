#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left = nullptr;
    Node *right = nullptr;
};
class bTree
{
    public:
        bool search(int n)
        {
            bool found = false;
            Node* current = nullptr;
            current = root;
            while(current != nullptr)
            {
                if(current->data == n)
                {
                    found = true;
                    return found;
                }
                else if(current->data > n)
                {
                    current = current->left;
                }

                else
                {
                    current = current->right;
                }


            }
            return found;

        }


        void delNode(int n);

        void insert(int n)
        {
            Node* current = nullptr;
            Node* newNode = new Node;
            Node* prev = nullptr;
            newNode->data = n;

            if(root == nullptr)
            {
                root = newNode;

            }
            else{

                current = root;
                while(current != nullptr)
                {
                    prev = current;
                    if(current->data > n)
                    {
                        current = current->left;
                    }
                    else if(current->data < n){
                        current = current->right;
                    }
                    else{
                        return;
                    }
                }//end of while

                if(prev->data > n)
                    {
                        prev->left = newNode;
                    }
                else
                {
                    prev->right = newNode;
                }
            }
    }//endInsertFunction

    void print_inorder()
    {
        printLeaf(root);

    }
    void printLeaf(Node* current)
    {
        if(current == nullptr)
        {
            return;
        }
        else
        {
            printLeaf(current->left);
            cout << "\n" << current->data << "\n";
            printLeaf(current->right);

        }


    }

private:
    Node* root = nullptr;

};






int main()
{
    bTree call;

    call.insert(6);
    call.insert(3);
    call.insert(4);
    call.insert(2);
    call.insert(2);
    call.insert(8);
    call.insert(10);
    call.insert(11);
    cout << "result of search: ";
     cout<< call.search(10)<< "\n";
    cout << "Printing in order \n";
    call.print_inorder();





    return 0;
}
