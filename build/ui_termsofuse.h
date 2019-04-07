/********************************************************************************
** Form generated from reading UI file 'termsofuse.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMSOFUSE_H
#define UI_TERMSOFUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_TermsOfUse
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QPushButton *buttonAgree;
    QPushButton *buttonCancel;

    void setupUi(QDialog *TermsOfUse)
    {
        if (TermsOfUse->objectName().isEmpty())
            TermsOfUse->setObjectName(QStringLiteral("TermsOfUse"));
        TermsOfUse->resize(651, 541);
        textBrowser = new QTextBrowser(TermsOfUse);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 50, 631, 441));
        label = new QLabel(TermsOfUse);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 631, 17));
        buttonAgree = new QPushButton(TermsOfUse);
        buttonAgree->setObjectName(QStringLiteral("buttonAgree"));
        buttonAgree->setGeometry(QRect(550, 500, 98, 27));
        buttonCancel = new QPushButton(TermsOfUse);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setGeometry(QRect(440, 500, 98, 27));

        retranslateUi(TermsOfUse);

        QMetaObject::connectSlotsByName(TermsOfUse);
    } // setupUi

    void retranslateUi(QDialog *TermsOfUse)
    {
        TermsOfUse->setWindowTitle(QApplication::translate("TermsOfUse", "Denarius - Terms of Use", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("TermsOfUse", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">By using this software, you acknowledge and understand that </span><span style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600;\">Denarius</span><span style=\" font-family:'Ubuntu'; font-size:11pt;\"> is not intended for use in any illegal activity, and that no person or entity associated with the creation, development, marketing, or furtherance of </span><span style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600;\">Denarius</span><span style=\" font-family:'Ubuntu'; font-size:11pt"
                        ";\"> shall be held responsible for use by any individual, group, or entity that is against the law in their respective jurisdiction.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600;\">Denarius</span><span style=\" font-family:'Ubuntu'; font-size:11pt;\"> intends to have fully implemented Masternodes, Stealth Addresses and Ring Signatures, which is completely trustless because nobody controls the whole system. The risk of something going wrong is very low. However, the software is still in development. Which, this means that things can break and there are no guarantees about it. Use it at your own risk, follow the instructions exactly, and only use money that yo"
                        "u can afford to lose should something go wrong.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">Visit </span><a href=\"https://denarius.io\"><span style=\" font-size:11pt; font-weight:600; text-decoration: underline; color:#ffff7f;\">https://denarius.io</span></a><span style=\" font-family:'Ubuntu'; font-size:11pt;\"> for more info or join our forums at </span><a href=\"https://denariustalk.org\"><span style=\" font-size:11pt; font-weight:600; text-decoration: underline; color:#ffff7f;\">https://denariustalk.org</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; fo"
                        "nt-size:11pt; font-weight:600; text-decoration: underline; color:#ffff7f;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubun"
                        "tu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /><"
                        "/p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600; font-style:italic;\">Credits:</span><span style=\" font-family:'Ubuntu'; font-size:11pt; font-style:italic;\"> kingcarsen, enkayz, thi3rryzz, I Can Haz Crypto, Buzzkillb, tinchopf, kawaiicrypto, skiMo, and everyone else who has h"
                        "elped to build/test/grow Denarius! </span><span style=\" font-family:'Ubuntu'; font-size:11pt; font-style:italic; text-decoration: underline;\">Our community is fantastic and you all deserve to be mentioned here forever.</span><span style=\" font-family:'Ubuntu'; font-size:11pt; font-style:italic;\"> THANK YOU! FOR THE POWER OF THE PEOPLE! ANCIENT MONEY FOR A NEW WORLD!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:11pt;\"><br /></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("TermsOfUse", "Do you agree to the following terms of use?", Q_NULLPTR));
        buttonAgree->setText(QApplication::translate("TermsOfUse", "I Agree", Q_NULLPTR));
        buttonCancel->setText(QApplication::translate("TermsOfUse", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TermsOfUse: public Ui_TermsOfUse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMSOFUSE_H
