#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <filesystem>

namespace fs = std::filesystem;

class FileManager
{
public:
    static inline std::vector<fs::directory_entry> getFilesInDirectory(fs::path p);
    static inline std::vector<fs::directory_entry> getFilesInDirectory(fs::path p, fs::path filterExtention);
};

#endif // FILEMANAGER_H
