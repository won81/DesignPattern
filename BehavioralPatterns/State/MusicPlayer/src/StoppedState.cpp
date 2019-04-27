#include "MusicPlayer.hpp"
#include "StoppedState.hpp"

StoppedState::StoppedState() : MusicPlayerState(std::string("Stopped")) {
}

StoppedState::~StoppedState() {
}

void StoppedState::Play(MusicPlayer* player) {
    player->SetState(MusicPlayer::State::PLAYING);
}
