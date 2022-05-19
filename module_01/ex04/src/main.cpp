// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.

#include "../includes/headers.hpp"

void replaceInLine(std::string &buffer, std::string s1, std::string s2) {
    std::size_t found;

    found = buffer.find(s1);
    if (found == std::string::npos)
        return;
    buffer.insert(found, s2);
    buffer.erase(found + s2.length(), s1.length());
    replaceInLine(buffer, s1, s2);
}

void replaceInFile(char *orgFile, std::string s1, std::string s2) {
    std::string buffer;
    std::string tmp;

    tmp = tmp + orgFile + ".replace";
    std::ofstream newFile(tmp.c_str());
    std::ifstream readFrom(orgFile);
    while (getline(readFrom, buffer)) {
        replaceInLine(buffer, s1, s2);
        newFile << buffer << std::endl;
    }
    newFile.close();
}

int main(int argc, char **argv) {
    std::string s1;
    std::string s2;

    if (argc != 4) {
        std::cout << "Wrong number of parameters" << std::endl;
        return (0);
    }
    s1 = argv[2];
    s2 = argv[3];
    if (s1 == s2)
        return (0);
    replaceInFile(argv[1], s1, s2);
    return (0);
}
