#ifndef CS_PERSONAL_H
#define CS_PERSONAL_H

#include "CS_BasePage.h"

class ElaRadioButton;
class ElaToggleSwitch;
class ElaComboBox;
class ElaMessageButton;
class CS_Personal : public CS_BasePage
{
Q_OBJECT
public:
    Q_INVOKABLE explicit CS_Personal(QWidget* parent = nullptr);
    ~CS_Personal() override;

private:
//    ElaComboBox* _themeComboBox{nullptr};
    ElaComboBox* _gameChooseComboBox{nullptr};
    ElaComboBox* _modelChooseComboBox{nullptr};
    ElaComboBox* _modeChooseComboBox{nullptr};
    ElaComboBox* _targetPersonChooseComboBox{nullptr};
    ElaComboBox* _targetPointChooseComboBox{nullptr};
    ElaMessageButton* _modelFreshButton{nullptr};

    ElaToggleSwitch* _detectSwitchButton{nullptr};
    ElaToggleSwitch* _lockSwitchButton{nullptr};
//    ElaToggleSwitch* _micaSwitchButton{nullptr};
//    ElaToggleSwitch* _logSwitchButton{nullptr};
//    ElaRadioButton* _minimumButton{nullptr};
//    ElaRadioButton* _compactButton{nullptr};
//    ElaRadioButton* _maximumButton{nullptr};
//    ElaRadioButton* _autoButton{nullptr};
};

    #endif // CS_PERSONAL_H
