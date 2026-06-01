#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    
    void updateProgressbar() {
        // 1. On laisse le jeu faire son calcul normal d'abord
        PlayLayer::updateProgressbar();

        // 2. On vérifie si le label du pourcentage existe pour éviter les crashs
        if (this->m_percentageLabel) {
            
            // 3. On vérifie si on est en mode Pratique OU en Testmode
            // La fonction isTestMode() fait partie de PlayLayer
            bool shouldHide = this->m_isPracticeMode || this->isTestMode();

            if (shouldHide) {
                this->m_percentageLabel->setVisible(false);
            } 
            else {
                this->m_percentageLabel->setVisible(true);
            }
        }
    }
};
