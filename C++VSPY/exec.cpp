#include <ctime>
#include <iostream>

using namespace std;
int main() {
    clock_t time_req;
    time_req = clock();
    
    time_req = clock() - time_req;
    cout << (float)time_req/CLOCKS_PER_SEC  << endl;
    return 0;
}