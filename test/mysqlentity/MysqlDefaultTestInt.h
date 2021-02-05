﻿/*This file is auto generated by DbEntityGenerator*/
#pragma once

#include <qobject.h>
#include <qvariant.h>
#include <qdatetime.h>
#include <qjsonobject.h>

#include "condition/EntityField.h"

class MysqlDefaultTestInt {
private:
    //
    char typetinyint;
    //
    char typetinyintnull;
    //
    short typesmallint;
    //
    short typesmallintnull;
    //
    int typemediumint;
    //
    int typemediumintnull;
    //
    int typeint;
    //
    int typeintnull;
    //
    qint64 typebigint;
    //
    qint64 typebigintnull;
    //
    qreal typefloat;
    //
    qreal typefloatnull;
    //
    qreal typedouble;
    //
    qreal typedoublenull;
    //
    qreal typedecimal;
    //
    qreal typedecimalnull;

    QHash<QString, QVariant> __extra;

public:

    MysqlDefaultTestInt() {
        typetinyint = 1;
        typetinyintnull = char();
        typesmallint = 2;
        typesmallintnull = short();
        typemediumint = 3;
        typemediumintnull = int();
        typeint = 4;
        typeintnull = int();
        typebigint = 5;
        typebigintnull = qint64();
        typefloat = 0.1;
        typefloatnull = qreal();
        typedouble = 0.2;
        typedoublenull = qreal();
        typedecimal = 0.3;
        typedecimalnull = qreal();
    }

    MysqlDefaultTestInt(
        const char& typetinyint,
        const char& typetinyintnull,
        const short& typesmallint,
        const short& typesmallintnull,
        const int& typemediumint,
        const int& typemediumintnull,
        const int& typeint,
        const int& typeintnull,
        const qint64& typebigint,
        const qint64& typebigintnull,
        const qreal& typefloat,
        const qreal& typefloatnull,
        const qreal& typedouble,
        const qreal& typedoublenull,
        const qreal& typedecimal,
        const qreal& typedecimalnull
    ) : typetinyint(typetinyint)
    , typetinyintnull(typetinyintnull)
    , typesmallint(typesmallint)
    , typesmallintnull(typesmallintnull)
    , typemediumint(typemediumint)
    , typemediumintnull(typemediumintnull)
    , typeint(typeint)
    , typeintnull(typeintnull)
    , typebigint(typebigint)
    , typebigintnull(typebigintnull)
    , typefloat(typefloat)
    , typefloatnull(typefloatnull)
    , typedouble(typedouble)
    , typedoublenull(typedoublenull)
    , typedecimal(typedecimal)
    , typedecimalnull(typedecimalnull)
    {
    }

public:
    class Fields {
    public:
        EntityField<char> typetinyint = EntityField<char>("typetinyint", "ts_mysqldefaulttestint");
        EntityField<char> typetinyintnull = EntityField<char>("typetinyintnull", "ts_mysqldefaulttestint");
        EntityField<short> typesmallint = EntityField<short>("typesmallint", "ts_mysqldefaulttestint");
        EntityField<short> typesmallintnull = EntityField<short>("typesmallintnull", "ts_mysqldefaulttestint");
        EntityField<int> typemediumint = EntityField<int>("typemediumint", "ts_mysqldefaulttestint");
        EntityField<int> typemediumintnull = EntityField<int>("typemediumintnull", "ts_mysqldefaulttestint");
        EntityField<int> typeint = EntityField<int>("typeint", "ts_mysqldefaulttestint");
        EntityField<int> typeintnull = EntityField<int>("typeintnull", "ts_mysqldefaulttestint");
        EntityField<qint64> typebigint = EntityField<qint64>("typebigint", "ts_mysqldefaulttestint");
        EntityField<qint64> typebigintnull = EntityField<qint64>("typebigintnull", "ts_mysqldefaulttestint");
        EntityField<qreal> typefloat = EntityField<qreal>("typefloat", "ts_mysqldefaulttestint");
        EntityField<qreal> typefloatnull = EntityField<qreal>("typefloatnull", "ts_mysqldefaulttestint");
        EntityField<qreal> typedouble = EntityField<qreal>("typedouble", "ts_mysqldefaulttestint");
        EntityField<qreal> typedoublenull = EntityField<qreal>("typedoublenull", "ts_mysqldefaulttestint");
        EntityField<qreal> typedecimal = EntityField<qreal>("typedecimal", "ts_mysqldefaulttestint");
        EntityField<qreal> typedecimalnull = EntityField<qreal>("typedecimalnull", "ts_mysqldefaulttestint");

