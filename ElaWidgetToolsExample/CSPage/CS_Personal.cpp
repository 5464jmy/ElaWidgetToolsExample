#include "CS_Personal.h"

#include <QDebug>
#include <QHBoxLayout>
#include "ElaComboBox.h"
#include "ElaLog.h"
#include "ElaScrollPageArea.h"
#include "ElaText.h"
#include "ElaToggleSwitch.h"
#include "ElaWindow.h"
#include "ElaMessageButton.h"
#include "ElaSlider.h"

CS_Personal::CS_Personal(QWidget* parent) : CS_BasePage(parent)
{
    // 预览窗口标题
    auto* window = dynamic_cast<ElaWindow*>(parent);
//    setWindowTitle("基础设置");

    auto* distanceText = new ElaText("距离设置", this);
    distanceText->setWordWrap(false);
    distanceText->setTextPixelSize(18);

    auto* workDistanceText = new ElaText("生效距离", this);
    workDistanceText->setWordWrap(false);
    workDistanceText->setTextPixelSize(15);
    auto* workDistanceSlider = new ElaSlider(this);
    workDistanceSlider->setFixedWidth(250);
    workDistanceSlider->setRange(0, 160);
    workDistanceSlider->setValue(50);
    auto* workDistanceValueText = new ElaText("50", this);
    workDistanceValueText->setTextPixelSize(15);
    connect(workDistanceSlider, &ElaSlider::valueChanged, this, [=](int value) {
        workDistanceValueText->setText(QString::number(value));
//        _treeView->setItemHeight(value / 10);
    });
    auto* workDistanceArea = new ElaScrollPageArea(this);
    workDistanceArea->setFixedHeight(50);
    auto* workDistanceLayout = new QHBoxLayout(workDistanceArea);
    workDistanceLayout->addWidget(workDistanceText);
    workDistanceLayout->addStretch();
    workDistanceLayout->addWidget(workDistanceSlider);
    workDistanceLayout->addWidget(workDistanceValueText);


    auto* smoothSegDistanceText = new ElaText("鼠标移速分割距离", this);
    smoothSegDistanceText->setWordWrap(false);
    smoothSegDistanceText->setTextPixelSize(15);
    auto* smoothSegDistanceSlider = new ElaSlider(this);
    smoothSegDistanceSlider->setFixedWidth(250);
    smoothSegDistanceSlider->setRange(30, 120);
    smoothSegDistanceSlider->setValue(50);
    auto* smoothSegDistanceValueText = new ElaText("50", this);
    smoothSegDistanceValueText->setTextPixelSize(15);
    connect(smoothSegDistanceSlider, &ElaSlider::valueChanged, this, [=](int value) {
        smoothSegDistanceValueText->setText(QString::number(value));
//        _treeView->setItemHeight(value / 10);
    });
    auto* smoothSegDistanceArea = new ElaScrollPageArea(this);
    smoothSegDistanceArea->setFixedHeight(50);
    auto* smoothSegDistanceLayout = new QHBoxLayout(smoothSegDistanceArea);
    smoothSegDistanceLayout->addWidget(smoothSegDistanceText);
    smoothSegDistanceLayout->addStretch();
    smoothSegDistanceLayout->addWidget(smoothSegDistanceSlider);
    smoothSegDistanceLayout->addWidget(smoothSegDistanceValueText);
    

    auto* mouseSmoothText = new ElaText("鼠标移速设置", this);
    mouseSmoothText->setWordWrap(false);
    mouseSmoothText->setTextPixelSize(18);

    auto* outSegDistanceSmoothText = new ElaText("分割距离外鼠标移动速度", this);
    outSegDistanceSmoothText->setWordWrap(false);
    outSegDistanceSmoothText->setTextPixelSize(15);
    auto* outSegDistanceSmoothSlider = new ElaSlider(this);
    outSegDistanceSmoothSlider->setFixedWidth(250);
    outSegDistanceSmoothSlider->setRange(0, 120);
    outSegDistanceSmoothSlider->setValue(50);
    auto* outSegDistanceSmoothValueText = new ElaText("50", this);
    outSegDistanceSmoothValueText->setTextPixelSize(15);
    connect(outSegDistanceSmoothSlider, &ElaSlider::valueChanged, this, [=](int value) {
        outSegDistanceSmoothValueText->setText(QString::number(value));
//        _treeView->setItemHeight(value / 10);
    });
    auto* outSegDistanceSmoothArea = new ElaScrollPageArea(this);
    outSegDistanceSmoothArea->setFixedHeight(50);
    auto* outSegDistanceSmoothLayout = new QHBoxLayout(outSegDistanceSmoothArea);
    outSegDistanceSmoothLayout->addWidget(outSegDistanceSmoothText);
    outSegDistanceSmoothLayout->addStretch();
    outSegDistanceSmoothLayout->addWidget(outSegDistanceSmoothSlider);
    outSegDistanceSmoothLayout->addWidget(outSegDistanceSmoothValueText);

    auto* inSegDistanceSmoothText = new ElaText("分割距离内鼠标移动速度", this);
    inSegDistanceSmoothText->setWordWrap(false);
    inSegDistanceSmoothText->setTextPixelSize(15);
    auto* inSegDistanceSmoothSlider = new ElaSlider(this);
    inSegDistanceSmoothSlider->setFixedWidth(250);
    inSegDistanceSmoothSlider->setRange(0, 120);
    inSegDistanceSmoothSlider->setValue(50);
    auto* inSegDistanceSmoothValueText = new ElaText("50", this);
    inSegDistanceSmoothValueText->setTextPixelSize(15);
    connect(inSegDistanceSmoothSlider, &ElaSlider::valueChanged, this, [=](int value) {
        inSegDistanceSmoothValueText->setText(QString::number(value));
//        _treeView->setItemHeight(value / 10);
    });
    auto* inSegDistanceSmoothArea = new ElaScrollPageArea(this);
    inSegDistanceSmoothArea->setFixedHeight(50);
    auto* inSegDistanceSmoothLayout = new QHBoxLayout(inSegDistanceSmoothArea);
    inSegDistanceSmoothLayout->addWidget(inSegDistanceSmoothText);
    inSegDistanceSmoothLayout->addStretch();
    inSegDistanceSmoothLayout->addWidget(inSegDistanceSmoothSlider);
    inSegDistanceSmoothLayout->addWidget(inSegDistanceSmoothValueText);


    auto* switchText = new ElaText("快捷键设置", this);
    switchText->setWordWrap(false);
    switchText->setTextPixelSize(18);
    auto* voiceSwitchText = new ElaText("开关语音", this);
    voiceSwitchText->setWordWrap(false);
    voiceSwitchText->setTextPixelSize(15);
    auto* voiceSwitchButton = new ElaToggleSwitch(this);
    auto* voiceSwitchArea = new ElaScrollPageArea(this);
    auto* voiceSwitchLayout = new QHBoxLayout(voiceSwitchArea);
    voiceSwitchArea->setFixedHeight(50);
    voiceSwitchLayout->addWidget(voiceSwitchText);
    voiceSwitchLayout->addStretch();
    voiceSwitchLayout->addWidget(voiceSwitchButton);

    auto* mouse4SwitchButton = new ElaToggleSwitch(this);
    auto* mouse4SwitchArea = new ElaScrollPageArea(this);
    auto* mouse4SwitchLayout = new QHBoxLayout(mouse4SwitchArea);
    mouse4SwitchArea->setFixedHeight(50);
    auto* mouse4SwitchText = new ElaText("前侧键开关", this);
    mouse4SwitchText->setWordWrap(false);
    mouse4SwitchText->setTextPixelSize(15);
    mouse4SwitchLayout->addWidget(mouse4SwitchText);
    mouse4SwitchLayout->addStretch();
    mouse4SwitchLayout->addWidget(mouse4SwitchButton);

    auto* mouse5SwitchButton = new ElaToggleSwitch(this);
    auto* mouse5SwitchArea = new ElaScrollPageArea(this);
    auto* mouse5SwitchLayout = new QHBoxLayout(mouse5SwitchArea);
    mouse5SwitchArea->setFixedHeight(50);
    auto* mouse5SwitchText = new ElaText("后侧键开关", this);
    mouse5SwitchText->setWordWrap(false);
    mouse5SwitchText->setTextPixelSize(15);
    mouse5SwitchLayout->addWidget(mouse5SwitchText);
    mouse5SwitchLayout->addStretch();
    mouse5SwitchLayout->addWidget(mouse5SwitchButton);

    auto* automaFireButton = new ElaToggleSwitch(this);
    auto* automaFireArea = new ElaScrollPageArea(this);
    auto* automaFireLayout = new QHBoxLayout(automaFireArea);
    automaFireArea->setFixedHeight(50);
    auto* automaFireText = new ElaText("目标切换开关", this);
    automaFireText->setWordWrap(false);
    automaFireText->setTextPixelSize(15);
    automaFireLayout->addWidget(automaFireText);
    automaFireLayout->addStretch();
    automaFireLayout->addWidget(automaFireButton);

    auto* targetSwitchButton = new ElaToggleSwitch(this);
    auto* targetSwitchArea = new ElaScrollPageArea(this);
    auto* targetSwitchLayout = new QHBoxLayout(targetSwitchArea);
    targetSwitchArea->setFixedHeight(50);
    auto* targetSwitchText = new ElaText("目标切换开关", this);
    targetSwitchText->setWordWrap(false);
    targetSwitchText->setTextPixelSize(15);
    targetSwitchLayout->addWidget(targetSwitchText);
    targetSwitchLayout->addStretch();
    targetSwitchLayout->addWidget(targetSwitchButton);

    auto* centralWidget = new QWidget(this);
    centralWidget->setWindowTitle("个性设置");
    auto* centerLayout = new QVBoxLayout(centralWidget);
    centerLayout->addSpacing(20);
    centerLayout->addWidget(distanceText);
    centerLayout->addWidget(workDistanceArea);
    centerLayout->addWidget(smoothSegDistanceArea);
    centerLayout->addWidget(mouseSmoothText);
    centerLayout->addWidget(outSegDistanceSmoothArea);
    centerLayout->addWidget(inSegDistanceSmoothArea);
    centerLayout->addWidget(switchText);
    centerLayout->addWidget(voiceSwitchArea);
    centerLayout->addWidget(mouse4SwitchArea);
    centerLayout->addWidget(mouse5SwitchArea);
    centerLayout->addWidget(automaFireArea);
    centerLayout->addWidget(targetSwitchArea);

    centerLayout->addStretch();
    centerLayout->setContentsMargins(0, 0, 0, 0);
    addCentralWidget(centralWidget, true, true, 0);
}

CS_Personal::~CS_Personal()
= default;
