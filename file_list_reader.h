/**************************************************************************************************************************************************************
 * @file     file_list_reader.h
 * @author   Kuznetsov A.(RivandBlack).
 * @version  V 0.0.4
 * @date     07.10.2018
 * @brief    Class-singleton that reads files with a list of source code files, parses it and returns the corresponding list.
 ************************************************************************************************************************************************************/
#pragma once
#include <list>
#include <string>
class FileListReader {
public:
    static std::pair<bool, std::list<std::string>> ParseFileWithListOfSourceFiles(const std::string& in_file_name);
};
