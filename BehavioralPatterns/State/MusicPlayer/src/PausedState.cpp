#include "MusicPlayer.hpp"
#include "PausedState.hpp"

PausedState::PausedState() : MusicPlayerState(std::string("Paused")) {
}

PausedState::~PausedState() {
}

void PausedState::Play(MusicPlayer* player) {
    player->SetState(MusicPlayer::State::PLAYING);
}

void PausedState::Stop(MusicPlayer* player) {
    player->SetState(MusicPlayer::State::STOPPED);
}
