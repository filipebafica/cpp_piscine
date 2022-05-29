/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include <gtest/gtest.h>
#include "../includes/headers.hpp"

TEST(Ex00Test, EchoLowerToUpper) {
    std::stringstream buffer;
    std::streambuf    *savedBuffer;
    std::string s1;
    std::string s2;
    std::string s3;
    std::string s4;

    // saves the stdout
    savedBuffer = std::cout.rdbuf();
    // redirects the stdout to buffer
    std::cout.rdbuf(buffer.rdbuf());

    s1 = "shhhhh... I think the students are asleep...";
    s2 = "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...";
    s3 = "Damnit ! Sorry students, I thought this thing was off.";
    s4 = "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.";

    // echo writes on cout and then it is captured with buffer
    echo(s1);
    EXPECT_EQ(s2.append("\n"), buffer.str());

    buffer.str("");
    echo(s3);
    EXPECT_EQ(s4.append("\n"), buffer.str());

    // restore original stdout
    std::cout.rdbuf(savedBuffer);
}

TEST(Ex00Test, EchoUpperToUpper) {
    std::stringstream buffer;
    std::streambuf    *savedBuffer;
    std::string s1;
    std::string s2;
    std::string s3;
    std::string s4;

    // saves the stdout
    savedBuffer = std::cout.rdbuf();
    // redirects the stdout to buffer
    std::cout.rdbuf(buffer.rdbuf());

    s1 = "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...";
    s2 = "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...";
    s3 = "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.";
    s4 = "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.";

    // echo writes on cout and then it is captured with buffer
    echo(s1);
    EXPECT_EQ(s2.append("\n"), buffer.str());

    buffer.str("");
    echo(s3);
    EXPECT_EQ(s4.append("\n"), buffer.str());

    // restore original stdout
    std::cout.rdbuf(savedBuffer);
}

TEST(Ex00Test, EchoNULL) {
    std::stringstream buffer;
    std::streambuf    *savedBuffer;
    std::string s1;

    // saves the stdout
    savedBuffer = std::cout.rdbuf();
    // redirects the stdout to buffer
    std::cout.rdbuf(buffer.rdbuf());

    s1 = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    // echo writes on cout and then it is captured with buffer

    echo("\0");
    EXPECT_EQ(s1.append("\n"), buffer.str());

    // restore original stdout
    std::cout.rdbuf(savedBuffer);
}
