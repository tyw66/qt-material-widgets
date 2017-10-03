#ifndef DRAWER_P_H
#define DRAWER_P_H

#include <QObject>

class QtMaterialDrawer;
class QtMaterialDrawerStateMachine;

class QtMaterialDrawerPrivate
{
    Q_DISABLE_COPY(QtMaterialDrawerPrivate)
    Q_DECLARE_PUBLIC(QtMaterialDrawer)

public:
    QtMaterialDrawerPrivate(QtMaterialDrawer *q);

    QtMaterialDrawer             *const q_ptr;
    QtMaterialDrawerStateMachine *const stateMachine;
    QWidget                      *const window;
    int                                 width;
    bool                                clickToClose;
};

#endif // DRAWER_P_H
