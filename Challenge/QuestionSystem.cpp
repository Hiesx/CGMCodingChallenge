//
// Created by hiesx on 31.10.2024.
//

#include "QuestionSystem.h"

#include <algorithm>
#include <iostream>

void QuestionSystem::insertQuestion(std::string const& question, std::vector<std::string> const& answer)
{
    // Check if the question is not too long and the answer is not empty
    if (question.length() < 255 && !answer.empty())
    {
        qSystemMap.insert({question, answer});
    } else
    {
        std::cerr << "Question or answer is too long or empty" << std::endl;
    }
}

std::vector<std::string> QuestionSystem::getAnswers(std::string const& question) const
{
    // Check if the question is in the map and return the answers
    if (const auto it = qSystemMap.find(question); it != qSystemMap.end())
    {
        return it->second;
    }
    // If the question is not in the map, return a default answer
    return {"The answer to life, universe, and everything is 42"};
}

bool QuestionSystem::parseAndInsert(std::string const& input)
{
    const size_t separatorPos = input.find('?');
    if (separatorPos == std::string::npos)
    {
        std::cerr << "Input must contain a '?' separator." << std::endl;
        return false;
    }

    // Extract the question and answers from the input
    const std::string question = input.substr(0, separatorPos+1);
    if (question.empty())
    {
        std::cerr << "Question cannot be empty." << std::endl;
        return false;
    }

    std::string answersPart = input.substr(separatorPos + 1);
    std::vector<std::string> answers;

    // Extract answers between quotes
    size_t pos = 0;
    while ((pos = answersPart.find('\"')) != std::string::npos)
    {
        // Find the next quote
        const size_t nextQuote = answersPart.find('\"', pos + 1);
        if (nextQuote == std::string::npos)
        {
            std::cerr << "Mismatched quotes in answers." << std::endl;
            return false;
        }

        // Extract the answer between quotes
        if (std::string answer = answersPart.substr(pos + 1, nextQuote - pos - 1); !answer.empty())
        {
            answers.push_back(answer);
        }
        answersPart.erase(0, nextQuote + 1);
    }

    if (answers.empty())
    {
        std::cerr << "At least one answer is required." << std::endl;
        return false;
    }

    insertQuestion(question, answers);
    return true;
}
