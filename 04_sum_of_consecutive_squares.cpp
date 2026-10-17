
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 5; i <= 8; i++) {
        sum = sum + (i * i);
    }

    cout << "Sum of squares from 5 to 8 = "
         << sum << endl;

    return 0;
}
