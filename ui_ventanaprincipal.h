/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaPrincipal
{
public:
    QAction *actionAbrir;
    QAction *actionSalir;
    QAction *actionAcerca_de;
    QAction *actionLimpiar_Archivo;
    QWidget *centralwidget;
    QLineEdit *txt_puntos;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tw_tabla;
    QLineEdit *txt_rutasalida;
    QLabel *label_3;
    QPushButton *btn_salir;
    QLineEdit *txt_rutaoriginal;
    QLabel *label_4;
    QPushButton *btn_proceso;
    QPushButton *btn_proceso_2;
    QLabel *label_5;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuAbrir;
    QMenu *menuAyuda;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QString::fromUtf8("VentanaPrincipal"));
        VentanaPrincipal->resize(800, 450);
        actionAbrir = new QAction(VentanaPrincipal);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionSalir = new QAction(VentanaPrincipal);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionAcerca_de = new QAction(VentanaPrincipal);
        actionAcerca_de->setObjectName(QString::fromUtf8("actionAcerca_de"));
        actionLimpiar_Archivo = new QAction(VentanaPrincipal);
        actionLimpiar_Archivo->setObjectName(QString::fromUtf8("actionLimpiar_Archivo"));
        centralwidget = new QWidget(VentanaPrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txt_puntos = new QLineEdit(centralwidget);
        txt_puntos->setObjectName(QString::fromUtf8("txt_puntos"));
        txt_puntos->setEnabled(true);
        txt_puntos->setGeometry(QRect(630, 320, 91, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 320, 121, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 381, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        tw_tabla = new QTableWidget(centralwidget);
        if (tw_tabla->columnCount() < 28)
            tw_tabla->setColumnCount(28);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(18, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(19, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(20, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(21, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(22, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(23, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(24, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(25, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(26, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tw_tabla->setHorizontalHeaderItem(27, __qtablewidgetitem27);
        tw_tabla->setObjectName(QString::fromUtf8("tw_tabla"));
        tw_tabla->setGeometry(QRect(20, 60, 701, 241));
        txt_rutasalida = new QLineEdit(centralwidget);
        txt_rutasalida->setObjectName(QString::fromUtf8("txt_rutasalida"));
        txt_rutasalida->setEnabled(false);
        txt_rutasalida->setGeometry(QRect(300, 380, 251, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 300, 571, 21));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        label_3->setFont(font2);
        btn_salir = new QPushButton(centralwidget);
        btn_salir->setObjectName(QString::fromUtf8("btn_salir"));
        btn_salir->setGeometry(QRect(630, 380, 91, 23));
        txt_rutaoriginal = new QLineEdit(centralwidget);
        txt_rutaoriginal->setObjectName(QString::fromUtf8("txt_rutaoriginal"));
        txt_rutaoriginal->setEnabled(false);
        txt_rutaoriginal->setGeometry(QRect(300, 340, 251, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 320, 121, 20));
        label_4->setFont(font);
        btn_proceso = new QPushButton(centralwidget);
        btn_proceso->setObjectName(QString::fromUtf8("btn_proceso"));
        btn_proceso->setGeometry(QRect(30, 330, 181, 31));
        btn_proceso_2 = new QPushButton(centralwidget);
        btn_proceso_2->setObjectName(QString::fromUtf8("btn_proceso_2"));
        btn_proceso_2->setGeometry(QRect(30, 370, 181, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 360, 141, 20));
        label_5->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 350, 91, 23));
        VentanaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VentanaPrincipal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuAbrir = new QMenu(menubar);
        menuAbrir->setObjectName(QString::fromUtf8("menuAbrir"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        VentanaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(VentanaPrincipal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VentanaPrincipal->setStatusBar(statusbar);

        menubar->addAction(menuAbrir->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuAbrir->addAction(actionAbrir);
        menuAbrir->addAction(actionLimpiar_Archivo);
        menuAbrir->addAction(actionSalir);
        menuAyuda->addAction(actionAcerca_de);

        retranslateUi(VentanaPrincipal);

        QMetaObject::connectSlotsByName(VentanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaPrincipal)
    {
        VentanaPrincipal->setWindowTitle(QCoreApplication::translate("VentanaPrincipal", "VentanaPrincipal", nullptr));
        actionAbrir->setText(QCoreApplication::translate("VentanaPrincipal", "Abrir...", nullptr));
        actionSalir->setText(QCoreApplication::translate("VentanaPrincipal", "Salir", nullptr));
        actionAcerca_de->setText(QCoreApplication::translate("VentanaPrincipal", "Acerca de...", nullptr));
        actionLimpiar_Archivo->setText(QCoreApplication::translate("VentanaPrincipal", "Limpiar Archivo", nullptr));
        label->setText(QCoreApplication::translate("VentanaPrincipal", "Total Puntos Fichero", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaPrincipal", "Fomulario para conversi\303\263n KML", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tw_tabla->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("VentanaPrincipal", "FID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tw_tabla->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("VentanaPrincipal", "Cod_Elemento", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tw_tabla->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("VentanaPrincipal", "Responsable", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tw_tabla->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("VentanaPrincipal", "FechaCaptura", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tw_tabla->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("VentanaPrincipal", "TipoEstructura", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tw_tabla->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("VentanaPrincipal", "Diametro", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tw_tabla->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("VentanaPrincipal", "Proyecto", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tw_tabla->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("VentanaPrincipal", "Altura", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tw_tabla->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("VentanaPrincipal", "Longitud", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tw_tabla->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("VentanaPrincipal", "Est_Conducto", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tw_tabla->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("VentanaPrincipal", "Funcionamiento", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tw_tabla->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("VentanaPrincipal", "Est_Cabezal", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tw_tabla->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("VentanaPrincipal", "Cab_Salida", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tw_tabla->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("VentanaPrincipal", "Cab_Entrada", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tw_tabla->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("VentanaPrincipal", "Est_Guardarueda", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tw_tabla->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("VentanaPrincipal", "GuardaR_Ent", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tw_tabla->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("VentanaPrincipal", "GuardaR_Sal", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tw_tabla->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("VentanaPrincipal", "Est_Aletas", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tw_tabla->horizontalHeaderItem(18);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("VentanaPrincipal", "Aleta_Ent", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tw_tabla->horizontalHeaderItem(19);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("VentanaPrincipal", "Aleta_Sal", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tw_tabla->horizontalHeaderItem(20);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("VentanaPrincipal", "Observaciones", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tw_tabla->horizontalHeaderItem(21);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("VentanaPrincipal", "Img_General", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tw_tabla->horizontalHeaderItem(22);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("VentanaPrincipal", "Img_Entrada", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tw_tabla->horizontalHeaderItem(23);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("VentanaPrincipal", "Img_Salida", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tw_tabla->horizontalHeaderItem(24);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("VentanaPrincipal", "Img_Conducto", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tw_tabla->horizontalHeaderItem(25);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("VentanaPrincipal", "Longitud", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tw_tabla->horizontalHeaderItem(26);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("VentanaPrincipal", "Latitud", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tw_tabla->horizontalHeaderItem(27);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("VentanaPrincipal", "Proyecto", nullptr));
        label_3->setText(QCoreApplication::translate("VentanaPrincipal", "Nota: El archivo debe ser formato \"csv\" separado por \" ; \", y contener las 28 columnas del archivo QGis de formato", nullptr));
        btn_salir->setText(QCoreApplication::translate("VentanaPrincipal", "Salir", nullptr));
        label_4->setText(QCoreApplication::translate("VentanaPrincipal", "Ruta Fichero de Entrada", nullptr));
        btn_proceso->setText(QCoreApplication::translate("VentanaPrincipal", "KML por Tipo Estructura", nullptr));
        btn_proceso_2->setText(QCoreApplication::translate("VentanaPrincipal", "KML por Estado Estructura", nullptr));
        label_5->setText(QCoreApplication::translate("VentanaPrincipal", "Ruta Fichero de Salida", nullptr));
        pushButton->setText(QCoreApplication::translate("VentanaPrincipal", "Limpiar", nullptr));
        menuAbrir->setTitle(QCoreApplication::translate("VentanaPrincipal", "Archivo...", nullptr));
        menuAyuda->setTitle(QCoreApplication::translate("VentanaPrincipal", "Ayuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
