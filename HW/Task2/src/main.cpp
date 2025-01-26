#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, int> queue;
    std::string command;

    while (true) {
        std::cin >> command;

        if (command == "Next") {
            if (queue.empty()) {
                std::cout << "Queue is empty" << std::endl;
            } else {
                std::string first_name = queue.begin()->first;
                std::cout << first_name << std::endl;

                if (--queue[first_name] == 0) {
                    queue.erase(first_name);
                }
            }
        } else {
            queue[command]++;
        }
    }

    return 0;
}