
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 5; i <= 8; i++) {
        sum = sum + i;
    }

    cout << "Sum of 5 + 6 + 7 + 8 = "
         << sum << endl;

    return 0;
}
