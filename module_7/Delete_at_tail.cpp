#include <bits/stdc++.h>
using namespace std;

// void rec(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     rec(i + 1, n);
//     cout << i << endl;
// }

// int main()
// {
//     int n = 5;
//     rec(1, n);
//     return 0;
// }

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}

void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void print_reverse(Node *tmp)
{
    if (tmp == NULL)
    {
        return;
    }
    print_reverse(tmp->next);
    cout << tmp->val << endl;
}

void deleteAtTail(Node *&head, Node *&tail, int idx)
{
    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    };

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
};

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    deleteAtTail(head, tail, 3);

    print_link_list(head);
    return 0;
}
