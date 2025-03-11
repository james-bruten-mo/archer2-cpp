#include "map_ex.hpp"

bool AddWord(std::map<std::string, int> &data, std::string const& str) {
    auto const [it, inserted] = data.emplace(str, str.size());
    return inserted;
}

