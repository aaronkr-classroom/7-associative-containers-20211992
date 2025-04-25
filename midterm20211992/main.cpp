#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>  
#include "functions.h" 
#include <iomanip>

using std::cout;
using std::getline;

int main() {
    int numStudents = 1;

    // 1명의 학생 정보를 저장할 변수
    Student student;

    // 1명의 학생에 대해 이름과 점수 입력받기
    std::cout << "== Student 1 ==\n";
    std::cout << "Enter the name: ";
    std::cin >> student.name;

    inputScores(student.scores);  // 학생의 점수 입력받기
    student.average = calculateAverage(student.scores);  // 평균 계산 후 average 설정

    // 결과 출력
    std::cout << "\n--- Grade Summary ---\n";
    std::cout << student.name << ": " << std::setprecision(2) << student.average << "\n";

    return 0;
}