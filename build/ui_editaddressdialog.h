/********************************************************************************
** Form generated from reading UI file 'editaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITADDRESSDIALOG_H
#define UI_EDITADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditAddressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *labelEdit;
    QLabel *label_2;
    QLineEdit *addressEdit;
    QCheckBox *stealthCB;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditAddressDialog)
    {
        if (EditAddressDialog->objectName().isEmpty())
            EditAddressDialog->setObjectName(QStringLiteral("EditAddressDialog"));
        EditAddressDialog->resize(457, 129);
        verticalLayout = new QVBoxLayout(EditAddressDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(EditAddressDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        labelEdit = new QLineEdit(EditAddressDialog);
        labelEdit->setObjectName(QStringLiteral("labelEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelEdit);

        label_2 = new QLabel(EditAddressDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        addressEdit = new QLineEdit(EditAddressDialog);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, addressEdit);

        stealthCB = new QCheckBox(EditAddressDialog);
        stealthCB->setObjectName(QStringLiteral("stealthCB"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, stealthCB);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(EditAddressDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(labelEdit);
        label_2->setBuddy(addressEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditAddressDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAddressDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAddressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAddressDialog)
    {
        EditAddressDialog->setWindowTitle(QApplication::translate("EditAddressDialog", "Edit Address", Q_NULLPTR));
        label->setText(QApplication::translate("EditAddressDialog", "&Label", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelEdit->setToolTip(QApplication::translate("EditAddressDialog", "The label associated with this address book entry", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("EditAddressDialog", "&Address", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addressEdit->setToolTip(QApplication::translate("EditAddressDialog", "The address associated with this address book entry. This can only be modified for sending addresses.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stealthCB->setText(QApplication::translate("EditAddressDialog", "Check this box if you want a new D &Stealth Address, starts with an 's'.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditAddressDialog: public Ui_EditAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITADDRESSDIALOG_H
