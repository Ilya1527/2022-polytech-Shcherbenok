#include <random>


using namespace std;


struct Node 
{
    int temp;
    Node* next;
};

// list generation
Node* generate(int input) 
{
    Node* ptr = nullptr;
    for (int k = input; k > 0; --k)
    {
        Node* new_node = new Node{ k, ptr };
        ptr = new_node;
    }

    return ptr;
}

// list generation with random content
Node* generate_random(int input) 
{
    random_device rd;

    mt19937 rng(rd());
    default_random_engine dre{ rd() };
    uniform_int_distribution<int> randint{ 10, 99 };

    Node* ptr = nullptr;
    for (int k = input; k > 0; --k) 
    {
        Node* new_node = new Node{ randint(dre), ptr };
        ptr = new_node;
    }

    return ptr;
}

// list reverse
void reverse(Node** head) 
{
    Node* current = *head;
    Node* p = nullptr, * next = nullptr;

    while (current != nullptr) 
    {
        next = current->next;
        current->next = p;
        p = current;
        current = next;
    }
    *head = p;
}

// part reverse (right and left barriers included (l and r - indexes))
void reverse(Node** head, int l, int r) 
{
    Node* now = *head, * p = NULL;
    int k;
    for (k = 0; k < l; k++) 
    {
        p = now;
        now = now->next;
    }
    Node* rtail = now;
    Node* rhead = NULL;
    while (k <= r) 
    {
        Node* next = now->next;
        now->next = rhead;
        rhead = now;
        now = next;
        k++;
    }
    if (p != NULL)
        p->next = rhead;
    else
        *head = rhead;
    rtail->next = now;
}