#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> queue)
{
    
}

int main()
{
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    myQueue.pop();

    cout << "Size of queue is: " << myQueue.size() << endl;
    cout << "First element of the queue is: " << myQueue.front() << endl;
    cout << "Last element of the queue is: " << myQueue.back() << endl;

    cout << "myQueue" << endl;
    printQueue(myQueue);
}
