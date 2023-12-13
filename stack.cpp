// #include <iostream>
// using namespace std;
// #define MAX_SIZE 100 // Maximum size of the stack

// int stack[MAX_SIZE];
// int top = -1;

// bool isEmpty() {
//     return (top == -1);
// }

// bool isFull() {
//     return (top == MAX_SIZE - 1);
// }

// void  PUSH(int value) {
//     if (isFull()) {
//          cout << "Stack Overflow\n";
//         return;
//     }
//     stack[++top] = value;
//      cout << "Pushed " << value << " onto the stack.\n";
// }

// void POP() {
//     if (isEmpty()) {
//          cout << "Stack Underflow\n";
//         return;
//     }
//     int poppedValue = stack[top--];
//      cout << "Popped " << poppedValue << " from the stack.\n";
// }

// void DISPLAY() {
//     if (isEmpty()) {
//          cout << "Stack is empty.\n";
//         return;
//     }
//      cout << "Elements in the stack: ";
//     for (int i = 0; i <= top; ++i) {
//          cout << stack[i] << " ";
//     }
//      cout << "\n";
// }

// void TOP() {
//     if (isEmpty()) {
//          cout << "Stack is empty, no top element.\n";
//         return;
//     }
//      cout << "Top element: " << stack[top] << "\n";
// }

// int main() {

//     PUSH(5);
//     PUSH(2);
//     PUSH(3);
//     POP();
//    cout<< isEmpty() <<endl;
//     PUSH(6);
//     PUSH(9);
//     PUSH(3);
//     DISPLAY();
//    cout<< isFull() <<endl;
//     TOP();

//     return 0;
// }






#include <iostream>
using namespace std;

int queue[6];
int front = -1, rear = -1;

bool isEmpty() {
    return (front == -1 && rear == -1);
}

bool isFull() {
    return (rear == 5);
}

void enQueue(int value) {
    if (isFull()) {
          cout << "Queue Overflow\n";
        return;
    } else if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = value;
      cout << "Enqueued " << value << " into the queue.\n";
}

void deQueue() {
    if (isEmpty()) {
          cout << "Queue Underflow\n";
        return;
    } else if (front == rear) {
          cout << "Dequeued " << queue[front] << " from the queue.\n";
        front = rear = -1;
    } else {
          cout << "Dequeued " << queue[front] << " from the queue.\n";
        front++;
    }
}

void Display() {
    if (isEmpty()) {
          cout << "Queue is empty.\n";
        return;
    }
      cout << "Elements in the queue: ";
    for (int i = front; i <= rear; ++i) {
          cout << queue[i] << " ";
    }
      cout << "\n";
}

int main() {
    enQueue(5);
    enQueue(2);
    enQueue(3);
    deQueue();
    deQueue();
    enQueue(6);
    enQueue(3);
    Display();

    return 0;
}
