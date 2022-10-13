﻿#pragma once

#include "../global.h"

#include "abstractclient.h"

QTDAO_BEGIN_NAMESPACE

class SqlServerClient : public AbstractClient {
public:
    void testConnect() override;
    void createDatabase() override;
    void dropDatabase() override;

    bool checkTableExist(const QString& tbName) override;
    void createTableIfNotExist(
        const QString& tbName,
        QStringList fieldsType,
        QStringList primaryKeys
    ) override;

    void createIndex(
        const QString& tbName,
        QStringList fields,
        IndexType type,
        const std::function<QString(const QString&)>& optionGet
    ) override;

    void renameTable(const QString& oldName, const QString& newName) override;

    void dropTable(const QString& tbName) override;

    void truncateTable(const QString& tbName) override;

    QStringList getTagTableFields(const QString& tbName) override;

    void restoreDataBefore(const QString& tbName) override;

    void restoreDataAfter(const QString& tbName) override;

    void dropAllIndexOnTable(const QString& tbName) override;
};

QTDAO_END_NAMESPACE