#include "Äîâ³äêà.h"

namespace SasProj {
    System::Void Äîâ³äêà::ô³ëüìèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        startForm = gcnew StartForm();
        startForm->Show();
        this->Hide();
    };
    System::Void Äîâ³äêà::çàáğîíşâàòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        films = gcnew Films();
        films->Show();
        this->Hide();
    };
}