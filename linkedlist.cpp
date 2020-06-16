#include <bits/stdc++.h>

using namespace std;

struct node
{
    /* data */
    int data;
    node *link;
};

class linked_list
{
private:
    node *head, *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *temp = new node;
        temp->data = n;
        temp->link = NULL;

        if (head == NULL)
        {
            /* code */
            head = temp;
            tail = temp;
        }
        else
        {
            tail->link = temp;
            tail = tail->link;
        }
    }

    void show()
    {
        node *p = head;

        while (p != NULL)
        {
            cout << "\n"
                 << p->data << "\n";

            p = p->link;
        }
    }
};

int main(int argc, char const *argv[])
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    
    a.show();
}
