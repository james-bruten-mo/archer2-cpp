#include "vector_ex.hpp"

// std::vector documentation:
// https://en.cppreference.com/w/cpp/container/vector

std::vector<int> GetEven(std::vector<int> const& source) {
    std::vector<int> output;
    for (auto val : source){
        if (val%2 == 0) output.push_back(val);
    }
    return output;
}

void PrintVectorOfInt(std::ostream& output, std::vector<int> const& data) {
    output << "[ ";
    for (auto it = data.begin(); it != data.end(); it++) {
        if (it != data.begin()) output << ", ";
        output << *it;
    }
    output << "]";
}

