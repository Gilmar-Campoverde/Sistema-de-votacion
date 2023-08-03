/********************************************************************************
** Form generated from reading UI file 'certificado.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICADO_H
#define UI_CERTIFICADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Certificado
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *outCertificado;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdGuardar;

    void setupUi(QWidget *Certificado)
    {
        if (Certificado->objectName().isEmpty())
            Certificado->setObjectName(QString::fromUtf8("Certificado"));
        Certificado->setWindowModality(Qt::WindowModal);
        Certificado->resize(559, 281);
        Certificado->setMinimumSize(QSize(523, 200));
        Certificado->setMaximumSize(QSize(16777215, 16777215));
        Certificado->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.477227, cy:0.392, radius:1.271, fx:0.477227, fy:0.387, stop:0 rgba(104, 206, 245, 248), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.271, fx:0.5, fy:0.5, stop:0 rgba(210, 255, 197, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayout_3 = new QVBoxLayout(Certificado);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_2 = new QWidget(Certificado);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        outCertificado = new QLabel(widget_2);
        outCertificado->setObjectName(QString::fromUtf8("outCertificado"));
        outCertificado->setMinimumSize(QSize(523, 140));

        verticalLayout->addWidget(outCertificado);


        verticalLayout_3->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        widget = new QWidget(Certificado);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cmdGuardar = new QPushButton(widget);
        cmdGuardar->setObjectName(QString::fromUtf8("cmdGuardar"));
        cmdGuardar->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:reflect, cx:0.239, cy:0.528273, radius:1.271, fx:0.233, fy:0.522727, stop:0 rgba(236, 61, 52, 241), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout->addWidget(cmdGuardar);


        verticalLayout_3->addWidget(widget);


        retranslateUi(Certificado);

        QMetaObject::connectSlotsByName(Certificado);
    } // setupUi

    void retranslateUi(QWidget *Certificado)
    {
        Certificado->setWindowTitle(QApplication::translate("Certificado", "Form", nullptr));
        outCertificado->setText(QApplication::translate("Certificado", "TextLabel", nullptr));
        cmdGuardar->setText(QApplication::translate("Certificado", "Guardar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Certificado: public Ui_Certificado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERTIFICADO_H
