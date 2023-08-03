/********************************************************************************
** Form generated from reading UI file 'votacion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTACION_H
#define UI_VOTACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Votacion
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGraphicsView *graphicsView;
    QLabel *label;
    QCheckBox *inArauz;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QGraphicsView *graphicsView_2;
    QLabel *label_2;
    QCheckBox *inLasso;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QPushButton *cmdVotar;

    void setupUi(QWidget *Votacion)
    {
        if (Votacion->objectName().isEmpty())
            Votacion->setObjectName(QString::fromUtf8("Votacion"));
        Votacion->setWindowModality(Qt::WindowModal);
        Votacion->resize(547, 341);
        Votacion->setMinimumSize(QSize(420, 240));
        Votacion->setMaximumSize(QSize(600, 400));
        verticalLayout = new QVBoxLayout(Votacion);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Votacion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/Recursos/arauz.jpeg);"));

        verticalLayout_2->addWidget(graphicsView);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        inArauz = new QCheckBox(widget);
        inArauz->setObjectName(QString::fromUtf8("inArauz"));

        verticalLayout_2->addWidget(inArauz, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        graphicsView_2 = new QGraphicsView(widget_2);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/Recursos/lasso.jpeg);"));

        verticalLayout_3->addWidget(graphicsView_2);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        inLasso = new QCheckBox(widget_2);
        inLasso->setObjectName(QString::fromUtf8("inLasso"));

        verticalLayout_3->addWidget(inLasso, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(widget_2);

        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        cmdVotar = new QPushButton(widget_3);
        cmdVotar->setObjectName(QString::fromUtf8("cmdVotar"));
        QFont font;
        font.setFamily(QString::fromUtf8("Script MT Bold"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        cmdVotar->setFont(font);
        cmdVotar->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:reflect, cx:0, cy:0, radius:1.271, fx:0.897834, fy:0.897834, stop:0 rgba(236, 129, 124, 241), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout_4->addWidget(cmdVotar);


        horizontalLayout->addWidget(widget_3);


        verticalLayout->addWidget(groupBox);


        retranslateUi(Votacion);

        QMetaObject::connectSlotsByName(Votacion);
    } // setupUi

    void retranslateUi(QWidget *Votacion)
    {
        Votacion->setWindowTitle(QApplication::translate("Votacion", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("Votacion", "Candidatos", nullptr));
        label->setText(QApplication::translate("Votacion", "<html><head/><body><p align=\"center\">Lista 1</p></body></html>", nullptr));
        inArauz->setText(QApplication::translate("Votacion", "Arauz", nullptr));
        label_2->setText(QApplication::translate("Votacion", "<html><head/><body><p align=\"center\">Lista 21</p></body></html>", nullptr));
        inLasso->setText(QApplication::translate("Votacion", "Lasso", nullptr));
        cmdVotar->setText(QApplication::translate("Votacion", "Votar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Votacion: public Ui_Votacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTACION_H
