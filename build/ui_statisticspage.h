/********************************************************************************
** Form generated from reading UI file 'statisticspage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICSPAGE_H
#define UI_STATISTICSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticsPage
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *startButton;
    QLabel *label;
    QFrame *gridFrame_2;
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout_2;
    QLabel *label_14;
    QLabel *heightBox;
    QLabel *label_12;
    QLabel *rewardBox;
    QLabel *label_13;
    QLabel *diffBox;
    QLabel *label_9;
    QLabel *diffBox2;
    QLabel *label_16;
    QLabel *pawrateBox;
    QLabel *label3_2;
    QLabel *localBox;
    QLabel *label1_2;
    QLabel *connectionBox;
    QLabel *label_8;
    QLabel *volumeBox;
    QLabel *label_17;
    QLabel *marketcap;
    QLabel *label_10;
    QLabel *minBox;
    QLabel *label_11;
    QLabel *maxBox;
    QLabel *label_15;
    QLabel *cBox;
    QLabel *label_99;
    QLabel *mncost;
    QLabel *label_100;
    QLabel *mnreward;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *StatisticsPage)
    {
        if (StatisticsPage->objectName().isEmpty())
            StatisticsPage->setObjectName(QStringLiteral("StatisticsPage"));
        StatisticsPage->setWindowModality(Qt::NonModal);
        StatisticsPage->resize(688, 439);
        StatisticsPage->setStyleSheet(QLatin1String("color:#eeeeee;\n"
"font-family:'Open Sans,sans-serif';"));
        gridLayout = new QGridLayout(StatisticsPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        frame = new QFrame(StatisticsPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(213, 0));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans,sans-serif"));
        frame->setFont(font);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        startButton = new QPushButton(frame);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(40, 280, 141, 60));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        startButton->setMinimumSize(QSize(120, 60));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans,sans-serif"));
        font1.setPointSize(11);
        startButton->setFont(font1);
        startButton->setAutoFillBackground(false);
        startButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/refresh"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 191, 191));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/denarius")));
        label->setScaledContents(true);

        gridLayout->addWidget(frame, 0, 1, 1, 1);

        gridFrame_2 = new QFrame(StatisticsPage);
        gridFrame_2->setObjectName(QStringLiteral("gridFrame_2"));
        gridLayout_4 = new QGridLayout(gridFrame_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_2->setHorizontalSpacing(139);
        formLayout_2->setVerticalSpacing(10);
        formLayout_2->setContentsMargins(-1, -1, 0, -1);
        label_14 = new QLabel(gridFrame_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_14);

        heightBox = new QLabel(gridFrame_2);
        heightBox->setObjectName(QStringLiteral("heightBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, heightBox);

        label_12 = new QLabel(gridFrame_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_12);

        rewardBox = new QLabel(gridFrame_2);
        rewardBox->setObjectName(QStringLiteral("rewardBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, rewardBox);

        label_13 = new QLabel(gridFrame_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_13);

        diffBox = new QLabel(gridFrame_2);
        diffBox->setObjectName(QStringLiteral("diffBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, diffBox);

        label_9 = new QLabel(gridFrame_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_9);

        diffBox2 = new QLabel(gridFrame_2);
        diffBox2->setObjectName(QStringLiteral("diffBox2"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, diffBox2);

        label_16 = new QLabel(gridFrame_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_16);

        pawrateBox = new QLabel(gridFrame_2);
        pawrateBox->setObjectName(QStringLiteral("pawrateBox"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, pawrateBox);

        label3_2 = new QLabel(gridFrame_2);
        label3_2->setObjectName(QStringLiteral("label3_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label3_2->sizePolicy().hasHeightForWidth());
        label3_2->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label3_2);

        localBox = new QLabel(gridFrame_2);
        localBox->setObjectName(QStringLiteral("localBox"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, localBox);

        label1_2 = new QLabel(gridFrame_2);
        label1_2->setObjectName(QStringLiteral("label1_2"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label1_2);

        connectionBox = new QLabel(gridFrame_2);
        connectionBox->setObjectName(QStringLiteral("connectionBox"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, connectionBox);

        label_8 = new QLabel(gridFrame_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_8);

        volumeBox = new QLabel(gridFrame_2);
        volumeBox->setObjectName(QStringLiteral("volumeBox"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, volumeBox);

        label_17 = new QLabel(gridFrame_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_17);

        marketcap = new QLabel(gridFrame_2);
        marketcap->setObjectName(QStringLiteral("marketcap"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, marketcap);

        label_10 = new QLabel(gridFrame_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_10);

        minBox = new QLabel(gridFrame_2);
        minBox->setObjectName(QStringLiteral("minBox"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, minBox);

        label_11 = new QLabel(gridFrame_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, label_11);

        maxBox = new QLabel(gridFrame_2);
        maxBox->setObjectName(QStringLiteral("maxBox"));

        formLayout_2->setWidget(11, QFormLayout::FieldRole, maxBox);

        label_15 = new QLabel(gridFrame_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_2->setWidget(12, QFormLayout::LabelRole, label_15);

        cBox = new QLabel(gridFrame_2);
        cBox->setObjectName(QStringLiteral("cBox"));

        formLayout_2->setWidget(12, QFormLayout::FieldRole, cBox);

        label_99 = new QLabel(gridFrame_2);
        label_99->setObjectName(QStringLiteral("label_99"));

        formLayout_2->setWidget(13, QFormLayout::LabelRole, label_99);

        mncost = new QLabel(gridFrame_2);
        mncost->setObjectName(QStringLiteral("mncost"));

        formLayout_2->setWidget(13, QFormLayout::FieldRole, mncost);

        label_100 = new QLabel(gridFrame_2);
        label_100->setObjectName(QStringLiteral("label_100"));

        formLayout_2->setWidget(14, QFormLayout::LabelRole, label_100);

        mnreward = new QLabel(gridFrame_2);
        mnreward->setObjectName(QStringLiteral("mnreward"));

        formLayout_2->setWidget(14, QFormLayout::FieldRole, mnreward);


        gridLayout_4->addLayout(formLayout_2, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(gridFrame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 2, 0, 1, 1);


        gridLayout->addWidget(gridFrame_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(StatisticsPage);

        QMetaObject::connectSlotsByName(StatisticsPage);
    } // setupUi

    void retranslateUi(QWidget *StatisticsPage)
    {
        StatisticsPage->setWindowTitle(QApplication::translate("StatisticsPage", "Digging", Q_NULLPTR));
        startButton->setText(QApplication::translate("StatisticsPage", "Refresh", Q_NULLPTR));
        label->setText(QString());
        label_14->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Block Height</span></p></body></html>", Q_NULLPTR));
        heightBox->setText(QApplication::translate("StatisticsPage", "00000", Q_NULLPTR));
        label_12->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">POW Block Reward</span></p></body></html>", Q_NULLPTR));
        rewardBox->setText(QApplication::translate("StatisticsPage", "10000", Q_NULLPTR));
        label_13->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">POW difficulty</span></p></body></html>", Q_NULLPTR));
        diffBox->setText(QApplication::translate("StatisticsPage", "0.0002", Q_NULLPTR));
        label_9->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">POS difficulty</span></p></body></html>", Q_NULLPTR));
        diffBox2->setText(QApplication::translate("StatisticsPage", "0.0002", Q_NULLPTR));
        label_16->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Net Hashrate</span></p></body></html>", Q_NULLPTR));
        pawrateBox->setText(QApplication::translate("StatisticsPage", "0 MH/s", Q_NULLPTR));
        label3_2->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Last block time</span></p></body></html>", Q_NULLPTR));
        localBox->setText(QApplication::translate("StatisticsPage", "0 KH/s", Q_NULLPTR));
        label1_2->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Connections</span></p></body></html>", Q_NULLPTR));
        connectionBox->setText(QApplication::translate("StatisticsPage", "0", Q_NULLPTR));
        label_8->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Total Volume</span></p></body></html>", Q_NULLPTR));
        volumeBox->setText(QApplication::translate("StatisticsPage", "250", Q_NULLPTR));
        label_17->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Market Cap</span></p></body></html>", Q_NULLPTR));
        marketcap->setText(QApplication::translate("StatisticsPage", "$0", Q_NULLPTR));
        label_10->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Total stake weight</span></p></body></html>", Q_NULLPTR));
        minBox->setText(QApplication::translate("StatisticsPage", "0", Q_NULLPTR));
        label_11->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Network stake weight</span></p></body></html>", Q_NULLPTR));
        maxBox->setText(QApplication::translate("StatisticsPage", "0", Q_NULLPTR));
        label_15->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Mining Phase</span></p></body></html>", Q_NULLPTR));
        cBox->setText(QApplication::translate("StatisticsPage", "POW-POS", Q_NULLPTR));
        label_99->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Hybrid Masternode Cost</span></p></body></html>", Q_NULLPTR));
        mncost->setText(QApplication::translate("StatisticsPage", "5,000 D", Q_NULLPTR));
        label_100->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-weight:600;\">Hybrid Masternode Reward</span></p></body></html>", Q_NULLPTR));
        mnreward->setText(QApplication::translate("StatisticsPage", "33% of PoW/PoS Block Value", Q_NULLPTR));
        label_5->setText(QApplication::translate("StatisticsPage", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#FFFFFF;\">Denarius [D] Statistics</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatisticsPage: public Ui_StatisticsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICSPAGE_H
