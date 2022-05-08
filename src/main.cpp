/*
    teenyTerminal Sources
    Credits to: 
        - "Halogem" | github.com/teenyPaws
    ──────────────────────────────────────────────────────────────────────────────────────
    [!] For more detail, please refer to README.md located in the root of the repository.
*/

#include "headers/main.h"

std::string callApp;
int main() {
    int runtime;

    while(1 == 1) {
        runtime = 1;

        loadText: // Loads txt files. Review main.h [L:27]
        system("clear");
        std::cout << txt("includes/ascii/title.txt") << std::endl << std::flush;
            while (runtime == 1) {
            cmd(); // Initializes user commands.
            std::cout << ">> ";
            std::cin >> callApp;

            switch (s_mapStringValues[callApp]) {   
                case clear: // Clear text on screen
                    system("clear");
                    break;

                case shutdown: // Shutdown
                    system("clear");
                    std::cout << txt("includes/ascii/doggoArt.txt") << std::endl << std::flush;
                    std::cout << "Exiting teenyTerminal..." << std::endl;
                    delay(3); // Delay timing (refer to main.h [L:16]). Either 3 or 4 works best.
                    exit(1);
            
                case restart: // Restart terminal
                    system("clear");
                    std::cout << "[!] Restarting teenyTerminal..." << std::endl;
                    delay(3);
                    runtime = 0;
                    break;

                case admin: // Admin Access
                    std::cout << "Admin commands are coming soon..." << std::endl;
                    std::cout << endl;
                    break;

                case help: // Command help list
                    std::cout << txt("includes/ascii/help.txt") << std::endl << std::flush;
                    std::cout << endl;
                    break;

                case calc: // Basic Calculator
                    std::cout << txt("includes/ascii/calc_title.txt") << std::endl << std::flush;
                    std::cout << std::endl;

                    std::cout << "Number" << '\n' << " >> ";
                    if (!(std::cin >> valA)) {
                        std::cout << invalidNum << std::endl;
                        std::cin.ignore(10000, '\n');
                        std::cin.clear();
                        break;

                    } else {
                        std::cout << "Operator (+, -, *, /)" << '\n' << " >> ";
                        std::cin >> calcOperator;

                        switch (calcOperator) {
                            case '+':
                            std::cout << "Number" << '\n' << " >> ";
                            if (!(std::cin >> valB)) {
                                std::cout << '\n' << invalidNum << endl;
                                std::cin.ignore(10000, '\n');
                                std::cin.clear();
                                break;
                            } else {
                                Ans = calcA(valA, valB);
                                std::cout << '\n' << "Final Added Result" << '\n' << " == " << Ans << std::endl;
                                std::cout << endl;
                            }
                            break;

                            case '-':
                                std::cout << "Number" << '\n' << ">> ";
                                if (!(std::cin >> valB)) {
                                    std::cout << '\n' << invalidNum << endl;
                                    std::cin.ignore(10000, '\n');
                                    std::cin.clear();
                                    break;

                            } else {
                                Ans = calcS(valA, valB);
                                std::cout << '\n' << "Final Subtracted Result" << '\n' << " == " << Ans << std::endl;
                                std::cout << endl;
                            }
                            break;

                            case '*':
                                std::cout << "Number" << '\n' << ">> ";
                                if (!(std::cin >> valB)) {
                                    std::cout << '\n' << invalidNum << endl;
                                    std::cin.ignore(10000, '\n');
                                    std::cin.clear();
                                    break;
                            } else {
                                Ans = calcM(valA, valB);
                                std::cout << '\n' << "Final Multiplied Result" << '\n' << " == " << Ans << endl;
                                std::cout << endl;
                            }
                            break;

                            case '/':
                                std::cout << "Number" << '\n' << " >> ";
                                if (!(std::cin >> valB)) {
                                    std::cout << '\n' << invalidNum << endl;
                                    std::cin.ignore(10000, '\n');
                                    std::cin.clear();
                                    break;
                            } else {
                                Ans = calcD(valA, valB);
                                std::cout << '\n' << "Final Divided Result" << '\n' << " == " << Ans << endl;
                                std::cout << endl;
                            }

                        default:
                            std::cout << '\n' << "Unknown Operator // Press enter to continue..." << '\n' << std::endl;
                            std::cin.ignore(10000, '\n');
                            std::cin.clear();
                            break;
                        }
                    }
                    break;

                default: // Unrecognized command prompt
                    std::cout << '\n' << "[!] Use 'help' to list available commands." << std::endl;
                    std::cout << endl;
                    break;
    
            }
            std::cin.get();

        }
    }
    
    return 0;
}

/*
⠀⠀⠀⢠⣾⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⣰⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⢰⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣄⣀⣀⣤⣤⣶⣾⣿⣿⣿⡷
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀
⣿⣿⣿⡇⠀⡾⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀
⣿⣿⣿⣧⡀⠁⣀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠉⢹⠉⠙⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣀⠀⣀⣼⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠀⠤⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⠿⠋⢃⠈⠢⡁⠒⠄⡀⠈⠁⠀⠀⠀⠀⠀⠀⠀
⣿⣿⠟⠁⠀⠀⠈⠉⠉⠁⠀⠀⠀⠀⠈⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/