#include <iostream>

// C++(Clang 10.0.0)

using namespace std;

int main(void) {
    // Your code here!
    int N, L;
    cin >> N >> L;
    
    string S[N];
    
    for (int cnt=0; cnt < N; ++cnt) {
        cin >> S[cnt];
    }
    
    sort(S, S+N);
    
    for (int cnt=0; cnt < N; ++cnt) {
        cout << S[cnt];
    }
    
    return 0;
}
