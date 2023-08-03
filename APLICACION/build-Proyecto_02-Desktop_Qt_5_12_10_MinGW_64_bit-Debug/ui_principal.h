/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QAction *actionResultados;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *inCedula;
    QLabel *outAdvertencia;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdIngresar;
    QPushButton *cmdSalir;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuUsuario;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(600, 400);
        Principal->setMinimumSize(QSize(0, 0));
        Principal->setMaximumSize(QSize(600, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/Recursos/ecuador.png"), QSize(), QIcon::Normal, QIcon::Off);
        Principal->setWindowIcon(icon);
        Principal->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(204, 240, 250, 255), stop:1 rgba(167, 210, 255, 255));"));
        actionResultados = new QAction(Principal);
        actionResultados->setObjectName(QString::fromUtf8("actionResultados"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagenes/Recursos/estadisticas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResultados->setIcon(icon1);
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setAutoFillBackground(false);
        widget_4->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.271, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 132, 214, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Mincho Demibold"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(168, 132, 214, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(204, 240, 250, 255), stop:1 rgba(167, 210, 255, 255));"));
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(204, 240, 250, 255), stop:1 rgba(167, 210, 255, 255));"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        inCedula = new QLineEdit(widget_2);
        inCedula->setObjectName(QString::fromUtf8("inCedula"));
        inCedula->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inCedula);

        outAdvertencia = new QLabel(widget_2);
        outAdvertencia->setObjectName(QString::fromUtf8("outAdvertencia"));
        outAdvertencia->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(1, QFormLayout::FieldRole, outAdvertencia);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(204, 240, 250, 255), stop:1 rgba(167, 210, 255, 255));"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cmdIngresar = new QPushButton(widget_3);
        cmdIngresar->setObjectName(QString::fromUtf8("cmdIngresar"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Code Pro"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        cmdIngresar->setFont(font1);
        cmdIngresar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(224, 250, 204, 255), stop:1 rgba(172, 255, 167, 255));"));

        horizontalLayout->addWidget(cmdIngresar);

        cmdSalir = new QPushButton(widget_3);
        cmdSalir->setObjectName(QString::fromUtf8("cmdSalir"));
        cmdSalir->setFont(font1);
        cmdSalir->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(250, 197, 197, 255), stop:1 rgba(255, 167, 167, 255));"));

        horizontalLayout->addWidget(cmdSalir);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);


        horizontalLayout_3->addWidget(widget_4);

        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        menuUsuario = new QMenu(menubar);
        menuUsuario->setObjectName(QString::fromUtf8("menuUsuario"));
        menuUsuario->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.271, fx:0.5, fy:0.5, stop:0 rgba(210, 255, 197, 255), stop:1 rgba(255, 255, 255, 255));"));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal->setStatusBar(statusbar);

        menubar->addAction(menuUsuario->menuAction());
        menuUsuario->addAction(actionResultados);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Principal", nullptr));
        actionResultados->setText(QApplication::translate("Principal", "Datos", nullptr));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("Principal", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Principal", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Sistema de Votaci\303\263n</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Principal", "Cedula", nullptr));
        inCedula->setText(QString());
        outAdvertencia->setText(QApplication::translate("Principal", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        cmdIngresar->setText(QApplication::translate("Principal", "Ingresar", nullptr));
        cmdSalir->setText(QApplication::translate("Principal", "Salir", nullptr));
        menuUsuario->setTitle(QApplication::translate("Principal", "Administrador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
