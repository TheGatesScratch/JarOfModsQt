#include "filemanager.h"

std::vector<fs::directory_entry> FileManager::getFilesInDirectory(fs::path p)
{
    std::vector<fs::directory_entry> l;
    for (const auto & de : fs::directory_iterator(p)){
        l.emplace_back(de);
    }
    return l;
}

std::vector<fs::directory_entry> FileManager::getFilesInDirectory(fs::path p, fs::path filterExtention)
{
    std::vector<fs::directory_entry> l;
    for (const auto & de : fs::directory_iterator(p)){
        if (filterExtention == de.path().extension())
            l.emplace_back(de);
    }
    return l;
}


