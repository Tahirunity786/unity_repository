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
    }
};
void linker(node *&head, int value)
{

    node *n = new node(value);
    cout<<(n)<<endl;
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
int roll_no,opt;
do{
    cout<<"Do you continue (press 1 for continue and 2 for exit ) : ";cin>>opt;
    switch (opt)
    {
    case 1:
         cout<<"Enter you roll no : ";  cin>>roll_no;
         linker(head,roll_no);
        break;
    case 2:
         cout<<"Good bye"<<endl;
        break;
    
    default:
    cout<<"Invaild choice"<<endl;
        break;
    }

}while(opt!=2);
    // linker(head, 4);
    display(head);
}
