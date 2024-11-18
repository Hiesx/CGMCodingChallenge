//
// Created by hiesx on 18.11.2024.
//

#include "InputHandler.h"

#include <iostream>

void InputHandler::displayMenu()
{
    std::cout << "1. Ask a question" << std::endl;
    std::cout << "2. Add a question" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

void InputHandler::handleAsk(QuestionSystem const& qa_system)
{
    std::cout << "Enter your question: ";
    std::string question;
    std::getline(std::cin, question);

    auto answers = qa_system.getAnswers(question);
    for (const auto& answer : answers)
    {
        std::cout << answer << std::endl;
    }
}

void InputHandler::handleAdd(QuestionSystem& qa_system)
{
    std::cout << R"(Enter the question and answers in the format: QUESTION ? "ANSWER1" "ANSWER2" ...)" << std::endl;
    std::string input;
    std::getline(std::cin, input);

    if (qa_system.parseAndInsert(input))
    {
        std::cout << "Question and answers added successfully." << std::endl;
    }
    else
    {
        std::cerr << "Failed to add the question and answers. Please check the format." << std::endl;
    }
}
