/**
Released as open source by Gabriel Caudrelier

Developed by Gabriel Caudrelier, gabriel dot caudrelier at gmail dot com

https://github.com/metrodango/pip3line

Released under AGPL see LICENSE for more information
**/

#ifndef RANDOMCASE_H
#define RANDOMCASE_H

#include "transformabstract.h"

class RandomCase : public TransformAbstract
{
    Q_OBJECT

    public:
        explicit RandomCase();
        ~RandomCase() override {}
        QString name() const override;
        QString description() const override;
        void transform(const QByteArray &input, QByteArray &output) override;
        bool isTwoWays() override;
        QWidget * requestGui(QWidget * parent) override;
        static const QString id;    
        QString help() const override;
    public slots:
        void reRandomize();

};

#endif // RANDOMCASE_H
