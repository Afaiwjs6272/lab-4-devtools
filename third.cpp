#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int Data) : data(Data), left(nullptr), right(nullptr){}
};
Node *insert(Node *&par, int x){
    if (par == nullptr){
        par = new Node(x);
        par ->data = x;
        par ->left = nullptr;
        par ->right = nullptr;
    } else if (x < par -> data) {
        insert(par->left, x);
    }else if (x > par -> data) {
        insert(par->right, x);
    }
    return par;
}
void ptr(Node *root){
    if (root != nullptr){
        ptr(root ->left);
        ptr(root ->right);
        cout << root ->data << " ";
    }
}
Node *add(int mas[], int *i, int ch, int max, int min, int size){
    Node* root = nullptr;
    if(*i >= size){
        return nullptr;
    }
    if(ch > min && ch < max) {
        root = insert(root, ch);
        *i = *i + 1;
        if (*i < size) {
            root->left = add(mas, i, mas[*i], ch, min, size);
        }
        if (*i < size) {
            root->right= add(mas, i, mas[*i], max, ch, size);
        }
    }
    return root;
}
int main() {
    int n;
    cin >> n;
    int mas[n];
    for(int i = 0; i < n; i++){
        cin >> mas[i];
    }
    int index = 0;
    Node* tree = add(mas, &index, mas[0], INT_MAX, INT_MIN, n);
    ptr(tree);
    return 0;
}