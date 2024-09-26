#include <iostream>
#include <queue>

using namespace std;

class Queue {
private:
    queue<int> q;

public:
    // Enqueue (push) function
    void enqueue(int item) {
        q.push(item);
    }

    // Dequeue (pop) function
    int dequeue() {
        if (!q.empty()) {
            int frontItem = q.front();
            q.pop();
            return frontItem;
        } else {
            cout << "Queue is empty." << endl;
            return -1; // You can choose to return a different value for an empty queue.
        }
    }
};

int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    cout << "Dequeued: " << myQueue.dequeue() << endl;
    cout << "Dequeued: " << myQueue.dequeue() << endl;
    cout << "Dequeued: " << myQueue.dequeue() << endl;
    cout << "Dequeued: " << myQueue.dequeue() << endl; // This will show that the queue is empty.

    return 0;
}