    protected:
        void reset(const QString& tbName) {
            typetinyint = EntityField<char>("typetinyint", tbName);
            typetinyintnull = EntityField<char>("typetinyintnull", tbName);
            typesmallint = EntityField<short>("typesmallint", tbName);
            typesmallintnull = EntityField<short>("typesmallintnull", tbName);
            typemediumint = EntityField<int>("typemediumint", tbName);
            typemediumintnull = EntityField<int>("typemediumintnull", tbName);
            typeint = EntityField<int>("typeint", tbName);
            typeintnull = EntityField<int>("typeintnull", tbName);
            typebigint = EntityField<qint64>("typebigint", tbName);
            typebigintnull = EntityField<qint64>("typebigintnull", tbName);
            typefloat = EntityField<qreal>("typefloat", tbName);
            typefloatnull = EntityField<qreal>("typefloatnull", tbName);
            typedouble = EntityField<qreal>("typedouble", tbName);
            typedoublenull = EntityField<qreal>("typedoublenull", tbName);
            typedecimal = EntityField<qreal>("typedecimal", tbName);
            typedecimalnull = EntityField<qreal>("typedecimalnull", tbName);
        }
    };

    struct Info {
        enum {
            Attach = 1
        };

        static int fieldSize() {
            return 16;
        }

        static QString getTableName() {
            return QStringLiteral("ts_mysqldefaulttestint");
        }

        static QString getSourceName() {
            return getTableName();
        }

        static QString getTableEngine() {
            return QString();
        }

        static QStringList getFields() {
            return QStringList()
                << "typetinyint"
                << "typetinyintnull"
                << "typesmallint"
                << "typesmallintnull"
                << "typemediumint"
                << "typemediumintnull"
                << "typeint"
                << "typeintnull"
                << "typebigint"
                << "typebigintnull"
                << "typefloat"
                << "typefloatnull"
                << "typedouble"
                << "typedoublenull"
                << "typedecimal"
                << "typedecimalnull";
        }

        static QStringList getFieldsWithoutAutoIncrement() {
            return QStringList()
                << "typetinyint"
                << "typetinyintnull"
                << "typesmallint"
                << "typesmallintnull"
                << "typemediumint"
                << "typemediumintnull"
                << "typeint"
                << "typeintnull"
                << "typebigint"
                << "typebigintnull"
                << "typefloat"
                << "typefloatnull"
                << "typedouble"
                << "typedoublenull"
                << "typedecimal"
                << "typedecimalnull";
        }

        static QStringList getFieldsType() {
            return QStringList() 
                << QStringLiteral("typetinyint tinyint null default 1 comment ''")
                << QStringLiteral("typetinyintnull tinyint null default null comment ''")
                << QStringLiteral("typesmallint smallint null default 2 comment ''")
                << QStringLiteral("typesmallintnull smallint null default null comment ''")
                << QStringLiteral("typemediumint mediumint null default 3 comment ''")
                << QStringLiteral("typemediumintnull mediumint null default null comment ''")
                << QStringLiteral("typeint int null default 4 comment ''")
                << QStringLiteral("typeintnull int null default null comment ''")
                << QStringLiteral("typebigint bigint null default 5 comment ''")
                << QStringLiteral("typebigintnull bigint null default null comment ''")
                << QStringLiteral("typefloat float null default 0.1 comment ''")
                << QStringLiteral("typefloatnull float null default null comment ''")
                << QStringLiteral("typedouble double null default 0.2 comment ''")
                << QStringLiteral("typedoublenull double null default null comment ''")
                << QStringLiteral("typedecimal decimal(8,4) null default 0.3 comment ''")
                << QStringLiteral("typedecimalnull decimal(9,5) null default null comment ''");
        }

        static QStringList getPrimaryKeys() {
            return QStringList();
        }

        static QList<QStringList> getIndexFields() {
            return QList<QStringList>();
        }

        static QList<QStringList> getUniqueIndexFields() {
            return QList<QStringList>();
        }

        static bool isAutoIncrement(const QString& name) {
            Q_UNUSED(name);
            return false;
        }
    };

    struct Tool {
        static QVariantList getValueWithoutAutoIncrement(const MysqlDefaultTestInt& entity) {
            return QVariantList()
                << entity.typetinyint
                << entity.typetinyintnull
                << entity.typesmallint
                << entity.typesmallintnull
                << entity.typemediumint
                << entity.typemediumintnull
                << entity.typeint
                << entity.typeintnull
                << entity.typebigint
                << entity.typebigintnull
                << entity.typefloat
                << entity.typefloatnull
                << entity.typedouble
                << entity.typedoublenull
                << entity.typedecimal
                << entity.typedecimalnull;
        }

