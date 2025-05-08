#include <iostream>
using namespace std;

class Node{
    public:
    int noMhs;
    Node *next;
};

class list{
    Node *START;
    
    public:
    list(){
        START = NULL;
    }

    void addNode(){
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa : ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru -> noMhs = nim;
    }
};

int main(){

}