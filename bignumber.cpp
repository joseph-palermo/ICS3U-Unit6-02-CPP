// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: Decemeber 2019
// This program calculates the biggest value in an array

#include <iostream>
#include <ctime>
#include <array>

template<size_t N>
int Calculate(std::array<int, N> numberArray) {
    // this function calculates the biggest value in a list

    // variables & arrays
    int bigNumber = 0;

    // process
    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        if (numberArray[loopCounter] > bigNumber) {
            bigNumber = numberArray[loopCounter];
        }
    }

    return bigNumber;
}

int main() {
    // this function generates 10 random numbers and puts them in an array

    // seed
    unsigned int seed = time(NULL);

    // variables and arrays
    int randomNumber;
    int largestNumber;
    std::array<int, 10> numberArray;

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        randomNumber = rand_r(&seed) % 100;
        std::cout << randomNumber << std::endl;
        numberArray[loopCounter] = randomNumber;
    }

    // process
    largestNumber = Calculate(numberArray);

    // output
    std::cout << "The biggest number is " << largestNumber;
}
