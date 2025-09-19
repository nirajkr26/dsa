
#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        if (this->next != NULL)
            this->next = NULL;
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

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, int d)
{
    Node *temp = new Node(d);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    Node *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = temp;
}

void insertAtPosition(Node *&head, int d, int position)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(head, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteAtHead(Node *&head)
{
    if (head == NULL)
        return;

    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

void deleteAtTail(Node *&head)
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    Node *nodeToDelete = temp->next;
    temp->next = NULL;
    delete nodeToDelete;
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

    Node *prev = NULL;
    Node *curr = head;
    int count = 1;
    while (count < position)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}


int main()
{
    Node *node1 = new Node(20);

    // head pointed at node1;
    Node *head = node1;
    insertAtHead(head, 10);
    insertAtTail(head, 40);
    insertAtPosition(head, 30, 3);
    insertAtTail(head, 50);

    deleteAtHead(head);
    deleteAtTail(head);
    deleteAtPosition(head, 1);

    display(head);
    return 0;
}