//
// Created by hiesx on 18.11.2024.
//

#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include "QuestionSystem.h"

/**
 * @brief Class to handle user input
 */
class InputHandler {
public:
    /**
     * @brief Displays a simple menu to the user
     */
    void displayMenu() ;

     /**
     * @brief Handles the user input for asking a question
     * @param qa_system The question system to use
     */
    void handleAsk(QuestionSystem const& qa_system);

    /**
     * @brief Handles the user input for adding a question
     * @param qa_system The question system to use
     */
    void handleAdd(QuestionSystem& qa_system);
};



#endif //INPUTHANDLER_H
