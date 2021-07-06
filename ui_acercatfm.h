/********************************************************************************
** Form generated from reading UI file 'acercatfm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACERCATFM_H
#define UI_ACERCATFM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_acercaTFM
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *acercaTFM)
    {
        if (acercaTFM->objectName().isEmpty())
            acercaTFM->setObjectName(QString::fromUtf8("acercaTFM"));
        acercaTFM->resize(391, 319);
        pushButton = new QPushButton(acercaTFM);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 280, 75, 23));
        label_2 = new QLabel(acercaTFM);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 60, 281, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(acercaTFM);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 261, 31));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(acercaTFM);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 381, 31));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setTextFormat(Qt::RichText);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(acercaTFM);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 250, 111, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);
        label_6 = new QLabel(acercaTFM);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 80, 311, 31));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(acercaTFM);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 140, 381, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        label_7->setTextFormat(Qt::RichText);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(acercaTFM);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 180, 381, 31));
        label_8->setFont(font3);
        label_8->setTextFormat(Qt::RichText);
        label_8->setAlignment(Qt::AlignCenter);

        retranslateUi(acercaTFM);

        QMetaObject::connectSlotsByName(acercaTFM);
    } // setupUi

    void retranslateUi(QDialog *acercaTFM)
    {
        acercaTFM->setWindowTitle(QCoreApplication::translate("acercaTFM", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("acercaTFM", "Aceptar", nullptr));
        label_2->setText(QCoreApplication::translate("acercaTFM", "C\303\251sar Bernardo Cort\303\251s R.", nullptr));
        label_3->setText(QCoreApplication::translate("acercaTFM", "Desarrollo de complemento para TFM elaborado por:", nullptr));
        label_4->setText(QCoreApplication::translate("acercaTFM", "Master en Geotecnolog\303\255as Cartogr\303\241ficas en", nullptr));
        label_5->setText(QCoreApplication::translate("acercaTFM", "V1.0 Junio 2021", nullptr));
        label_6->setText(QCoreApplication::translate("acercaTFM", "cbcortesr@hotmail.com", nullptr));
        label_7->setText(QCoreApplication::translate("acercaTFM", "Ingenier\303\255a y Arquitectura", nullptr));
        label_8->setText(QCoreApplication::translate("acercaTFM", "Universidad de Salamanca", nullptr));
    } // retranslateUi

};

namespace Ui {
    class acercaTFM: public Ui_acercaTFM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCATFM_H
