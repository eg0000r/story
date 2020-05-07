#include <string>
#include "os.h"

class Cache {
public:
    static void init();
    static std::string getPath();

private:
    static std::string _path;
};
