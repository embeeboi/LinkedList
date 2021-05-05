#include <iostream>


struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int a) : data(a), next(nullptr),prev(nullptr) {}
};

Node* head = nullptr;
Node* tail = nullptr;


Node* Insert_Node(Node* NodePut,int data)
{
    if (NodePut == nullptr)
    {
        NodePut = new Node(data);
        tail = NodePut;
        return NodePut;
    }
    NodePut->next = Insert_Node(NodePut->next,data);
    NodePut->next->prev = NodePut;
    return NodePut;

    
}




int main()
{

    head = Insert_Node(head,1000);
    head = Insert_Node(head,2000);
    head = Insert_Node(head,3000);
    head = Insert_Node(head,4000);

   Node* temp = head;


   while(temp != nullptr)
   {
       std::cout << "{" << temp->data << "} ";
       temp = temp->next;
   }
   std::cout << "\n";



     temp = tail;


   while(temp != nullptr)
   {
       std::cout << "{" << temp->data << "} ";
       temp = temp->prev;
   }
   std::cout << "\n";


}










/*
Node* head = nullptr;
Node* tail = nullptr;


Node* Insert_Node(Node* Input_Node,int data)
{
    if(Input_Node == nullptr)
    {
        Input_Node = new Node(data);
        tail = Input_Node;
        return Input_Node;
    }
    Input_Node->next = Insert_Node(Input_Node->next,data);
    Input_Node->next->prev = Input_Node;
    return Input_Node;
}

int main()
{
    head = Insert_Node(head,100);
    head = Insert_Node(head,200);
    head = Insert_Node(head,300);
    head = Insert_Node(head,400);
    head = Insert_Node(head,500);
    head = Insert_Node(head,600);
    
    Node* temp = head;
    while(temp!= nullptr)
    {
        std::cout << "{" << temp->data << "} ";
        temp = temp->next;
    }
    std::cout << "\n";
}
*/
