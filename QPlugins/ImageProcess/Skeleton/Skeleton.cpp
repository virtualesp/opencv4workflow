#include "Skeleton.h"
#include "frmSkeleton.h"

Skeleton::Skeleton()
{
}

QString Skeleton::name()
{
    return "Í¼ÏñÏ¸»¯";
}

QString Skeleton::information()
{
    return "Í¼Ïñ´¦Àí";
}

QDialog* showDialog(QString toolName, QToolBase* toolBase)
{
    frmSkeleton* ss = new frmSkeleton(toolName, toolBase);
    return ss;
}

int ShowFormState()
{
    return QConfig::nFormState;
}

void SetFormState()
{
    QConfig::nFormState = 0;
}
