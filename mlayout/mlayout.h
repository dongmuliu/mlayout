#pragma once

#include <QtWidgets/QWidget>
#include "ui_mlayout.h"

class mlayout : public QWidget
{
	Q_OBJECT

public:
	mlayout(QWidget *parent = Q_NULLPTR);

private:
	Ui::mlayoutClass ui;
private slots:
void on_submitButton_clicked();
};
