#include "Card.h"
#include "utilities.h"

Card::Card(CardType type, const CardStats& stats){
    this->m_effect = type;
    this->m_stats = stats;
}

