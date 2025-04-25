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

    // 1���� �л� ������ ������ ����
    Student student;

    // 1���� �л��� ���� �̸��� ���� �Է¹ޱ�
    std::cout << "== Student 1 ==\n";
    std::cout << "Enter the name: ";
    std::cin >> student.name;

    inputScores(student.scores);  // �л��� ���� �Է¹ޱ�
    student.average = calculateAverage(student.scores);  // ��� ��� �� average ����

    // ��� ���
    std::cout << "\n--- Grade Summary ---\n";
    std::cout << student.name << ": " << std::setprecision(2) << student.average << "\n";

    return 0;
}