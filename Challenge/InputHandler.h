//
// Created by hiesx on 18.11.2024.
//

#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include "QuestionSystem.h"


class InputHandler {
public:
    void displayMenu() ;
    void handleAsk(QuestionSystem const& qa_system);
    void handleAdd(QuestionSystem& qa_system);
};



#endif //INPUTHANDLER_H
