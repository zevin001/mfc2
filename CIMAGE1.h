#pragma once

// 计算机生成了通过 Microsoft Visual C++ 创建的 IDispatch 包装类

// 注意: 请勿修改此文件的内容。如果此类
// 通过 Microsoft Visual C++ 重新生成，则你的修改将被覆盖。

/////////////////////////////////////////////////////////////////////////////

#include "afxwin.h"

class CIMAGE1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CIMAGE1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= {0x4c599241, 0x6926, 0x101b, {0x99, 0x92, 0x00, 0x00, 0x0b, 0x65, 0xc6, 0xf9}};
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = nullptr)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID);
	}

	BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd,
				UINT nID, CFile* pPersist = nullptr, BOOL bStorage = FALSE,
				BSTR bstrLicKey = nullptr)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// 特性
public:
enum fmDropEffect
{
	fmDropEffectNone = 0,
	fmDropEffectCopy = 1,
	fmDropEffectMove = 2,
	fmDropEffectCopyOrMove = 3
};

enum fmAction
{
	fmActionCut = 0,
	fmActionCopy = 1,
	fmActionPaste = 2,
	fmActionDragDrop = 3
};

enum fmMode
{
	fmModeInherit = -2,
	fmModeOn = -1,
	fmModeOff = 0
};

enum fmMousePointer
{
	fmMousePointerDefault = 0,
	fmMousePointerArrow = 1,
	fmMousePointerCross = 2,
	fmMousePointerIBeam = 3,
	fmMousePointerSizeNESW = 6,
	fmMousePointerSizeNS = 7,
	fmMousePointerSizeNWSE = 8,
	fmMousePointerSizeWE = 9,
	fmMousePointerUpArrow = 10,
	fmMousePointerHourGlass = 11,
	fmMousePointerNoDrop = 12,
	fmMousePointerAppStarting = 13,
	fmMousePointerHelp = 14,
	fmMousePointerSizeAll = 15,
	fmMousePointerCustom = 99
};

enum fmScrollBars
{
	fmScrollBarsNone = 0,
	fmScrollBarsHorizontal = 1,
	fmScrollBarsVertical = 2,
	fmScrollBarsBoth = 3
};

enum fmScrollAction
{
	fmScrollActionNoChange = 0,
	fmScrollActionLineUp = 1,
	fmScrollActionLineDown = 2,
	fmScrollActionPageUp = 3,
	fmScrollActionPageDown = 4,
	fmScrollActionBegin = 5,
	fmScrollActionEnd = 6,
	_fmScrollActionAbsoluteChange = 7,
	fmScrollActionPropertyChange = 8,
	fmScrollActionControlRequest = 9,
	fmScrollActionFocusRequest = 10
};

enum fmCycle
{
	fmCycleAllForms = 0,
	fmCycleCurrentForm = 2
};

enum fmZOrder
{
	fmZOrderFront = 0,
	fmZOrderBack = 1
};

enum fmBorderStyle
{
	fmBorderStyleNone = 0,
	fmBorderStyleSingle = 1
};

enum fmTextAlign
{
	fmTextAlignLeft = 1,
	fmTextAlignCenter = 2,
	fmTextAlignRight = 3
};

enum fmAlignment
{
	fmAlignmentLeft = 0,
	fmAlignmentRight = 1
};

enum fmBorders
{
	fmBordersNone = 0,
	fmBordersBox = 1,
	fmBordersLeft = 2,
	fmBordersTop = 3
};

enum fmBackStyle
{
	fmBackStyleTransparent = 0,
	fmBackStyleOpaque = 1
};

enum fmButtonStyle
{
	fmButtonStylePushButton = 0,
	fmButtonStyleToggleButton = 1
};

enum fmPicPosition
{
	fmPicPositionCenter = 0,
	fmPicPositionTopLeft = 1,
	fmPicPositionTopCenter = 2,
	fmPicPositionTopRight = 3,
	fmPicPositionCenterLeft = 4,
	fmPicPositionCenterRight = 5,
	fmPicPositionBottomLeft = 6,
	fmPicPositionBottomCenter = 7,
	fmPicPositionBottomRight = 8
};

enum fmVerticalScrollBarSide
{
	fmVerticalScrollBarSideRight = 0,
	fmVerticalScrollBarSideLeft = 1
};

enum fmLayoutEffect
{
	fmLayoutEffectNone = 0,
	fmLayoutEffectInitiate = 1,
	_fmLayoutEffectRespond = 2
};

