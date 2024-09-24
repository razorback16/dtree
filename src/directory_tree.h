#ifndef DIRECTORY_TREE_H
#define DIRECTORY_TREE_H

#include <filesystem>
#include <vector>
#include <string>

namespace fs = std::filesystem;

void printDirectoryTree(const fs::path& path, const std::vector<std::string>& excludePatterns, int level, bool isLast, const std::string& prefix = "");

#endif // DIRECTORY_TREE_H