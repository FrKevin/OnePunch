#include <iostream>

#include "core/Application.hpp"
#include "core/Config.hpp"


Application::Application():
    _window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_NAME)
{
    //ctor
}

Application::~Application()
{
    //dtor
    //delete _instance;
}


void Application::run()
{
    while (_window.isOpen()) {
        processEvent();
        update();
        render();
    }
}

void Application::processEvent()
{
    sf::Event event;
    while (_window.pollEvent(event)) {
        switch (event.type) {
        case sf::Event::Closed :
            _window.close();
            break;
        default :
            break;
        }
    }
}

void Application::update()
{

}

void Application::render()
{
    _window.clear();
    /* _window.draw(Drawable); */
    _window.display();
}
