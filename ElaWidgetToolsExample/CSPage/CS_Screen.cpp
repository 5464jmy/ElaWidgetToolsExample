#include "CS_Screen.h"

#include <QDebug>
#include <QHBoxLayout>
#include "ElaComboBox.h"
#include "ElaLog.h"
#include "ElaScrollPageArea.h"
#include "ElaText.h"
#include "ElaToggleSwitch.h"
#include "ElaWindow.h"
#include "ElaMessageButton.h"
CS_Screen::~CS_Screen() = default;

CS_Screen::CS_Screen(QWidget *parent) : CS_BasePage(parent) {

    auto* resolutionText = new ElaText("分辨率设置", this);
    resolutionText->setWordWrap(false);
    resolutionText->setTextPixelSize(18);

    auto* displayModelChooseText = new ElaText("显示模式", this);
    displayModelChooseText->setWordWrap(false);
    displayModelChooseText->setTextPixelSize(15);
    auto* displayModelChooseComboBox = new ElaComboBox(this);
    displayModelChooseComboBox->setFixedWidth(110);
    displayModelChooseComboBox->addItem("窗口");
    displayModelChooseComboBox->addItem("全屏");
    auto* displayModelChooseArea = new ElaScrollPageArea(this);
    displayModelChooseArea->setFixedHeight(50);
    auto* displayModelChooseLayout = new QHBoxLayout(displayModelChooseArea);
    displayModelChooseLayout->addWidget(displayModelChooseText);
    displayModelChooseLayout->addStretch();
    displayModelChooseLayout->addWidget(displayModelChooseComboBox);

    auto* ratioChooseText = new ElaText("纵横比", this);
    ratioChooseText->setWordWrap(false);
    ratioChooseText->setTextPixelSize(15);
    auto* ratioChooseComboBox = new ElaComboBox(this);
    ratioChooseComboBox->setFixedWidth(110);
    ratioChooseComboBox->addItem("窗口");
    ratioChooseComboBox->addItem("全屏");
    auto* ratioChooseArea = new ElaScrollPageArea(this);
    ratioChooseArea->setFixedHeight(50);
    auto* ratioChooseLayout = new QHBoxLayout(ratioChooseArea);
    ratioChooseLayout->addWidget(ratioChooseText);
    ratioChooseLayout->addStretch();
    ratioChooseLayout->addWidget(ratioChooseComboBox);

    auto* resolutionChooseText = new ElaText("分辨率", this);
    resolutionChooseText->setWordWrap(false);
    resolutionChooseText->setTextPixelSize(15);
    auto* resolutionChooseComboBox = new ElaComboBox(this);
    resolutionChooseComboBox->setFixedWidth(110);
    resolutionChooseComboBox->addItem("窗口");
    resolutionChooseComboBox->addItem("全屏");
    auto* resolutionChooseArea = new ElaScrollPageArea(this);
    resolutionChooseArea->setFixedHeight(50);
    auto* resolutionChooseLayout = new QHBoxLayout(resolutionChooseArea);
    resolutionChooseLayout->addWidget(resolutionChooseText);
    resolutionChooseLayout->addStretch();
    resolutionChooseLayout->addWidget(resolutionChooseComboBox);

    auto* screenShotText = new ElaText("截屏设置", this);
    screenShotText->setWordWrap(false);
    screenShotText->setTextPixelSize(18);

    auto* screenShotWidthChooseText = new ElaText("截图宽度", this);
    screenShotWidthChooseText->setWordWrap(false);
    screenShotWidthChooseText->setTextPixelSize(15);
    auto* screenShotWidthChooseComboBox = new ElaComboBox(this);
    screenShotWidthChooseComboBox->setFixedWidth(110);
    screenShotWidthChooseComboBox->addItem("320");
    screenShotWidthChooseComboBox->addItem("480");
    auto* screenShotWidthChooseArea = new ElaScrollPageArea(this);
    screenShotWidthChooseArea->setFixedHeight(50);
    auto* screenShotWidthChooseLayout = new QHBoxLayout(screenShotWidthChooseArea);
    screenShotWidthChooseLayout->addWidget(screenShotWidthChooseText);
    screenShotWidthChooseLayout->addStretch();
    screenShotWidthChooseLayout->addWidget(screenShotWidthChooseComboBox);

    auto* refreshCameraChooseText = new ElaText("更新参数", this);
    refreshCameraChooseText->setWordWrap(false);
    refreshCameraChooseText->setTextPixelSize(15);


    auto* refreshCameraButton = new ElaMessageButton("更新", this);
    refreshCameraButton->setFixedWidth(107);
    refreshCameraButton->setBarTitle("Information");
    refreshCameraButton->setBarText("点燃星 亲手点燃黑暗森林的火星 蒙昧初醒 而我却 轻声告别这新生的黎明");
    refreshCameraButton->setMessageMode(ElaMessageBarType::Information);
    refreshCameraButton->setPositionPolicy(ElaMessageBarType::TopLeft);
    auto* refreshCameraChooseArea = new ElaScrollPageArea(this);
    refreshCameraChooseArea->setFixedHeight(50);
    auto* refreshCameraChooseLayout = new QHBoxLayout(refreshCameraChooseArea);
    refreshCameraChooseLayout->addWidget(refreshCameraChooseText);
    refreshCameraChooseLayout->addStretch();
    refreshCameraChooseLayout->addWidget(refreshCameraButton);

    auto* developText = new ElaText("开发者设置", this);
    developText->setWordWrap(false);
    developText->setTextPixelSize(18);
    auto* visualSwitchText = new ElaText("可视化", this);
    visualSwitchText->setWordWrap(false);
    visualSwitchText->setTextPixelSize(15);
    auto* visualSwitchButton = new ElaToggleSwitch(this);
    auto* visualSwitchArea = new ElaScrollPageArea(this);
    auto* visualSwitchLayout = new QHBoxLayout(visualSwitchArea);
    visualSwitchArea->setFixedHeight(50);
    visualSwitchLayout->addWidget(visualSwitchText);
    visualSwitchLayout->addStretch();
    visualSwitchLayout->addWidget(visualSwitchButton);

    auto* stableFPSText = new ElaText("稳定帧率", this);
    stableFPSText->setWordWrap(false);
    stableFPSText->setTextPixelSize(15);
    auto* stableFPSButton = new ElaToggleSwitch(this);
    auto* stableFPSArea = new ElaScrollPageArea(this);
    auto* stableFPSLayout = new QHBoxLayout(stableFPSArea);
    stableFPSArea->setFixedHeight(50);
    stableFPSLayout->addWidget(stableFPSText);
    stableFPSLayout->addStretch();
    stableFPSLayout->addWidget(stableFPSButton);

    auto* centralWidget = new QWidget(this);
    centralWidget->setWindowTitle("图像设置");
    auto* centerLayout = new QVBoxLayout(centralWidget);
    centerLayout->addSpacing(30);
    centerLayout->addWidget(resolutionText);
    centerLayout->addWidget(displayModelChooseArea);
    centerLayout->addWidget(ratioChooseArea);
    centerLayout->addWidget(resolutionChooseArea);

    centerLayout->addWidget(screenShotText);
    centerLayout->addWidget(screenShotWidthChooseArea);
    centerLayout->addWidget(refreshCameraChooseArea);


    centerLayout->addWidget(developText);
    centerLayout->addWidget(visualSwitchArea);
    centerLayout->addWidget(stableFPSArea);

    centerLayout->addStretch();
    centerLayout->setContentsMargins(0, 0, 0, 0);
    addCentralWidget(centralWidget, true, true, 0);

}
