#include <iostream>
#include <vector>
#include <algorithm>


void print_list(std::vector<int> list) {
    for (int i = 0; i < list.size(); i++)
    {
    std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> my_list;
    my_list.push_back(77);
    my_list.push_back(22);
    my_list.push_back(11);
    my_list.push_back(565);
    print_list(my_list);
    // we are sorting the list
    std::sort(my_list.begin(), my_list.end());
    print_list(my_list);
    return 0;
}