//
// Created by hiesx on 31.10.2024.
//

#ifndef QUESTIONSYSTEM_H
#define QUESTIONSYSTEM_H
#include <map>
#include <string>
#include <vector>


class QuestionSystem {
public:
    QuestionSystem() = default;
    ~QuestionSystem() = default;
    void insertQuestion(std::string const& question, std::vector<std::string> const& answer);
    std::vector<std::string> getAnswers(std::string const &question) const;
    bool parseAndInsert(std::string const& input);

private:
    std::map<std::string, std::vector<std::string>> qSystemMap;
};



#endif //QUESTIONSYSTEM_H
