/********************************************************************************
** Form generated from reading UI file 'mlayout.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MLAYOUT_H
#define UI_MLAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mlayoutClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *cmdLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QPushButton *browserButton;

    void setupUi(QWidget *mlayoutClass)
    {
        if (mlayoutClass->objectName().isEmpty())
            mlayoutClass->setObjectName(QStringLiteral("mlayoutClass"));
        mlayoutClass->resize(496, 287);
        verticalLayout_2 = new QVBoxLayout(mlayoutClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(mlayoutClass);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(mlayoutClass);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        cmdLineEdit = new QLineEdit(mlayoutClass);
        cmdLineEdit->setObjectName(QStringLiteral("cmdLineEdit"));

        horizontalLayout_2->addWidget(cmdLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        submitButton = new QPushButton(mlayoutClass);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        horizontalLayout->addWidget(submitButton);

        cancelButton = new QPushButton(mlayoutClass);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        browserButton = new QPushButton(mlayoutClass);
        browserButton->setObjectName(QStringLiteral("browserButton"));

        horizontalLayout->addWidget(browserButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(mlayoutClass);
        QObject::connect(submitButton, SIGNAL(clicked()), mlayoutClass, SLOT(on_submitButton_clicked()));

        QMetaObject::connectSlotsByName(mlayoutClass);
    } // setupUi

    void retranslateUi(QWidget *mlayoutClass)
    {
        mlayoutClass->setWindowTitle(QApplication::translate("mlayoutClass", "mlayout", 0));
        label_2->setText(QApplication::translate("mlayoutClass", "<html><head/><body><p align=\"justify\"><span style=\" font-size:14pt; font-style:italic; color:#ff5500;\">\350\257\267\345\234\250\344\270\213\351\235\242\347\232\204\345\221\275\344\273\244\350\241\214\344\270\255\350\276\223\345\205\245\345\221\275\344\273\244:</span></p></body></html>", 0));
        label->setText(QApplication::translate("mlayoutClass", "\346\211\223\345\274\200\357\274\232", 0));
        submitButton->setText(QApplication::translate("mlayoutClass", "\347\241\256\345\256\232", 0));
        cancelButton->setText(QApplication::translate("mlayoutClass", "\345\217\226\346\266\210", 0));
        browserButton->setText(QApplication::translate("mlayoutClass", "\346\265\217\350\247\210", 0));
    } // retranslateUi

};

namespace Ui {
    class mlayoutClass: public Ui_mlayoutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MLAYOUT_H
