//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main()
//{
//    const int width = 800;
//    const int height = 800;
//    const int gridSize = 100;
//    sf::RenderWindow window(sf::VideoMode(width, height), "Chessboard");
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//
//        for (int y = 0; y < height; y += gridSize)
//        {
//            for (int x = 0; x < width; x += gridSize)
//            {
//                sf::RectangleShape square(sf::Vector2f(gridSize, gridSize));
//                square.setPosition(x, y);
//                // Alternate the fill color based on the sum of x and y
//                if ((x + y) / gridSize % 2 == 0)
//                    square.setFillColor(sf::Color::Black);
//                else
//                    square.setFillColor(sf::Color::White);
//                window.draw(square);
//            }
//        }
//
//        window.display();
//    }
//
//    return 0;
//}
