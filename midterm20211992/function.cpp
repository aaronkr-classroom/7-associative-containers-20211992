#include "functions.h"
#include <iostream>
#include <numeric>  
#include <vector>
#include <cctype>
#include <numeric>

void inputScores(std::vector<int>& scores) {
    scores.resize(0);  // 점수 벡터 초기화

    int score;
    std::cout << "Enter up to 5 assignment scores (enter any non-number to stop): ";

    while (scores.size() < 5) {  // 최대 5개까지만 입력
        std::cin >> score;  // 사용자로부터 정수 입력 받기

        if (std::cin.fail()) {  // 숫자가 아닌 값을 입력받으면 종료
            break;
        }

        scores.push_back(score);  // 점수 벡터에 추가
    }
}
    // 평균을 실수형으로 계산하는 함수
    double calculateAverage(const std::vector<int>&scores) {
        if (scores.empty()) return 0.0;  // 점수가 없다면 평균 0.0을 반환

        double total = 0.0;
        for (const int& score : scores) {
            total += score;  // 총합 계산
        }

        // 실수형 나눗셈을 사용하여 평균 계산
        return 1.0 * total / scores.size();
    
    }