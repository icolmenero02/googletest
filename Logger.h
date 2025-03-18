// Logger.h
#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>

class Logger {
public:
    Logger(const std::string& filename);
    ~Logger();

    bool IsLogOpen() const;
    void StartLog(double initialAmount);
    void WriteLog(const std::string& message);
    void CloseLog(const std::string& message);

private:
    std::ofstream logFile;
};

#endif // LOGGER_H
