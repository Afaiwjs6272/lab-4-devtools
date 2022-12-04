#include <vector>
#include <iostream>
using namespace std;
void Tree(int n, vector<int> mas){
    int p,l,r;
    int m = 0;
    for(int i = 0; i < n; i++){
        cin >> p >> l >> r;
        if(l != 0) {
            mas[l - 1] += 1 + mas[i];
            m = max(mas[l - 1],m);
        }
        if(r != 0) {
            mas[r - 1] += 1 + mas[i];
            m = max(mas[r - 1],m);
        }
    }
    if(n == 0){
        cout << 0;
    }else {
        cout << m + 1;
    }
}
int main() {
    int n;
    cin >> n;
    int m = 0;
    vector<int> mas;
    for(int i = 0; i < n; i++){
        mas.push_back(0);
    }
    Tree(n, mas);
    return 0;
}