#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
        // next=NULL;
    }
};
void linker(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        // cout << "I am is first loop" << endl;

        // cout<<"Temp data is : "<<temp->data<<endl;
    }
    temp->next = n;

    // while (temp != NULL)
    // {
    //     cout << "Your value is : " << temp->data << endl;
    //     temp = temp->next;
    // }

    // return;
}

void odd_finder(node*head){
    node*temp;
    temp=head;
    int i=1;
    while (temp!=NULL)
    {
        if (temp->data%2==0)
        {
            /* code */
        cout<<"Odd data = "<<temp->data<<endl;
        }
        temp=temp->next;
        i++;
    }
    
    
}
int main()
{
    node *head = NULL;
    linker(head, 1);
    linker(head, 3);
    linker(head, 2);
    linker(head, 6);
    linker(head, 5);
    linker(head, 7);
    linker(head, 10);
    linker(head, 12);
    cout<<"Odd val"<<endl;
    odd_finder(head);
    return 0;
}
