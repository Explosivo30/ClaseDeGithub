// GameLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <WinUser.h>

int main()
{
    //Configuration
    std::cout << "Configuration" << std::endl;
    //Setup initial parameters of the game(weather, player name, fps)
    const int FPS = 15;
    int frameCount = 0;
    bool userPressedUpKey = false;
    //GAME LOOP
    //bool isGameRunning = true;
    while (true)
    {
        //INPUT
         
        if (GetAsyncKeyState(VK_ESCAPE)) {
            std::cout << "EXITING GAME LOOP" << std::endl;
            break;
        }


        if (GetAsyncKeyState(VK_UP)) {
            userPressedUpKey = true;
        }

        if (frameCount >= 9 || userPressedUpKey) {
            frameCount = 0;
        }

        if (userPressedUpKey) {
            system("CLS");
            userPressedUpKey = false;
        }
        //RENDER

        std::cout << ++frameCount << std::endl;


        //Frame Control
        Sleep(1000 / FPS);
    }
    //


}


