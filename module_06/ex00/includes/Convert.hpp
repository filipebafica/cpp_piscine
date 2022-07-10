// Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License.
#ifndef EX00_INCLUDES_CONVERT_HPP_
#define EX00_INCLUDES_CONVERT_HPP_

#include <string>

class Convert {
 public:
    Convert(void);
    explicit Convert(std::string literal);
    Convert(const Convert& src);
    Convert& operator=(const Convert& rhs);
    ~Convert(void);

    std::string getInput(void) const;

    bool isCharType(void);
    bool isIntType(void);
    bool isFloatType(void);
    bool isDoubleType(void);

    char fromStringToChar(void);
    int fromStringToInt(void);
    float fromStringToFloat(void);
    double fromStringToDouble(void);

    void convertAndPrint(char literal);
    void convertAndPrint(int literal);
    void convertAndPrint(float literal);
    void convertAndPrint(double literal);

    void convertSpecialFloat(float literal);
    void convertSpecialDouble(void);

    void printChar(char literal);
    void printInt(int literal);
    void printFloat(float literal);
    void printDouble(double literal);

 private:
    std::string _input;
};



#endif  // EX00_INCLUDES_CONVERT_HPP_
