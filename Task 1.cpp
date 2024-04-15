#include <iostream>

using namespace std;

class Fact {
private:
    int number;

public:
    Fact(int n) {
        number = n;
    }

    int calculate_factorial() {
        int factorial = 1;
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    int number;
    cin >> number;

    Fact obj(number);
    int result = obj.calculate_factorial();
    cout << "Factoriel from " << number << " is: " << result << endl;

    return 0;
}