#include <iostream>
using namespace std;

#define SIZE 5

int arr[SIZE];
int front = 0;
int rear = -1;

void enqueue(int x) {
    if (rear == SIZE - 1) {
        cout << "Queue is full\n";
        return;
    }

    rear++;
    arr[rear] = x;
}

void dequeue() {
    if (front > rear) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Deleted: " << arr[front] << endl;
    front++;
}

void display() {
    if (front > rear) {
        cout << "Queue is empty\n";
        return;
    }

    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    enqueue(60);

    display();

    return 0;
}
