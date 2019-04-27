#include "MusicPlayer.hpp"
#include "PlayingState.hpp"

PlayingState::PlayingState() : MusicPlayerState(std::string("Playing")) {
}

PlayingState::~PlayingState() {
}

void PlayingState::Pause(MusicPlayer* player) {
    player->SetState(MusicPlayer::State::PAUSED);
}

void PlayingState::Stop(MusicPlayer* player) {
    player->SetState(MusicPlayer::State::STOPPED);
}
