#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};
int main(){
    vector<int>arr = {1,2,3,4,5,6};
    Node* n = new Node(arr[1],nullptr);
    cout<<n->data;
    return 0;
}