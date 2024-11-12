#include <iostream>
using namespace std;

//struct Node {
//    int data;
//    Node* next;
//
//    Node(int value) : data(value), next(nullptr) {}
//};
//
//class Stack {
//private:
//    Node* head;
//
//public:
//    Stack() : head(nullptr) {}
//
//    void push(int value) {
//        Node* newNode = new Node(value);
//        newNode->next = head;
//        head = newNode;
//    }
//
//    void PopTop() {
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl;
//            return;
//        }
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//    }
//
//    int PeekKeep() const {
//        if (isEmpty()) {
//            cout << "Stack is empty." << endl;
//            return -1;
//        }
//        return head->data;
//    }
//
//    bool isEmpty() const {
//        return head == nullptr;
//    }
//
//    ~Stack() {
//        while (!isEmpty()) {
//            PopTop();
//        }
//    }
//};
//
//int main() {
//    Stack stack;
//
//    stack.push(10);
//    stack.push(20);
//    stack.push(30);
//
//    cout << "Top element: " << stack.PeekKeep() << endl;
//
//    stack.PopTop();
//    cout << "After popping, top element: " << stack.PeekKeep() << endl;
//
//    stack.PopTop();
//    stack.PopTop();
//
//    if (stack.isEmpty()) {
//        cout << "Stack is empty." << endl;
//    }
//}
// 
// 2
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int d) : data(d), next(nullptr) {}
//};
//
//class LinkedList {
//public:
//    Node* head;
//
//    LinkedList() : head(nullptr) {}
//    void Add(int data) {
//        Node* newNode = new Node(data);
//        newNode->next = head;
//        head = newNode;
//    }
//    Node* Clone() const {
//        Node* newHead = nullptr;
//        Node* current = head;
//        return newHead;
//    }
//    LinkedList operator+(const LinkedList& other) const {
//        LinkedList result;
//        return result;
//    }
//    LinkedList operator*(const LinkedList& other) const {
//        LinkedList result;
//        return result;
//    }
//    void Print() const {
//        Node* current = head;
//        while (current != nullptr) {
//            cout << current->data << " ";
//            current = current->next;
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    LinkedList list1;
//    list1.Add(1);
//    list1.Add(2);
//    list1.Add(3);
//
//    LinkedList list2;
//    list2.Add(3);
//    list2.Add(4);
//    list2.Add(5);
//
//    cout << "List 1: ";
//    list1.Print();
//
//    cout << "List 2: ";
//    list2.Print();
//
//    LinkedList unionList = list1 + list2;
//    cout << " List +: ";
//    unionList.Print();
//
//    LinkedList intersectionList = list1 * list2;
//    cout << "List *: ";
//    intersectionList.Print();
//}

//я не дуже зрозумів як робить "Функція для клонування списку" і-за цього не дуже зрозумів завдання