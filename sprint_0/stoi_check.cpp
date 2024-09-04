#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, s;
    cin >> a >> b;

    s = a + b;
    string size_sum = to_string(s);
    int count = size_sum.size();
    cout << s * count << endl;
}
