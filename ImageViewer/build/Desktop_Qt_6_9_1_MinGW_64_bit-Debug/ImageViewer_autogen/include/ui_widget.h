/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *pictureddress;
    QLineEdit *address;
    QPushButton *btnopen;
    QLabel *picture;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(974, 553);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pictureddress = new QLabel(Widget);
        pictureddress->setObjectName("pictureddress");

        horizontalLayout->addWidget(pictureddress);

        address = new QLineEdit(Widget);
        address->setObjectName("address");

        horizontalLayout->addWidget(address);

        btnopen = new QPushButton(Widget);
        btnopen->setObjectName("btnopen");

        horizontalLayout->addWidget(btnopen);


        verticalLayout->addLayout(horizontalLayout);

        picture = new QLabel(Widget);
        picture->setObjectName("picture");

        verticalLayout->addWidget(picture);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pictureddress->setText(QCoreApplication::translate("Widget", "\345\233\276\347\211\207\350\267\257\345\276\204", nullptr));
        btnopen->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        picture->setText(QCoreApplication::translate("Widget", "\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
