// Copyright (c) Crestel Ong All rights reserved
//
// Created by: Crestel
// Created on: Sep 2019
// This program sees if you can guess the number its thinking

#include <iostream>

int main() {
    // this function sees if you can guess the numer its thinking of
    const int RIGHT_NUMBER = 5;
    int guessNumber;

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> guessNumber;

    // process 1
    if (guessNumber == RIGHT_NUMBER) {
        // output 1
        std::cout << "You guessed correctly!";
    }

    // process 2
    if (guessNumber != RIGHT_NUMBER) {
        // output
        std::cout << "You guessed wrong!";
    }
       std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
