#ifndef __dovo_mainFrame__
#define __dovo_mainFrame__

/**
@file
Subclass of mainFrame, which is generated by wxFormBuilder.
*/

#include "gui.h"

//// end generated include

#include <wx/dirdlg.h>
#include <wx/config.h>
#include <wx/dcclient.h>
#include "dovo_destination.h"
#include "dovo_about.h"
#include "dovo_searchStatus.h"
#include "dovo_sendStatus.h"
#include "engine.h"
#include "dcm2img.h"

/** Implementing mainFrame */
class dovo_mainFrame : public mainFrame
{
	protected:
		// Handlers for mainFrame events.
		void OnBrowse( wxCommandEvent& event );
		void OnDestinationEdit( wxCommandEvent& event );
		void OnPatientsSelected( wxListEvent& event );
		void OnStudiesSelected( wxListEvent& event );
		void OnSeriesSelected( wxListEvent& event );
		void OnPaintPreview( wxPaintEvent& event );
		void OnInstancesSelected( wxListEvent& event );
		void OnUpdate( wxCommandEvent& event );
		void OnSend( wxCommandEvent& event );
		void OnAbout( wxCommandEvent& event );
		void OnExit( wxCommandEvent& event );
	public:
		/** Constructor */
		dovo_mainFrame( wxWindow* parent );
	//// end generated class members

		~dovo_mainFrame();
		void FillDestinationList();
		static int fillpatients(void *param,int columns,char** values, char**names);
		static int fillstudies(void *param,int columns,char** values, char**names);
		static int fillseries(void *param,int columns,char** values, char**names);
		static int fillinstances(void *param,int columns,char** values, char**names);
		void renderPreview(wxDC& dc);

		engine m_engine;
		wxImage image;		
};

#endif // __dovo_mainFrame__
