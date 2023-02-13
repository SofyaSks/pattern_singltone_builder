#define _CRT_SECURE_NO_WARNINGS
#include "Logger.h"

Logger::~Logger()
{
    if (pobj) {
        delete pobj;
    }
}

void Logger::Message(string message)
{
    const time_t timer = time_t(NULL);
    ofstream fobj("log_string.txt", ios::app);
    if (!fobj) {
        cout << "Error." << endl;
        exit(EXIT_FAILURE);
    }
    fobj << message.c_str() << "   " << __TIME__ /*ctime(&timer)*/ << endl;
}

Logger* Logger::GetInstance()
{
    if (!pobj) {
        pobj = new Logger();
    }

    return nullptr;
}
