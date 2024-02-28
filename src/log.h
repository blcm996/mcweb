#ifndef __LOG_H__
#define __LOG_H__

#include <string>
#include <stdint.h>
#include <memory>
#include <list>
#include <sstream>
#include <fstream>
#include <vector>
#include <stdarg.h>
#include <map>

namespace blcm{
    
    class Logger;
    class LoggerManager;

    class LogLevel{
    public:
        enum Level{
            FATAL = 5,
            ERROR = 4, 
            WARN = 3,
            INFO = 2,
            DEBUG = 1,
            UNKNOWN = 0
        };

     /**
     * @brief 将日志级别转成文本输出
     * @param[in] level 日志级别
     */
    static const char* ToString(LogLevel::Level level);
    
    /**
     * @brief 将文本转换成日志级别
     * @param[in] str 日志级别文本
     */
    static LogLevel::Level FromString(const std::string& str);

    };

}



#endif