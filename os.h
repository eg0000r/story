#ifdef OS
    #undef OS
#endif
#if defined(__APPLE__)
    #define OS "MAC"
#elif defined(__linux__)
    #define OS "LINUX"
#else
    #define OS "UNSUPPORTED"
#endif
