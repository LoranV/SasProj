#include "Films.h"

namespace SasProj {
	System::Void Films::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		������ = gcnew ������();
		������->Show();
		this->Hide();
	}
	System::Void Films::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		startForm = gcnew StartForm();
		startForm->Show();
		this->Hide();
	}
}