enum fmSpecialEffect
{
	fmSpecialEffectFlat = 0,
	fmSpecialEffectRaised = 1,
	fmSpecialEffectSunken = 2,
	fmSpecialEffectEtched = 3,
	fmSpecialEffectBump = 6
};

enum fmDragState
{
	fmDragStateEnter = 0,
	fmDragStateLeave = 1,
	fmDragStateOver = 2
};

enum fmPictureSizeMode
{
	fmPictureSizeModeClip = 0,
	fmPictureSizeModeStretch = 1,
	fmPictureSizeModeZoom = 3
};

enum fmPictureAlignment
{
	fmPictureAlignmentTopLeft = 0,
	fmPictureAlignmentTopRight = 1,
	fmPictureAlignmentCenter = 2,
	fmPictureAlignmentBottomLeft = 3,
	fmPictureAlignmentBottomRight = 4
};

enum fmButtonEffect
{
	fmButtonEffectFlat = 0,
	fmButtonEffectSunken = 2
};

enum fmOrientation
{
	fmOrientationAuto = -1,
	fmOrientationVertical = 0,
	fmOrientationHorizontal = 1
};

enum fmSnapPoint
{
	fmSnapPointTopLeft = 0,
	fmSnapPointTopCenter = 1,
	fmSnapPointTopRight = 2,
	fmSnapPointCenterLeft = 3,
	fmSnapPointCenter = 4,
	fmSnapPointCenterRight = 5,
	fmSnapPointBottomLeft = 6,
	fmSnapPointBottomCenter = 7,
	fmSnapPointBottomRight = 8
};

enum fmPicturePosition
{
	fmPicturePositionLeftTop = 0,
	fmPicturePositionLeftCenter = 1,
	fmPicturePositionLeftBottom = 2,
	fmPicturePositionRightTop = 3,
	fmPicturePositionRightCenter = 4,
	fmPicturePositionRightBottom = 5,
	fmPicturePositionAboveLeft = 6,
	fmPicturePositionAboveCenter = 7,
	fmPicturePositionAboveRight = 8,
	fmPicturePositionBelowLeft = 9,
	fmPicturePositionBelowCenter = 10,
	fmPicturePositionBelowRight = 11,
	fmPicturePositionCenter = 12
};

enum fmDisplayStyle
{
	fmDisplayStyleText = 1,
	fmDisplayStyleList = 2,
	fmDisplayStyleCombo = 3,
	fmDisplayStyleCheckBox = 4,
	fmDisplayStyleOptionButton = 5,
	fmDisplayStyleToggle = 6,
	fmDisplayStyleDropList = 7
};

enum fmShowListWhen
{
	fmShowListWhenNever = 0,
	fmShowListWhenButton = 1,
	fmShowListWhenFocus = 2,
	fmShowListWhenAlways = 3
};

enum fmShowDropButtonWhen
{
	fmShowDropButtonWhenNever = 0,
	fmShowDropButtonWhenFocus = 1,
	fmShowDropButtonWhenAlways = 2
};

enum fmMultiSelect
{
	fmMultiSelectSingle = 0,
	fmMultiSelectMulti = 1,
	fmMultiSelectExtended = 2
};

enum fmListStyle
{
	fmListStylePlain = 0,
	fmListStyleOption = 1
};

enum fmEnterFieldBehavior
{
	fmEnterFieldBehaviorSelectAll = 0,
	fmEnterFieldBehaviorRecallSelection = 1
};

enum fmDragBehavior
{
	fmDragBehaviorDisabled = 0,
	fmDragBehaviorEnabled = 1
};

enum fmMatchEntry
{
	fmMatchEntryFirstLetter = 0,
	fmMatchEntryComplete = 1,
	fmMatchEntryNone = 2
};

enum fmDropButtonStyle
{
	fmDropButtonStylePlain = 0,
	fmDropButtonStyleArrow = 1,
	fmDropButtonStyleEllipsis = 2,
	fmDropButtonStyleReduce = 3
};

enum fmStyle
{
	fmStyleDropDownCombo = 0,
	fmStyleDropDownList = 2
};

enum fmTabOrientation
{
	fmTabOrientationTop = 0,
	fmTabOrientationBottom = 1,
	fmTabOrientationLeft = 2,
	fmTabOrientationRight = 3
};

