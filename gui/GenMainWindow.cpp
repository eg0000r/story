///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Apr 20 2020)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GenMainWindow.h"

#include "res/hammer.png.h"
#include "res/minus.png.h"
#include "res/plus.png.h"
#include "res/question.png.h"
#include "res/save.png.h"
#include "res/share.png.h"

///////////////////////////////////////////////////////////////////////////
using namespace gen;

MainWindow::MainWindow( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_menubar1 = new wxMenuBar( 0 );
	fileMenu = new wxMenu();
	m_menubar1->Append( fileMenu, wxT("File") );

	editMenu = new wxMenu();
	m_menubar1->Append( editMenu, wxT("Edit") );

	helpMenu = new wxMenu();
	m_menubar1->Append( helpMenu, wxT("Help") );

	this->SetMenuBar( m_menubar1 );

	statusBar = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );
	toolBar = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY );
	openTool = toolBar->AddTool( wxID_ANY, wxT("Open"), share_png_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Open"), wxT("Open storyboard project"), NULL );

	saveTool = toolBar->AddTool( wxID_ANY, wxT("Save"), save_png_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Save"), wxT("Save stotyboard project"), NULL );

	addTool = toolBar->AddTool( wxID_ANY, wxT("Add"), plus_png_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Add"), wxT("Add new view node"), NULL );

	removeTool = toolBar->AddTool( wxID_ANY, wxT("Remove"), minus_png_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Remove"), wxT("Remove selected view node"), NULL );

	toolBar->AddSeparator();

	buildTool = toolBar->AddTool( wxID_ANY, wxT("Build"), hammer_png_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Build"), wxT("Generate java sources"), NULL );

	infoTool = toolBar->AddTool( wxID_ANY, wxT("Info"), question_png_to_wx_bitmap(), wxNullBitmap, wxITEM_NORMAL, wxT("Info"), wxT("Get more information"), NULL );

	toolBar->Realize();

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_splitter1 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter1->Connect( wxEVT_IDLE, wxIdleEventHandler( MainWindow::m_splitter1OnIdle ), NULL, this );

	m_scrolledWindow1 = new wxScrolledWindow( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	nodeControl = new wxTreeCtrl( m_scrolledWindow1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE );
	bSizer2->Add( nodeControl, 1, wxALL|wxEXPAND, 5 );


	m_scrolledWindow1->SetSizer( bSizer2 );
	m_scrolledWindow1->Layout();
	bSizer2->Fit( m_scrolledWindow1 );
	m_scrolledWindow2 = new wxScrolledWindow( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow2->SetScrollRate( 5, 5 );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( m_scrolledWindow2, wxID_ANY, wxT("View Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer3->Add( m_staticText1, 0, wxALIGN_CENTER|wxALL, 5 );

	viewNameEditor = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( viewNameEditor, 0, wxALL|wxEXPAND, 5 );

	wxString responseTypeChoices[] = { wxT("Text"), wxT("Custom Response") };
	int responseTypeNChoices = sizeof( responseTypeChoices ) / sizeof( wxString );
	responseType = new wxRadioBox( m_scrolledWindow2, wxID_ANY, wxT("Response Type"), wxDefaultPosition, wxDefaultSize, responseTypeNChoices, responseTypeChoices, 1, wxRA_SPECIFY_COLS );
	responseType->SetSelection( 0 );
	bSizer3->Add( responseType, 0, wxALL|wxEXPAND, 5 );

	m_staticText2 = new wxStaticText( m_scrolledWindow2, wxID_ANY, wxT("Response Text"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer3->Add( m_staticText2, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	responseTextEditor = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( responseTextEditor, 0, wxALL|wxEXPAND, 5 );

	m_staticText3 = new wxStaticText( m_scrolledWindow2, wxID_ANY, wxT("Custom Response Definition"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer3->Add( m_staticText3, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	responseHandlerEditor = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	bSizer3->Add( responseHandlerEditor, 1, wxALL|wxEXPAND, 5 );


	m_scrolledWindow2->SetSizer( bSizer3 );
	m_scrolledWindow2->Layout();
	bSizer3->Fit( m_scrolledWindow2 );
	m_splitter1->SplitVertically( m_scrolledWindow1, m_scrolledWindow2, 0 );
	bSizer1->Add( m_splitter1, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SHOW, wxShowEventHandler( MainWindow::renderWindow ) );
	this->Connect( openTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::open ) );
	this->Connect( saveTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::save ) );
	this->Connect( addTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::addNode ) );
	this->Connect( removeTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::deleteNode ) );
	this->Connect( buildTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::buildClicked ) );
	this->Connect( infoTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::infoClicked ) );
	nodeControl->Connect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( MainWindow::nodeSelected ), NULL, this );
	viewNameEditor->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainWindow::viewNameChanged ), NULL, this );
	responseType->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MainWindow::responseTypeChanged ), NULL, this );
	responseTextEditor->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainWindow::responseTextChanged ), NULL, this );
	responseHandlerEditor->Connect( wxEVT_KEY_UP, wxKeyEventHandler( MainWindow::customResponseChanged ), NULL, this );
}

MainWindow::~MainWindow()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SHOW, wxShowEventHandler( MainWindow::renderWindow ) );
	this->Disconnect( openTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::open ) );
	this->Disconnect( saveTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::save ) );
	this->Disconnect( addTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::addNode ) );
	this->Disconnect( removeTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::deleteNode ) );
	this->Disconnect( buildTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::buildClicked ) );
	this->Disconnect( infoTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainWindow::infoClicked ) );
	nodeControl->Disconnect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( MainWindow::nodeSelected ), NULL, this );
	viewNameEditor->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainWindow::viewNameChanged ), NULL, this );
	responseType->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MainWindow::responseTypeChanged ), NULL, this );
	responseTextEditor->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MainWindow::responseTextChanged ), NULL, this );
	responseHandlerEditor->Disconnect( wxEVT_KEY_UP, wxKeyEventHandler( MainWindow::customResponseChanged ), NULL, this );

}

HelpDialog::HelpDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	htmlView = new wxHtmlWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	htmlView->SetMinSize( wxSize( 300,400 ) );

	bSizer4->Add( htmlView, 0, wxALL, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();
	bSizer4->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SHOW, wxShowEventHandler( HelpDialog::renderWindow ) );
}

HelpDialog::~HelpDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SHOW, wxShowEventHandler( HelpDialog::renderWindow ) );

}

SaveDialog::SaveDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Filename"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer5->Add( m_staticText4, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	nameEntry = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( nameEntry, 10, wxALL, 5 );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT(".xml"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer6->Add( m_staticText5, 0, wxALL, 5 );


	bSizer5->Add( bSizer6, 1, wxEXPAND, 5 );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Path"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer5->Add( m_staticText6, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	pathEntry = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( pathEntry, 10, wxALL, 5 );


	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );

	saveButton = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( saveButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	this->SetSizer( bSizer5 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SHOW, wxShowEventHandler( SaveDialog::renderDialog ) );
	saveButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SaveDialog::saveProject ), NULL, this );
}

SaveDialog::~SaveDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SHOW, wxShowEventHandler( SaveDialog::renderDialog ) );
	saveButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SaveDialog::saveProject ), NULL, this );

}
