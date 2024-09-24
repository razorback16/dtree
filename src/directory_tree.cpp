#include "directory_tree.h"
#include "icons.h"

#include <iostream>
#include <filesystem>

// Recursive function to print the directory tree
void printDirectoryTree(const fs::path& path, const std::vector<std::string>& excludePatterns, int level, bool isLast, const std::string& prefix) {
    std::string icon = FOLDER_ICON;
    std::string name = path.filename().string();
    std::string extension = path.extension().string();

    if (fs::is_regular_file(path)) {
        auto it = FILE_TYPE_ICONS.find(extension);
        icon = (it != FILE_TYPE_ICONS.end()) ? it->second : "📄";
    }

    bool shouldExclude = false;
    for (const auto& pattern : excludePatterns) {
        if (path.string().find(pattern) != std::string::npos) {
            shouldExclude = true;
            break;
        }
    }

    if (!shouldExclude) {
        std::cout << prefix;
        
        if (level > 0) {
            std::cout << (isLast ? "└─ " : "├─ ");
        }

        std::cout << icon << " " << name << std::endl;
    }

    if (fs::is_directory(path)) {
        std::vector<fs::path> children;
        for (const auto& entry : fs::directory_iterator(path)) {
            children.push_back(entry.path());
        }

        for (size_t i = 0; i < children.size(); ++i) {
            std::string newPrefix = prefix;
            if (level > 0) {
                newPrefix += isLast ? "   " : "│  ";
            }
            printDirectoryTree(children[i], excludePatterns, level + 1, i == children.size() - 1, newPrefix);
        }
    }
}