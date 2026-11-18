#include <fstream>
#include <cstdint>
#include <stdio.h>
#include <string>

const int MEMORY_SIZE = (1<<24)-1;

bool loadHex(const std::string& filename, uint32_t* target){
    std::ifstream file(filename);
    if(!file.is_open()){
        printf("ERROR: CANNOT LOAD THE FILE!\n");
        return false;
    }
    std::string line;
    size_t idx = 0;
    while(getline(file, line) && idx < MEMORY_SIZE){
        if(line.empty()) continue;
        target[idx] = static_cast<uint32_t>(stoul(line, nullptr, 16));
        idx++;
    }
    return true;
}

bool loadBin(const std::string& filename, uint32_t* target) {
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        printf("ERROR: CANNOT LOAD THE FILE!\n");
        return false;
    }

    file.read(reinterpret_cast<char*>(target), MEMORY_SIZE * sizeof(uint32_t));

    if (file.gcount() == 0) {
        printf("ERROR: FILE IS EMPTY OR READ FAILED!\n");
        return false;
    }

    return true;
}