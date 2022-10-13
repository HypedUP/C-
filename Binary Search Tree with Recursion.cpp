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
    //recursive version of search function
    bool call_Search(int n)//the initial search
    {
        cout << search(root,n);
    }
    bool search(Node* current, int n)// recursive search with root and number we are looking for as arguement.
    {
        if(current == nullptr)//check if current node is at end of bst and return false if true
        {
            return false;
        }//end if
        else if(current->data == n)//check if current node is holding the data we are looking for if true return true
        {
            return true;
        }//end if
        else{
        if(current->data > n)// checking if current node is larger and passing the left node if it is
        {
            current = current->left;
            return search(current,n);
        }//end if
        else if(current->data < n)//checking if current node is smaller and passing the right node if it is
        {
            current = current->right;
            return search(current,n);
        }//end else if
        }//end else
    }



    void delNode(int n)
    {
        //check if root is empty
        if(root == nullptr)
        {
            cout << "BST contains no data\n";
        }
        else
        {
            if(!search(root,n))
            {
                cout << "Value is not found\n";
                return;
            }

        }


    }





    void insert(int n)
    {
            insertNum(root,n);
    }
    void insertNum(Node* &current, int n)//recursive insert function
    {
        if(current == nullptr)
        {
            Node* newNode = new Node;
            newNode->data = n;
            current = newNode;
        }
        else if(current->data > n)
        {
            insertNum(current->left,n);
        }
        else if(current->data < n)
        {
            insertNum(current->right,n);
        }
    }//End of insertNum



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
    Node* parentNode = nullptr;
    Node* parentChild = nullptr;

};

int main()
{
    bTree call;
    call.insert(4);
    call.insert(5);
    call.insert(3);
    call.insert(2);
    call.insert(6);
    call.insert(7);
    call.insert(1);
    cout << "Printing numbers: \n";
    call.print_inorder();

    cout << "\nCalling search function: now searching for #10 \n";

    call.call_Search(10);
    cout << "\nCalling search function: now searching for #7 \n";
    call.call_Search(7);
    cout << "\ncalling delete node function for # 6\n" ;
    call.delNode(11);
    call.print_inorder();
}
