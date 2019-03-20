#include <iostream>
#include "Queue.h"
using std::cout;
using std::endl;

int main(){
    cs273::Queue<int> queue;
    cout << "size: " << queue.size() << endl;

    queue.push(7);
    queue.push(9);
    queue.push(2);
    queue.push(4);
    queue.push(6);

    cout << "size: " << queue.size() << endl;
    cout << "queue front before pop: " << queue.front() << endl;

    queue.pop();
    cout << "queue front after pop: " << queue.front() << endl;

    cs273::Queue<int> queue2(queue);
    
    cout << "queue2 front: " << queue2.front() << endl;

    queue.isEmpty();
    cout << "is queue empty? " << queue.isEmpty() << endl;
}