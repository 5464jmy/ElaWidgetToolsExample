#include "CS_Setting.h"

#include <QDebug>
#include <QHBoxLayout>
//#include <QVBoxLayout>

//#include "ElaApplication.h"
#include "ElaComboBox.h"
#include "ElaLog.h"
//#include "ElaRadioButton.h"
#include "ElaScrollPageArea.h"
#include "ElaText.h"
//#include "ElaTheme.h"
#include "ElaToggleSwitch.h"
#include "ElaWindow.h"
#include "ElaMessageButton.h"
CS_Setting::CS_Setting(QWidget* parent) : CS_BasePage(parent)
{
    // 预览窗口标题
//    auto* window = dynamic_cast<ElaWindow*>(parent);
//    setWindowTitle("基础设置");

    auto* gameText = new ElaText("游戏设置", this);
    gameText->setWordWrap(false);
    gameText->setTextPixelSize(18);
    _gameChooseComboBox = new ElaComboBox(this);
    _gameChooseComboBox->setFixedWidth(110);
    _gameChooseComboBox->addItem("CS2");
    auto* gameChooseArea = new ElaScrollPageArea(this);
    gameChooseArea->setFixedHeight(50);
    auto* gameChooseLayout = new QHBoxLayout(gameChooseArea);
    auto* gameChooseText = new ElaText("游戏切换", this);
    gameChooseText->setWordWrap(false);
    gameChooseText->setTextPixelSize(15);
    gameChooseLayout->addWidget(gameChooseText);
    gameChooseLayout->addStretch();
    gameChooseLayout->addWidget(_gameChooseComboBox);

    auto* modelText = new ElaText("模型设置", this);
    modelText->setWordWrap(false);
    modelText->setTextPixelSize(18);
    _modelChooseComboBox = new ElaComboBox(this);
    _modelChooseComboBox->setFixedWidth(110);
    _modelChooseComboBox->addItem("CS2");
    auto* modelChooseArea = new ElaScrollPageArea(this);
    modelChooseArea->setFixedHeight(50);
    auto* modelChooseLayout = new QHBoxLayout(modelChooseArea);
    auto* modelChooseText = new ElaText("模型切换", this);
    modelChooseText->setWordWrap(false);
    modelChooseText->setTextPixelSize(15);
    _modelFreshButton = new ElaMessageButton("Info", this);
    _modelFreshButton->setBarTitle("Information");
    _modelFreshButton->setBarText("点燃星 亲手点燃黑暗森林的火星 蒙昧初醒 而我却 轻声告别这新生的黎明");
    _modelFreshButton->setMessageMode(ElaMessageBarType::Information);
    _modelFreshButton->setPositionPolicy(ElaMessageBarType::TopLeft);
    modelChooseLayout->addWidget(modelChooseText);
    modelChooseLayout->addStretch();
    modelChooseLayout->addWidget(_modelChooseComboBox);
    modelChooseLayout->addWidget(_modelFreshButton);


    auto* modeText = new ElaText("模式设置", this);
    modeText->setWordWrap(false);
    modeText->setTextPixelSize(18);
    _modeChooseComboBox = new ElaComboBox(this);
    _modeChooseComboBox->setFixedWidth(110);
    _modeChooseComboBox->addItem("自瞄");
    _modeChooseComboBox->addItem("按键");
    auto* modeChooseArea = new ElaScrollPageArea(this);
    modeChooseArea->setFixedHeight(50);
    auto* modeChooseLayout = new QHBoxLayout(modeChooseArea);
    auto* modeChooseText = new ElaText("模式切换", this);
    modeChooseText->setWordWrap(false);
    modeChooseText->setTextPixelSize(15);
    modeChooseLayout->addWidget(modeChooseText);
    modeChooseLayout->addStretch();
    modeChooseLayout->addWidget(_modeChooseComboBox);

    auto* targetText = new ElaText("目标设置", this);
    targetText->setWordWrap(false);
    targetText->setTextPixelSize(18);
    _targetPersonChooseComboBox = new ElaComboBox(this);
    _targetPersonChooseComboBox->setFixedWidth(110);
    _targetPersonChooseComboBox->addItem("警察");
    _targetPersonChooseComboBox->addItem("匪徒");
    auto* targetPersonChooseArea = new ElaScrollPageArea(this);
    targetPersonChooseArea->setFixedHeight(50);
    auto* targetPersonChooseLayout = new QHBoxLayout(targetPersonChooseArea);
    auto* targetPersonChooseText = new ElaText("敌人选择", this);
    targetPersonChooseText->setWordWrap(false);
    targetPersonChooseText->setTextPixelSize(15);
    targetPersonChooseLayout->addWidget(targetPersonChooseText);
    targetPersonChooseLayout->addStretch();
    targetPersonChooseLayout->addWidget(_targetPersonChooseComboBox);

    _targetPointChooseComboBox = new ElaComboBox(this);
    _targetPointChooseComboBox->setFixedWidth(110);
    _targetPointChooseComboBox->addItem("头部");
    _targetPointChooseComboBox->addItem("裆部");
    auto* targetPointChooseArea = new ElaScrollPageArea(this);
    targetPointChooseArea->setFixedHeight(50);
    auto* targetPointChooseLayout = new QHBoxLayout(targetPointChooseArea);
    auto* targetPointChooseText = new ElaText("打击位置选择", this);
    targetPointChooseText->setWordWrap(false);
    targetPointChooseText->setTextPixelSize(15);
    targetPointChooseLayout->addWidget(targetPointChooseText);
    targetPointChooseLayout->addStretch();
    targetPointChooseLayout->addWidget(_targetPointChooseComboBox);


    auto* switchText = new ElaText("开关设置", this);
    switchText->setWordWrap(false);
    switchText->setTextPixelSize(18);
    _detectSwitchButton = new ElaToggleSwitch(this);
    auto* detectSwitchArea = new ElaScrollPageArea(this);
    auto* detectSwitchLayout = new QHBoxLayout(detectSwitchArea);
    detectSwitchArea->setFixedHeight(50);
    auto* detectSwitchText = new ElaText("启动检测", this);
    detectSwitchText->setWordWrap(false);
    detectSwitchText->setTextPixelSize(15);
    detectSwitchLayout->addWidget(detectSwitchText);
    detectSwitchLayout->addStretch();
    detectSwitchLayout->addWidget(_detectSwitchButton);

    _lockSwitchButton = new ElaToggleSwitch(this);
    auto* lockSwitchArea = new ElaScrollPageArea(this);
    auto* lockSwitchLayout = new QHBoxLayout(lockSwitchArea);
    lockSwitchArea->setFixedHeight(50);
    auto* lockSwitchText = new ElaText("启动锁点", this);
    lockSwitchText->setWordWrap(false);
    lockSwitchText->setTextPixelSize(15);
    lockSwitchLayout->addWidget(lockSwitchText);
    lockSwitchLayout->addStretch();
    lockSwitchLayout->addWidget(_lockSwitchButton);



//    auto* themeText = new ElaText("主题设置", this);
//    themeText->setWordWrap(false);
//    themeText->setTextPixelSize(18);
//
//    _themeComboBox = new ElaComboBox(this);
//    _themeComboBox->addItem("日间模式");
//    _themeComboBox->addItem("夜间模式");
//    auto* themeSwitchArea = new ElaScrollPageArea(this);
//    auto* themeSwitchLayout = new QHBoxLayout(themeSwitchArea);
//    auto* themeSwitchText = new ElaText("主题切换", this);
//    themeSwitchText->setWordWrap(false);
//    themeSwitchText->setTextPixelSize(15);
//    themeSwitchLayout->addWidget(themeSwitchText);
//    themeSwitchLayout->addStretch();
//    themeSwitchLayout->addWidget(_themeComboBox);
//    connect(_themeComboBox, QOverload<int>::of(&ElaComboBox::currentIndexChanged), this, [=](int index) {
//        if (index == 0)
//        {
//            eTheme->setThemeMode(ElaThemeType::Light);
//        }
//        else
//        {
//            eTheme->setThemeMode(ElaThemeType::Dark);
//        }
//    });
//    connect(eTheme, &ElaTheme::themeModeChanged, this, [=](ElaThemeType::ThemeMode themeMode) {
//        _themeComboBox->blockSignals(true);
//        if (themeMode == ElaThemeType::Light)
//        {
//            _themeComboBox->setCurrentIndex(0);
//        }
//        else
//        {
//            _themeComboBox->setCurrentIndex(1);
//        }
//        _themeComboBox->blockSignals(false);
//    });
//
//    auto* helperText = new ElaText("应用程序设置", this);
//    helperText->setWordWrap(false);
//    helperText->setTextPixelSize(18);
//
//    _micaSwitchButton = new ElaToggleSwitch(this);
//    auto* micaSwitchArea = new ElaScrollPageArea(this);
//    auto* micaSwitchLayout = new QHBoxLayout(micaSwitchArea);
//    auto* micaSwitchText = new ElaText("启用云母效果(跨平台)", this);
//    micaSwitchText->setWordWrap(false);
//    micaSwitchText->setTextPixelSize(15);
//    micaSwitchLayout->addWidget(micaSwitchText);
//    micaSwitchLayout->addStretch();
//    micaSwitchLayout->addWidget(_micaSwitchButton);
//    connect(_micaSwitchButton, &ElaToggleSwitch::toggled, this, [=](bool checked) {
//        eApp->setIsEnableMica(checked);
//    });
//
//    _logSwitchButton = new ElaToggleSwitch(this);
//    auto* logSwitchArea = new ElaScrollPageArea(this);
//    auto* logSwitchLayout = new QHBoxLayout(logSwitchArea);
//    auto* logSwitchText = new ElaText("启用日志功能", this);
//    logSwitchText->setWordWrap(false);
//    logSwitchText->setTextPixelSize(15);
//    logSwitchLayout->addWidget(logSwitchText);
//    logSwitchLayout->addStretch();
//    logSwitchLayout->addWidget(_logSwitchButton);
//    connect(_logSwitchButton, &ElaToggleSwitch::toggled, this, [=](bool checked) {
//        ElaLog::getInstance()->initMessageLog(checked);
//        if (checked)
//        {
//            qDebug() << "日志已启用!";
//        }
//        else
//        {
//            qDebug() << "日志已关闭!";
//        }
//    });
//
//    _minimumButton = new ElaRadioButton("Minimum", this);
//    _compactButton = new ElaRadioButton("Compact", this);
//    _maximumButton = new ElaRadioButton("Maximum", this);
//    _autoButton = new ElaRadioButton("Auto", this);
//    _autoButton->setChecked(true);
//    auto* displayModeArea = new ElaScrollPageArea(this);
//    auto* displayModeLayout = new QHBoxLayout(displayModeArea);
//    auto* displayModeText = new ElaText("导航栏模式选择", this);
//    displayModeText->setWordWrap(false);
//    displayModeText->setTextPixelSize(15);
//    displayModeLayout->addWidget(displayModeText);
//    displayModeLayout->addStretch();
//    displayModeLayout->addWidget(_minimumButton);
//    displayModeLayout->addWidget(_compactButton);
//    displayModeLayout->addWidget(_maximumButton);
//    displayModeLayout->addWidget(_autoButton);
//    connect(_minimumButton, &ElaRadioButton::toggled, this, [=]() {
//        window->setNavigationBarDisplayMode(ElaNavigationType::Minimal);
//    });
//    connect(_compactButton, &ElaRadioButton::toggled, this, [=]() {
//        window->setNavigationBarDisplayMode(ElaNavigationType::Compact);
//    });
//    connect(_maximumButton, &ElaRadioButton::toggled, this, [=]() {
//        window->setNavigationBarDisplayMode(ElaNavigationType::Maximal);
//    });
//    connect(_autoButton, &ElaRadioButton::toggled, this, [=]() {
//        window->setNavigationBarDisplayMode(ElaNavigationType::Auto);
//    });

    auto* centralWidget = new QWidget(this);
    centralWidget->setWindowTitle("基础设置");
    auto* centerLayout = new QVBoxLayout(centralWidget);
    centerLayout->addSpacing(30);
    centerLayout->addWidget(gameText);
//    centerLayout->addSpacing(10);
    centerLayout->addWidget(gameChooseArea);
//    centerLayout->addSpacing(15);
    centerLayout->addWidget(modelText);
//    centerLayout->addSpacing(10);
    centerLayout->addWidget(modelChooseArea);
//    centerLayout->addWidget(detectSwitchArea);
//    centerLayout->addSpacing(15);
    centerLayout->addWidget(modeText);
//    centerLayout->addSpacing(10);
    centerLayout->addWidget(modeChooseArea);

//    centerLayout->addSpacing(15);
    centerLayout->addWidget(targetText);
//    centerLayout->addSpacing(10);
    centerLayout->addWidget(targetPersonChooseArea);
//    centerLayout->addSpacing(10);
    centerLayout->addWidget(targetPointChooseArea);

//    centerLayout->addSpacing(15);
    centerLayout->addWidget(switchText);
//    centerLayout->addSpacing(10);
    centerLayout->addWidget(detectSwitchArea);
    centerLayout->addWidget(lockSwitchArea);

////    centerLayout->addSpacing(5);
//    centerLayout->addSpacing(15);
//    centerLayout->addWidget(themeText);
//    centerLayout->addSpacing(10);
//    centerLayout->addWidget(themeSwitchArea);
//    centerLayout->addSpacing(15);
//    centerLayout->addWidget(helperText);
//    centerLayout->addSpacing(10);
//    centerLayout->addWidget(logSwitchArea);
//    centerLayout->addWidget(micaSwitchArea);
//    centerLayout->addWidget(displayModeArea);
    centerLayout->addStretch();
    centerLayout->setContentsMargins(0, 0, 0, 0);
    addCentralWidget(centralWidget, true, true, 0);
}

CS_Setting::~CS_Setting()
= default;
