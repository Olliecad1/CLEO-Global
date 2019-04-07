/********************************************************************************
** Form generated from reading UI file 'blockbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKBROWSER_H
#define UI_BLOCKBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockBrowser
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QLineEdit *txBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *timeLabel;
    QLabel *hashBox;
    QLabel *nonceBox;
    QLabel *nonceLabel;
    QLabel *bitsBox;
    QLabel *outputLabel;
    QLabel *merkleBox;
    QLabel *heightLabel;
    QLabel *bitsLabel;
    QLabel *feesLabel;
    QLabel *pawLabel;
    QLabel *hashLabel;
    QLabel *feesBox;
    QLabel *merkleLabel;
    QLabel *timeBox;
    QPushButton *blockButton;
    QLabel *heightLabel_2;
    QSpinBox *heightBox;
    QLabel *txLabel;
    QLabel *txID;
    QLabel *valueBox;
    QLabel *hardLabel;
    QPushButton *txButton;
    QLabel *valueLabel;
    QSpacerItem *verticalSpacer;
    QLabel *inputBox;
    QLabel *pawBox;
    QLabel *hardBox;
    QLabel *inputLabel;
    QLabel *outputBox;

    void setupUi(QWidget *BlockBrowser)
    {
        if (BlockBrowser->objectName().isEmpty())
            BlockBrowser->setObjectName(QStringLiteral("BlockBrowser"));
        BlockBrowser->setWindowModality(Qt::NonModal);
        BlockBrowser->setEnabled(true);
        BlockBrowser->resize(455, 421);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BlockBrowser->sizePolicy().hasHeightForWidth());
        BlockBrowser->setSizePolicy(sizePolicy);
        BlockBrowser->setMinimumSize(QSize(0, 0));
        BlockBrowser->setAcceptDrops(false);
        gridLayout = new QGridLayout(BlockBrowser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(21, 21, 10, -1);
        widget = new QWidget(BlockBrowser);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout1 = new QGridLayout(widget);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans,sans-serif"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout1->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_3->setHorizontalSpacing(7);
        txBox = new QLineEdit(widget);
        txBox->setObjectName(QStringLiteral("txBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txBox->sizePolicy().hasHeightForWidth());
        txBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(txBox, 12, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 11, 0, 1, 1);

        timeLabel = new QLabel(widget);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        gridLayout_3->addWidget(timeLabel, 8, 0, 1, 1);

        hashBox = new QLabel(widget);
        hashBox->setObjectName(QStringLiteral("hashBox"));
        hashBox->setEnabled(true);
        sizePolicy.setHeightForWidth(hashBox->sizePolicy().hasHeightForWidth());
        hashBox->setSizePolicy(sizePolicy);
        hashBox->setMinimumSize(QSize(0, 0));
        hashBox->setCursor(QCursor(Qt::IBeamCursor));
        hashBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(hashBox, 4, 1, 1, 1);

        nonceBox = new QLabel(widget);
        nonceBox->setObjectName(QStringLiteral("nonceBox"));
        nonceBox->setCursor(QCursor(Qt::IBeamCursor));
        nonceBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(nonceBox, 6, 1, 1, 1);

        nonceLabel = new QLabel(widget);
        nonceLabel->setObjectName(QStringLiteral("nonceLabel"));

        gridLayout_3->addWidget(nonceLabel, 6, 0, 1, 1);

        bitsBox = new QLabel(widget);
        bitsBox->setObjectName(QStringLiteral("bitsBox"));
        bitsBox->setCursor(QCursor(Qt::IBeamCursor));
        bitsBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(bitsBox, 7, 1, 1, 1);

        outputLabel = new QLabel(widget);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));
        outputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(outputLabel, 16, 0, 1, 1);

        merkleBox = new QLabel(widget);
        merkleBox->setObjectName(QStringLiteral("merkleBox"));
        merkleBox->setMinimumSize(QSize(187, 0));
        merkleBox->setCursor(QCursor(Qt::IBeamCursor));
        merkleBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(merkleBox, 5, 1, 1, 1);

        heightLabel = new QLabel(widget);
        heightLabel->setObjectName(QStringLiteral("heightLabel"));
        heightLabel->setCursor(QCursor(Qt::IBeamCursor));
        heightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(heightLabel, 3, 1, 1, 1);

        bitsLabel = new QLabel(widget);
        bitsLabel->setObjectName(QStringLiteral("bitsLabel"));

        gridLayout_3->addWidget(bitsLabel, 7, 0, 1, 1);

        feesLabel = new QLabel(widget);
        feesLabel->setObjectName(QStringLiteral("feesLabel"));

        gridLayout_3->addWidget(feesLabel, 15, 0, 1, 1);

        pawLabel = new QLabel(widget);
        pawLabel->setObjectName(QStringLiteral("pawLabel"));

        gridLayout_3->addWidget(pawLabel, 10, 0, 1, 1);

        hashLabel = new QLabel(widget);
        hashLabel->setObjectName(QStringLiteral("hashLabel"));

        gridLayout_3->addWidget(hashLabel, 4, 0, 1, 1);

        feesBox = new QLabel(widget);
        feesBox->setObjectName(QStringLiteral("feesBox"));
        feesBox->setCursor(QCursor(Qt::IBeamCursor));
        feesBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(feesBox, 15, 1, 1, 1);

        merkleLabel = new QLabel(widget);
        merkleLabel->setObjectName(QStringLiteral("merkleLabel"));

        gridLayout_3->addWidget(merkleLabel, 5, 0, 1, 1);

        timeBox = new QLabel(widget);
        timeBox->setObjectName(QStringLiteral("timeBox"));
        timeBox->setCursor(QCursor(Qt::IBeamCursor));
        timeBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(timeBox, 8, 1, 1, 1);

        blockButton = new QPushButton(widget);
        blockButton->setObjectName(QStringLiteral("blockButton"));

        gridLayout_3->addWidget(blockButton, 1, 1, 1, 1);

        heightLabel_2 = new QLabel(widget);
        heightLabel_2->setObjectName(QStringLiteral("heightLabel_2"));

        gridLayout_3->addWidget(heightLabel_2, 3, 0, 1, 1);

        heightBox = new QSpinBox(widget);
        heightBox->setObjectName(QStringLiteral("heightBox"));
        sizePolicy1.setHeightForWidth(heightBox->sizePolicy().hasHeightForWidth());
        heightBox->setSizePolicy(sizePolicy1);
        heightBox->setMaximum(99999999);

        gridLayout_3->addWidget(heightBox, 1, 0, 1, 1);

        txLabel = new QLabel(widget);
        txLabel->setObjectName(QStringLiteral("txLabel"));

        gridLayout_3->addWidget(txLabel, 13, 0, 1, 1);

        txID = new QLabel(widget);
        txID->setObjectName(QStringLiteral("txID"));
        txID->setCursor(QCursor(Qt::IBeamCursor));
        txID->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(txID, 13, 1, 1, 1);

        valueBox = new QLabel(widget);
        valueBox->setObjectName(QStringLiteral("valueBox"));
        valueBox->setCursor(QCursor(Qt::IBeamCursor));
        valueBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(valueBox, 14, 1, 1, 1);

        hardLabel = new QLabel(widget);
        hardLabel->setObjectName(QStringLiteral("hardLabel"));

        gridLayout_3->addWidget(hardLabel, 9, 0, 1, 1);

        txButton = new QPushButton(widget);
        txButton->setObjectName(QStringLiteral("txButton"));

        gridLayout_3->addWidget(txButton, 12, 1, 1, 1);

        valueLabel = new QLabel(widget);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));

        gridLayout_3->addWidget(valueLabel, 14, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 18, 0, 1, 1);

        inputBox = new QLabel(widget);
        inputBox->setObjectName(QStringLiteral("inputBox"));
        inputBox->setCursor(QCursor(Qt::IBeamCursor));
        inputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        inputBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(inputBox, 17, 1, 1, 1);

        pawBox = new QLabel(widget);
        pawBox->setObjectName(QStringLiteral("pawBox"));
        pawBox->setCursor(QCursor(Qt::IBeamCursor));
        pawBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(pawBox, 10, 1, 1, 1);

        hardBox = new QLabel(widget);
        hardBox->setObjectName(QStringLiteral("hardBox"));
        hardBox->setCursor(QCursor(Qt::IBeamCursor));
        hardBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(hardBox, 9, 1, 1, 1);

        inputLabel = new QLabel(widget);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        inputLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(inputLabel, 17, 0, 1, 1);

        outputBox = new QLabel(widget);
        outputBox->setObjectName(QStringLiteral("outputBox"));
        outputBox->setCursor(QCursor(Qt::IBeamCursor));
        outputBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        outputBox->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(outputBox, 16, 1, 1, 1);


        gridLayout1->addLayout(gridLayout_3, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(BlockBrowser);

        QMetaObject::connectSlotsByName(BlockBrowser);
    } // setupUi

    void retranslateUi(QWidget *BlockBrowser)
    {
        BlockBrowser->setWindowTitle(QApplication::translate("BlockBrowser", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("BlockBrowser", "<html><head/><body><p><span style=\" font-size:20px; font-weight:600; color:#FFFFFF;\">Block Explorer </span></p></body></html>", Q_NULLPTR));
        txBox->setInputMask(QString());
        txBox->setPlaceholderText(QString());
        timeLabel->setText(QApplication::translate("BlockBrowser", "Block Timestamp:", Q_NULLPTR));
        hashBox->setText(QApplication::translate("BlockBrowser", "0x0", Q_NULLPTR));
        nonceBox->setText(QApplication::translate("BlockBrowser", "0", Q_NULLPTR));
        nonceLabel->setText(QApplication::translate("BlockBrowser", "Block nNonce:", Q_NULLPTR));
        bitsBox->setText(QApplication::translate("BlockBrowser", "0", Q_NULLPTR));
        outputLabel->setText(QApplication::translate("BlockBrowser", "Outputs:", Q_NULLPTR));
        merkleBox->setText(QApplication::translate("BlockBrowser", "0x0", Q_NULLPTR));
        heightLabel->setText(QApplication::translate("BlockBrowser", "0", Q_NULLPTR));
        bitsLabel->setText(QApplication::translate("BlockBrowser", "Block nBits:", Q_NULLPTR));
        feesLabel->setText(QApplication::translate("BlockBrowser", "Fees:", Q_NULLPTR));
        pawLabel->setText(QApplication::translate("BlockBrowser", "Block Hashrate:", Q_NULLPTR));
        hashLabel->setText(QApplication::translate("BlockBrowser", "Block Hash:", Q_NULLPTR));
        feesBox->setText(QString());
        merkleLabel->setText(QApplication::translate("BlockBrowser", "Block Merkle:", Q_NULLPTR));
        timeBox->setText(QApplication::translate("BlockBrowser", "0", Q_NULLPTR));
        blockButton->setText(QApplication::translate("BlockBrowser", "Jump to Block", Q_NULLPTR));
        heightLabel_2->setText(QApplication::translate("BlockBrowser", "Block Height:", Q_NULLPTR));
        txLabel->setText(QApplication::translate("BlockBrowser", "Transaction ID:", Q_NULLPTR));
        txID->setText(QApplication::translate("BlockBrowser", "000", Q_NULLPTR));
        valueBox->setText(QString());
        hardLabel->setText(QApplication::translate("BlockBrowser", "Block Difficulty:", Q_NULLPTR));
        txButton->setText(QApplication::translate("BlockBrowser", "Decode Transaction", Q_NULLPTR));
        valueLabel->setText(QApplication::translate("BlockBrowser", "Value out:", Q_NULLPTR));
        inputBox->setText(QString());
        pawBox->setText(QApplication::translate("BlockBrowser", "0000 KH/s", Q_NULLPTR));
        hardBox->setText(QApplication::translate("BlockBrowser", "0.00", Q_NULLPTR));
        inputLabel->setText(QApplication::translate("BlockBrowser", "Inputs:", Q_NULLPTR));
        outputBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BlockBrowser: public Ui_BlockBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKBROWSER_H
