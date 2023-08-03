/********************************************************************************
** Form generated from reading UI file 'administrador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRADOR_H
#define UI_ADMINISTRADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrador
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *inUsuario;
    QLabel *label_2;
    QLineEdit *inContrasena;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdAcceder;
    QPushButton *cmdCancelar;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Administrador)
    {
        if (Administrador->objectName().isEmpty())
            Administrador->setObjectName(QString::fromUtf8("Administrador"));
        Administrador->resize(457, 229);
        Administrador->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.271, fx:0.5, fy:0.5, stop:0 rgba(210, 255, 197, 255), stop:1 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(Administrador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setInputMethodHints(Qt::ImhHiddenText);
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        inUsuario = new QLineEdit(widget);
        inUsuario->setObjectName(QString::fromUtf8("inUsuario"));
        inUsuario->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inUsuario);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        inContrasena = new QLineEdit(widget);
        inContrasena->setObjectName(QString::fromUtf8("inContrasena"));
        inContrasena->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        inContrasena->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        inContrasena->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, inContrasena);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cmdAcceder = new QPushButton(widget_2);
        cmdAcceder->setObjectName(QString::fromUtf8("cmdAcceder"));
        cmdAcceder->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:reflect, cx:0.239, cy:0.528273, radius:1.271, fx:0.233, fy:0.522727, stop:0 rgba(236, 61, 52, 241), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout->addWidget(cmdAcceder);

        cmdCancelar = new QPushButton(widget_2);
        cmdCancelar->setObjectName(QString::fromUtf8("cmdCancelar"));
        cmdCancelar->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(236, 225, 94, 255), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout->addWidget(cmdCancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        Administrador->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Administrador);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 457, 21));
        Administrador->setMenuBar(menubar);
        statusbar = new QStatusBar(Administrador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Administrador->setStatusBar(statusbar);

        retranslateUi(Administrador);

        QMetaObject::connectSlotsByName(Administrador);
    } // setupUi

    void retranslateUi(QMainWindow *Administrador)
    {
        Administrador->setWindowTitle(QApplication::translate("Administrador", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("Administrador", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Administrador</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("Administrador", "Usuario", nullptr));
        label_2->setText(QApplication::translate("Administrador", "Contrase\303\261a", nullptr));
        cmdAcceder->setText(QApplication::translate("Administrador", "Acceder", nullptr));
        cmdCancelar->setText(QApplication::translate("Administrador", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Administrador: public Ui_Administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRADOR_H
