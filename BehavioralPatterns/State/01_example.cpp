#include "MusicPlayer.hpp"

#include <iostream>

int main() {
    MusicPlayer player;

    player.Play();
    player.Pause();
    player.Stop();

    player.Pause();

    return 0;
}
