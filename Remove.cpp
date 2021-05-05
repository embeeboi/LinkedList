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



Node* remove(Node* NodePut)
{
    if(NodePut != nullptr)
    {
        NodePut = NodePut->next;
        NodePut->prev = nullptr; 
        return NodePut;
    }
    NodePut->next = remove(NodePut->next);

    return NodePut;
}





int main()
{
    head = Insert_Node(head,100);
    head = Insert_Node(head,200);
    head = Insert_Node(head,300);
    head = Insert_Node(head,400);
    head = Insert_Node(head,500);
    head = Insert_Node(head,600);
    head = remove(head);
    head = remove(head);
    head = remove(head);
    Node* temp = head;
    while(temp!= nullptr)
    {
        std::cout << "{" << temp->data << "} ";
        temp = temp->next;
    }
    std::cout << "\n";
    temp = tail;

    while(temp!=nullptr)
    {
        std::cout << "{" << temp->data << "} ";
        temp = temp->prev;
    }
    std::cout << "\n";
}


/*
Node* remove(Node* Input_Node)
{

        if(Input_Node != nullptr)
        {
            Input_Node = Input_Node->next;
            Input_Node->prev = nullptr;
            
            
            return Input_Node;
        }
        
        Input_Node->next = remove(Input_Node->next);
    
        
        return Input_Node;


}

*/