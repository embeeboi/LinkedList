



#include <iostream>




struct Node
{
    int data;
    Node* next;
    Node* prev;

    Node(int a) : data(a),next(nullptr),prev(nullptr) {}
};


int main()
{

    Node *t1,*t2,*t3,*t4;

    t1 = new Node(1000);
    t2 = new Node(2000);
    t3 = new Node(3000);
    t4 = new Node(4000);

    t1->next = t2;
    t2->next = t3;
    t3->next = t4;

    t4->prev = t3;
    t3->prev = t2;
    t2->prev = t1;

    Node* temp = t1;
    while(temp != nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    temp = t4;
    while(temp!=nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->prev;
    }




   


}



































/*
struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int a) : data(a), next(nullptr),prev(nullptr) {}
};

int main()
{
    //Node *t1,*t2,*t3,*t4;
    
    t1 = new Node(1000);
    t2 = new Node(2000);
    t3 = new Node(3000);
    t4 = new Node(4000);
    

    Node* t1 = new Node(1000);
    t1->next = new Node(2000);
    t1->next->prev = t1;
    t1->next->next = new Node(3000);
    t1->next->next->prev = t1->next;
    t1->next->next->next = new Node(4000);
    t1->next->next->next->prev = t1->next->next;

}
*/

