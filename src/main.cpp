#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    void updateProgressbar() {
        PlayLayer::updateProgressbar();

        if (this->m_isPracticeMode) {
            if (this->m_percentageLabel) {
                this->m_percentageLabel->setVisible(false);
            }
        } else {
            if (this->m_percentageLabel) {
                this->m_percentageLabel->setVisible(true);
            }
        }
    }
};
