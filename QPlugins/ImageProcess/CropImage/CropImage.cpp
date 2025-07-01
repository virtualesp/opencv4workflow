#include "CropImage.h"
#include "frmCropImage.h"

CropImage::CropImage()
{
}

QString CropImage::name()
{
    return "²ÃÇÐÍ¼Ïñ";
}

QString CropImage::information()
{
    return "Í¼Ïñ´¦Àí";
}

QDialog* showDialog(QString toolName, QToolBase* toolBase)
{
    frmCropImage* ss = new frmCropImage(toolName, toolBase);
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
