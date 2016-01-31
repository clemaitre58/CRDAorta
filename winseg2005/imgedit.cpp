// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "imgedit.h"

// Dispatch interfaces referenced by this interface
#include "font.h"
#include "Picture.h"

/////////////////////////////////////////////////////////////////////////////
// CImgEdit

IMPLEMENT_DYNCREATE(CImgEdit, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CImgEdit properties

CString CImgEdit::GetImage()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void CImgEdit::SetImage(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString CImgEdit::GetImageControl()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void CImgEdit::SetImageControl(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

long CImgEdit::GetAnnotationType()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationType(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

short CImgEdit::GetAnnotationGroupCount()
{
	short result;
	GetProperty(0x4, VT_I2, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationGroupCount(short propVal)
{
	SetProperty(0x4, VT_I2, propVal);
}

float CImgEdit::GetZoom()
{
	float result;
	GetProperty(0x5, VT_R4, (void*)&result);
	return result;
}

void CImgEdit::SetZoom(float propVal)
{
	SetProperty(0x5, VT_R4, propVal);
}

long CImgEdit::GetPage()
{
	long result;
	GetProperty(0x6, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetPage(long propVal)
{
	SetProperty(0x6, VT_I4, propVal);
}

unsigned long CImgEdit::GetAnnotationBackColor()
{
	unsigned long result;
	GetProperty(0x7, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationBackColor(unsigned long propVal)
{
	SetProperty(0x7, VT_I4, propVal);
}

unsigned long CImgEdit::GetAnnotationFillColor()
{
	unsigned long result;
	GetProperty(0x8, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationFillColor(unsigned long propVal)
{
	SetProperty(0x8, VT_I4, propVal);
}

long CImgEdit::GetAnnotationFillStyle()
{
	long result;
	GetProperty(0x9, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationFillStyle(long propVal)
{
	SetProperty(0x9, VT_I4, propVal);
}

COleFont CImgEdit::GetAnnotationFont()
{
	LPDISPATCH pDispatch;
	GetProperty(0xa, VT_DISPATCH, (void*)&pDispatch);
	return COleFont(pDispatch);
}

void CImgEdit::SetAnnotationFont(LPDISPATCH propVal)
{
	SetProperty(0xa, VT_DISPATCH, propVal);
}

CString CImgEdit::GetAnnotationImage()
{
	CString result;
	GetProperty(0xb, VT_BSTR, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationImage(LPCTSTR propVal)
{
	SetProperty(0xb, VT_BSTR, propVal);
}

unsigned long CImgEdit::GetAnnotationLineColor()
{
	unsigned long result;
	GetProperty(0xc, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationLineColor(unsigned long propVal)
{
	SetProperty(0xc, VT_I4, propVal);
}

long CImgEdit::GetAnnotationLineStyle()
{
	long result;
	GetProperty(0xd, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationLineStyle(long propVal)
{
	SetProperty(0xd, VT_I4, propVal);
}

short CImgEdit::GetAnnotationLineWidth()
{
	short result;
	GetProperty(0xe, VT_I2, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationLineWidth(short propVal)
{
	SetProperty(0xe, VT_I2, propVal);
}

CString CImgEdit::GetAnnotationStampText()
{
	CString result;
	GetProperty(0xf, VT_BSTR, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationStampText(LPCTSTR propVal)
{
	SetProperty(0xf, VT_BSTR, propVal);
}

CString CImgEdit::GetAnnotationTextFile()
{
	CString result;
	GetProperty(0x10, VT_BSTR, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationTextFile(LPCTSTR propVal)
{
	SetProperty(0x10, VT_BSTR, propVal);
}

long CImgEdit::GetDisplayScaleAlgorithm()
{
	long result;
	GetProperty(0x11, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetDisplayScaleAlgorithm(long propVal)
{
	SetProperty(0x11, VT_I4, propVal);
}

BOOL CImgEdit::GetImageDisplayed()
{
	BOOL result;
	GetProperty(0x12, VT_BOOL, (void*)&result);
	return result;
}

void CImgEdit::SetImageDisplayed(BOOL propVal)
{
	SetProperty(0x12, VT_BOOL, propVal);
}

long CImgEdit::GetImageHeight()
{
	long result;
	GetProperty(0x13, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetImageHeight(long propVal)
{
	SetProperty(0x13, VT_I4, propVal);
}

BOOL CImgEdit::GetImageModified()
{
	BOOL result;
	GetProperty(0x14, VT_BOOL, (void*)&result);
	return result;
}

void CImgEdit::SetImageModified(BOOL propVal)
{
	SetProperty(0x14, VT_BOOL, propVal);
}

long CImgEdit::GetImagePalette()
{
	long result;
	GetProperty(0x15, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetImagePalette(long propVal)
{
	SetProperty(0x15, VT_I4, propVal);
}

long CImgEdit::GetImageResolutionX()
{
	long result;
	GetProperty(0x16, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetImageResolutionX(long propVal)
{
	SetProperty(0x16, VT_I4, propVal);
}

long CImgEdit::GetImageResolutionY()
{
	long result;
	GetProperty(0x17, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetImageResolutionY(long propVal)
{
	SetProperty(0x17, VT_I4, propVal);
}

long CImgEdit::GetMousePointer()
{
	long result;
	GetProperty(0x18, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetMousePointer(long propVal)
{
	SetProperty(0x18, VT_I4, propVal);
}

long CImgEdit::GetPageCount()
{
	long result;
	GetProperty(0x19, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetPageCount(long propVal)
{
	SetProperty(0x19, VT_I4, propVal);
}

BOOL CImgEdit::GetScrollBars()
{
	BOOL result;
	GetProperty(0x1a, VT_BOOL, (void*)&result);
	return result;
}

void CImgEdit::SetScrollBars(BOOL propVal)
{
	SetProperty(0x1a, VT_BOOL, propVal);
}

long CImgEdit::GetScrollPositionX()
{
	long result;
	GetProperty(0x1b, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetScrollPositionX(long propVal)
{
	SetProperty(0x1b, VT_I4, propVal);
}

long CImgEdit::GetScrollPositionY()
{
	long result;
	GetProperty(0x1c, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetScrollPositionY(long propVal)
{
	SetProperty(0x1c, VT_I4, propVal);
}

unsigned long CImgEdit::GetAnnotationFontColor()
{
	unsigned long result;
	GetProperty(0x1d, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetAnnotationFontColor(unsigned long propVal)
{
	SetProperty(0x1d, VT_I4, propVal);
}

short CImgEdit::GetCompressionType()
{
	short result;
	GetProperty(0x1e, VT_I2, (void*)&result);
	return result;
}

void CImgEdit::SetCompressionType(short propVal)
{
	SetProperty(0x1e, VT_I2, propVal);
}

short CImgEdit::GetFileType()
{
	short result;
	GetProperty(0x1f, VT_I2, (void*)&result);
	return result;
}

void CImgEdit::SetFileType(short propVal)
{
	SetProperty(0x1f, VT_I2, propVal);
}

BOOL CImgEdit::GetScrollShortcutsEnabled()
{
	BOOL result;
	GetProperty(0x20, VT_BOOL, (void*)&result);
	return result;
}

void CImgEdit::SetScrollShortcutsEnabled(BOOL propVal)
{
	SetProperty(0x20, VT_BOOL, propVal);
}

BOOL CImgEdit::GetSelectionRectangle()
{
	BOOL result;
	GetProperty(0x21, VT_BOOL, (void*)&result);
	return result;
}

void CImgEdit::SetSelectionRectangle(BOOL propVal)
{
	SetProperty(0x21, VT_BOOL, propVal);
}

short CImgEdit::GetPageType()
{
	short result;
	GetProperty(0x22, VT_I2, (void*)&result);
	return result;
}

void CImgEdit::SetPageType(short propVal)
{
	SetProperty(0x22, VT_I2, propVal);
}

long CImgEdit::GetCompressionInfo()
{
	long result;
	GetProperty(0x23, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetCompressionInfo(long propVal)
{
	SetProperty(0x23, VT_I4, propVal);
}

long CImgEdit::GetStatusCode()
{
	long result;
	GetProperty(0x24, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetStatusCode(long propVal)
{
	SetProperty(0x24, VT_I4, propVal);
}

CPicture CImgEdit::GetMouseIcon()
{
	LPDISPATCH pDispatch;
	GetProperty(0x25, VT_DISPATCH, (void*)&pDispatch);
	return CPicture(pDispatch);
}

void CImgEdit::SetMouseIcon(LPDISPATCH propVal)
{
	SetProperty(0x25, VT_DISPATCH, propVal);
}

BOOL CImgEdit::GetAutoRefresh()
{
	BOOL result;
	GetProperty(0x26, VT_BOOL, (void*)&result);
	return result;
}

void CImgEdit::SetAutoRefresh(BOOL propVal)
{
	SetProperty(0x26, VT_BOOL, propVal);
}

long CImgEdit::GetImageWidth()
{
	long result;
	GetProperty(0x27, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetImageWidth(long propVal)
{
	SetProperty(0x27, VT_I4, propVal);
}

short CImgEdit::GetBorderStyle()
{
	short result;
	GetProperty(DISPID_BORDERSTYLE, VT_I2, (void*)&result);
	return result;
}

void CImgEdit::SetBorderStyle(short propVal)
{
	SetProperty(DISPID_BORDERSTYLE, VT_I2, propVal);
}

BOOL CImgEdit::GetEnabled()
{
	BOOL result;
	GetProperty(DISPID_ENABLED, VT_BOOL, (void*)&result);
	return result;
}

void CImgEdit::SetEnabled(BOOL propVal)
{
	SetProperty(DISPID_ENABLED, VT_BOOL, propVal);
}

OLE_HANDLE CImgEdit::GetHWnd()
{
	OLE_HANDLE result;
	GetProperty(DISPID_HWND, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetHWnd(OLE_HANDLE propVal)
{
	SetProperty(DISPID_HWND, VT_I4, propVal);
}

long CImgEdit::GetImageScaleHeight()
{
	long result;
	GetProperty(0x28, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetImageScaleHeight(long propVal)
{
	SetProperty(0x28, VT_I4, propVal);
}

long CImgEdit::GetImageScaleWidth()
{
	long result;
	GetProperty(0x29, VT_I4, (void*)&result);
	return result;
}

void CImgEdit::SetImageScaleWidth(long propVal)
{
	SetProperty(0x29, VT_I4, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CImgEdit operations

void CImgEdit::Display()
{
	InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString CImgEdit::GetAnnotationGroup(short Index)
{
	CString result;
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		Index);
	return result;
}

void CImgEdit::AddAnnotationGroup(LPCTSTR GroupName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 GroupName);
}

unsigned long CImgEdit::GetSelectedAnnotationLineColor()
{
	unsigned long result;
	InvokeHelper(0x130, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

void CImgEdit::ClearDisplay()
{
	InvokeHelper(0x131, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CImgEdit::DeleteAnnotationGroup(LPCTSTR GroupName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x132, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 GroupName);
}

void CImgEdit::DeleteImageData(const VARIANT& Left, const VARIANT& Top, const VARIANT& Width, const VARIANT& Height)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x133, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Left, &Top, &Width, &Height);
}

void CImgEdit::ClipboardCopy(const VARIANT& Left, const VARIANT& Top, const VARIANT& Width, const VARIANT& Height)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x134, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Left, &Top, &Width, &Height);
}

void CImgEdit::ClipboardCut(const VARIANT& Left, const VARIANT& Top, const VARIANT& Width, const VARIANT& Height)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x135, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Left, &Top, &Width, &Height);
}

void CImgEdit::DeleteSelectedAnnotations()
{
	InvokeHelper(0x136, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CImgEdit::Flip()
{
	InvokeHelper(0x137, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

unsigned long CImgEdit::GetSelectedAnnotationBackColor()
{
	unsigned long result;
	InvokeHelper(0x138, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

COleFont CImgEdit::GetSelectedAnnotationFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x139, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont(pDispatch);
}

CString CImgEdit::GetSelectedAnnotationImage()
{
	CString result;
	InvokeHelper(0x13a, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

short CImgEdit::GetSelectedAnnotationLineStyle()
{
	short result;
	InvokeHelper(0x13b, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

short CImgEdit::GetSelectedAnnotationLineWidth()
{
	short result;
	InvokeHelper(0x13c, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

void CImgEdit::HideAnnotationToolPalette()
{
	InvokeHelper(0x13d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CImgEdit::IsClipboardDataAvailable()
{
	BOOL result;
	InvokeHelper(0x13e, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CImgEdit::Refresh()
{
	InvokeHelper(0x13f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CImgEdit::RotateLeft()
{
	InvokeHelper(0x140, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CImgEdit::RotateRight()
{
	InvokeHelper(0x141, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CImgEdit::Save(const VARIANT& SaveAtZoom)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x142, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &SaveAtZoom);
}

void CImgEdit::ScrollImage(short Direction, long ScrollAmount)
{
	static BYTE parms[] =
		VTS_I2 VTS_I4;
	InvokeHelper(0x143, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Direction, ScrollAmount);
}

void CImgEdit::SelectAnnotationGroup(LPCTSTR GroupName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x144, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 GroupName);
}

void CImgEdit::SetImagePalette(short Option)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x145, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Option);
}

void CImgEdit::SetSelectedAnnotationFillStyle(short Style)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x146, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style);
}

void CImgEdit::SetSelectedAnnotationFont(LPDISPATCH Font)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x147, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Font);
}

void CImgEdit::SetSelectedAnnotationLineStyle(short Style)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x148, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Style);
}

void CImgEdit::SetSelectedAnnotationLineWidth(short Width)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x149, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Width);
}

void CImgEdit::ZoomToSelection()
{
	InvokeHelper(0x14a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

short CImgEdit::GetAnnotationMarkCount(const VARIANT& GroupName, const VARIANT& AnnotationType)
{
	short result;
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x14b, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		&GroupName, &AnnotationType);
	return result;
}

unsigned long CImgEdit::GetSelectedAnnotationFillColor()
{
	unsigned long result;
	InvokeHelper(0x14c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

unsigned long CImgEdit::GetSelectedAnnotationFontColor()
{
	unsigned long result;
	InvokeHelper(0x14d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CImgEdit::GetCurrentAnnotationGroup()
{
	CString result;
	InvokeHelper(0x14e, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CImgEdit::ConvertPageType(short PageType, const VARIANT& Repaint)
{
	static BYTE parms[] =
		VTS_I2 VTS_VARIANT;
	InvokeHelper(0x14f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 PageType, &Repaint);
}

void CImgEdit::BurnInAnnotations(short Option, short MarkOption, const VARIANT& GroupName)
{
	static BYTE parms[] =
		VTS_I2 VTS_I2 VTS_VARIANT;
	InvokeHelper(0x150, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Option, MarkOption, &GroupName);
}

void CImgEdit::Draw(long Left, long Top, const VARIANT& Width, const VARIANT& Height)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x151, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Left, Top, &Width, &Height);
}

void CImgEdit::SetSelectedAnnotationLineColor(long Color)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x152, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Color);
}

void CImgEdit::SetSelectedAnnotationFillColor(long Color)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x153, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Color);
}

void CImgEdit::HideAnnotationGroup(const VARIANT& GroupName)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x154, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &GroupName);
}

void CImgEdit::ShowAnnotationGroup(const VARIANT& GroupName)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x155, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &GroupName);
}

short CImgEdit::GetSelectedAnnotationFillStyle()
{
	short result;
	InvokeHelper(0x156, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

void CImgEdit::SaveAs(LPCTSTR Image, const VARIANT& FileType, const VARIANT& PageType, const VARIANT& CompressionType, const VARIANT& CompressionInfo, const VARIANT& SaveAtZoom)
{
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x157, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Image, &FileType, &PageType, &CompressionType, &CompressionInfo, &SaveAtZoom);
}

void CImgEdit::SetSelectedAnnotationBackColor(long Color)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x158, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Color);
}

void CImgEdit::SetSelectedAnnotationFontColor(long Color)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x159, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Color);
}

void CImgEdit::DrawSelectionRect(long Left, long Top, long Width, long Height)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_I4 VTS_I4;
	InvokeHelper(0x15a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Left, Top, Width, Height);
}

void CImgEdit::ShowAnnotationToolPalette(const VARIANT& ShowAttrDialog, const VARIANT& Left, const VARIANT& Top, const VARIANT& ToolTipText)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x15b, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &ShowAttrDialog, &Left, &Top, &ToolTipText);
}

void CImgEdit::SelectTool(short ToolId)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x15c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ToolId);
}

void CImgEdit::DisplayBlankImage(long ImageWidth, long ImageHeight, const VARIANT& ResolutionX, const VARIANT& ResolutionY, const VARIANT& PageType)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x15d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ImageWidth, ImageHeight, &ResolutionX, &ResolutionY, &PageType);
}

void CImgEdit::ClipboardPaste(const VARIANT& Left, const VARIANT& Top)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x15e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Left, &Top);
}

void CImgEdit::PrintImage(const VARIANT& StartPage, const VARIANT& EndPage, const VARIANT& OutputFormat, const VARIANT& Annotations, const VARIANT& Printer, const VARIANT& Driver, const VARIANT& PortNumber)
{
	static BYTE parms[] =
		VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x15f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &StartPage, &EndPage, &OutputFormat, &Annotations, &Printer, &Driver, &PortNumber);
}

void CImgEdit::FitTo(short Option, const VARIANT& Repaint)
{
	static BYTE parms[] =
		VTS_I2 VTS_VARIANT;
	InvokeHelper(0x160, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Option, &Repaint);
}

void CImgEdit::ShowAttribsDialog()
{
	InvokeHelper(0x161, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CImgEdit::ShowRubberStampDialog()
{
	InvokeHelper(0x162, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CImgEdit::EditSelectedAnnotationText(long Left, long Top)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x165, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Left, Top);
}

void CImgEdit::CompletePaste()
{
	InvokeHelper(0x166, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CImgEdit::SetCurrentAnnotationGroup(LPCTSTR GroupName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x168, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 GroupName);
}

void CImgEdit::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}