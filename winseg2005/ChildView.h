// ChildView.h : interface de la classe CChildView
//


#pragma once


// fen�tre CChildView

class CChildView : public CWnd
{
// Construction
public:
	CChildView();

// Attributs
public:

// Op�rations
public:

// Substitutions
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Impl�mentation
public:
	virtual ~CChildView();

	// Fonctions g�n�r�es de la table des messages
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
};

