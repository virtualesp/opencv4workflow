#include "ImageFlip.h"
#include "frmImageFlip.h"

ImageFlip::ImageFlip()
{
}

QString ImageFlip::name()
{
    return "Í¼Ïñ·­×ª";
}

QString ImageFlip::information()
{
    return "Í¼Ïñ´¦Àí";
}

QDialog* showDialog(QString toolName, QToolBase* toolBase)
{
    frmImageFlip* ss = new frmImageFlip(toolName, toolBase);
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
