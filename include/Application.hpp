#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <SFML/Graphics.hpp>

/* Note, cette classe doit etre un Singleton (une instance) */
class Application
{
    public:
        Application();
        virtual ~Application();
        void run();

    protected:
        void processEvent();
        void update();
        void render();

    private:
        sf::RenderWindow _window;

};

#endif // APPLICATION_HPP
