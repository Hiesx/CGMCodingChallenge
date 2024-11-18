//
// Created by hiesx on 18.11.2024.
//

#include <gtest/gtest.h>
#include "QuestionSystem.h"

TEST(QuestionSystemTest, ValidInput)
{
    QuestionSystem qa;
    EXPECT_TRUE(qa.parseAndInsert("What is Peters favorite food? \"Pizza\" \"Spaghetti\" \"Ice cream\""));
    const auto answers = qa.getAnswers("What is Peters favorite food?");
    EXPECT_EQ(answers.size(), 3);
    EXPECT_EQ(answers[0], "Pizza");
    EXPECT_EQ(answers[1], "Spaghetti");
    EXPECT_EQ(answers[2], "Ice cream");
}

TEST(QuestionSystemTest, MissingSeparator)
{
    QuestionSystem qa;
    EXPECT_FALSE(qa.parseAndInsert("What is Peters favorite food \"Pizza\" \"Spaghetti\""));
}

TEST(QuestionSystemTest, NoAnswersProvided)
{
    QuestionSystem qa;
    EXPECT_FALSE(qa.parseAndInsert("What is Peters favorite food ?"));
}

TEST(QuestionSystemTest, NoAnswerInSystem)
{
    QuestionSystem qa;
    const auto answers = qa.getAnswers("What is Peters favorite food?");
    EXPECT_EQ(answers.size(), 1);
    EXPECT_EQ(answers[0], "The answer to life, universe, and everything is 42");
}