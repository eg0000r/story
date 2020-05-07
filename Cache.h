#include <string>
#include "os.h"

class Cache {
public:
    static void init();
    static std::string getPath();
    static std::string fetchSavePath();
    static void updateSavePath(std::string path);

private:
    static std::string _path;
};
