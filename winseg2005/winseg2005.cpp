// winseg2005.cpp : D�finit les comportements de classe pour l'application.
//

#include "stdafx.h"
#include "winseg2005.h"
#include "MainFrm.h"

#include "ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cwinseg2005App

BEGIN_MESSAGE_MAP(Cwinseg2005App, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &Cwinseg2005App::OnAppAbout)
	ON_COMMAND(ID_FILE_NEW, &Cwinseg2005App::OnFileNew)
END_MESSAGE_MAP()


// construction Cwinseg2005App

Cwinseg2005App::Cwinseg2005App()
{
	// TODO�: ajoutez ici du code de construction,
	// Placez toutes les initialisations significatives dans InitInstance
}


// Seul et unique objet Cwinseg2005App

Cwinseg2005App theApp;


// initialisation de Cwinseg2005App

BOOL Cwinseg2005App::InitInstance()
{
	// InitCommonControlsEx() est requis sur Windows�XP si le manifeste de l'application
	// sp�cifie l'utilisation de ComCtl32.dll version�6 ou ult�rieure pour activer les
	// styles visuels.  Dans le cas contraire, la cr�ation de fen�tres �chouera.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// � d�finir pour inclure toutes les classes de contr�les communs � utiliser
	// dans votre application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	// Initialiser les biblioth�ques OLE
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}
	AfxEnableControlContainer();
	// Initialisation standard
	// Si vous n'utilisez pas ces fonctionnalit�s et que vous souhaitez r�duire la taille
	// de votre ex�cutable final, vous devez supprimer ci-dessous
	// les routines d'initialisation sp�cifiques dont vous n'avez pas besoin.
	// Changez la cl� de Registre sous laquelle nos param�tres sont enregistr�s
	// TODO : modifiez cette cha�ne avec des informations appropri�es,
	// telles que le nom de votre soci�t� ou organisation
	SetRegistryKey(_T("Applications locales g�n�r�es par AppWizard"));
	// Pour cr�er la fen�tre principale, ce code cr�e un nouvel objet fen�tre frame
	// qu'il d�finit ensuite en tant qu'objet fen�tre principale de l'application
	CMDIFrameWnd* pFrame = new CMainFrame;
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;
	// cr�e la fen�tre frame MDI principale
	if (!pFrame->LoadFrame(IDR_MAINFRAME))
		return FALSE;
	// Essaie de charger les menus MDI partag�s et la table d'acc�l�rateurs
	//TODO : ajoutez des variables membres suppl�mentaires et chargez des appels pour
	//	d'autres types de menus requis par votre application
	HINSTANCE hInst = AfxGetResourceHandle();
	m_hMDIMenu  = ::LoadMenu(hInst, MAKEINTRESOURCE(IDR_winseg2005TYPE));
	m_hMDIAccel = ::LoadAccelerators(hInst, MAKEINTRESOURCE(IDR_winseg2005TYPE));





	// La fen�tre principale a �t� initialis�e et peut donc �tre affich�e et mise � jour
	pFrame->ShowWindow(m_nCmdShow);
	pFrame->UpdateWindow();

	return TRUE;
}


// gestionnaires de messages pour Cwinseg2005App

int Cwinseg2005App::ExitInstance() 
{
	//TODO : g�rez les ressources suppl�mentaires que vous avez ajout�es
	if (m_hMDIMenu != NULL)
		FreeResource(m_hMDIMenu);
	if (m_hMDIAccel != NULL)
		FreeResource(m_hMDIAccel);

	return CWinApp::ExitInstance();
}

void Cwinseg2005App::OnFileNew() 
{
	CMainFrame* pFrame = STATIC_DOWNCAST(CMainFrame, m_pMainWnd);
	// cr�e une nouvelle fen�tre enfant MDI
	pFrame->CreateNewChild(
		RUNTIME_CLASS(CChildFrame), IDR_winseg2005TYPE, m_hMDIMenu, m_hMDIAccel);
}


// bo�te de dialogue CAboutDlg utilis�e pour la bo�te de dialogue '� propos de' pour votre application

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Donn�es de bo�te de dialogue
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

// Impl�mentation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// Commande App pour ex�cuter la bo�te de dialogue
void Cwinseg2005App::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}


// gestionnaires de messages pour Cwinseg2005App

