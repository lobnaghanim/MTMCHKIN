#include "Mtmchkin.h"

Mtmchkin::Mtmchkin(const std::string& playerName, const Card *cardsArray, int numOfCards) {
    m_player = Player(playerName);
    m_cardsArray = new Card[numOfCards];
    for (int i = 0; i < numOfCards; ++i) {
        m_cardsArray[i] = cardsArray[i];
    }
    m_numOfCards = numOfCards;
    m_gameStatus = GameStatus::MidGame;
    m_currCard = 0;
}

void Mtmchkin::playNextCard() {
    m_cardsArray[m_currCard].printInfo();
    m_cardsArray[m_currCard].applyEncounter(m_player);
    m_player.printInfo();
    m_currCard++;
    if(m_currCard == m_numOfCards){
        m_currCard = 0;
    }
}

bool Mtmchkin::isOver() const {
    if(m_player.isKnockedOut() || m_player.getLevel() == 10){
        return true;
    }
    return false;
}

GameStatus Mtmchkin::getGameStatus() const {
    if(m_player.isKnockedOut()){

        return GameStatus::Loss;
    }
    if(m_player.getLevel() == 10){
        return GameStatus::Win;
    }
    return GameStatus::MidGame;
}



