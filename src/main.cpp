#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    void updateProgressbar() {
        PlayLayer::updateProgressbar();

        bool hidePercentage = this->m_isPracticeMode;

        // Cache aussi si le niveau a été lancé depuis un StartPos
        if (this->m_startPosObject) {
            hidePercentage = true;
        }

        if (this->m_percentageLabel) {
            this->m_percentageLabel->setVisible(!hidePercentage);
        }
    }
};
