//
// Created by hiesx on 31.10.2024.
//

#ifndef QUESTIONSYSTEM_H
#define QUESTIONSYSTEM_H
#include <map>
#include <string>
#include <vector>

/**
 * @brief Class to store and retrieve questions and answers
 */
class QuestionSystem {
public:
    QuestionSystem() = default;
    ~QuestionSystem() = default;

    /**
     * @brief Inserts a question and its answers into the system
     * @param question String containing the question
     * @param answer Vector of strings containing the answers
     */
    void insertQuestion(std::string const& question, std::vector<std::string> const& answer);

    /**
     * @brief Gets the answers for a given question
     * @param question Given question
     * @return Vector of strings containing the answers
     */
    std::vector<std::string> getAnswers(std::string const &question) const;

    /**
     * @brief Helper function to parse and insert a question and its answers
     * @param input String containing the question and answers
     * @return True if the question and answers were successfully added, false otherwise
     */
    bool parseAndInsert(std::string const& input);

private:
    std::map<std::string, std::vector<std::string>> qSystemMap;
};



#endif //QUESTIONSYSTEM_H
