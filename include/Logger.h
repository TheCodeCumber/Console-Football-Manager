#ifndef LOGGER
#define LOGGER

#include <string>
#include <iostream>

class Logger{
    public:

        void log(std::string message);

        enum LogLevel {
            Error,
            Info,
            Warn
        };
};

#endif