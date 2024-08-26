#include <iostream>
#include <unordered_map>
#include <vector>

int maxFantasticFours(std::vector<int>& arr) {
    std::unordered_map<int, std::unordered_map<int, int>> indexMap;
    int count = 0;
    int lastIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (indexMap[arr[i]].find(arr[j])!= indexMap[arr[i]].end() && indexMap[arr[i]][arr[j]] < lastIndex) {
                continue;
            }
            if (indexMap[arr[i]].find(arr[j])!= indexMap[arr[i]].end()) {
                count++;
                lastIndex = j;
            } else {
                indexMap[arr[i]][arr[j]] = j;
            }
        }
    }

    return count;
}

int main() {
    std::vector<int> arr = {1, 2, 1, 3, 2, 3, 4, 3, 4};
    std::cout << "Maximum number of fantastic fours: " << maxFantasticFours(arr) << std::endl;

    return 0;
}