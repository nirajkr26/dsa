#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        prev = NULL;
        next = NULL;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        return;
    }

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&head, int d)
{

    Node *newNode = new Node(d);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPosition(Node *&head, int d, int position)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    int count = 1;
    Node *temp = head;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, d);
        return;
    }

    Node *newNode = new Node(d);
    temp->next->prev = newNode;
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
}

void deleteAtHead(Node *&head)
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        head = NULL;
        return;
    }

    Node *temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
}

void deleteAtPosition(Node *&head, int position)
{
    if (head == NULL)
        return;
    if (position == 1)
    {
        deleteAtHead(head);
        return;
    }

    int count = 1;
    Node *curr = head;
    while (count < position)
    {
        curr = curr->next;
        count++;
    }

    curr->prev->next = curr->next;
    if (curr->next != NULL)
        curr->next->prev = curr->prev;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;

    insertAtHead(head, 5);
    insertAtTail(head, 15);
    insertAtTail(head, 25);
    insertAtTail(head, 35);
    insertAtPosition(head, 2, 3);
    deleteAtHead(head);
    deleteAtPosition(head, 4);

    display(head);
    return 0;
}