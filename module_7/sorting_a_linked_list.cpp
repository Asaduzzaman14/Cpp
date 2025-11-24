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

void sort_link_list(Node *head)
{
    for (Node *temp = head; temp->next != NULL; temp = temp->next)
    {

        for (Node *j = temp->next; j != NULL; j = j->next)
        {

            // if (temp->val < j->val)
            if (temp->val < j->val)
            {
                swap(temp->val, j->val);
            }
        }
    }
}

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

    sort_link_list(head);
    print_link_list(head);

    return 0;
}
