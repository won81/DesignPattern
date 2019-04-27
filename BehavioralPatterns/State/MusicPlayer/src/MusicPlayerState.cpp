#include "MusicPlayerState.hpp"
#include "MusicPlayer.hpp"

MusicPlayerState::MusicPlayerState(std::string name) : mName(name) {
}

MusicPlayerState::~MusicPlayerState() {
}

void MusicPlayerState::Play(MusicPlayer* player) {
    (void)player;
    std::cout << "Illegal state transition from " << GetState() << " to play" << std::endl;
}

void MusicPlayerState::Pause(MusicPlayer* player) {
    (void)player;
    std::cout << "Illegal state transition from " << GetState() << " to pause" << std::endl;
}

void MusicPlayerState::Stop(MusicPlayer* player) {
    (void)player;
    std::cout << "Illegal state transition from " << GetState() << " to stop" << std::endl;
}
