#ifndef SUBJECTINTERFACE_H
#define SUBJECTINTERFACE_H

#include <QList>
#include "observerinterface.h"

class SubjectInterface
{
public:
    virtual void registerObserver(ObserverInterface*){;};
    virtual void removeObserver(ObserverInterface*){;};
    virtual void notifyObserver(void){;};
    QList<ObserverInterface *> m_list;
};

Q_DECLARE_INTERFACE(SubjectInterface, "SubjectInterface/1.0")

#endif // SUBJECTINTERFACE_H
