#include "Logger.h"

Logger::Logger(const std::string& filename) {
    logFile.open(filename, std::ios::app);
}

Logger::~Logger() {
    if (logFile.is_open()) logFile.close();
}

bool Logger::IsLogOpen() const {
    return logFile.is_open();
}

void Logger::StartLog(double initialAmount) {
    if (logFile.is_open()) {
        logFile << "Game started with $" << initialAmount << "\n";
    }
}

void Logger::WriteLog(const std::string& message) {
    if (logFile.is_open()) {
        logFile << message << "\n";
    }
}

void Logger::CloseLog(const std::string& message) {
    if (logFile.is_open()) {
        logFile << message << "\n";
        logFile.close();
    }
}
