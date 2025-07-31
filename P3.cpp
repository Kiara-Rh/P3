#include <iostream>
using namespace std;

struct MinMax {
    int min;
    int max;
};

MinMax findMinMax(int totalNums) {
    int num;
    cout << "Enter number 1: ";
    cin >> num;

    int max = num;
    int min = num;

    for (int i = 2; i <= totalNums; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > max) {
            max = num;
        } else if (num < min) {
            min = num;
        }
    }

    MinMax result;
    result.min = min;
    result.max = max;
    return result;
}

int main() {
    int howMany;
    cout << "How many numbers you wanna enter? ";
    cin >> howMany;

    MinMax result = findMinMax(howMany);
    cout << "Min is: " << result.min << " | Max is: " << result.max << endl;

    return 0;
}
