/*This file is auto generated by DbEntityGenerator*/
#pragma once

#include <qobject.h>
#include <qvariant.h>

#include "../../src/condition/EntityField.h"

class SqliteTest2 {
private:
    //自增长主键
    qint64 id;
    //
    QString name;
    //
    int number;
    //
    int number2;
    //自定义类型
    QVariant varianttype;

    ///transient 临时类型
    QString nametmp;

    QHash<QString, QVariant> __extra;

public:
    SqliteTest2() {
        id = -1;
        number = 0;
    }

    SqliteTest2(
        qint64 id,
        const QString& name,
        int number,
        int number2,
        const QVariant& varianttype
    ) : id(id)
    , name(name)
    , number(number)
    , number2(number2)
    , varianttype(varianttype)
    { }

public:
    struct Fields {
        EntityField<qint64> id = EntityField<qint64>("id", "ts_sqlitetest2");
        EntityField<QString> name = EntityField<QString>("name", "ts_sqlitetest2");
        EntityField<int> number = EntityField<int>("number", "ts_sqlitetest2");
        EntityField<int> number2 = EntityField<int>("number2", "ts_sqlitetest2");
        EntityField<QVariant> varianttype = EntityField<QVariant>("varianttype", "ts_sqlitetest2");
    };

    struct Info {
        static int fieldSize() {
            return 5;
        }

        static QString getTableName() {
            return QStringLiteral("ts_sqlitetest2");
        }

        static QStringList getFields() {
            return QStringList()
                << "id"
                << "name"
                << "number"
                << "number2"
                << "varianttype";
        }

        static QStringList getFieldsWithoutAutoIncrement() {
            return QStringList()
                << "name"
                << "number"
                << "number2"
                << "varianttype";
        }

        static QStringList getFieldsType() {
            return QStringList() 
                << QStringLiteral("id integer default -1 primary key autoincrement")
                << QStringLiteral("name text")
                << QStringLiteral("number integer default 0")
                << QStringLiteral("number2 integer")
                << QStringLiteral("varianttype blob");
        }

        static QStringList getPrimaryKeys() {
            return QStringList() << "id";
        }

        static QList<QStringList> getIndexFields() {
            return QList<QStringList>()
                << (QStringList() << "number2")
                << (QStringList() << "number" << "number2");
        }

        static QList<QStringList> getUniqueIndexFields() {
            return QList<QStringList>()
                << (QStringList() << "name asc" << "number desc");
        }

        static bool isAutoIncrement(const QString& name) {
            return name == "id";
        }
    };

    struct Tool {
        static QVariantList getValueWithoutAutoIncrement(const SqliteTest2& entity) {
            return QVariantList()
                << entity.name
                << entity.number
                << entity.number2
                << entity.varianttype;
        }

        static QVariant getValueByName(const SqliteTest2& entity, const QString& target) {
            if (target == "id") {
                return entity.id;
            }
            if (target == "name") {
                return entity.name;
            }
            if (target == "number") {
                return entity.number;
            }
            if (target == "number2") {
                return entity.number2;
            }
            if (target == "varianttype") {
                return entity.varianttype;
            }
            if (target == "nametmp") {
                return entity.nametmp;
            }
            return entity.__extra.value(target);
        }

        static void bindAutoIncrementId(SqliteTest2& entity, const QVariant& id) {
            entity.id = id.value<qint64>();
        }

        static void bindValue(SqliteTest2& entity, const QString& target, QVariant value) {
            if (target == "id") {
                entity.id = value.value<qint64>();
            } else if (target == "name") {
                entity.name = value.value<QString>();
            } else if (target == "number") {
                entity.number = value.value<int>();
            } else if (target == "number2") {
                entity.number2 = value.value<int>();
            } else if (target == "varianttype") {
                entity.varianttype = value.value<QVariant>();
            } else {
                entity.__putExtra(target, value);
            }
        }
    };

public:
    //set 自增长主键
    inline void setId(qint64 id) {this->id = id;}
    //get 自增长主键
    inline qint64 getId() const {return id;}
    //
    inline void setName(const QString& name) {this->name = name;}
    //
    inline QString getName() const {return name;}
    //
    inline void setNumber(int number) {this->number = number;}
    //
    inline int getNumber() const {return number;}
    //
    inline void setNumber2(int number2) {this->number2 = number2;}
    //
    inline int getNumber2() const {return number2;}
    //set 自定义类型
    inline void setVarianttype(const QVariant& varianttype) {this->varianttype = varianttype;}
    //get 自定义类型
    inline QVariant getVarianttype() const {return varianttype;}
    //set 临时类型
    inline void setNametmp(const QString& nametmp) {this->nametmp = nametmp;}
    //get 临时类型
    inline QString getNametmp() const {return nametmp;}
    //set temp data
    inline void __putExtra(const QString& key, const QVariant& extra) {this->__extra.insert(key, extra);}
    //get function select result, like get "as" field result
    inline QVariant __getExtra(const QString& key) {return __extra.value(key);}
};
typedef QList<SqliteTest2> SqliteTest2List;
