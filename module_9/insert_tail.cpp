#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_froward(Node *head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {

        cout << tmp->val << " " << " ";
        tmp = tmp->next;

        /* code */
    }
    cout << endl;
}

void print_backward(Node *tail)
{

    Node *tmp = tail;
    while (tmp != NULL)
    {

        cout << tmp->val << " " << " ";
        tmp = tmp->prev;

        /* code */
    }
    cout << endl;
}

void inset_at_head(Node *&head, int val)
{

    Node *newNode = new Node(val);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(25);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    inset_at_head(head, 99);
    inset_at_head(head, 1111);
    print_froward(head);

    return 0;
}