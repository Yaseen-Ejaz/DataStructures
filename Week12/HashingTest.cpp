#include <iostream>
using namespace std;

class HashNode {
public:

    int key;

    HashNode(int key)
    {
        this->key = key;
    }
};


class HashMap {
    HashNode** arr;
    int capacity;

    int size;

    HashNode* dummy;

public:
    HashMap()
    {
        capacity = 13;
        size = 0;
        arr = new HashNode*[capacity];


        for (int i = 0; i < capacity; i++)
            arr[i] = NULL;


        dummy = new HashNode(-1);
    }

    int hashCode(int key)
    {
        return key % capacity;
    }


    void insertNode(int key)
    {
        HashNode* temp = new HashNode(key);

        int hashIndex = hashCode(key);


        while (arr[hashIndex] != NULL
               && arr[hashIndex]->key != key
               && arr[hashIndex]->key != -1) {
            hashIndex++;
            hashIndex %= capacity;
        }


        if (arr[hashIndex] == NULL
            || arr[hashIndex]->key == -1)
            size++;
        arr[hashIndex] = temp;

    }

    void display()
    {
        for (int i = 0; i < capacity; i++) {
            if (arr[i] != NULL && arr[i]->key != -1)
                cout << "key = " << arr[i]->key<< endl;
        }
    }
};

int main()
{
    HashMap* h = new HashMap;
    h->insertNode(18);
    h->insertNode(41);
    h->insertNode(22);
    h->insertNode(44);
    h->insertNode(59);
    h->insertNode(32);
    h->insertNode(31);
    h->insertNode(73);
    
    
    h->display();

    return 0;
}
