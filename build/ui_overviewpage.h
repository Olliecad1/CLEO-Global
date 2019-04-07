/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QFrame *line;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *labelStakeText;
    QLabel *labelStake;
    QLabel *unconfirmedlabeltxt;
    QLabel *labelUnconfirmed;
    QLabel *labelBalance;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelWatchTotal;
    QLabel *labelWatchAvailable;
    QLabel *watch2;
    QLabel *labelWatchImmatureText;
    QLabel *labelWatchImmature;
    QLabel *labelWatchonly;
    QFrame *line_4;
    QLabel *labelBTCTotal;
    QLabel *watch4;
    QLabel *labelWatchPending;
    QLabel *labelUSDTotal;
    QLabel *watch1;
    QLabel *labelLocked;
    QLabel *labelLockedText;
    QLabel *usdtotal;
    QLabel *btctotal;
    QLabel *labelEURTotal;
    QLabel *eurtotal;
    QSpacerItem *verticalSpacer;
    QLabel *labelTotal;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QLabel *labelTradeLink;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_2;
    QLabel *labelTotalText;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelNewsFeed;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_699;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *refreshButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(666, 440);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 155));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        OverviewPage->setPalette(palette);
        OverviewPage->setWindowOpacity(0.2);
        OverviewPage->setAutoFillBackground(false);
        OverviewPage->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(OverviewPage);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        labelStakeText = new QLabel(frame);
        labelStakeText->setObjectName(QStringLiteral("labelStakeText"));

        gridLayout->addWidget(labelStakeText, 1, 0, 1, 1);

        labelStake = new QLabel(frame);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelStake->setFont(font);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QStringLiteral("0 D"));
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelStake, 1, 1, 1, 1);

        unconfirmedlabeltxt = new QLabel(frame);
        unconfirmedlabeltxt->setObjectName(QStringLiteral("unconfirmedlabeltxt"));

        gridLayout->addWidget(unconfirmedlabeltxt, 4, 0, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QStringLiteral("0 D"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 4, 1, 1, 2);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("0 D"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 0, 1, 1, 2);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 5, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font);
        labelImmature->setText(QStringLiteral("0 D"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 5, 1, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 16, 0, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QStringLiteral("0 D"));
        labelWatchTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 21, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QStringLiteral("0 D"));
        labelWatchAvailable->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 18, 1, 1, 1);

        watch2 = new QLabel(frame);
        watch2->setObjectName(QStringLiteral("watch2"));

        gridLayout->addWidget(watch2, 19, 0, 1, 1);

        labelWatchImmatureText = new QLabel(frame);
        labelWatchImmatureText->setObjectName(QStringLiteral("labelWatchImmatureText"));

        gridLayout->addWidget(labelWatchImmatureText, 20, 0, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QStringLiteral("0 D"));
        labelWatchImmature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 20, 1, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        labelWatchonly->setFont(font2);
        labelWatchonly->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 17, 0, 1, 2);

        line_4 = new QFrame(frame);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 9, 0, 1, 1);

        labelBTCTotal = new QLabel(frame);
        labelBTCTotal->setObjectName(QStringLiteral("labelBTCTotal"));
        labelBTCTotal->setFont(font);
        labelBTCTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelBTCTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBTCTotal, 13, 1, 1, 2);

        watch4 = new QLabel(frame);
        watch4->setObjectName(QStringLiteral("watch4"));

        gridLayout->addWidget(watch4, 21, 0, 1, 1);

        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QStringLiteral("0 D"));
        labelWatchPending->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 19, 1, 1, 1);

        labelUSDTotal = new QLabel(frame);
        labelUSDTotal->setObjectName(QStringLiteral("labelUSDTotal"));
        labelUSDTotal->setFont(font1);
        labelUSDTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelUSDTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUSDTotal, 10, 1, 1, 2);

        watch1 = new QLabel(frame);
        watch1->setObjectName(QStringLiteral("watch1"));

        gridLayout->addWidget(watch1, 18, 0, 1, 1);

        labelLocked = new QLabel(frame);
        labelLocked->setObjectName(QStringLiteral("labelLocked"));
        labelLocked->setEnabled(true);
        labelLocked->setFont(font);
        labelLocked->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelLocked, 6, 1, 1, 2);

        labelLockedText = new QLabel(frame);
        labelLockedText->setObjectName(QStringLiteral("labelLockedText"));

        gridLayout->addWidget(labelLockedText, 6, 0, 1, 1);

        usdtotal = new QLabel(frame);
        usdtotal->setObjectName(QStringLiteral("usdtotal"));

        gridLayout->addWidget(usdtotal, 10, 0, 1, 1);

        btctotal = new QLabel(frame);
        btctotal->setObjectName(QStringLiteral("btctotal"));

        gridLayout->addWidget(btctotal, 13, 0, 1, 1);

        labelEURTotal = new QLabel(frame);
        labelEURTotal->setObjectName(QStringLiteral("labelEURTotal"));
        labelEURTotal->setFont(font1);
        labelEURTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelEURTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelEURTotal, 11, 1, 1, 1);

        eurtotal = new QLabel(frame);
        eurtotal->setObjectName(QStringLiteral("eurtotal"));

        gridLayout->addWidget(eurtotal, 11, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 0, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        labelTotal->setFont(font3);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QStringLiteral("35626236326.63632636 D"));
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(labelTotal, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);
        label_5->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        labelTradeLink = new QLabel(frame);
        labelTradeLink->setObjectName(QStringLiteral("labelTradeLink"));
        labelTradeLink->setCursor(QCursor(Qt::PointingHandCursor));
        labelTradeLink->setOpenExternalLinks(true);

        horizontalLayout_4->addWidget(labelTradeLink);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 1, 0, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));
        labelTotalText->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(labelTotalText, 2, 0, 1, 1);


        verticalLayout_2->addWidget(frame);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_2, 4, 0, 1, 1);

        labelNewsFeed = new QLabel(frame_2);
        labelNewsFeed->setObjectName(QStringLiteral("labelNewsFeed"));
        labelNewsFeed->setStyleSheet(QStringLiteral(""));
        labelNewsFeed->setOpenExternalLinks(true);
        labelNewsFeed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(labelNewsFeed, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font5;
        font5.setPointSize(12);
        label_4->setFont(font5);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_4->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listTransactions->sizePolicy().hasHeightForWidth());
        listTransactions->setSizePolicy(sizePolicy);
        QFont font6;
        font6.setPointSize(8);
        listTransactions->setFont(font6);
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setLineWidth(1);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);
        listTransactions->setSpacing(1);

        gridLayout_4->addWidget(listTransactions, 6, 0, 1, 1);

        line_3 = new QFrame(frame_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_699 = new QLabel(frame_2);
        label_699->setObjectName(QStringLiteral("label_699"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_699->sizePolicy().hasHeightForWidth());
        label_699->setSizePolicy(sizePolicy1);
        label_699->setFont(font4);

        horizontalLayout->addWidget(label_699);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        refreshButton = new QPushButton(frame_2);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        sizePolicy1.setHeightForWidth(refreshButton->sizePolicy().hasHeightForWidth());
        refreshButton->setSizePolicy(sizePolicy1);
        refreshButton->setBaseSize(QSize(0, 0));
        QFont font7;
        font7.setItalic(true);
        refreshButton->setFont(font7);
        refreshButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/refresh"), QSize(), QIcon::Normal, QIcon::Off);
        refreshButton->setIcon(icon);
        refreshButton->setAutoDefault(false);
        refreshButton->setFlat(false);

        horizontalLayout->addWidget(refreshButton);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_4, 2, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 1, 1, 1);


        retranslateUi(OverviewPage);

        refreshButton->setDefault(false);


        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
        labelStakeText->setText(QApplication::translate("OverviewPage", "Available for Stake:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        unconfirmedlabeltxt->setText(QApplication::translate("OverviewPage", "Unconfirmed:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Balance from new stakes or coins that is not mature enough to be spent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        watch2->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
        labelWatchImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBTCTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance estimated in BTC, Rate is not updated often", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelBTCTotal->setText(QApplication::translate("OverviewPage", "0 BTC", Q_NULLPTR));
        watch4->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUSDTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance estimated in USD, Rate is not updated often", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelUSDTotal->setText(QApplication::translate("OverviewPage", "0 USD", Q_NULLPTR));
        watch1->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelLocked->setToolTip(QApplication::translate("OverviewPage", "Balance locked from usage, e.g. masternode collateral", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLocked->setText(QApplication::translate("OverviewPage", "0 D", Q_NULLPTR));
        labelLockedText->setText(QApplication::translate("OverviewPage", "Locked:", Q_NULLPTR));
        usdtotal->setText(QApplication::translate("OverviewPage", "Est. USD Total:", Q_NULLPTR));
        btctotal->setText(QApplication::translate("OverviewPage", "Est. BTC Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelEURTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance estimated in EUR, Rate is based off a static 0.886 to 1 compared to USD", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelEURTotal->setText(QApplication::translate("OverviewPage", "0 EUR", Q_NULLPTR));
        eurtotal->setText(QApplication::translate("OverviewPage", "Est. EUR Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("OverviewPage", "Denarius Wallet", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Denarius network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTradeLink->setText(QApplication::translate("OverviewPage", "<div style=\"color: #fff;\">(<a href=\"https://www.coinexchange.io/market/D/BTC\" style=\"color: #fff;\">Trade D</a>)</div>", Q_NULLPTR));
        labelTotalText->setText(QApplication::translate("OverviewPage", "Wallet Total:", Q_NULLPTR));
        labelNewsFeed->setText(QApplication::translate("OverviewPage", "Pulling News. . .", Q_NULLPTR));
        label_4->setText(QApplication::translate("OverviewPage", "<b>Recent Transactions</b>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Denarius network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_699->setText(QApplication::translate("OverviewPage", "Denarius News:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        refreshButton->setToolTip(QApplication::translate("OverviewPage", "Refresh your USD and BTC estimated totals, forces price data from CMC.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        refreshButton->setText(QApplication::translate("OverviewPage", "          Refresh          ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
