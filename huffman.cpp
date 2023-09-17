#include "huffman.h"
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

const std::vector<std::pair<std::string, std::string>>
HuffmanAlgorithm(const std::vector<std::pair<std::string, double>> &msg_prop) {
    std::priority_queue<std::pair<double, std::vector<int>>,
            std::vector<std::pair<double, std::vector<int>>>,
            std::greater<std::pair<double, std::vector<int>>>> algo;
    std::vector<std::pair<std::string, std::string>> output(msg_prop.size(), {"", ""});
    std::pair<double, std::vector<int>> least, newObj;
    for(int i = 0; i < msg_prop.size(); i++) {
        algo.push({msg_prop[i].second, {i}});
        output[i] = {msg_prop[i].first, ""};
    }

    while(algo.size() > 1){
        least = algo.top();
        algo.pop();
        newObj = algo.top();
        algo.pop();
        for(auto &id: newObj.second){
            output[id].second = '1' + output[id].second;
        }
        for(auto &id: least.second){
            output[id].second = '0' + output[id].second;
            newObj.second.push_back(id);
        }
        newObj.first += least.first;
        algo.push(newObj);
    }
    return output;
}