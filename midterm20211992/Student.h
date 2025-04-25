#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

// 학생 정보를 담을 구조체 정의
struct Student {
    std::string name;           // 학생 이름
    std::vector<int> scores;    // 과제 점수들
};

#endif