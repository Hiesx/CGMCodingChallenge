#include <iostream>

#include "InputHandler.h"
#include "QuestionSystem.h"

int main()
{
    QuestionSystem qa_system;
    InputHandler inputHandler;
    while(true)
    {
        inputHandler.displayMenu();
        int choice;
        std::cin >> choice;
        std::cin.ignore();

        switch(choice)
        {
            case 1:
                inputHandler.handleAsk(qa_system);
                break;
            case 2:
                inputHandler.handleAdd(qa_system);
                break;
            case 3:
                return EXIT_SUCCESS;
            default:
                std::cout << "Invalid choice" << std::endl;
        }
    }
}
