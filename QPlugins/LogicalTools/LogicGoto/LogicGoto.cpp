#include "LogicGoto.h"
#include "frmLogicGoto.h"

LogicGoto::LogicGoto()
{
}

QString LogicGoto::name()
{
    return "Ìø×ªÓï¾ä";
}

QString LogicGoto::information()
{
    return "Âß¼­¹¤¾ß";
}

QDialog* showDialog(QString toolName, QToolBase* toolBase)
{
    frmLogicGoto* ss = new frmLogicGoto(toolName, toolBase);
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
