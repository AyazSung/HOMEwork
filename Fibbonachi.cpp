#include <iostream>
using namespace std;

int rec_Fib(int f)
{
    if (f < 3) { return 1; }
    return rec_Fib(f - 1) + rec_Fib(f - 2);
}

int simple_Fib(int f) {
    if (f < 3) { return 1; }
    int cur = 1;
    int prev = 1;
    
    for (int i = 3; i <= f; i++) {
        int t = cur;
        cur = cur + prev;
        prev = t;
    }
    return cur;
}

int main()
{
    int n;
    cin >> n;

    cout << rec_Fib(n) <<"***"<< simple_Fib(n);
}
