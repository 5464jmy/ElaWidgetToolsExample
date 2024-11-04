#ifndef CS_SETTING_H
#define CS_SETTING_H

#include "CS_BasePage.h"

class ElaRadioButton;
class ElaToggleSwitch;
class ElaComboBox;
class ElaMessageButton;
class CS_Setting : public CS_BasePage
{
    Q_OBJECT
public:
    Q_INVOKABLE explicit CS_Setting(QWidget* parent = nullptr);
    ~CS_Setting() override;

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

#endif // CS_SETTING_H