        static QVariant getValueByName(const MysqlDefaultTestInt& entity, const QString& target) {
            if (target == "typetinyint") {
                return entity.typetinyint;
            }
            if (target == "typetinyintnull") {
                return entity.typetinyintnull;
            }
            if (target == "typesmallint") {
                return entity.typesmallint;
            }
            if (target == "typesmallintnull") {
                return entity.typesmallintnull;
            }
            if (target == "typemediumint") {
                return entity.typemediumint;
            }
            if (target == "typemediumintnull") {
                return entity.typemediumintnull;
            }
            if (target == "typeint") {
                return entity.typeint;
            }
            if (target == "typeintnull") {
                return entity.typeintnull;
            }
            if (target == "typebigint") {
                return entity.typebigint;
            }
            if (target == "typebigintnull") {
                return entity.typebigintnull;
            }
            if (target == "typefloat") {
                return entity.typefloat;
            }
            if (target == "typefloatnull") {
                return entity.typefloatnull;
            }
            if (target == "typedouble") {
                return entity.typedouble;
            }
            if (target == "typedoublenull") {
                return entity.typedoublenull;
            }
            if (target == "typedecimal") {
                return entity.typedecimal;
            }
            if (target == "typedecimalnull") {
                return entity.typedecimalnull;
            }
            return entity.__extra.value(target);
        }

        static void bindAutoIncrementId(MysqlDefaultTestInt& entity, const QVariant& id) {
            Q_UNUSED(entity);
            Q_UNUSED(id);
        }

        static void bindValue(MysqlDefaultTestInt& entity, const QString& target, QVariant value) {
            if (target == "typetinyint") {
                entity.typetinyint = value.value<char>();
            } else if (target == "typetinyintnull") {
                entity.typetinyintnull = value.value<char>();
            } else if (target == "typesmallint") {
                entity.typesmallint = value.value<short>();
            } else if (target == "typesmallintnull") {
                entity.typesmallintnull = value.value<short>();
            } else if (target == "typemediumint") {
                entity.typemediumint = value.value<int>();
            } else if (target == "typemediumintnull") {
                entity.typemediumintnull = value.value<int>();
            } else if (target == "typeint") {
                entity.typeint = value.value<int>();
            } else if (target == "typeintnull") {
                entity.typeintnull = value.value<int>();
            } else if (target == "typebigint") {
                entity.typebigint = value.value<qint64>();
            } else if (target == "typebigintnull") {
                entity.typebigintnull = value.value<qint64>();
            } else if (target == "typefloat") {
                entity.typefloat = value.value<qreal>();
            } else if (target == "typefloatnull") {
                entity.typefloatnull = value.value<qreal>();
            } else if (target == "typedouble") {
                entity.typedouble = value.value<qreal>();
            } else if (target == "typedoublenull") {
                entity.typedoublenull = value.value<qreal>();
            } else if (target == "typedecimal") {
                entity.typedecimal = value.value<qreal>();
            } else if (target == "typedecimalnull") {
                entity.typedecimalnull = value.value<qreal>();
            } else {
                entity.__putExtra(target, value);
            }
        }

        static MysqlDefaultTestInt fromJson(const QJsonObject& object) {
            MysqlDefaultTestInt entity;
            entity.typetinyint = object.value("typetinyint").toVariant().value<char>();
            entity.typetinyintnull = object.value("typetinyintnull").toVariant().value<char>();
            entity.typesmallint = object.value("typesmallint").toVariant().value<short>();
            entity.typesmallintnull = object.value("typesmallintnull").toVariant().value<short>();
            entity.typemediumint = object.value("typemediumint").toVariant().value<int>();
            entity.typemediumintnull = object.value("typemediumintnull").toVariant().value<int>();
            entity.typeint = object.value("typeint").toVariant().value<int>();
            entity.typeintnull = object.value("typeintnull").toVariant().value<int>();
            entity.typebigint = object.value("typebigint").toVariant().value<qint64>();
            entity.typebigintnull = object.value("typebigintnull").toVariant().value<qint64>();
            entity.typefloat = object.value("typefloat").toVariant().value<qreal>();
            entity.typefloatnull = object.value("typefloatnull").toVariant().value<qreal>();
            entity.typedouble = object.value("typedouble").toVariant().value<qreal>();
            entity.typedoublenull = object.value("typedoublenull").toVariant().value<qreal>();
            entity.typedecimal = object.value("typedecimal").toVariant().value<qreal>();
            entity.typedecimalnull = object.value("typedecimalnull").toVariant().value<qreal>();
            return entity;
        }

