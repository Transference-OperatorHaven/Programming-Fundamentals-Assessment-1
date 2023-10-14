#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
void main()
{
    //Add code here to print out an ASCII art game header
    //of your choice. Characters should be aligned correctly
    //such that when the application is run, it prints out a legible
    //ascii art game header.
    //---
    // Some useful resources:
    //- https://patorjk.com/software/taag/
    //- https://www.asciiart.eu/

    //colour codes https://www.geeksforgeeks.org/how-to-print-colored-text-in-c/

    system("mode con COLS=700");
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x2000000);

    system("Color 0C");
    cout << "                .                                            .";
    cout << "\n     *   .                  .              .        .   *          .";
    cout << "\n  .         .                     .       .           .      .        .";
    cout << "\n        o                             .                   .";
    cout << "\n        .              .                  .           .";
    cout << "\n               .";
    cout << "\n                .          .        .        ,                ,    ,";
    cout << "\n.           \\          .                         .";
    cout << "\n      .      \\   ,";
    cout << "\n   .          o     .                 .                   .            .";
    cout << "\n     .         \\                 ,             .                .";
    cout << "\n               #\\##\\#      .                              .        .";
    cout << "\n             ###O##\\###                 .                        .";
    cout << "\n   .        #*###\\##\\###                        .                     ,";
    cout << "\n        .   ##*###\\##\\##                .                     .";
    cout << "\n      .      ##*###\\##\\#          .                             ,       .";
    cout << "\n          .     ####\#\\      .                    .             .          ,";
    cout << "\n                      \\          .                         .";
    cout << "\n____^/\\___^--____/\\____o______________/\\/\\---/\\___________---______________";
    cout << "\n   /\\^   ^  ^    ^                  ^^ ^  '\\ ^          ^       ---";
    cout << "\n         --           -            --  -      -         ---  __       ^";
    cout << "\n   --  __                      ___--  ^  ^                         --  __";

    cout << "\n __                            __                                                           ______                                         __                                         ";
    cout << "\n/  |                          /  |                                                         /      \\                                       /  |                                        ";
    cout << "\n$$ |____    ______   __    __ $$ |        ______   __   __   __   ______   __    __       /$$$$$$  |______    ______   _____  ____        $$ |____    ______   _____  ____    ______  ";
    cout << "\n$$      \\  /      \\ /  |  /  |$$ |       /      \\ /  | /  | /  | /      \\ /  |  /  |      $$ |_ $$//      \\  /      \\ /     \\/    \\       $$      \\  /      \\ /     \\/    \\  /      \\ ";
    cout << "\n$$$$$$$  | $$$$$$  |$$ |  $$ |$$ |       $$$$$$  |$$ | $$ | $$ | $$$$$$  |$$ |  $$ |      $$   |  /$$$$$$  |/$$$$$$  |$$$$$$ $$$$  |      $$$$$$$  |/$$$$$$  |$$$$$$ $$$$  |/$$$$$$  |";
    cout << "\n$$ |  $$ | /    $$ |$$ |  $$ |$$ |       /    $$ |$$ | $$ | $$ | /    $$ |$$ |  $$ |      $$$$/   $$ |  $$/ $$ |  $$ |$$ | $$ | $$ |      $$ |  $$ |$$ |  $$ |$$ | $$ | $$ |$$    $$ |";
    cout << "\n$$ |  $$ |/$$$$$$$ |$$ \\__$$ |$$ |      /$$$$$$$ |$$ \\_$$ \\_$$ |/$$$$$$$ |$$ \\__$$ |      $$ |    $$ |      $$ \\__$$ |$$ | $$ | $$ |      $$ |  $$ |$$ \\__$$ |$$ | $$ | $$ |$$$$$$$$/ ";
    cout << "\n$$ |  $$ |$$    $$ |$$    $$/ $$ |      $$    $$ |$$   $$   $$/ $$    $$ |$$    $$ |      $$ |    $$ |      $$    $$/ $$ | $$ | $$ |      $$ |  $$ |$$    $$/ $$ | $$ | $$ |$$       |";
    cout << "\n$$/   $$/ \\$$$$$$$/ \\$$$$$$/  $$/       \\$$$$$$$/ \\$$$$$/$$$$/  \\$$$$$$$/ \\$$$$$$$ |      $$/     $$/       \\$$$$$$/  $$/  $$/  $$/       $$/   $$/ \\$$$$$$/  $$/  $$/  $$/ \\$$$$$$$/ ";
    cout << "\n                                                                          /  \\__$$ |                                                                                                  ";
    cout << "\n                                                                          $$    $$/                                                                                                   ";
    cout << "\n                                                                           $$$$$$/                                                                                                    ";
    cout << "\n\n A game about space, trucks and space trucks";
    cout << "\n\n";
}