#include "Films.h"

namespace SasProj {
	System::Void Films::äîâ³äêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		äîâ³äêà = gcnew Äîâ³äêà();
		äîâ³äêà->Show();
		this->Hide();
	}
	System::Void Films::ô³ëüìèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		startForm = gcnew StartForm();
		startForm->Show();
		this->Hide();
	}
}