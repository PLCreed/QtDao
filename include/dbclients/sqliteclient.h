﻿#pragma once

#include "../global.h"

#include "abstractclient.h"

QTDAO_BEGIN_NAMESPACE

class SqliteClient : public AbstractClient {
public:
    void testConnect() override;

    void createDatabase() override;

    void dropDatabase() override;

    QStringList exportAllTables() override;

    bool checkTableExist(const QString& tbName) override;

    void createTableIfNotExist(const QString &tbName,
                               const QStringList &fieldsType,
                               const QStringList &primaryKeys,
                               const QList<ForeignKey>& foreignKeys,
                               const QString &engine) override;

    void renameTable(const QString& oldName, const QString& newName) override;

    void dropTable(const QString& tbName) override;

    void truncateTable(const QString& tbName) override;

    void enableForeignKey(const QString &tbName, bool enabled) override;

    QList<QPair<QString, QString>> exportAllFields(const QString &tbName) override;

    void addField(const QString &tbName, const QString &field) override;

    void dropField(const QString &tbName, const QString &fieldName) override;

    static bool dropColumnSupported();

    void renameField(const QString &tbName, const QString &oldFieldName, const QString &newFieldName) override;

    static bool renameColumnSupported();

    QHash<IndexType, QStringList> exportAllIndexes(const QString &tbName) override;

    void createIndex(const QString &tbName,
                     const QString &indexName,
                     const QStringList& fields,
                     dao::IndexType type,
                     const QString &indexOption) override;

    void dropIndex(const QString& tbName, const QString& indexName) override;

    QString getIndexFromFields(const QStringList &fields) override;
};

QTDAO_END_NAMESPACE