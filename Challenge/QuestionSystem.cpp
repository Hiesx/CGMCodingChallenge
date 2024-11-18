//
// Created by hiesx on 31.10.2024.
//

#include "QuestionSystem.h"

void QuestionSystem::insertQuestion(std::string const& question, std::vector<std::string> const& answer)
{
    if (question.length() < 255 && !answer.empty())
    {
        qSystemMap.insert({question, answer});
    }
}

std::vector<std::string> QuestionSystem::getQuestion(std::string const& question) const
{
    if (const auto it = qSystemMap.find(question); it != qSystemMap.end())
    {
        return it->second;
    }
    return {};
}
