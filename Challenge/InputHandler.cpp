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

    auto answers = qa_system.getQuestion(question);
    if (answers.empty())
    {
        std::cout << "No answer found for the question" << std::endl;
    }
    else
    {
        for (const auto& answer : answers)
        {
            std::cout << answer << std::endl;
        }
    }
}

void InputHandler::handleAdd(QuestionSystem& qa_system)
{
    std::cout << "Enter the question: ";
    std::string question;
    std::getline(std::cin, question);

    std::cout << "Enter the answer seperated by semicolon: ";
    std::string answer;
    std::getline(std::cin, answer);

    std::vector<std::string> answers;
    size_t pos = 0;
    while ((pos = answer.find(';')) != std::string::npos)
    {
        answers.push_back(answer.substr(0, pos));
        answer.erase(0, pos + 1);
    }
    answers.push_back(answer);

    qa_system.insertQuestion(question, answers);
    std::cout << "Question added successfully" << std::endl;
}
