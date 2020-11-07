/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *actionAbout;
    QAction *actionManual;
    QAction *actionQuit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_25;
    QListView *view_logging;
    QFrame *frame_3;
    QGridLayout *gridLayout_5;
    QLabel *label_17;
    QLabel *label_16;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(837, 729);
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionManual = new QAction(MainWindowDesign);
        actionManual->setObjectName(QStringLiteral("actionManual"));
        actionQuit = new QAction(MainWindowDesign);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(MainWindowDesign);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_25 = new QLabel(frame_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        verticalLayout->addWidget(label_25);

        view_logging = new QListView(frame_2);
        view_logging->setObjectName(QStringLiteral("view_logging"));

        verticalLayout->addWidget(view_logging);


        gridLayout_4->addWidget(frame_2, 3, 0, 1, 2);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setAutoFillBackground(false);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_17 = new QLabel(frame_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_5->addWidget(label_17, 0, 1, 1, 1);

        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMaximumSize(QSize(150, 100));

        gridLayout_5->addWidget(label_16, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_3, 0, 0, 1, 2);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout_4->addWidget(frame, 1, 0, 1, 1);

        MainWindowDesign->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowDesign);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 837, 22));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindowDesign->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowDesign);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowDesign->setStatusBar(statusBar);

        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionManual);
        menuHelp->addSeparator();
        menuHelp->addAction(actionQuit);

        retranslateUi(MainWindowDesign);

        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "MainWindow", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "About", Q_NULLPTR));
        actionManual->setText(QApplication::translate("MainWindowDesign", "Manual", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindowDesign", "Quit", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindowDesign", "ROS Log", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindowDesign", "<html><head/><body><p><span style=\" font-size:33pt; font-weight:600;\">Drone Ground Control System</span></p></body></html>", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindowDesign", "<html><head/><body><p><img src=\"::/images/logo.png\"/></p></body></html>", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindowDesign", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
