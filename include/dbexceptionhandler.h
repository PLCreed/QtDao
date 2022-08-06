﻿#pragma once

#include <qvariant.h>
#include <qstring.h>
#include <qexception.h>

#include "dberrcode.h"

class DbExceptionHandler : public QObject {
public:
    using QObject::QObject;

    static DbExceptionHandler* exceptionHandler;
    static void setExceptionHandler(DbExceptionHandler* exceptionHandler);

    /// <summary>
    /// 
    /// </summary>
    /// <param name="reason"></param>
    virtual void initDbFail(DbErrCode errcode, const QString& reason);

    /// <summary>
    /// 
    /// </summary>
    /// <param name="failReason"></param>
    virtual void databaseOpenFail(DbErrCode errcode, const QString& failReason);

    /// <summary>
    /// 
    /// </summary>
    /// <param name="lastErr"></param>
    virtual void execFail(DbErrCode errcode, const QString& lastErr);

    /// <summary>
    /// 
    /// </summary>
    /// <param name="info"></param>
    virtual void execWarning(const QString& info);
};

/// <summary>
/// set query statement and value list printer
/// </summary>
typedef void (*QueryLogPrinter)(const QString&, const QVariantList&);
void daoSetQueryLogPrinter(QueryLogPrinter);

QueryLogPrinter getQueryLogPrinter();


class DaoException : public QException {
public:
    DaoException(DbErrCode code, const QString& reason) : reason(reason), code(code) {}

    void raise() const override { throw* this; }
    DaoException* clone() const override { return new DaoException(*this); }

    QString reason;
    DbErrCode code;
};
