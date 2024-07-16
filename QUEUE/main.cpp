#include <iostream>
#include <queue>
int main() { int n; std::cin >> n;

Copy
std::queue<int> myQueue;

for (int i = 0; i < n; ++i) {
    int query;
    std::cin >> query;

    if (query == 1) {

        int num;
        std::cin >> num;
        myQueue.push(num);
    } else if (query == 2) {

        if (!myQueue.empty()) {
            myQueue.pop();
        }
    } else if (query == 3) {

        if (!myQueue.empty()) {
            std::cout << myQueue.front() << std::endl;
        } else {
            std::cout << "Empty!" << std::endl;
        }
    }
}

return 0;
}

