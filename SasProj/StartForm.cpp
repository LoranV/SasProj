#include "StartForm.h"

using namespace System;
using namespace System::Windows::Forms;

namespace SasProj {
    System::Void StartForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
        films = gcnew Films();
        films->Show();
        this->Hide();
    };
    System::Void StartForm::çàáðîíþâàòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        films = gcnew Films();
        films->Show();
        this->Hide();
    }
    System::Void StartForm::toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
        help = gcnew Äîâ³äêà();
        help->Show();
        this->Hide();
    };
     System::Void StartForm::toolStripMenuItem2_Click_1(System::Object^ sender, System::EventArgs^ e){
        help = gcnew Äîâ³äêà();
        help->Show();
        this->Hide();
    }
}

[STAThreadAttribute]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SasProj::StartForm form;
    Application::Run(% form);
}