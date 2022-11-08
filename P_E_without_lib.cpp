#include <iostream>
#include <math.h>
using namespace std;
#define n 100
int stack[100], top = -1;
int optrd_sum, optrd_min, optrd_mul, optrd_div, optrd_pow;
void push(int values) // Else using abstract data type
{
    if (top >= n - 1)
    {
        cout << "Warning you stack has filled" << endl;
    }
    else
    {
        top++;
        stack[top] = values;
        cout << endl;
        cout << "Element pushed ::::: " << stack[top] << endl
             << endl;
        cout << endl;
    }
}
void pop()
{ // else using Abstract data type

    if (top > -1)
    {
        cout << " Element poped " << stack[top] << endl;

        top--;
    }
}
void Empty()
{ // else using Abstract data type
    if (top <= -1)
    {
        cout << "Your stack is Empty now" << endl;
    }
}

void postfixevaluation(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            push((s[i] - '0'));
        }
        else
        {
            // top++;
            int opt1 = stack[top];
            pop();
            // top++;
            int opt2 = stack[top];
            pop();
            switch (s[i])
            {
            case '+':
                optrd_sum = opt1 + opt2;
                push(optrd_sum);
                break;

            case '-':
                optrd_min = opt1 - opt2;
                push(optrd_min);
                break;

            case '*':
                optrd_mul = opt1 * opt2;
                push(optrd_mul);
                break;

            case '/':
                optrd_div = opt1 / opt2;
                push(optrd_div);
                break;

            case '^':
                optrd_pow = pow(opt1, opt2);
                push(optrd_pow);
                break;
            }
        }
    }
    cout << "Answer is : " << stack[top] << endl;
}
int main()
{
    // int number;
    // cout<<"Enter a value : ";
    // cin>>number;

    // push(number);
    postfixevaluation("10000+-8999198/*89878+6999-*78/89");

    /*
DRY RUN
    1 has push
    2 has push
    3 has push
    + is here so two operands are poped and top 1 and top2 are added  ANSWER IS
    {
        3+2 is equal to 5 and push in to stack
    }
    - is here so two operands are poped and top 1 and top2 are Subtract  ANSWER IS
{
    5-1 is equal to 4 and push in to stack
}

    4 and 6 are pushed into stack
- is here so two operands are poped and top 1 and top2 are Subtract  ANSWER IS
{
     6-4 is equal to 2 //2 push in to stack
}


  Currently  4 and 2 are available in stack // 2 is top

* is here so two operand are available in stack are poped and and multiplyed
{
    2 * 4 = 8
}
 ///////////////////  So string is over  answer is 8


    */
}
