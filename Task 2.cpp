#include <iostream>
using namespace std;
 
class Gcd {
private:
    int a, b;
 
public:
    
    Gcd(int num1, int num2) {
        a = num1;
        b = num2;
    }
 
   
    int findGcd() {
        int temp;
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
 
int main() {
    int num1, num2;
    
    std::cin >> num1 >> num2;
 
    
    Gcd Object(num1, num2);
 
    
    int result = Object.findGcd();
 
   
    cout << result << endl;
 
    return 0;
}