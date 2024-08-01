//#include <SFML/Graphics.hpp>
//#include <SFML/Audio.hpp>
//#include <iostream>
//
//// Board print For 3*3
////void BoardPrint(int board[][3], int n) {
////    for (int i = 0; i < n; i++) {
////        for (int j = 0; j < n; j++) {
////            if (board[i][j] == 1) {
////                std::cout << "X";
////            }
////            else if (board[i][j] == 2) {
////                std::cout << "0";
////            }
////            else {
////                std::cout << "-";
////            }
////        }
////        std::cout << std::endl;
////    }
////}
//// Winner check for 3*3
//bool CheckWinner(int board[][3], int n) {
//    for (int i = 0; i < n; i++) {
//        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != 0) {
//            return true;
//        }
//    }
//    for (int j = 0; j < n; j++) {
//        if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != 0) {
//            return true;
//        }
//    }
//    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != 0) {
//        return true;
//    }
//    if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != 0) {
//        return true;
//    }
//    return false;
//}
//// Board Print for 4*4
////void BoardPrint1(int board[][4], int n) {
////    for (int i = 0; i < n; i++) {
////        for (int j = 0; j < n; j++) {
////            if (board[i][j] == 1) {
////                std::cout << "X";
////            }
////            else if (board[i][j] == 2) {
////                std::cout << "O";
////            }
////            else {
////                std::cout << "-";
////            }
////        }
////        std::cout << std::endl;
////    }
////}
//// Winner Check for 4*4
//bool CheckWinner1(int board[][4], int n) {
//    for (int i = 0; i < n; i++) {
//        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] == board[i][3] && board[i][0] != 0) {
//            return true;
//        }
//    }
//    for (int j = 0; j < n; j++) {
//        if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] == board[3][j] && board[0][j] != 0) {
//            return true;
//        }
//    }
//    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] == board[3][3] && board[0][0] != 0) {
//        return true;
//    }
//    if (board[0][3] == board[1][2] && board[0][3] == board[2][1] && board[0][3] == board[3][0] && board[0][3] != 0) {
//        return true;
//    }
//    for (int i = 0; i < n; i++) {
//        bool win = true;
//        for (int j = 0; j < n - 1; j++) {
//            if (board[i][j] != board[i][j + 1] || board[i][j] == 0) {
//                win = false;
//                break;
//            }
//        }
//        if (win) return true;
//    }
//    for (int j = 0; j < n; j++) {
//        bool win = true;
//        for (int i = 0; i < n - 1; i++) {
//            if (board[i][j] != board[i + 1][j] || board[i][j] == 0) {
//                win = false;
//                break;
//            }
//        }
//        if (win) return true;
//    }
//    return false;
//}
//// Board Print for 5*5
////void BoardPrint2(int board[][5], int n) {
////    for (int i = 0; i < n; i++) {
////        for (int j = 0; j < n; j++) {
////            if (board[i][j] == 1) {
////                std::cout << "X";
////            }
////            else if (board[i][j] == 2) {
////                std::cout << "O";
////            }
////            else {
////                std::cout << "-";
////            }
////        }
////        std::cout << std::endl;
////    }
////}
//// Winner check for 5*5
//bool CheckWinner2(int board[][5], int n) {
//    for (int i = 0; i < n; i++) {
//        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] == board[i][3] && board[i][0] == board[i][4] && board[i][0] != 0) {
//            return true;
//        }
//    }
//    for (int j = 0; j < n; j++) {
//        if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] == board[3][j] && board[0][j] == board[4][j] && board[0][j] != 0) {
//            return true;
//        }
//    }
//    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] == board[3][3] && board[0][0] == board[4][4] && board[0][0] != 0) {
//        return true;
//    }
//    if (board[0][4] == board[1][3] && board[0][4] == board[2][2] && board[0][4] == board[3][1] && board[0][4] == board[4][0] && board[0][4] != 0) {
//        return true;
//    }
//    for (int i = 0; i < n; i++) {
//        bool win = true;
//        for (int j = 0; j < n - 1; j++) {
//            if (board[i][j] != board[i][j + 1] || board[i][j] == 0) {
//                win = false;
//                break;
//            }
//        }
//        if (win) return true;
//    }
//    for (int j = 0; j < n; j++) {
//        bool win = true;
//        for (int i = 0; i < n - 1; i++) {
//            if (board[i][j] != board[i + 1][j] || board[i][j] == 0) {
//                win = false;
//                break;
//            }
//        }
//        if (win) return true;
//    }
//    return false;
//}
//// Main function here apply our logic while using sfml Graphics
//int main() {
//
//    int player_1 = 1, player_2 = 2, row, col;
//    int size = 3; // Size of the tic-tac-toe board
//    int matrix[3][3] = { 0 };
//    // Start window
//    sf::RenderWindow startWindow(sf::VideoMode(1080, 750), "Start Window");
//
//    sf::Font font;
//    if (!font.loadFromFile("ShortBaby-Mg2w.ttf")) {
//        std::cerr << "Failed to load font." << std::endl;
//        return 1;
//    }
//    sf::Music music;
//    if (!music.openFromFile("Chestnuts(chosic.com).mp3")) {
//        std::cerr << "Error loading music!" << std::endl;
//        return -1;
//    }
//    music.play();
//
//    sf::Texture backgroundTexture;
//    if (!backgroundTexture.loadFromFile("photo.jpg")) {
//        std::cerr << "Failed to load background image." << std::endl;
//        return 1;
//    }
//    sf::Sprite backgroundSprite(backgroundTexture);
//
//    sf::Text startText("Start", font);
//    startText.setCharacterSize(70);
//    startText.setFillColor(sf::Color::White);
//    startText.setPosition(830, 570);
//
//    sf::Text resetText("Reset", font);
//    resetText.setCharacterSize(50);
//    resetText.setFillColor(sf::Color::White);
//    resetText.setPosition(850, 800);
//
//    sf::Text leveltext("Level 2", font); // Changed text to "Level 2"
//    leveltext.setCharacterSize(50);
//    leveltext.setFillColor(sf::Color::White);
//    leveltext.setPosition(850, 50);
//
//    while (startWindow.isOpen()) {
//        sf::Event event;
//        while (startWindow.pollEvent(event)) {
//            if (event.type == sf::Event::Closed)
//                startWindow.close();
//            if (event.type == sf::Event::MouseButtonReleased) {
//                sf::Vector2f mousePos = sf::Vector2f(sf::Mouse::getPosition(startWindow));
//                if (startText.getGlobalBounds().contains(mousePos)) {
//                    startWindow.close();
//
//                    sf::RenderWindow window(sf::VideoMode(1080, 780), "Tic-Tac-Toe Level 1");
//
//                    sf::Texture backgroundTexture;
//                    if (!backgroundTexture.loadFromFile("2 (1).jpg")) {
//                        std::cerr << "Failed to load background image." << std::endl;
//                        return 1;
//                    }
//                    sf::Sprite backgroundSprite(backgroundTexture);
//
//                    const float buttonSize = 90.f;
//                    const float padding = 25.f;
//                    const int gridSize = 3;
//
//                    float gridWidth = gridSize * (buttonSize + padding) - padding;
//                    float gridHeight = gridSize * (buttonSize + padding) - padding;
//                    float posX = (window.getSize().x - gridWidth) / 2;
//                    float posY = (window.getSize().y - gridHeight) / 2;
//
//                    sf::RectangleShape buttons[gridSize][gridSize];
//                    sf::Text buttonTexts[gridSize][gridSize];
//
//                    sf::Text gameName;
//                    gameName.setFont(font);
//                    gameName.setString("Tic Tac Toe");
//                    gameName.setCharacterSize(70);
//                    gameName.setFillColor(sf::Color::White);
//                    gameName.setPosition((window.getSize().x - gameName.getLocalBounds().width) / 2, posY - 120);
//
//                    sf::Text winnerText;
//                    winnerText.setFont(font);
//                    winnerText.setCharacterSize(55);
//                    winnerText.setFillColor(sf::Color::Green);
//                    winnerText.setPosition((window.getSize().x - winnerText.getLocalBounds().width) / 2, posY + gridHeight + 60);
//
//                    for (int i = 0; i < gridSize; ++i) {
//                        for (int j = 0; j < gridSize; ++j) {
//                            buttons[i][j].setPosition(posX + j * (buttonSize + padding), posY + i * (buttonSize + padding));
//                            buttons[i][j].setSize(sf::Vector2f(buttonSize, buttonSize));
//                            buttons[i][j].setFillColor(sf::Color::Transparent);
//                            buttons[i][j].setOutlineThickness(7);
//                            buttons[i][j].setOutlineColor(sf::Color::White);
//
//                            buttonTexts[i][j].setFont(font);
//                            buttonTexts[i][j].setCharacterSize(50);
//                            buttonTexts[i][j].setFillColor(sf::Color::White);
//                            buttonTexts[i][j].setPosition(posX + j * (buttonSize + padding) + 10, posY + i * (buttonSize + padding) + 10);
//                        }
//                    }
//
//                    bool winner = false;
//
//                    while (window.isOpen()) {
//                        sf::Event event;
//                        while (window.pollEvent(event)) {
//                            if (event.type == sf::Event::Closed) {
//                                window.close();
//                                startWindow.close();
//                            }
//                            if (event.type == sf::Event::MouseButtonPressed) {
//                                if (event.mouseButton.button == sf::Mouse::Left && !winner) {
//                                    sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
//                                    for (int i = 0; i < gridSize; ++i) {
//                                        for (int j = 0; j < gridSize; ++j) {
//                                            if (buttons[i][j].getGlobalBounds().contains(mousePos) && matrix[i][j] == 0) {
//                                                if (player_1 == 1) {
//                                                    matrix[i][j] = 1;
//                                                    buttonTexts[i][j].setString("X");
//                                                    if (CheckWinner(matrix, size)) {
//                                                        winner = true;
//                                                        winnerText.setString("Player 1 wins! (X)");
//                                                    }
//                                                    player_2 = 1;
//                                                    player_1 = 0;
//                                                }
//                                                else if (player_2 == 1) {
//                                                    matrix[i][j] = 2;
//                                                    buttonTexts[i][j].setString("0");
//                                                    if (CheckWinner(matrix, size)) {
//                                                        winner = true;
//                                                        winnerText.setString("Player 2 wins! (0)");
//                                                    }
//                                                    player_1 = 1;
//                                                    player_2 = 0;
//                                                }
//                                            }
//                                        }
//                                    }
//                                }
//                                if (event.mouseButton.button == sf::Mouse::Left) {
//                                    sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
//                                    if (resetText.getGlobalBounds().contains(mousePos)) {
//                                        for (int i = 0; i < size; ++i) {
//                                            for (int j = 0; j < size; ++j) {
//                                                matrix[i][j] = 0;
//                                                buttonTexts[i][j].setString("");
//                                            }
//                                        }
//                                        player_1 = 1;
//                                        player_2 = 2;
//                                        winnerText.setString("");
//                                        winner = false;
//                                    }
//                                    // Add code to handle level 2 button click
//                                    if (leveltext.getGlobalBounds().contains(mousePos)) {
//                                        window.close();
//                                        int p1 = 1, p2 = 2, row, col;
//                                        int size = 4; // Size of the tic-tac-toe board
//                                        int matrix[4][4] = { 0 };
//
//                                        sf::RenderWindow window(sf::VideoMode(1080, 900), "Tic-Tac-Toe Level 2");
//
//                                        sf::Font font;
//                                        if (!font.loadFromFile("ShortBaby-Mg2w.ttf")) {
//                                            std::cerr << "Failed to load font." << std::endl;
//                                            return 1;
//                                        }
//
//                                        sf::Texture backgroundTexture;
//                                        if (!backgroundTexture.loadFromFile("powerpoint-template-450w (1).jpg")) {
//                                            std::cerr << "Failed to load background image." << std::endl;
//                                            return 1;
//                                        }
//                                        sf::Sprite backgroundSprite(backgroundTexture);
//
//                                        const float buttonSize = 75.f;
//                                        const float padding = 25.f;
//                                        const int gridSize = 4; // Changed to 4
//
//                                        float gridWidth = gridSize * (buttonSize + padding) - padding;
//                                        float gridHeight = gridSize * (buttonSize + padding) - padding;
//                                        float posX = (window.getSize().x - gridWidth) / 2;
//                                        float posY = (window.getSize().y - gridHeight) / 2;
//
//                                        sf::RectangleShape buttons[gridSize][gridSize];
//                                        sf::Text buttonTexts[gridSize][gridSize];
//
//                                        sf::Text gameName;
//                                        gameName.setFont(font);
//                                        gameName.setString("Tic Tac Toe");
//                                        gameName.setCharacterSize(60);
//                                        gameName.setFillColor(sf::Color::White);
//                                        gameName.setPosition((window.getSize().x - gameName.getLocalBounds().width) / 2, posY - 120);
//
//                                        sf::Text resetText("Reset", font);
//                                        resetText.setCharacterSize(50);
//                                        resetText.setFillColor(sf::Color::White);
//                                        resetText.setPosition(850, 800);
//
//                                        sf::Text leveltext("Level 3", font); // Changed text to "Level 2"
//                                        leveltext.setCharacterSize(50);
//                                        leveltext.setFillColor(sf::Color::White);
//                                        leveltext.setPosition(850, 50);
//
//                                        sf::Text winnerText;
//                                        winnerText.setFont(font);
//                                        winnerText.setCharacterSize(55);
//                                        winnerText.setFillColor(sf::Color::Yellow);
//                                        winnerText.setPosition((window.getSize().x - winnerText.getLocalBounds().width) / 2, posY + gridHeight + 60);
//
//                                        for (int i = 0; i < gridSize; ++i) {
//                                            for (int j = 0; j < gridSize; ++j) {
//                                                buttons[i][j].setPosition(posX + j * (buttonSize + padding), posY + i * (buttonSize + padding));
//                                                buttons[i][j].setSize(sf::Vector2f(buttonSize, buttonSize));
//                                                buttons[i][j].setFillColor(sf::Color::Blue);
//                                                buttons[i][j].setOutlineThickness(7);
//                                                buttons[i][j].setOutlineColor(sf::Color::White);
//
//                                                buttonTexts[i][j].setFont(font);
//                                                buttonTexts[i][j].setCharacterSize(50);
//                                                buttonTexts[i][j].setFillColor(sf::Color::White);
//                                                buttonTexts[i][j].setPosition(posX + j * (buttonSize + padding) + 10, posY + i * (buttonSize + padding) + 10);
//                                            }
//                                        }
//
//                                        bool winner = false;
//
//                                        while (window.isOpen()) {
//                                            sf::Event event;
//                                            while (window.pollEvent(event)) {
//                                                if (event.type == sf::Event::Closed) {
//                                                    window.close();
//                                                }
//                                                if (event.type == sf::Event::MouseButtonPressed) {
//                                                    if (event.mouseButton.button == sf::Mouse::Left && !winner) {
//                                                        sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
//                                                        for (int i = 0; i < gridSize; ++i) {
//                                                            for (int j = 0; j < gridSize; ++j) {
//                                                                if (buttons[i][j].getGlobalBounds().contains(mousePos) && matrix[i][j] == 0) {
//                                                                    if (p1 == 1) {
//                                                                        matrix[i][j] = 1;
//                                                                        buttonTexts[i][j].setString("X");
//                                                                        if (CheckWinner1(matrix, size)) {
//                                                                            winner = true;
//                                                                            winnerText.setString("Player 1 wins! (X)");
//                                                                        }
//                                                                        p2 = 1;
//                                                                        p1 = 0;
//                                                                    }
//                                                                    else if (p2 == 1) {
//                                                                        matrix[i][j] = 2;
//                                                                        buttonTexts[i][j].setString("O");
//                                                                        if (CheckWinner1(matrix, size)) {
//                                                                            winner = true;
//                                                                            winnerText.setString("Player 2 wins! (O)");
//                                                                        }
//                                                                        p1 = 1;
//                                                                        p2 = 0;
//                                                                    }
//                                                                }
//                                                            }
//                                                        }
//                                                    }
//                                                    if (event.mouseButton.button == sf::Mouse::Left) {
//                                                        sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
//                                                        if (resetText.getGlobalBounds().contains(mousePos)) {
//                                                            for (int i = 0; i < size; ++i) {
//                                                                for (int j = 0; j < size; ++j) {
//                                                                    matrix[i][j] = 0;
//                                                                    buttonTexts[i][j].setString("");
//                                                                }
//                                                            }
//                                                            p1 = 1;
//                                                            p2 = 2;
//                                                            winnerText.setString("");
//                                                            winner = false;
//                                                        }
//                                                        // for 5*5
//                                                        if (event.type == sf::Event::MouseButtonPressed) {
//                                                            // Check if the "Level 3" button is clicked
//                                                            if (event.mouseButton.button == sf::Mouse::Left && leveltext.getGlobalBounds().contains(mousePos)) {
//                                                                // Close the current window
//                                                                window.close();
//
//                                                                int p1 = 1, p2 = 2, row, col;
//                                                                int size = 5; // Size of the tic-tac-toe board
//                                                                int matrix[5][5] = { 0 };
//
//                                                                sf::RenderWindow window(sf::VideoMode(1080, 900), "SFML Tic-Tac-Toe");
//
//                                                                sf::Font font;
//                                                                if (!font.loadFromFile("ShortBaby-Mg2w.ttf")) {
//                                                                    std::cerr << "Failed to load font." << std::endl;
//                                                                    return 1;
//                                                                }
//                                                                sf::Texture backgroundTexture;
//                                                                if (!backgroundTexture.loadFromFile("347467318 (2).jpg")) {
//                                                                    std::cerr << "Failed to load background image." << std::endl;
//                                                                    return 1;
//                                                                }
//                                                                sf::Sprite backgroundSprite(backgroundTexture);
//
//                                                                const float buttonSize = 70.f;
//                                                                const float padding = 25.f;
//                                                                const int gridSize = 5;
//
//                                                                float gridWidth = gridSize * (buttonSize + padding) - padding;
//                                                                float gridHeight = gridSize * (buttonSize + padding) - padding;
//                                                                float posX = (window.getSize().x - gridWidth) / 2;
//                                                                float posY = (window.getSize().y - gridHeight) / 2;
//
//                                                                sf::RectangleShape buttons[gridSize][gridSize];
//                                                                sf::Text buttonTexts[gridSize][gridSize];
//
//                                                                sf::Text gameName;
//                                                                gameName.setFont(font);
//                                                                gameName.setString("Tic Tac Toe");
//                                                                gameName.setCharacterSize(65);
//                                                                gameName.setFillColor(sf::Color::White);
//                                                                gameName.setPosition((window.getSize().x - gameName.getLocalBounds().width) / 2, posY - 120);
//
//                                                                sf::Text winnerText;
//                                                                winnerText.setFont(font);
//                                                                winnerText.setCharacterSize(55);
//                                                                winnerText.setFillColor(sf::Color::Yellow);
//                                                                winnerText.setPosition((window.getSize().x - winnerText.getLocalBounds().width) / 2, posY + gridHeight + 60);
//
//                                                                sf::Text resetText("Reset", font);
//                                                                resetText.setCharacterSize(50);
//                                                                resetText.setFillColor(sf::Color::White);
//                                                                resetText.setPosition(850, 800);
//
//                                                                sf::Text Endgametext("End Game", font);
//                                                                Endgametext.setCharacterSize(50);
//                                                                Endgametext.setFillColor(sf::Color::Red);
//                                                                Endgametext.setPosition(810, 50);
//
//                                                                for (int i = 0; i < gridSize; ++i) {
//                                                                    for (int j = 0; j < gridSize; ++j) {
//                                                                        buttons[i][j].setPosition(posX + j * (buttonSize + padding), posY + i * (buttonSize + padding));
//                                                                        buttons[i][j].setSize(sf::Vector2f(buttonSize, buttonSize));
//                                                                        buttons[i][j].setFillColor(sf::Color::Green);
//                                                                        buttons[i][j].setOutlineThickness(7);
//                                                                        buttons[i][j].setOutlineColor(sf::Color::White);
//
//                                                                        buttonTexts[i][j].setFont(font);
//                                                                        buttonTexts[i][j].setCharacterSize(40);
//                                                                        buttonTexts[i][j].setFillColor(sf::Color::White);
//                                                                        buttonTexts[i][j].setPosition(posX + j * (buttonSize + padding) + 10, posY + i * (buttonSize + padding) + 10);
//                                                                    }
//                                                                }
//
//                                                                bool winner = false;
//
//                                                                while (window.isOpen()) {
//                                                                    sf::Event event;
//                                                                    while (window.pollEvent(event)) {
//                                                                        if (event.type == sf::Event::Closed) {
//                                                                            window.close();
//                                                                        }
//                                                                        if (event.type == sf::Event::MouseButtonPressed) {
//                                                                            if (event.mouseButton.button == sf::Mouse::Left && !winner) {
//                                                                                sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
//                                                                                for (int i = 0; i < gridSize; ++i) {
//                                                                                    for (int j = 0; j < gridSize; ++j) {
//                                                                                        if (buttons[i][j].getGlobalBounds().contains(mousePos) && matrix[i][j] == 0) {
//                                                                                            if (p1 == 1) {
//                                                                                                matrix[i][j] = 1;
//                                                                                                buttonTexts[i][j].setString("X");
//                                                                                                if (CheckWinner2(matrix, size)) {
//                                                                                                    winner = true;
//                                                                                                    winnerText.setString("Player 1 wins! (X)");
//                                                                                                }
//                                                                                                p2 = 1;
//                                                                                                p1 = 0;
//                                                                                            }
//                                                                                            else if (p2 == 1) {
//                                                                                                matrix[i][j] = 2;
//                                                                                                buttonTexts[i][j].setString("O");
//                                                                                                if (CheckWinner2(matrix, size)) {
//                                                                                                    winner = true;
//                                                                                                    winnerText.setString("Player 2 wins! (O)");
//                                                                                                }
//                                                                                                p1 = 1;
//                                                                                                p2 = 0;
//                                                                                            }
//                                                                                        }
//                                                                                    }
//                                                                                }
//                                                                            }
//                                                                            if (event.mouseButton.button == sf::Mouse::Left) {
//                                                                                sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
//                                                                                if (resetText.getGlobalBounds().contains(mousePos)) {
//                                                                                    for (int i = 0; i < size; ++i) {
//                                                                                        for (int j = 0; j < size; ++j) {
//                                                                                            matrix[i][j] = 0;
//                                                                                            buttonTexts[i][j].setString("");
//                                                                                        }
//                                                                                    }
//                                                                                    p1 = 1;
//                                                                                    p2 = 2;
//                                                                                    winnerText.setString("");
//                                                                                    winner = false;
//                                                                                }
//                                                                                if (Endgametext.getGlobalBounds().contains(mousePos)) {
//                                                                                    window.close();
//                                                                                }
//                                                                            }
//                                                                        }
//                                                                    }
//
//                                                                    window.clear(sf::Color::White);
//
//                                                                    window.draw(backgroundSprite);
//
//                                                                    window.draw(gameName);
//
//                                                                    for (int i = 0; i < gridSize; ++i) {
//                                                                        for (int j = 0; j < gridSize; ++j) {
//                                                                            window.draw(buttons[i][j]);
//                                                                            window.draw(buttonTexts[i][j]);
//                                                                        }
//                                                                    }
//
//                                                                    if (winner) {
//                                                                        window.draw(winnerText);
//                                                                    }
//
//                                                                    // Highlight effect for the buttons
//                                                                    sf::Vector2f mousePos = sf::Vector2f(sf::Mouse::getPosition(window));
//                                                                    for (int i = 0; i < gridSize; ++i) {
//                                                                        for (int j = 0; j < gridSize; ++j) {
//                                                                            if (buttons[i][j].getGlobalBounds().contains(mousePos)) {
//                                                                                buttons[i][j].setFillColor(sf::Color::Green);
//                                                                            }
//                                                                            else {
//                                                                                buttons[i][j].setFillColor(sf::Color::Transparent);
//                                                                            }
//                                                                        }
//                                                                    }
//
//                                                                    // Highlight effect for the reset button
//                                                                    if (resetText.getGlobalBounds().contains(mousePos)) {
//                                                                        resetText.setFillColor(sf::Color::Yellow);
//                                                                    }
//                                                                    else {
//                                                                        resetText.setFillColor(sf::Color::White);
//                                                                    }
//                                                                    // Highlight effect for the level 2 button
//                                                                    if (Endgametext.getGlobalBounds().contains(mousePos)) {
//                                                                        Endgametext.setFillColor(sf::Color::Red);
//                                                                    }
//                                                                    else {
//                                                                        Endgametext.setFillColor(sf::Color::Yellow);
//                                                                    }
//                                                                    window.draw(resetText); // Draw reset button
//                                                                    window.draw(Endgametext); // Draw level 2 button
//
//                                                                    window.display();
//                                                                }
//
//                                                            }
//                                                        }
//
//                                                    }
//                                                }
//                                            }
//
//                                            window.clear(sf::Color::White);
//
//                                            window.draw(backgroundSprite);
//
//                                            window.draw(gameName);
//
//                                            for (int i = 0; i < gridSize; ++i) {
//                                                for (int j = 0; j < gridSize; ++j) {
//                                                    window.draw(buttons[i][j]);
//                                                    window.draw(buttonTexts[i][j]);
//                                                }
//                                            }
//
//                                            if (winner) {
//                                                window.draw(winnerText);
//                                            }
//
//                                            // Highlight effect for the buttons
//                                            sf::Vector2f mousePos = sf::Vector2f(sf::Mouse::getPosition(window));
//                                            for (int i = 0; i < gridSize; ++i) {
//                                                for (int j = 0; j < gridSize; ++j) {
//                                                    if (buttons[i][j].getGlobalBounds().contains(mousePos)) {
//                                                        buttons[i][j].setFillColor(sf::Color::Black);
//                                                    }
//                                                    else {
//                                                        buttons[i][j].setFillColor(sf::Color::Transparent);
//                                                    }
//                                                }
//                                            }
//
//                                            // Highlight effect for the reset button
//                                            if (resetText.getGlobalBounds().contains(mousePos)) {
//                                                resetText.setFillColor(sf::Color::Green);
//                                            }
//                                            else {
//                                                resetText.setFillColor(sf::Color::White);
//                                            }
//                                            // Highlight effect for the level 2 button
//                                            if (leveltext.getGlobalBounds().contains(mousePos)) {
//                                                leveltext.setFillColor(sf::Color::Yellow);
//                                            }
//                                            else {
//                                                leveltext.setFillColor(sf::Color::White);
//                                            }
//                                            window.draw(resetText); // Draw reset button
//                                            window.draw(leveltext); // Draw level 2 button
//
//                                            window.display();
//                                        }
//
//                                    }
//                                }
//                            }
//
//                            window.clear(sf::Color::White);
//
//                            window.draw(backgroundSprite);
//
//                            window.draw(gameName);
//
//                            for (int i = 0; i < gridSize; ++i) {
//                                for (int j = 0; j < gridSize; ++j) {
//                                    window.draw(buttons[i][j]);
//                                    window.draw(buttonTexts[i][j]);
//                                }
//                            }
//
//                            if (winner) {
//                                window.draw(winnerText);
//                            }
//
//                            // Highlight effect for the buttons
//                            sf::Vector2f mousePos = sf::Vector2f(sf::Mouse::getPosition(window));
//                            for (int i = 0; i < gridSize; ++i) {
//                                for (int j = 0; j < gridSize; ++j) {
//                                    if (buttons[i][j].getGlobalBounds().contains(mousePos)) {
//                                        buttons[i][j].setFillColor(sf::Color::Black);
//                                    }
//                                    else {
//                                        buttons[i][j].setFillColor(sf::Color::Transparent);
//                                    }
//                                }
//                            }
//
//                            // Highlight effect for the reset button
//                            if (resetText.getGlobalBounds().contains(mousePos)) {
//                                resetText.setFillColor(sf::Color::Yellow);
//                            }
//                            else {
//                                resetText.setFillColor(sf::Color::White);
//                            }
//                            // Highlight effect for the level 2 button
//                            if (leveltext.getGlobalBounds().contains(mousePos)) {
//                                leveltext.setFillColor(sf::Color::Yellow);
//                            }
//                            else {
//                                leveltext.setFillColor(sf::Color::White);
//                            }
//                            window.draw(resetText); // Draw reset button
//                            window.draw(leveltext); // Draw level 2 button
//
//                            window.display();
//                        }
//                    }
//
//                }
//            }
//        }
//
//        startWindow.clear();
//        startWindow.draw(backgroundSprite);
//        startWindow.draw(startText);
//
//
//        // Highlight effect for the "Start" button
//        sf::Vector2f mousePos = sf::Vector2f(sf::Mouse::getPosition(startWindow));
//        if (startText.getGlobalBounds().contains(mousePos)) {
//            startText.setFillColor(sf::Color::Yellow);
//        }
//        else {
//            startText.setFillColor(sf::Color::White);
//        }
//
//        startWindow.display();
//    }
//
//    return 0;
//}
//
