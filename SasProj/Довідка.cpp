#include "������.h"

namespace SasProj {
    System::Void ������::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        startForm = gcnew StartForm();
        startForm->Show();
        this->Hide();
    };
    System::Void ������::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        films = gcnew Films();
        films->Show();
        this->Hide();
    };
}