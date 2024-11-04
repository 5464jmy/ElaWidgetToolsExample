#ifndef CS_SCREEN_H
#define CS_SCREEN_H
#include "CS_BasePage.h"


class CS_Screen : public CS_BasePage
{
    Q_OBJECT
public:
    Q_INVOKABLE explicit CS_Screen(QWidget* parent = nullptr);
    ~CS_Screen() override;

};


#endif //CS_SCREEN_H