        static QJsonObject toJson(const MysqlDefaultTestInt& entity, QStringList excludeKeys = QStringList()) {
            QJsonObject object;
            object.insert("typetinyint", entity.typetinyint);
            object.insert("typetinyintnull", entity.typetinyintnull);
            object.insert("typesmallint", entity.typesmallint);
            object.insert("typesmallintnull", entity.typesmallintnull);
            object.insert("typemediumint", entity.typemediumint);
            object.insert("typemediumintnull", entity.typemediumintnull);
            object.insert("typeint", entity.typeint);
            object.insert("typeintnull", entity.typeintnull);
            object.insert("typebigint", entity.typebigint);
            object.insert("typebigintnull", entity.typebigintnull);
            object.insert("typefloat", entity.typefloat);
            object.insert("typefloatnull", entity.typefloatnull);
            object.insert("typedouble", entity.typedouble);
            object.insert("typedoublenull", entity.typedoublenull);
            object.insert("typedecimal", entity.typedecimal);
            object.insert("typedecimalnull", entity.typedecimalnull);

            for (const auto& key : excludeKeys) {
                object.remove(key);
            }
            return object;
        }
    };

public:
    //
    inline void setTypetinyint(const char& typetinyint) {this->typetinyint = typetinyint;}
    //
    inline char getTypetinyint() const {return typetinyint;}
    //
    inline void setTypetinyintnull(const char& typetinyintnull) {this->typetinyintnull = typetinyintnull;}
    //
    inline char getTypetinyintnull() const {return typetinyintnull;}
    //
    inline void setTypesmallint(const short& typesmallint) {this->typesmallint = typesmallint;}
    //
    inline short getTypesmallint() const {return typesmallint;}
    //
    inline void setTypesmallintnull(const short& typesmallintnull) {this->typesmallintnull = typesmallintnull;}
    //
    inline short getTypesmallintnull() const {return typesmallintnull;}
    //
    inline void setTypemediumint(const int& typemediumint) {this->typemediumint = typemediumint;}
    //
    inline int getTypemediumint() const {return typemediumint;}
    //
    inline void setTypemediumintnull(const int& typemediumintnull) {this->typemediumintnull = typemediumintnull;}
    //
    inline int getTypemediumintnull() const {return typemediumintnull;}
    //
    inline void setTypeint(const int& typeint) {this->typeint = typeint;}
    //
    inline int getTypeint() const {return typeint;}
    //
    inline void setTypeintnull(const int& typeintnull) {this->typeintnull = typeintnull;}
    //
    inline int getTypeintnull() const {return typeintnull;}
    //
    inline void setTypebigint(const qint64& typebigint) {this->typebigint = typebigint;}
    //
    inline qint64 getTypebigint() const {return typebigint;}
    //
    inline void setTypebigintnull(const qint64& typebigintnull) {this->typebigintnull = typebigintnull;}
    //
    inline qint64 getTypebigintnull() const {return typebigintnull;}
    //
    inline void setTypefloat(const qreal& typefloat) {this->typefloat = typefloat;}
    //
    inline qreal getTypefloat() const {return typefloat;}
    //
    inline void setTypefloatnull(const qreal& typefloatnull) {this->typefloatnull = typefloatnull;}
    //
    inline qreal getTypefloatnull() const {return typefloatnull;}
    //
    inline void setTypedouble(const qreal& typedouble) {this->typedouble = typedouble;}
    //
    inline qreal getTypedouble() const {return typedouble;}
    //
    inline void setTypedoublenull(const qreal& typedoublenull) {this->typedoublenull = typedoublenull;}
    //
    inline qreal getTypedoublenull() const {return typedoublenull;}
    //
    inline void setTypedecimal(const qreal& typedecimal) {this->typedecimal = typedecimal;}
    //
    inline qreal getTypedecimal() const {return typedecimal;}
    //
    inline void setTypedecimalnull(const qreal& typedecimalnull) {this->typedecimalnull = typedecimalnull;}
    //
    inline qreal getTypedecimalnull() const {return typedecimalnull;}
    //set temp data
    inline void __putExtra(const QString& key, const QVariant& extra) {this->__extra.insert(key, extra);}
    //get function select result, like get "as" field result
    inline QVariant __getExtra(const QString& key) const {return __extra.value(key);}
};
typedef QList<MysqlDefaultTestInt> MysqlDefaultTestIntList;
Q_DECLARE_METATYPE(MysqlDefaultTestInt);