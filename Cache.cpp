#include <cstdlib>
#include <sys/stat.h>
#include <cstdio>
#include <fstream>
#include "Cache.h"

void Cache::init() {
    _path = std::string(getenv("HOME")) + "/story_builder_cache";
    printf("Path: %s", _path.c_str());
    struct stat info;
    if( stat( _path.c_str(), &info ) != 0 )
        system(std::string(std::string("mkdir ") + std::string(_path)).c_str());
}

std::string Cache::getPath() {
    return _path;
}

std::string Cache::fetchSavePath() {
    std::ifstream stream((getPath() + "/save_cache.txt"));
    if (!stream.good()) {
        std::ofstream out((getPath() + "/save_cache.txt"));
        out << getenv("HOME");
        out.close();
        stream.close();
        return getenv("HOME");
    }
    std::string temp;
    stream >> temp;
    return temp;
}

void Cache::updateSavePath(std::string path) {
    std::ofstream out((getPath() + "/save_cache.txt"), std::ios::trunc);
    out << path;
    out.close();
}

std::string Cache::_path;