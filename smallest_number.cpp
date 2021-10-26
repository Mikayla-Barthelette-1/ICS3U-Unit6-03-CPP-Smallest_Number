// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Oct 2021
// This program finds the smallest number out of 10 numbers

#include <iostream>
#include <random>
#include <array>


template<size_t N>
int findingSmallestNumber(std::array<int, N> randomNumbers) {
    // this function finds the smallest number

    int smallestNumber = randomNumbers[9];

    for (int aSingleElement : randomNumbers) {
        if (aSingleElement < smallestNumber) {
            smallestNumber = aSingleElement;
        }
    }

    return smallestNumber;
}

main() {
    // this function calls other functions

    std::array<int, 10> randomNumbers;
    int aRandomNumber;
    int smallestNumber;
    int loopCounter1;
    int amountOfNumbers = 10;

    srand(time(NULL));

    // input
    std::cout << "Starting ..." << std::endl;
    std::cout << std::endl;
    std::cout << "Here is a list of random numbers: " << std::endl;
    std::cout << std::endl;

    // process
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(1 , 100);  // [1 , 100]
        aRandomNumber = idist(rgen);
        randomNumbers[loop_counter] = aRandomNumber;
        loopCounter1 = loop_counter + 1;
        std::cout << "The random number " << loopCounter1 <<
        " is: " << randomNumbers[loop_counter] << std::endl;
    }

    smallestNumber = findingSmallestNumber(randomNumbers);

    // output
    std::cout << std::endl;
    std::cout << "The smallest number is " << smallestNumber << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
