#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    node* next;
    int val;

    node(int input = 0) : next(nullptr), val(input) {};


    void insert(int input)
    {

        node *n = this;

        if(n->val == 0)
        {
            n->val = input;
        }
        else{
            
            while(n->next)
            {
                n = n->next;
            }

            node* in = new node;
            in->val = input;

            n->next = in;
        }

        




    }

    void outl()
    {
        node *n = this;

        while(n->next)
        {
            cout << n->val;
            n = n->next;
        }
    }

    node* right(int len)
    {
        node *n = this;

        for(int i = 0; i < len/2; i++)
        {
            n = n->next;
        }

        return n;
    }

};



int main()
{

    int count = 0;
    node n;
    node *r;

    while(count <= 10)
    {
        n.insert(rand() % 10);
        count++;
    }

    n.outl();

    r = n.right(count);

    cout << endl;

    r->outl();

    return 0;
}
