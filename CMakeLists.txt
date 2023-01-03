# 本CMakeLists.txt的project名称
# 会自动创建两个变量，PROJECT_SOURCE_DIR和PROJECT_NAME
# ${PROJECT_SOURCE_DIR}：本CMakeLists.txt所在的文件夹路径
# ${PROJECT_NAME}：本CMakeLists.txt的project名称

cmake_minimum_required(VERSION 3.0)
project(fisrt_demo)


include_directories(${PROJECT_SOURCE_DIR}/add)

# 获取路径下所有的.cpp/.c/.cc文件，并赋值给变量中
aux_source_directory(./ SRC)
aux_source_directory(./add SRC)

# 给文件名/路径名或其他字符串起别名，用${变量}获取变量内容
# set(变量 文件名/路径/...)

# 添加编译选项
# add_definitions(编译选项)

# 打印消息
message("执行cpp")

# 编译子文件夹的CMakeLists.txt
# add_subdirectory(子文件夹名称)

# 将.cpp/.c/.cc文件生成.a静态库
# 注意，库文件名称通常为libxxx.so，在这里只要写xxx即可
# add_library(库文件名称 STATIC 文件)
# 将.cpp/.c/.cc文件生成可执行文件

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(${PROJECT_NAME} ${SRC})

# 规定.h头文件路径
# include_directories(路径)

# 规定.so/.a库文件路径
# link_directories(路径)

# 对add_library或add_executable生成的文件进行链接操作
# 注意，库文件名称通常为libxxx.so，在这里只要写xxx即可
# target_link_libraries(库文件名称/可执行文件名称 链接的库文件名称)
