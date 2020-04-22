///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Apr 20 2020)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/toolbar.h>
#include <wx/treectrl.h>
#include <wx/sizer.h>
#include <wx/scrolwin.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/radiobox.h>
#include <wx/stc/stc.h>
#include <wx/splitter.h>
#include <wx/frame.h>
#include <wx/html/htmlwin.h>
#include <wx/dialog.h>
#include <wx/button.h>

///////////////////////////////////////////////////////////////////////////

namespace gen
{

	///////////////////////////////////////////////////////////////////////////////
	/// Class MainWindow
	///////////////////////////////////////////////////////////////////////////////
	class MainWindow : public wxFrame
	{
		private:

		protected:
			wxMenuBar* m_menubar1;
			wxMenu* fileMenu;
			wxMenu* editMenu;
			wxMenu* helpMenu;
			wxStatusBar* statusBar;
			wxToolBar* toolBar;
			wxToolBarToolBase* openTool;
			wxToolBarToolBase* saveTool;
			wxToolBarToolBase* addTool;
			wxToolBarToolBase* removeTool;
			wxToolBarToolBase* buildTool;
			wxToolBarToolBase* infoTool;
			wxSplitterWindow* m_splitter1;
			wxScrolledWindow* m_scrolledWindow1;
			wxTreeCtrl* nodeControl;
			wxScrolledWindow* m_scrolledWindow2;
			wxStaticText* m_staticText1;
			wxTextCtrl* viewNameEditor;
			wxRadioBox* responseType;
			wxStaticText* m_staticText2;
			wxTextCtrl* responseTextEditor;
			wxStaticText* m_staticText3;
			wxStyledTextCtrl* responseHandlerEditor;

			// Virtual event handlers, overide them in your derived class
			virtual void renderWindow( wxShowEvent& event ) { event.Skip(); }
			virtual void open( wxCommandEvent& event ) { event.Skip(); }
			virtual void save( wxCommandEvent& event ) { event.Skip(); }
			virtual void addNode( wxCommandEvent& event ) { event.Skip(); }
			virtual void deleteNode( wxCommandEvent& event ) { event.Skip(); }
			virtual void infoClicked( wxCommandEvent& event ) { event.Skip(); }
			virtual void nodeSelected( wxTreeEvent& event ) { event.Skip(); }
			virtual void viewNameChanged( wxCommandEvent& event ) { event.Skip(); }
			virtual void responseTypeChanged( wxCommandEvent& event ) { event.Skip(); }
			virtual void responseTextChanged( wxCommandEvent& event ) { event.Skip(); }
			virtual void customResponseChanged( wxKeyEvent& event ) { event.Skip(); }


		public:

			MainWindow( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("StoryBuilder"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 830,619 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

			~MainWindow();

			void m_splitter1OnIdle( wxIdleEvent& )
			{
				m_splitter1->SetSashPosition( 0 );
				m_splitter1->Disconnect( wxEVT_IDLE, wxIdleEventHandler( MainWindow::m_splitter1OnIdle ), NULL, this );
			}

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class HelpDialog
	///////////////////////////////////////////////////////////////////////////////
	class HelpDialog : public wxDialog
	{
		private:

		protected:
			wxHtmlWindow* htmlView;

			// Virtual event handlers, overide them in your derived class
			virtual void renderWindow( wxShowEvent& event ) { event.Skip(); }


		public:

			HelpDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Help"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
			~HelpDialog();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class SaveDialog
	///////////////////////////////////////////////////////////////////////////////
	class SaveDialog : public wxDialog
	{
		private:

		protected:
			wxStaticText* m_staticText4;
			wxTextCtrl* nameEntry;
			wxStaticText* m_staticText5;
			wxStaticText* m_staticText6;
			wxTextCtrl* pathEntry;
			wxButton* saveButton;

			// Virtual event handlers, overide them in your derived class
			virtual void renderDialog( wxShowEvent& event ) { event.Skip(); }
			virtual void saveProject( wxCommandEvent& event ) { event.Skip(); }


		public:

			SaveDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Save Project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 456,354 ), long style = wxDEFAULT_DIALOG_STYLE );
			~SaveDialog();

	};

} // namespace gen

