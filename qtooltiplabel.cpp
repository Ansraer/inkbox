#include <QToolTip>

#include "qtooltiplabel.h"

QToolTipLabel::QToolTipLabel(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent) {
    this->setStyleSheet("QToolTip { font-size: 40pt }");
}

QToolTipLabel::~QToolTipLabel() {}

void QToolTipLabel::mousePressEvent(QMouseEvent * event) {
    QToolTip::showText(mapToGlobal(QPoint(0, 0)), "<font face='u001' size=-2>" + objectName() + "</font>");
}

void QToolTipLabel::mouseReleaseEvent(QMouseEvent * event) {

}
