#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "NUMBER OF ELEMENTS IN AN ARRAY = ";
    cin >> n;

    int array[n];
    cout << "ENTER THE ELEMENTS OF THE ARRAY:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int max_no = INT_MIN;
    int min_no = INT_MAX;

    for (int i = 0; i < n; i++) {
        max_no = max(max_no, array[i]);
        min_no = min(min_no, array[i]);
    }

    cout << "MAXIMUM NUMBER = " << max_no << endl;
    cout << "MINIMUM NUMBER = " << min_no << endl;

    return 0;
}
