#include "functions.h"
#include <iostream>
#include <numeric>  
#include <vector>
#include <cctype>
#include <numeric>

void inputScores(std::vector<int>& scores) {
    scores.resize(0);  // ���� ���� �ʱ�ȭ

    int score;
    std::cout << "Enter up to 5 assignment scores (enter any non-number to stop): ";

    while (scores.size() < 5) {  // �ִ� 5�������� �Է�
        std::cin >> score;  // ����ڷκ��� ���� �Է� �ޱ�

        if (std::cin.fail()) {  // ���ڰ� �ƴ� ���� �Է¹����� ����
            break;
        }

        scores.push_back(score);  // ���� ���Ϳ� �߰�
    }
}
    // ����� �Ǽ������� ����ϴ� �Լ�
    double calculateAverage(const std::vector<int>&scores) {
        if (scores.empty()) return 0.0;  // ������ ���ٸ� ��� 0.0�� ��ȯ

        double total = 0.0;
        for (const int& score : scores) {
            total += score;  // ���� ���
        }

        // �Ǽ��� �������� ����Ͽ� ��� ���
        return 1.0 * total / scores.size();
    
    }