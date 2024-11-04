#ifndef CS_BASEPAGE_H
#define CS_BASEPAGE_H

#include <ElaScrollPage.h>

class QVBoxLayout;
class CS_BasePage : public ElaScrollPage
{
    Q_OBJECT
public:
    explicit CS_BasePage(QWidget* parent = nullptr);
    ~CS_BasePage() override;

protected:
    void createCustomWidget(QString desText);
};

#endif // CS_BASEPAGE_H
