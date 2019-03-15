#include <iostream>
#include "Queue.h"
using std::cout;
using std::endl;

int main(){
    cs273::Queue<int> queue;

    queue.push(7);
    queue.push(9);
    queue.push(2);
    queue.push(4);
    queue.push(6);

    cout << queue.front();

    queue.pop();
    cout << queue.front() << endl;

    cs273::Queue<int> queue2(queue);
    cout << queue2.front() << endl;

    queue.isEmpty();
    cout << queue.isEmpty() << endl;
}