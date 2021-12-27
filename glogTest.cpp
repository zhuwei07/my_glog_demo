/*
 * @Description: 
 * @Author: Alden
 * @Date: 2021-12-27 23:00:23
 * @LastEditors: Alden
 * @LastEditTime: 2021-12-27 23:02:11
 */
#include <glog/logging.h>
int main(int argc, char* argv[])
{
    // 解析命令行参数
    // 初始化日志库
    google::InitGoogleLogging(argv[0]);
    LOG(ERROR) << "Hello, World!";
}