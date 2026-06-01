#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    
    void updateProgressbar() {
        // 1. On laisse le jeu faire son calcul normal d'abord
        PlayLayer::updateProgressbar();

        // 2. On utilise le bon nom : m_percentLabel
        if (this->m_percentLabel) {
            
            // 3. On vérifie si on est en mode Pratique OU en Testmode
            bool shouldHide = this->m_isPracticeMode || this->isTestMode();

            // 4. On applique la visibilité
            this->m_percentLabel->setVisible(!shouldHide);
        }
    }
};
