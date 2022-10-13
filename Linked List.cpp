#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};
class LinkedList
{
public:


    //functions
    void addFirst(int n)
    {
        Node* newnode = new Node;
        newnode->data = n;
        newnode->next = nullptr;

        if(head == nullptr)
        {
            head = newnode;
            tail = head;
        }
        else
        {
            newnode->next = head;
            head = newnode;

        }
        size++;
    }
    void addLast(int n)
    {
        Node* newnode = new Node;
        newnode->data = n;
        newnode->next = nullptr;

        if(head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }
    void addAtIndex(int index,int num)
    {
        Node* newnode = new Node;
        newnode->data = num;
        newnode->next = nullptr;

        if(index == 0)
        {
            addFirst(num);
        }
        else{
            Node* current = head;
            for(int i = 1; i < index; i++)
            {
                current = current->next;
                Node* temp = current->next;
                current->next = newnode;
                (current->next)->next = temp;
                size++;
            }
        }
    }

    void selection()
    {
        Node* current = head;
        Node* checker = head->next;
        Node* min = current;
        int temp;

            while(current != tail)
            {

                min = current;
                while(checker != nullptr)
                {
                    if( min->data > checker->data)
                    {
                        min = checker;
                    }
                    checker = checker->next;

                }

                temp = current -> data;
                current->data = min->data;
                min->data = temp;
                current = current->next;
                checker = current->next;


            }




        }




    void swap()
    {
        Node* current = head;
        Node* currentNext = head->next;
        int temp;
        bool swapped = true;
        while(swapped == true)
        {
            swapped = false;
            current = head;
            currentNext = head->next;

            while(current != tail)
            {
                if(current->data > currentNext->data)
                {
                    temp = current->data;
                    current->data = currentNext->data;
                    currentNext->data = temp;
                    current = current->next;
                    currentNext = currentNext->next;
                    swapped = true;
            }
            else
                {
                    current = current->next;
                    currentNext=currentNext->next;
                }

        }

        }


    }

    void print()
    {
        Node* current = head;
        while(current != nullptr)
        {
            cout << current->data << endl;
            current=current->next;
        }
    }


private:
    Node* head = nullptr;
    Node* tail = nullptr;
    int size = 0;
};

int main()
{
    LinkedList call;
    call.addLast(10);
    call.addLast(8);
    call.addLast(3);
    call.addLast(5);
    call.addLast(1);
    call.print();

//    call.swap();
 //   call.print();
    call.selection();
    call.print();

    return 0;
}
