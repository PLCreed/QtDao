﻿#include "condition/entitycondition.h"

QTDAO_BEGIN_NAMESPACE

void OperatorEntityConnector::combine() {
    //same as a>=1
    connectedStr = getField(0) + connectorOp + "?";
}

void SelfOperatorEntityConnector::combine() {
    //same as a=a+1
    connectedStr = getField(0) + "=" + getField(0) + connectorOp + "?";
}

void FieldOperatorEntityConnector::combine() {
    //same as a>=b
    connectedStr = getField(0) + connectorOp + getField(1);
}

void SelfFieldOperatorEntityConnector::combine() {
    //same as a=a+b
    connectedStr = getField(0) + "=" + getField(0) + connectorOp + getField(1);
}

void InEntityConnector::combine() {
    QString str = "%1 in (%2)";
    connectedStr = str.arg(getField(0), QString("?,").repeated(values.size()).chopped(1));
}

void BetweenConnector::combine() {
    connectedStr = getField(0) + " between ? and ?";
}

void IsNullConnector::combine() {
    connectedStr = getField(0) + " is " + (checkIsNull ? "null" : "not null");
}

QTDAO_END_NAMESPACE