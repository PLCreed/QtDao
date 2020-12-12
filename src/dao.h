#pragma once

#include "ConnectionPool.h"
#include "DbLoader.h"

#include "builder/InsertBuilder.h"
#include "builder/SelectBuilder.h"
#include "builder/CountBuilder.h"
#include "builder/UpdateBuilder.h"
#include "builder/DeleteBuilder.h"
#include "builder/JoinBuilder.h"

#include "condition/ConditionOperator.h"

class dao {
public:
    template<typename T>
    static InsertBuilder<T> _insert() {
        return InsertBuilder<T>();
    }

    template<typename T>
    static SelectBuilder<T> _select() {
        return SelectBuilder<T>();
    }

    template<typename T>
    static QList<T> _selectAll() {
        return SelectBuilder<T>().build().list();
    }

    template<typename T>
    static CountBuilder<T> _count() {
        return CountBuilder<T>();
    }

    template<typename T>
    static UpdateBuilder<T> _update() {
        return UpdateBuilder<T>();
    }

    template<typename T>
    static DeleteBuilder<T> _delete() {
        return DeleteBuilder<T>();
    }

    template<typename... T>
    static JoinBuilder<T...> _join() {
        return JoinBuilder<T...>();
    }

    template<typename E>
    class self : public E {
    public:
        struct Info : E::Info {
            enum {
                Attach = E::Info::Attach + 1
            };

            static QString getSourceName() {
                return E::Info::getSourceName();
            }

            static QString getTableName() {
                return getSourceName() + "_" + QString::number(Attach);
            }
        };

        class Fields : public E::Fields {
        public:
            Fields() {
                reset(Info::getTableName());
            }
        };
    };

    template<typename E>
    class empty : public E {
    public:
        struct Info : E::Info {
            enum {
                Attach = E::Info::Attach + 1
            };

            static QString getSourceName() {
                return QString();
            }

            static QString getTableName() {
                return QString();
            }
        };

        class Fields : public E::Fields {
        public:
            Fields() {
                reset(Info::getTableName());
            }
        };
    };
};
