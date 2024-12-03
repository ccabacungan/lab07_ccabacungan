#include <iostream>
#include "NeuralNetwork.hpp"

int main() {
    NeuralNetwork nn;
    nn.setLearningRate(0.01);

    // Example: Debugging forward propagation
    DataInstance exampleInstance = { {1.0, 0.5}, 1 }; // Replace with your actual DataInstance structure
    std::cout << "Predicting..." << std::endl;
    std::vector<double> output = nn.predict(exampleInstance);
    std::cout << "Prediction output: ";
    for (double val : output) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
