/*
 * @Description: 
 * @Author: Alden
 * @Date: 2021-12-27 23:00:23
 * @LastEditors: Alden
 * @LastEditTime: 2021-12-27 23:02:11
 */

#ifndef GLOG_NO_ABBREVIATED_SEVERITIES
#define GLOG_NO_ABBREVIATED_SEVERITIES
#endif // !GLOG_NO_ABBREVIATED_SEVERITIES

#ifndef GOOGLE_GLOG_DLL_DECL
#define GOOGLE_GLOG_DLL_DECL
#endif // !GOOGLE_GLOG_DLL_DECL

#include <glog/logging.h>

int main(int argc, char* argv[])
{
    // 解析命令行参数
    // 初始化日志库
    google::InitGoogleLogging(argv[0]);
    google::SetStderrLogging(google::GLOG_INFO);
    //FLAGS_colorlogtostderr = true;
    std::string strLogName = "testLog_";
    google::SetLogDestination(google::GLOG_INFO, strLogName.c_str());
    //FLAGS_logbufsecs = 0;
    //FLAGS_stop_logging_if_full_disk = true;
    LOG(ERROR) << "Hello, World!";
    google::ShutdownGoogleLogging();
}