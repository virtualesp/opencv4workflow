#include "Brightness.h"
#include "frmBrightness.h"

Brightness::Brightness()
{
}

QString Brightness::name()
{
    return "ÁÁ¶È¼ì²â";
}

QString Brightness::information()
{
    return "¼ì²âÊ¶±ð";
}

QDialog* showDialog(QString toolName, QToolBase* toolBase)
{
    frmBrightness* ss = new frmBrightness(toolName, toolBase);
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
