#include <cstdlib>
#include <sys/stat.h>
#include <cstdio>
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

std::string Cache::_path;