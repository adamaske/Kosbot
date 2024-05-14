#pragma once

#include "Graphics.h"
#include "KosbotServer.h"
#include <memory>

class Kosbot{

private:
    std::shared_ptr<Graphics> graphics;
    std::shared_ptr<KosbotServer> server;

public:
    void Initalize();

    void Run();

};