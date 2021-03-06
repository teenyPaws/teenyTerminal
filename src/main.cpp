/*
    teenyTerminal

    Credits to: 
        - Halogem (github.com/teenyPaws)
        - Unknown Online Resources

    Functions are placed in "headers/main.h"

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

#include "headers/main.h"

std::string callApp;
int main() {
    int runtime;

    while(1 == 1) {
        runtime = 1;

        loadText: // Loads txt files. Review main.h [L:27]
        system("clear");
        std::cout << txt("ascii/title.txt") << std::endl << std::flush;
        while (runtime == 1) {
            cmd(); // init
            std::cout << ">> ";
            std::cin >> callApp;

            switch (s_mapStringValues[callApp]) {
                case clear: // Clear text on ur screen
                    system("clear");
                    break;

                case shutdown: // closes the app
                    system("clear");
                    std::cout << txt("ascii/doggoArt.txt") << std::endl << std::flush;
                    std::cout << "Exiting teenyTerminal..." << std::endl;
                    delay(3); // Delay timing (refer to main.h [L:16]). Either 3 or 4 works best.
                    exit(1);

                case restart: // Reload command thing
                    system("clear");
                    std::cout << txt("ascii/cat.txt") << std::endl << std::flush;
                    std::cout << "[!] Restarting teenyTerminal..." << std::endl;
                    delay(3);
                    runtime = 0;
                    break;

                case help: // Command help list thing
                    std::cout << txt("ascii/help.txt") << std::endl << std::flush;
                    std::cout << std::endl;
                    break;

                case calc: // justa basic calculator
                    std::cout << txt("ascii/calcTitle.txt") << std::endl << std::flush;
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
                                std::cout << '\n' << invalidNum << std::endl;
                                std::cin.ignore(10000, '\n');
                                std::cin.clear();
                                break;
                            } else {
                                Ans = calcA(valA, valB);
                                std::cout << '\n' << "Final Added Result" << '\n' << " == " << Ans << std::endl;
                                std::cout << std::endl;
                            }
                            break;

                            case '-':
                                std::cout << "Number" << '\n' << ">> ";
                                if (!(std::cin >> valB)) {
                                    std::cout << '\n' << invalidNum << std::endl;
                                    std::cin.ignore(10000, '\n');
                                    std::cin.clear();
                                    break;

                            } else {
                                Ans = calcS(valA, valB);
                                std::cout << '\n' << "Final Subtracted Result" << '\n' << " == " << Ans << std::endl;
                                std::cout << std::endl;
                            }
                            break;

                            case '*':
                                std::cout << "Number" << '\n' << ">> ";
                                if (!(std::cin >> valB)) {
                                    std::cout << '\n' << invalidNum << std::endl;
                                    std::cin.ignore(10000, '\n');
                                    std::cin.clear();
                                    break;
                            } else {
                                Ans = calcM(valA, valB);
                                std::cout << '\n' << "Final Multiplied Result" << '\n' << " == " << Ans << std::endl;
                                std::cout << std::endl;
                            }
                            break;

                            case '/':
                                std::cout << "Number" << '\n' << " >> ";
                                if (!(std::cin >> valB)) {
                                    std::cout << '\n' << invalidNum << std::endl;
                                    std::cin.ignore(10000, '\n');
                                    std::cin.clear();
                                    break;
                            } else {
                                Ans = calcD(valA, valB);
                                std::cout << '\n' << "Final Divided Result" << '\n' << " == " << Ans << std::endl;
                                std::cout << std::endl;
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
                    std::cout << std::endl;
                    break;

            }
            std::cin.get();

        }
    }

    return 0;
}