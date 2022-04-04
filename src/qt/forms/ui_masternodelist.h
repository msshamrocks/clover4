/********************************************************************************
** Form generated from reading UI file 'masternodelist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODELIST_H
#define UI_MASTERNODELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeList
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout_Master;
    QFrame *frame_BG;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_Content;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QTabWidget *tabAllMasternode;
    QWidget *myMasternodeList;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_note;
    QLabel *updateNote;
    QTableWidget *tableWidgetMyMasternodes;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startButton;
    QPushButton *startAllButton;
    QPushButton *startMissingButton;
    QPushButton *UpdateButton;
    QLabel *autoupdate_label;
    QLabel *secondsLabel;
    QSpacerItem *horizontalSpacer_5;
    QWidget *allMasternodeList;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *filterListLb;
    QLineEdit *filterTextBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *nodeCountLb;
    QLabel *nodeCount;
    QTableWidget *tableWidgetAllMasternodes;

    void setupUi(QWidget *MasternodeList)
    {
        if (MasternodeList->objectName().isEmpty())
            MasternodeList->setObjectName(QStringLiteral("MasternodeList"));
        MasternodeList->resize(962, 457);
        topLayout = new QVBoxLayout(MasternodeList);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(9, 9, 9, 9);
        verticalLayout_Master = new QVBoxLayout();
        verticalLayout_Master->setSpacing(0);
        verticalLayout_Master->setObjectName(QStringLiteral("verticalLayout_Master"));
        frame_BG = new QFrame(MasternodeList);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        verticalLayout_3 = new QVBoxLayout(frame_BG);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        frame_Content = new QFrame(frame_BG);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        verticalLayout = new QVBoxLayout(frame_Content);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabAllMasternode = new QTabWidget(frame_Content);
        tabAllMasternode->setObjectName(QStringLiteral("tabAllMasternode"));
        tabAllMasternode->setTabPosition(QTabWidget::North);
        myMasternodeList = new QWidget();
        myMasternodeList->setObjectName(QStringLiteral("myMasternodeList"));
        verticalLayout_2 = new QVBoxLayout(myMasternodeList);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 1);
        horizontalLayout_note = new QHBoxLayout();
        horizontalLayout_note->setObjectName(QStringLiteral("horizontalLayout_note"));
        horizontalLayout_note->setContentsMargins(-1, -1, -1, 0);
        updateNote = new QLabel(myMasternodeList);
        updateNote->setObjectName(QStringLiteral("updateNote"));

        horizontalLayout_note->addWidget(updateNote);


        verticalLayout_2->addLayout(horizontalLayout_note);

        tableWidgetMyMasternodes = new QTableWidget(myMasternodeList);
        if (tableWidgetMyMasternodes->columnCount() < 7)
            tableWidgetMyMasternodes->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidgetMyMasternodes->setObjectName(QStringLiteral("tableWidgetMyMasternodes"));
        tableWidgetMyMasternodes->setMinimumSize(QSize(695, 0));
        QPalette palette;
        QBrush brush(QColor(51, 51, 51, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(85, 85, 85, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        tableWidgetMyMasternodes->setPalette(palette);
        tableWidgetMyMasternodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMyMasternodes->setAlternatingRowColors(true);
        tableWidgetMyMasternodes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetMyMasternodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMyMasternodes->setSortingEnabled(true);
        tableWidgetMyMasternodes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidgetMyMasternodes);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        startButton = new QPushButton(myMasternodeList);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setVisible(false);

        horizontalLayout_5->addWidget(startButton);

        startAllButton = new QPushButton(myMasternodeList);
        startAllButton->setObjectName(QStringLiteral("startAllButton"));
        startAllButton->setVisible(false);

        horizontalLayout_5->addWidget(startAllButton);

        startMissingButton = new QPushButton(myMasternodeList);
        startMissingButton->setObjectName(QStringLiteral("startMissingButton"));
        startMissingButton->setVisible(false);

        horizontalLayout_5->addWidget(startMissingButton);

        UpdateButton = new QPushButton(myMasternodeList);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_5->addWidget(UpdateButton);

        autoupdate_label = new QLabel(myMasternodeList);
        autoupdate_label->setObjectName(QStringLiteral("autoupdate_label"));

        horizontalLayout_5->addWidget(autoupdate_label);

        secondsLabel = new QLabel(myMasternodeList);
        secondsLabel->setObjectName(QStringLiteral("secondsLabel"));

        horizontalLayout_5->addWidget(secondsLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        tabAllMasternode->addTab(myMasternodeList, QString());
        allMasternodeList = new QWidget();
        allMasternodeList->setObjectName(QStringLiteral("allMasternodeList"));
        verticalLayout_5 = new QVBoxLayout(allMasternodeList);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        filterListLb = new QLabel(allMasternodeList);
        filterListLb->setObjectName(QStringLiteral("filterListLb"));

        horizontalLayout_4->addWidget(filterListLb);

        filterTextBox = new QLineEdit(allMasternodeList);
        filterTextBox->setObjectName(QStringLiteral("filterTextBox"));

        horizontalLayout_4->addWidget(filterTextBox);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        nodeCountLb = new QLabel(allMasternodeList);
        nodeCountLb->setObjectName(QStringLiteral("nodeCountLb"));

        horizontalLayout_4->addWidget(nodeCountLb);

        nodeCount = new QLabel(allMasternodeList);
        nodeCount->setObjectName(QStringLiteral("nodeCount"));

        horizontalLayout_4->addWidget(nodeCount);


        verticalLayout_5->addLayout(horizontalLayout_4);

        tableWidgetAllMasternodes = new QTableWidget(allMasternodeList);
        if (tableWidgetAllMasternodes->columnCount() < 6)
            tableWidgetAllMasternodes->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetAllMasternodes->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetAllMasternodes->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetAllMasternodes->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetAllMasternodes->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetAllMasternodes->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetAllMasternodes->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        tableWidgetAllMasternodes->setObjectName(QStringLiteral("tableWidgetAllMasternodes"));
        tableWidgetAllMasternodes->setMinimumSize(QSize(695, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        tableWidgetAllMasternodes->setPalette(palette1);
        tableWidgetAllMasternodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetAllMasternodes->setAlternatingRowColors(true);
        tableWidgetAllMasternodes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetAllMasternodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetAllMasternodes->setSortingEnabled(true);
        tableWidgetAllMasternodes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_5->addWidget(tableWidgetAllMasternodes);

        tabAllMasternode->addTab(allMasternodeList, QString());
        tableWidgetAllMasternodes->raise();

        gridLayout_2->addWidget(tabAllMasternode, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_3->addWidget(frame_Content);


        verticalLayout_Master->addWidget(frame_BG);


        topLayout->addLayout(verticalLayout_Master);


        retranslateUi(MasternodeList);

        tabAllMasternode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MasternodeList);
    } // setupUi

    void retranslateUi(QWidget *MasternodeList)
    {
        MasternodeList->setWindowTitle(QApplication::translate("MasternodeList", "Form", Q_NULLPTR));
        updateNote->setText(QApplication::translate("MasternodeList", "Note: Status of your masternodes in local wallet can potentially be slightly incorrect.<br />Always wait for wallet to sync additional data and then double check from another node<br />if your node should be running but you still see \"MISSING\" in \"Status\" field.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetMyMasternodes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeList", "Alias", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetMyMasternodes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeList", "Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetMyMasternodes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeList", "Protocol", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMyMasternodes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeList", "Status", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMyMasternodes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeList", "Active", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMyMasternodes->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MasternodeList", "Last Seen (UTC)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetMyMasternodes->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MasternodeList", "Pubkey", Q_NULLPTR));
        startButton->setText(QApplication::translate("MasternodeList", "S&tart alias", Q_NULLPTR));
        startAllButton->setText(QApplication::translate("MasternodeList", "Start &all", Q_NULLPTR));
        startMissingButton->setText(QApplication::translate("MasternodeList", "Start &MISSING", Q_NULLPTR));
        UpdateButton->setText(QApplication::translate("MasternodeList", "&Update status", Q_NULLPTR));
        autoupdate_label->setText(QApplication::translate("MasternodeList", "Status will be updated automatically in (sec):", Q_NULLPTR));
        secondsLabel->setText(QApplication::translate("MasternodeList", "0", Q_NULLPTR));
        tabAllMasternode->setTabText(tabAllMasternode->indexOf(myMasternodeList), QApplication::translate("MasternodeList", "My Masternodes", Q_NULLPTR));
        filterListLb->setText(QApplication::translate("MasternodeList", "Filter List:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        filterTextBox->setToolTip(QApplication::translate("MasternodeList", "Filter masternode list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        nodeCountLb->setText(QApplication::translate("MasternodeList", "Node Count:", Q_NULLPTR));
        nodeCount->setText(QApplication::translate("MasternodeList", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetAllMasternodes->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MasternodeList", "Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetAllMasternodes->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MasternodeList", "Protocol", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetAllMasternodes->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MasternodeList", "Status", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetAllMasternodes->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MasternodeList", "Active", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetAllMasternodes->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MasternodeList", "Last Seen (UTC)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetAllMasternodes->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("MasternodeList", "Pubkey", Q_NULLPTR));
        tabAllMasternode->setTabText(tabAllMasternode->indexOf(allMasternodeList), QApplication::translate("MasternodeList", "All Masternodes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MasternodeList: public Ui_MasternodeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODELIST_H
