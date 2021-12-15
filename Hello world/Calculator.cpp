
// A basic c++ calculator for beginners.


#include <iostream>
using namespace std;

class Cal {
    public:
        int a;
        int b;
        Cal(int x, int y) {
            a = x;
            b = y;
        }

        void add() {
            std::cout << a + b << std::endl;
        }
        
        void mult() {
            std::cout << a * b << std::endl;
        }
        void power() {
            int result = 1;
            for(int i = 0;i < b; i++) {
                result = result * a;
            }
            std::cout << result << std::endl;
        }
};

int main() {
    int op;
    int f;
    int l;
    std::cout << "choose the operation to be done: \n 1. multipl \n 2. add \n 3. Power \n ";
    std::cin >> op;
    std::cout << "choose the first number : ";
    std::cin >> f;
    
    std::cout << "choose the second number : ";
    std::cin >> l;

    Cal calc1(f, l);
    switch (op){
    case 1:
        calc1.mult();
        break;
    case 2:
        calc1.add();
        break;
    case 3:
        calc1.power();
        break;
    default:
        break;
}
    return 0;
}