enum fmTabStyle
{
	fmTabStyleTabs = 0,
	fmTabStyleButtons = 1,
	fmTabStyleNone = 2
};

enum fmIMEMode
{
	fmIMEModeNoControl = 0,
	fmIMEModeOn = 1,
	fmIMEModeOff = 2,
	fmIMEModeDisable = 3,
	fmIMEModeHiragana = 4,
	fmIMEModeKatakana = 5,
	fmIMEModeKatakanaHalf = 6,
	fmIMEModeAlphaFull = 7,
	fmIMEModeAlpha = 8,
	fmIMEModeHangulFull = 9,
	fmIMEModeHangul = 10,
	fmIMEModeHanziFull = 11,
	fmIMEModeHanzi = 12
};

enum fmTransitionEffect
{
	fmTransitionEffectNone = 0,
	fmTransitionEffectCoverUp = 1,
	fmTransitionEffectCoverRightUp = 2,
	fmTransitionEffectCoverRight = 3,
	fmTransitionEffectCoverRightDown = 4,
	fmTransitionEffectCoverDown = 5,
	fmTransitionEffectCoverLeftDown = 6,
	fmTransitionEffectCoverLeft = 7,
	fmTransitionEffectCoverLeftUp = 8,
	fmTransitionEffectPushUp = 9,
	fmTransitionEffectPushRight = 10,
	fmTransitionEffectPushDown = 11,
	fmTransitionEffectPushLeft = 12
};

enum fmListBoxStyles
{
	_fmListBoxStylesNone = 0,
	_fmListBoxStylesListBox = 1,
	_fmListBoxStylesComboBox = 2
};

enum fmRepeatDirection
{
	_fmRepeatDirectionHorizontal = 0,
	_fmRepeatDirectionVertical = 1
};

enum fmEnAutoSize
{
	_fmEnAutoSizeNone = 0,
	_fmEnAutoSizeHorizontal = 1,
	_fmEnAutoSizeVertical = 2,
	_fmEnAutoSizeBoth = 3
};



// 操作
public:
// IImage

// 函数
//

	void put_Enabled(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	BOOL get_Enabled()
	{
		BOOL result;
		InvokeHelper(DISPID_ENABLED, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, nullptr);
		return result;
	}

	void put_MousePointer(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xFFFFFDF7, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	long get_MousePointer()
	{
		long result;
		InvokeHelper(0xFFFFFDF7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	void put_AutoSize(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(DISPID_AUTOSIZE, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	BOOL get_AutoSize()
	{
		BOOL result;
		InvokeHelper(DISPID_AUTOSIZE, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, nullptr);
		return result;
	}

	void put_BackColor(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	long get_BackColor()
	{
		long result;
		InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	void put_BackStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(DISPID_BACKSTYLE, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	long get_BackStyle()
	{
		long result;
		InvokeHelper(DISPID_BACKSTYLE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	void put_BorderColor(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(DISPID_BORDERCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	long get_BorderColor()
	{
		long result;
		InvokeHelper(DISPID_BORDERCOLOR, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	void put_BorderStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	long get_BorderStyle()
	{
		long result;
		InvokeHelper(DISPID_BORDERSTYLE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	void put_Picture(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(DISPID_PICTURE, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	void putref_Picture(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(DISPID_PICTURE, DISPATCH_PROPERTYPUTREF, VT_EMPTY, nullptr, parms, newValue);
	}

	LPDISPATCH get_Picture()
	{
		LPDISPATCH result;
		InvokeHelper(DISPID_PICTURE, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}

	void put_MouseIcon(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xFFFFFDF6, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	void putref_MouseIcon(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0xFFFFFDF6, DISPATCH_PROPERTYPUTREF, VT_EMPTY, nullptr, parms, newValue);
	}

	LPDISPATCH get_MouseIcon()
	{
		LPDISPATCH result;
		InvokeHelper(0xFFFFFDF6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}

	void put_PictureSizeMode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1B, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	long get_PictureSizeMode()
	{
		long result;
		InvokeHelper(0x1B, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	void put_PictureAlignment(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1A, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	long get_PictureAlignment()
	{
		long result;
		InvokeHelper(0x1A, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	void put_PictureTiling(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1C, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	BOOL get_PictureTiling()
	{
		BOOL result;
		InvokeHelper(0x1C, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, nullptr);
		return result;
	}

	void put_SpecialEffect(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xC, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	long get_SpecialEffect()
	{
		long result;
		InvokeHelper(0xC, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}



};
