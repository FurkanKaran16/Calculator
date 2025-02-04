/********************************************************************************
** Form generated from reading UI file 'calculater.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATER_H
#define UI_CALCULATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculater
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *Button4;
    QPushButton *Add;
    QPushButton *Multiply;
    QPushButton *Dot;
    QPushButton *Button5;
    QPushButton *Equal;
    QPushButton *Divide;
    QPushButton *Subtract;
    QPushButton *Clear;
    QPushButton *Button7;
    QPushButton *Minus;
    QPushButton *Button9;
    QPushButton *Button8;
    QPushButton *Button6;
    QPushButton *Square;
    QPushButton *Button2;
    QPushButton *Button1;
    QPushButton *Button3;
    QPushButton *Button0;
    QPushButton *SquareRoot;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculater)
    {
        if (Calculater->objectName().isEmpty())
            Calculater->setObjectName("Calculater");
        Calculater->resize(423, 349);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculater->sizePolicy().hasHeightForWidth());
        Calculater->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        Calculater->setPalette(palette);
        Calculater->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Calculater);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(30, 20, 371, 268));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button4 = new QPushButton(gridLayoutWidget_2);
        Button4->setObjectName("Button4");
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        Button4->setFont(font);

        gridLayout->addWidget(Button4, 5, 0, 1, 1);

        Add = new QPushButton(gridLayoutWidget_2);
        Add->setObjectName("Add");
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setFont(font);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:orange; border: 1px red;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: gray; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 6, 3, 1, 1);

        Multiply = new QPushButton(gridLayoutWidget_2);
        Multiply->setObjectName("Multiply");
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setFont(font);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:orange; border: 1px red;\n"
"	border-radius: 1px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: gray; border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 4, 3, 1, 1);

        Dot = new QPushButton(gridLayoutWidget_2);
        Dot->setObjectName("Dot");
        sizePolicy.setHeightForWidth(Dot->sizePolicy().hasHeightForWidth());
        Dot->setSizePolicy(sizePolicy);
        Dot->setFont(font);

        gridLayout->addWidget(Dot, 7, 2, 1, 1);

        Button5 = new QPushButton(gridLayoutWidget_2);
        Button5->setObjectName("Button5");
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setFont(font);

        gridLayout->addWidget(Button5, 5, 1, 1, 1);

        Equal = new QPushButton(gridLayoutWidget_2);
        Equal->setObjectName("Equal");
        sizePolicy.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(255, 215, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        Equal->setPalette(palette1);
        Equal->setFont(font);
        Equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:gold; border: 1px red;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: solid orange; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equal, 7, 3, 1, 1);

        Divide = new QPushButton(gridLayoutWidget_2);
        Divide->setObjectName("Divide");
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFont(font);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:orange; border: 1px red;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: gray; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 3, 3, 1, 1);

        Subtract = new QPushButton(gridLayoutWidget_2);
        Subtract->setObjectName("Subtract");
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setFont(font);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:orange; border: 1px red;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: gray; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 5, 3, 1, 1);

        Clear = new QPushButton(gridLayoutWidget_2);
        Clear->setObjectName("Clear");
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setFont(font);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:red; border: 1px solid red;\n"
"	border-radius: 1px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: sold red; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButon:hover{\n"
"background-color:pink;\n"
"}"));

        gridLayout->addWidget(Clear, 7, 0, 1, 1);

        Button7 = new QPushButton(gridLayoutWidget_2);
        Button7->setObjectName("Button7");
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setFont(font);

        gridLayout->addWidget(Button7, 4, 0, 1, 1);

        Minus = new QPushButton(gridLayoutWidget_2);
        Minus->setObjectName("Minus");
        sizePolicy.setHeightForWidth(Minus->sizePolicy().hasHeightForWidth());
        Minus->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        Minus->setPalette(palette2);
        Minus->setFont(font);
        Minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:gold; border: 1px red;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: solid orange; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Minus, 3, 0, 1, 1);

        Button9 = new QPushButton(gridLayoutWidget_2);
        Button9->setObjectName("Button9");
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFont(font);

        gridLayout->addWidget(Button9, 4, 2, 1, 1);

        Button8 = new QPushButton(gridLayoutWidget_2);
        Button8->setObjectName("Button8");
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setFont(font);

        gridLayout->addWidget(Button8, 4, 1, 1, 1);

        Button6 = new QPushButton(gridLayoutWidget_2);
        Button6->setObjectName("Button6");
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setFont(font);

        gridLayout->addWidget(Button6, 5, 2, 1, 1);

        Square = new QPushButton(gridLayoutWidget_2);
        Square->setObjectName("Square");
        sizePolicy.setHeightForWidth(Square->sizePolicy().hasHeightForWidth());
        Square->setSizePolicy(sizePolicy);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush3(QColor(255, 165, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        Square->setPalette(palette3);
        Square->setFont(font);
        Square->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:orange; border: 1px red;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: gray; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Square, 3, 1, 1, 1);

        Button2 = new QPushButton(gridLayoutWidget_2);
        Button2->setObjectName("Button2");
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFont(font);

        gridLayout->addWidget(Button2, 6, 1, 1, 1);

        Button1 = new QPushButton(gridLayoutWidget_2);
        Button1->setObjectName("Button1");
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setFont(font);

        gridLayout->addWidget(Button1, 6, 0, 1, 1);

        Button3 = new QPushButton(gridLayoutWidget_2);
        Button3->setObjectName("Button3");
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFont(font);

        gridLayout->addWidget(Button3, 6, 2, 1, 1);

        Button0 = new QPushButton(gridLayoutWidget_2);
        Button0->setObjectName("Button0");
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFont(font);

        gridLayout->addWidget(Button0, 7, 1, 1, 1);

        SquareRoot = new QPushButton(gridLayoutWidget_2);
        SquareRoot->setObjectName("SquareRoot");
        sizePolicy.setHeightForWidth(SquareRoot->sizePolicy().hasHeightForWidth());
        SquareRoot->setSizePolicy(sizePolicy);
        SquareRoot->setFont(font);
        SquareRoot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:orange; border: 1px red;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: gray; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(SquareRoot, 3, 2, 1, 1);

        Display = new QLineEdit(gridLayoutWidget_2);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        font1.setBold(true);
        Display->setFont(font1);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     background-color: gray; border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}"));
        Display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(Display, 1, 0, 1, 4);

        Calculater->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculater);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 423, 25));
        Calculater->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculater);
        statusbar->setObjectName("statusbar");
        Calculater->setStatusBar(statusbar);

        retranslateUi(Calculater);

        QMetaObject::connectSlotsByName(Calculater);
    } // setupUi

    void retranslateUi(QMainWindow *Calculater)
    {
        Calculater->setWindowTitle(QCoreApplication::translate("Calculater", "Calculater", nullptr));
        Button4->setText(QCoreApplication::translate("Calculater", "4", nullptr));
        Add->setText(QCoreApplication::translate("Calculater", "+", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculater", "*", nullptr));
        Dot->setText(QCoreApplication::translate("Calculater", ",", nullptr));
        Button5->setText(QCoreApplication::translate("Calculater", "5", nullptr));
        Equal->setText(QCoreApplication::translate("Calculater", "=", nullptr));
        Divide->setText(QCoreApplication::translate("Calculater", "/", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculater", "-", nullptr));
        Clear->setText(QCoreApplication::translate("Calculater", "AC", nullptr));
        Button7->setText(QCoreApplication::translate("Calculater", "7", nullptr));
        Minus->setText(QCoreApplication::translate("Calculater", "+/-", nullptr));
        Button9->setText(QCoreApplication::translate("Calculater", "9", nullptr));
        Button8->setText(QCoreApplication::translate("Calculater", "8", nullptr));
        Button6->setText(QCoreApplication::translate("Calculater", "6", nullptr));
        Square->setText(QCoreApplication::translate("Calculater", "X^2", nullptr));
        Button2->setText(QCoreApplication::translate("Calculater", "2", nullptr));
        Button1->setText(QCoreApplication::translate("Calculater", "1", nullptr));
        Button3->setText(QCoreApplication::translate("Calculater", "3", nullptr));
        Button0->setText(QCoreApplication::translate("Calculater", "0", nullptr));
        SquareRoot->setText(QCoreApplication::translate("Calculater", "\342\210\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculater: public Ui_Calculater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATER_H
