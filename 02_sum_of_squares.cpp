
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 12; i++) {
        sum = sum + (i * i);
    }

    cout << "Sum of squares from 1 to 12 = "
         << sum << endl;

    return 0;
}
