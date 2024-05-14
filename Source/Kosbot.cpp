#include "Kosbot.h"
#include <memory>

#include "Logger.h"

#include "Graphics.h"
void Kosbot::Initalize()
{
    Logger::Initalize(Logger::L_INFO, Logger::L_CONSOLE);
    Logger::Info("WELCOME TO KOSBOT!");

    server = std::make_shared<KosbotServer>();
    server->Initialize(IPEndpoint("127.0.0.1", 8000));


    graphics = std::make_shared<Graphics>();
    graphics->Init("KOSBOT");


}
void Kosbot::Run(){ //Main program loop

    Initalize();
    
    

    bool running = true;

    int result = 0;
    while (running) {

        server->Frame();

        result = graphics->Frame();
        if (!result) {
            running = false;
        }
    }
}