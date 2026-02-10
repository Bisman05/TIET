#include <iostream>
using namespace std;

int main() {
    int n = 5;

    char job[] = {'J','J','J','J','J'};
    int id[]   = {1, 2, 3, 4, 5};

    int deadline[] = {2, 1, 2, 1, 3};
    int profit[]   = {100, 19, 27, 25, 15};

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (profit[i] < profit[j]) {
                swap(profit[i], profit[j]);
                swap(deadline[i], deadline[j]);
                swap(id[i], id[j]);
            }
        }
    }

    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        if (deadline[i] > maxDeadline)
            maxDeadline = deadline[i];
    }

    int slot[10];
    for (int i = 0; i < maxDeadline; i++)
        slot[i] = -1;

    int totalProfit = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = deadline[i] - 1; j >= 0; j--) {
            if (slot[j] == -1) {
                slot[j] = id[i];
                totalProfit += profit[i];
                count++;
                break;
            }
        }
    }

    cout << "Selected Jobs: ";
    for (int i = 0; i < maxDeadline; i++) {
        if (slot[i] != -1)
            cout << "J" << slot[i] << " ";
    }

    cout << "\nMaximum Profit = " << totalProfit;
    return 0;
}
