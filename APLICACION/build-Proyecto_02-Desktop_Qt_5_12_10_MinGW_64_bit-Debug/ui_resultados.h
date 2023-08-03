/********************************************************************************
** Form generated from reading UI file 'resultados.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADOS_H
#define UI_RESULTADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Resultados
{
public:
    QPushButton *cmdExcel;
    QPushButton *cmdImagen;
    QLabel *label;
    QLabel *outResultados;

    void setupUi(QWidget *Resultados)
    {
        if (Resultados->objectName().isEmpty())
            Resultados->setObjectName(QString::fromUtf8("Resultados"));
        Resultados->setWindowModality(Qt::ApplicationModal);
        Resultados->resize(705, 650);
        Resultados->setMinimumSize(QSize(705, 650));
        Resultados->setMaximumSize(QSize(740, 650));
        Resultados->setStyleSheet(QString::fromUtf8(""));
        cmdExcel = new QPushButton(Resultados);
        cmdExcel->setObjectName(QString::fromUtf8("cmdExcel"));
        cmdExcel->setGeometry(QRect(110, 570, 171, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Script MT Bold"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        cmdExcel->setFont(font);
        cmdExcel->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:reflect, cx:0, cy:0, radius:1.271, fx:0.897834, fy:0.897834, stop:0 rgba(236, 129, 124, 241), stop:1 rgba(255, 255, 255, 255));"));
        cmdImagen = new QPushButton(Resultados);
        cmdImagen->setObjectName(QString::fromUtf8("cmdImagen"));
        cmdImagen->setGeometry(QRect(430, 570, 121, 31));
        cmdImagen->setFont(font);
        cmdImagen->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:reflect, cx:0, cy:0, radius:1.271, fx:0.897834, fy:0.897834, stop:0 rgba(236, 129, 124, 241), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(Resultados);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 10, 221, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Perpetua Titling MT"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        outResultados = new QLabel(Resultados);
        outResultados->setObjectName(QString::fromUtf8("outResultados"));
        outResultados->setGeometry(QRect(20, 40, 660, 500));
        outResultados->setMinimumSize(QSize(660, 500));
        outResultados->setFrameShape(QFrame::Box);
        outResultados->setScaledContents(false);
        outResultados->setWordWrap(false);
        outResultados->setMargin(0);

        retranslateUi(Resultados);

        QMetaObject::connectSlotsByName(Resultados);
    } // setupUi

    void retranslateUi(QWidget *Resultados)
    {
        Resultados->setWindowTitle(QApplication::translate("Resultados", "Form", nullptr));
        cmdExcel->setText(QApplication::translate("Resultados", "Guardar Datos en Excel", nullptr));
        cmdImagen->setText(QApplication::translate("Resultados", "Generar Imagen", nullptr));
        label->setText(QApplication::translate("Resultados", "Resultados", nullptr));
        outResultados->setText(QApplication::translate("Resultados", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Resultados: public Ui_Resultados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADOS_H
