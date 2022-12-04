#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    bool a=true;
    cin >> n;
    vector<int>mas(n);
    for (int i = 0; i < n; i++){
        cin >> mas[i];
    }
    for (int i = 0; i < (n - 1) / 2; i++){
        if ((mas[i] <= mas[2 * i + 1]) && (mas[i] <= mas[2 * i + 2])){
            a = true;
        }else{
            a= false;
            break;
        }
    }
    if (a){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}