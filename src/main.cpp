#include <iostream>
#include <filesystem>
#include <sstream>
#include <vector>
#include "icons.h"
#include "directory_tree.h"


int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <directory> [--exclude=<pattern1>,<pattern2>,...]" << std::endl;
        return 1;
    }

    fs::path directory(argv[1]);
    std::vector<std::string> excludePatterns;

    for (int i = 2; i < argc; i++) {
        std::string arg(argv[i]);
        if (arg.rfind("--exclude=", 0) == 0) {
            std::string patternsStr = arg.substr(10);
            std::string pattern;
            std::stringstream ss(patternsStr);
            while (std::getline(ss, pattern, ',')) {
                excludePatterns.push_back(pattern);
            }
        }
    }
    
    printDirectoryTree(directory, excludePatterns, 0, true);
    return 0;
}