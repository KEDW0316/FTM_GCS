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
#include <QtWidgets/QGroupBox>
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
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QListView *view_logging;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QListView *view_drone_pose;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QListView *view_mission_state;
    QFrame *frame_3;
    QGridLayout *gridLayout_5;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
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
        frame_2->setMaximumSize(QSize(16777215, 200));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        view_logging = new QListView(groupBox);
        view_logging->setObjectName(QStringLiteral("view_logging"));
        view_logging->setMinimumSize(QSize(200, 0));
        view_logging->setMaximumSize(QSize(16777215, 150));

        verticalLayout_2->addWidget(view_logging);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_3 = new QGroupBox(frame_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        view_drone_pose = new QListView(groupBox_3);
        view_drone_pose->setObjectName(QStringLiteral("view_drone_pose"));
        view_drone_pose->setMinimumSize(QSize(0, 0));
        view_drone_pose->setMaximumSize(QSize(16777215, 150));

        horizontalLayout_3->addWidget(view_drone_pose);


        horizontalLayout_4->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        view_mission_state = new QListView(groupBox_2);
        view_mission_state->setObjectName(QStringLiteral("view_mission_state"));
        view_mission_state->setMinimumSize(QSize(200, 0));
        view_mission_state->setMaximumSize(QSize(150, 150));

        verticalLayout->addWidget(view_mission_state);


        horizontalLayout_4->addWidget(groupBox_2);


        horizontalLayout->addLayout(horizontalLayout_4);


        gridLayout_4->addWidget(frame_2, 2, 0, 1, 2);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMaximumSize(QSize(16777215, 80));
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

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 3, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        gridLayout_4->addLayout(verticalLayout_3, 3, 1, 1, 1);

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
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Detected Human Position", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindowDesign", "Drone position", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "Mission State", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindowDesign", "<html><head/><body><p><span style=\" font-size:33pt; font-weight:600;\">Drone Ground Control System</span></p></body></html>", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindowDesign", "<html><head/><body><p><img src=\"::/images/logo.png\"/></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowDesign", "TextLabel", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindowDesign", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
