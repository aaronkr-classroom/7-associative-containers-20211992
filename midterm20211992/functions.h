#pragma once

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <vector>

struct Student {
    std::string name;        
    std::vector<int> scores;
    double average;    
};

void inputScores(std::vector<int>& scores);

double calculateAverage(const std::vector<int>& scores);

#endif 