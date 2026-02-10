#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int start[]  = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};

    // sort activities by finish time
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (finish[i] > finish[j]) {
                swap(finish[i], finish[j]);
                swap(start[i], start[j]);
            }
        }
    }

    int c = 1;
    int lastf = finish[0];

    cout << "Selected activities:\n";
    cout << "(" << start[0] << ", " << finish[0] << ")\n";

    for (int i = 1; i < n; i++) {
        if (start[i] >= lastf) {
            cout << "(" << start[i] << ", " << finish[i] << ")\n";
            lastf = finish[i];
            c++;
        }
    }

    cout << "Maximum number of activities = " << c;
    return 0;
}
