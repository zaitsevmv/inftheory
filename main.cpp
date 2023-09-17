#import <iostream>
#import "huffman.h"

const std::vector<std::pair<std::string, double>> task1 = {{"1", 0.25}, {"2", 0.25}, {"3", 0.125}, {"4", 0.125},
                                                           {"5", 0.0625}, {"6", 0.0625}, {"7", 0.0625}, {"8", 0.0625}};

const std::vector<std::pair<std::string, double>> task2 = {{"1", 0.2}, {"2", 0.2}, {"3", 0.2},
                                                           {"4", 0.2}, {"5", 0.2}};

const std::vector<std::pair<std::string, double>> task3 = {{"1", 0.45}, {"2", 0.3},
                                                           {"3", 0.15}, {"4", 0.1}};

const std::vector<std::pair<std::string, double>> task4 = {{"мы", 0.37}, {"все", 0.13}, {"учились", 0.125}, {"понемногу", 0.08},
                                                           {"чему", 0.06}, {"нибудь", 0.052}, {"и", 0.023}, {"как", 0.11}, {"-", 0.05}};

const std::vector<std::pair<std::string, double>> task5 = {{"1", 0.75}, {"2", 0.1}, {"3", 0.15},
                                                           {"12", 0.075},  {"13", 0.1125}, {"21", 0.075},
                                                           {"23", 0.015}, {"31", 0.1125}, {"32", 0.015}};

int main(){
    std::vector<std::pair<std::string, double>> msg_prop = task5;
    std::vector<std::pair<std::string, std::string>> msg_size(msg_prop.size());
    msg_size = HuffmanAlgorithm(msg_prop);
    for(auto &i: msg_size){
        std::cout << i.first << " = " << i.second << std::endl;
    }
    return 0;
}