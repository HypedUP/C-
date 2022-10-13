#include <iostream>

using namespace std;
class Queue
{
    private:
        int size = 0;
        int front = 0;
        int back = 0;
        int capacity = 3;
        int queue[3] = {0,0,0};

    public:
        bool isFull()
        {
            if(size == capacity)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        bool isEmpty()
        {
            if(size == 0)
            {
                return true;
            }
        }
        void pushQueue(int n)
        {
            if(front == 0)
            {

                queue[back] = n;
                cout << n << " has been added to the queue. \n";
                size++;
                back++;
            }
            else if(back == capacity)
            {
                back = 0;
            }
            else
            {
                queue[back] = n;
                cout << n << " has been added to the queue. \n";
                size++;
                back++;
            }
        }
        int popQueue()
        {
            if(size == 0)
            {
                cout << "List is Empty! \n";
                return -1;
            }
            else if(front == capacity)
            {
                front = 0;
            }
            else
            {
                front++;
                size--;
                cout << queue[front-1] << " has been popped. " << endl;
                return queue[front-1];

            }
        }

        int isFront()
        {
            cout << queue[front];
            return queue[front];
        }
};

int main()
{
    Queue list;
    list.pushQueue(1);
    list.pushQueue(2);
    list.pushQueue(3);
    list.isFront();
    list.isFull();
    list.popQueue();
    list.popQueue();
    list.popQueue();

    list.isFront();
    list.pushQueue(10);
    list.pushQueue(20);
    list.pushQueue(30);





    return 0;
}
