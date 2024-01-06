typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct CAccessibleProxy CAccessibleProxy, *PCAccessibleProxy;

struct CAccessibleProxy { /* PlaceHolder Class Structure */
};

typedef struct CFixedStringMgr CFixedStringMgr, *PCFixedStringMgr;

struct CFixedStringMgr { /* PlaceHolder Class Structure */
};

typedef struct CFixedStringT<class_ATL::CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,256> CFixedStringT<class_ATL::CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,256>, *PCFixedStringT<class_ATL::CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,256>;

struct CFixedStringT<class_ATL::CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>,256> { /* PlaceHolder Class Structure */
};

typedef struct CSimpleStringT<wchar_t,0> CSimpleStringT<wchar_t,0>, *PCSimpleStringT<wchar_t,0>;

struct CSimpleStringT<wchar_t,0> { /* PlaceHolder Class Structure */
};

typedef struct CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>, *PCStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>;

struct CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> { /* PlaceHolder Class Structure */
};

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef int INT_PTR;

typedef long LONG_PTR;

typedef uint *PUINT_PTR;

typedef ULONG_PTR SIZE_T;

typedef uint UINT_PTR;

typedef struct XNotifyDBEvents XNotifyDBEvents, *PXNotifyDBEvents;

struct XNotifyDBEvents { /* PlaceHolder Class Structure */
};

typedef struct _IMAGELIST _IMAGELIST, *P_IMAGELIST;

struct _IMAGELIST {
};

typedef struct _IMAGELIST *HIMAGELIST;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

typedef longlong __time64_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct localeinfo_struct *_locale_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef int errno_t;

typedef int intptr_t;

typedef int ptrdiff_t;

typedef uint size_t;

typedef size_t rsize_t;

typedef ushort wctype_t;

typedef ushort wint_t;

typedef struct CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>, *PCAtlSafeAllocBufferManager<class_ATL::CCRTAllocator>;

struct CAtlSafeAllocBufferManager<class_ATL::CCRTAllocator> { /* PlaceHolder Structure */
};

typedef struct _ATL_INTMAP_ENTRY _ATL_INTMAP_ENTRY, *P_ATL_INTMAP_ENTRY;

struct _ATL_INTMAP_ENTRY { /* PlaceHolder Structure */
};

typedef struct CAccessorBase CAccessorBase, *PCAccessorBase;

struct CAccessorBase { /* PlaceHolder Structure */
};

typedef struct CComBSTR CComBSTR, *PCComBSTR;

struct CComBSTR { /* PlaceHolder Structure */
};

typedef struct CComPtr<struct_IRowset> CComPtr<struct_IRowset>, *PCComPtr<struct_IRowset>;

struct CComPtr<struct_IRowset> { /* PlaceHolder Structure */
};

typedef struct CComQIPtr<struct_IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d> CComQIPtr<struct_IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>, *PCComQIPtr<struct_IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>;

struct CComQIPtr<struct_IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d> { /* PlaceHolder Structure */
};

typedef struct CDynamicAccessor CDynamicAccessor, *PCDynamicAccessor;

struct CDynamicAccessor { /* PlaceHolder Structure */
};

typedef struct CManualAccessor CManualAccessor, *PCManualAccessor;

struct CManualAccessor { /* PlaceHolder Structure */
};

typedef struct COleDateTime COleDateTime, *PCOleDateTime;

struct COleDateTime { /* PlaceHolder Structure */
};

typedef struct CRegKey CRegKey, *PCRegKey;

struct CRegKey { /* PlaceHolder Structure */
};

typedef struct CRowset<class_ATL::CAccessorBase> CRowset<class_ATL::CAccessorBase>, *PCRowset<class_ATL::CAccessorBase>;

struct CRowset<class_ATL::CAccessorBase> { /* PlaceHolder Structure */
};

typedef struct CSimpleStringT<char,0> CSimpleStringT<char,0>, *PCSimpleStringT<char,0>;

struct CSimpleStringT<char,0> { /* PlaceHolder Structure */
};

typedef struct CStringData CStringData, *PCStringData;

struct CStringData { /* PlaceHolder Structure */
};

typedef struct CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>, *PCStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>;

struct CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> { /* PlaceHolder Structure */
};

typedef struct CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsOS<wchar_t>_>_> CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsOS<wchar_t>_>_>, *PCStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsOS<wchar_t>_>_>;

struct CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsOS<wchar_t>_>_> { /* PlaceHolder Structure */
};

typedef struct CTempBuffer<wchar_t,128,class_ATL::CCRTAllocator> CTempBuffer<wchar_t,128,class_ATL::CCRTAllocator>, *PCTempBuffer<wchar_t,128,class_ATL::CCRTAllocator>;

struct CTempBuffer<wchar_t,128,class_ATL::CCRTAllocator> { /* PlaceHolder Structure */
};

typedef struct CTime CTime, *PCTime;

struct CTime { /* PlaceHolder Structure */
};

typedef enum DBBLOBHANDLINGENUM {
} DBBLOBHANDLINGENUM;

typedef struct IAtlStringMgr IAtlStringMgr, *PIAtlStringMgr;

struct IAtlStringMgr { /* PlaceHolder Structure */
};

typedef enum LoadArrayObjType {
} LoadArrayObjType;

typedef struct ImageList_Create_Type ImageList_Create_Type, *PImageList_Create_Type;

struct ImageList_Create_Type { /* PlaceHolder Structure */
};

typedef struct ImageList_GetImageInfo_Type ImageList_GetImageInfo_Type, *PImageList_GetImageInfo_Type;

struct ImageList_GetImageInfo_Type { /* PlaceHolder Structure */
};

typedef struct InitCommonControls_Type InitCommonControls_Type, *PInitCommonControls_Type;

struct InitCommonControls_Type { /* PlaceHolder Structure */
};

typedef struct InitCommonControlsEx_Type InitCommonControlsEx_Type, *PInitCommonControlsEx_Type;

struct InitCommonControlsEx_Type { /* PlaceHolder Structure */
};

typedef struct ChooseColorW_Type ChooseColorW_Type, *PChooseColorW_Type;

struct ChooseColorW_Type { /* PlaceHolder Structure */
};

typedef struct GetOpenFileNameW_Type GetOpenFileNameW_Type, *PGetOpenFileNameW_Type;

struct GetOpenFileNameW_Type { /* PlaceHolder Structure */
};

typedef struct CNode CNode, *PCNode;

struct CNode { /* PlaceHolder Structure */
};

typedef struct CAssoc CAssoc, *PCAssoc;

struct CAssoc { /* PlaceHolder Structure */
};

typedef enum IMAGE_STATE {
} IMAGE_STATE;

typedef enum IMAGES_IDS {
} IMAGES_IDS;

typedef struct XElementEdit XElementEdit, *PXElementEdit;

struct XElementEdit { /* PlaceHolder Structure */
};

typedef enum Style {
} Style;

typedef enum AFX_BUTTON_STATE {
} AFX_BUTTON_STATE;

typedef struct CMFCRibbonContextCategory CMFCRibbonContextCategory, *PCMFCRibbonContextCategory;

struct CMFCRibbonContextCategory { /* PlaceHolder Structure */
};

typedef enum BC_FIND_CRITERIA {
} BC_FIND_CRITERIA;

typedef struct InitNetworkAddressControl_Type InitNetworkAddressControl_Type, *PInitNetworkAddressControl_Type;

struct InitNetworkAddressControl_Type { /* PlaceHolder Structure */
};

typedef enum SDMarkerPlace {
} SDMarkerPlace;

typedef struct __POSITION __POSITION, *P__POSITION;

struct __POSITION { /* PlaceHolder Structure */
};

typedef struct _AFX_OCC_DIALOG_INFO _AFX_OCC_DIALOG_INFO, *P_AFX_OCC_DIALOG_INFO;

struct _AFX_OCC_DIALOG_INFO { /* PlaceHolder Structure */
};

typedef struct _DLLVERSIONINFO _DLLVERSIONINFO, *P_DLLVERSIONINFO;

struct _DLLVERSIONINFO { /* PlaceHolder Structure */
};

typedef enum _EXCEPTION_DISPOSITION {
} _EXCEPTION_DISPOSITION;

typedef struct _IMAGEINFO _IMAGEINFO, *P_IMAGEINFO;

struct _IMAGEINFO { /* PlaceHolder Structure */
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { /* PlaceHolder Structure */
};

typedef struct _PROPSHEETHEADERW_V2 _PROPSHEETHEADERW_V2, *P_PROPSHEETHEADERW_V2;

struct _PROPSHEETHEADERW_V2 { /* PlaceHolder Structure */
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { /* PlaceHolder Structure */
};

typedef struct _s_RTTIBaseClassDescriptor _s_RTTIBaseClassDescriptor, *P_s_RTTIBaseClassDescriptor;

struct _s_RTTIBaseClassDescriptor { /* PlaceHolder Structure */
};

typedef struct _s_RTTICompleteObjectLocator _s_RTTICompleteObjectLocator, *P_s_RTTICompleteObjectLocator;

struct _s_RTTICompleteObjectLocator { /* PlaceHolder Structure */
};

typedef struct _TBBUTTON _TBBUTTON, *P_TBBUTTON;

struct _TBBUTTON { /* PlaceHolder Structure */
};

typedef struct AFX_AUTOHIDE_DOCKSITE_SAVE_INFO AFX_AUTOHIDE_DOCKSITE_SAVE_INFO, *PAFX_AUTOHIDE_DOCKSITE_SAVE_INFO;

struct AFX_AUTOHIDE_DOCKSITE_SAVE_INFO { /* PlaceHolder Structure */
};

typedef struct AFX_CMDHANDLERINFO AFX_CMDHANDLERINFO, *PAFX_CMDHANDLERINFO;

struct AFX_CMDHANDLERINFO { /* PlaceHolder Structure */
};

typedef enum AFX_CS_STATUS {
} AFX_CS_STATUS;

typedef struct AFX_DATACACHE_ENTRY AFX_DATACACHE_ENTRY, *PAFX_DATACACHE_ENTRY;

struct AFX_DATACACHE_ENTRY { /* PlaceHolder Structure */
};

typedef enum AFX_DOCK_METHOD {
} AFX_DOCK_METHOD;

typedef struct AFX_EVENT AFX_EVENT, *PAFX_EVENT;

struct AFX_EVENT { /* PlaceHolder Structure */
};

typedef struct AFX_EVENTSINKMAP_ENTRY AFX_EVENTSINKMAP_ENTRY, *PAFX_EVENTSINKMAP_ENTRY;

struct AFX_EVENTSINKMAP_ENTRY { /* PlaceHolder Structure */
};

typedef struct AFX_GLOBAL_DATA AFX_GLOBAL_DATA, *PAFX_GLOBAL_DATA;

struct AFX_GLOBAL_DATA { /* PlaceHolder Structure */
};

typedef struct AFX_MAINTAIN_STATE2 AFX_MAINTAIN_STATE2, *PAFX_MAINTAIN_STATE2;

struct AFX_MAINTAIN_STATE2 { /* PlaceHolder Structure */
};

typedef struct AFX_MSGMAP_ENTRY AFX_MSGMAP_ENTRY, *PAFX_MSGMAP_ENTRY;

struct AFX_MSGMAP_ENTRY { /* PlaceHolder Structure */
};

typedef struct AFX_SIZEPARENTPARAMS AFX_SIZEPARENTPARAMS, *PAFX_SIZEPARENTPARAMS;

struct AFX_SIZEPARENTPARAMS { /* PlaceHolder Structure */
};

typedef struct AUX_DATA AUX_DATA, *PAUX_DATA;

struct AUX_DATA { /* PlaceHolder Structure */
};

typedef struct CAccessibilityData CAccessibilityData, *PCAccessibilityData;

struct CAccessibilityData { /* PlaceHolder Structure */
};

typedef struct CActivationContext CActivationContext, *PCActivationContext;

struct CActivationContext { /* PlaceHolder Structure */
};

typedef struct CArchive CArchive, *PCArchive;

struct CArchive { /* PlaceHolder Structure */
};

typedef struct CArray<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*> CArray<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*>, *PCArray<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*>;

struct CArray<class_CMFCRibbonBaseElement*,class_CMFCRibbonBaseElement*> { /* PlaceHolder Structure */
};

typedef struct CArray<void*,void*> CArray<void*,void*>, *PCArray<void*,void*>;

struct CArray<void*,void*> { /* PlaceHolder Structure */
};

typedef struct CatchGuardRN CatchGuardRN, *PCatchGuardRN;

struct CatchGuardRN { /* PlaceHolder Structure */
};

typedef struct CBasePane CBasePane, *PCBasePane;

struct CBasePane { /* PlaceHolder Structure */
};

typedef struct CBaseTabbedPane CBaseTabbedPane, *PCBaseTabbedPane;

struct CBaseTabbedPane { /* PlaceHolder Structure */
};

typedef struct CCmdTarget CCmdTarget, *PCCmdTarget;

struct CCmdTarget { /* PlaceHolder Structure */
};

typedef struct CControlBarInfo CControlBarInfo, *PCControlBarInfo;

struct CControlBarInfo { /* PlaceHolder Structure */
};

typedef struct CControlCreationInfo CControlCreationInfo, *PCControlCreationInfo;

struct CControlCreationInfo { /* PlaceHolder Structure */
};

typedef struct CCreateContext CCreateContext, *PCCreateContext;

struct CCreateContext { /* PlaceHolder Structure */
};

typedef struct CDataBoundProperty CDataBoundProperty, *PCDataBoundProperty;

struct CDataBoundProperty { /* PlaceHolder Structure */
};

typedef struct CDataExchange CDataExchange, *PCDataExchange;

struct CDataExchange { /* PlaceHolder Structure */
};

typedef struct CDC CDC, *PCDC;

struct CDC { /* PlaceHolder Structure */
};

typedef struct CDialogTemplate CDialogTemplate, *PCDialogTemplate;

struct CDialogTemplate { /* PlaceHolder Structure */
};

typedef struct CDlgControlIterator CDlgControlIterator, *PCDlgControlIterator;

struct CDlgControlIterator { /* PlaceHolder Structure */
};

typedef struct CDlgGroupRadioButtonIterator CDlgGroupRadioButtonIterator, *PCDlgGroupRadioButtonIterator;

struct CDlgGroupRadioButtonIterator { /* PlaceHolder Structure */
};

typedef struct CDockablePane CDockablePane, *PCDockablePane;

struct CDockablePane { /* PlaceHolder Structure */
};

typedef struct CDockingManager CDockingManager, *PCDockingManager;

struct CDockingManager { /* PlaceHolder Structure */
};

typedef struct CDockSite CDockSite, *PCDockSite;

struct CDockSite { /* PlaceHolder Structure */
};

typedef struct CDocTemplate CDocTemplate, *PCDocTemplate;

struct CDocTemplate { /* PlaceHolder Structure */
};

typedef struct CDocument CDocument, *PCDocument;

struct CDocument { /* PlaceHolder Structure */
};

typedef struct CFile CFile, *PCFile;

struct CFile { /* PlaceHolder Structure */
};

typedef struct CFileStatus CFileStatus, *PCFileStatus;

struct CFileStatus { /* PlaceHolder Structure */
};

typedef struct CFixedAllocNoSync CFixedAllocNoSync, *PCFixedAllocNoSync;

struct CFixedAllocNoSync { /* PlaceHolder Structure */
};

typedef struct CFont CFont, *PCFont;

struct CFont { /* PlaceHolder Structure */
};

typedef struct CFrameWnd CFrameWnd, *PCFrameWnd;

struct CFrameWnd { /* PlaceHolder Structure */
};

typedef struct CGdiObject CGdiObject, *PCGdiObject;

struct CGdiObject { /* PlaceHolder Structure */
};

typedef struct CHttpConnection CHttpConnection, *PCHttpConnection;

struct CHttpConnection { /* PlaceHolder Structure */
};

typedef struct CInternalGlobalLock CInternalGlobalLock, *PCInternalGlobalLock;

struct CInternalGlobalLock { /* PlaceHolder Structure */
};

typedef struct CKeyboardManager CKeyboardManager, *PCKeyboardManager;

struct CKeyboardManager { /* PlaceHolder Structure */
};

typedef struct CMDIChildWnd CMDIChildWnd, *PCMDIChildWnd;

struct CMDIChildWnd { /* PlaceHolder Structure */
};

typedef struct CMDITabInfo CMDITabInfo, *PCMDITabInfo;

struct CMDITabInfo { /* PlaceHolder Structure */
};

typedef struct CMenu CMenu, *PCMenu;

struct CMenu { /* PlaceHolder Structure */
};

typedef struct CMFCAutoHideBar CMFCAutoHideBar, *PCMFCAutoHideBar;

struct CMFCAutoHideBar { /* PlaceHolder Structure */
};

typedef struct CMFCAutoHideButton CMFCAutoHideButton, *PCMFCAutoHideButton;

struct CMFCAutoHideButton { /* PlaceHolder Structure */
};

typedef struct CMFCBaseTabCtrl CMFCBaseTabCtrl, *PCMFCBaseTabCtrl;

struct CMFCBaseTabCtrl { /* PlaceHolder Structure */
};

typedef struct CMFCCaptionBar CMFCCaptionBar, *PCMFCCaptionBar;

struct CMFCCaptionBar { /* PlaceHolder Structure */
};

typedef struct CMFCCaptionButton CMFCCaptionButton, *PCMFCCaptionButton;

struct CMFCCaptionButton { /* PlaceHolder Structure */
};

typedef struct CMFCControlRendererInfo CMFCControlRendererInfo, *PCMFCControlRendererInfo;

struct CMFCControlRendererInfo { /* PlaceHolder Structure */
};

typedef struct CMFCDesktopAlertWnd CMFCDesktopAlertWnd, *PCMFCDesktopAlertWnd;

struct CMFCDesktopAlertWnd { /* PlaceHolder Structure */
};

typedef struct CMFCHeaderCtrl CMFCHeaderCtrl, *PCMFCHeaderCtrl;

struct CMFCHeaderCtrl { /* PlaceHolder Structure */
};

typedef struct CMFCMenuBar CMFCMenuBar, *PCMFCMenuBar;

struct CMFCMenuBar { /* PlaceHolder Structure */
};

typedef struct CMFCPopupMenu CMFCPopupMenu, *PCMFCPopupMenu;

struct CMFCPopupMenu { /* PlaceHolder Structure */
};

typedef struct CMFCPropertyGridCtrl CMFCPropertyGridCtrl, *PCMFCPropertyGridCtrl;

struct CMFCPropertyGridCtrl { /* PlaceHolder Structure */
};

typedef struct CMFCRestoredTabInfo CMFCRestoredTabInfo, *PCMFCRestoredTabInfo;

struct CMFCRestoredTabInfo { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonBar CMFCRibbonBar, *PCMFCRibbonBar;

struct CMFCRibbonBar { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonBaseElement CMFCRibbonBaseElement, *PCMFCRibbonBaseElement;

struct CMFCRibbonBaseElement { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonButton CMFCRibbonButton, *PCMFCRibbonButton;

struct CMFCRibbonButton { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonButtonsGroup CMFCRibbonButtonsGroup, *PCMFCRibbonButtonsGroup;

struct CMFCRibbonButtonsGroup { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonCmdUI CMFCRibbonCmdUI, *PCMFCRibbonCmdUI;

struct CMFCRibbonCmdUI { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonGallery CMFCRibbonGallery, *PCMFCRibbonGallery;

struct CMFCRibbonGallery { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonGalleryIcon CMFCRibbonGalleryIcon, *PCMFCRibbonGalleryIcon;

struct CMFCRibbonGalleryIcon { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonLinkCtrl CMFCRibbonLinkCtrl, *PCMFCRibbonLinkCtrl;

struct CMFCRibbonLinkCtrl { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonMainPanel CMFCRibbonMainPanel, *PCMFCRibbonMainPanel;

struct CMFCRibbonMainPanel { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonPanel CMFCRibbonPanel, *PCMFCRibbonPanel;

struct CMFCRibbonPanel { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonPanelMenu CMFCRibbonPanelMenu, *PCMFCRibbonPanelMenu;

struct CMFCRibbonPanelMenu { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonPanelMenuBar CMFCRibbonPanelMenuBar, *PCMFCRibbonPanelMenuBar;

struct CMFCRibbonPanelMenuBar { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonQuickAccessToolBar CMFCRibbonQuickAccessToolBar, *PCMFCRibbonQuickAccessToolBar;

struct CMFCRibbonQuickAccessToolBar { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonQuickAccessToolBarDefaultState CMFCRibbonQuickAccessToolBarDefaultState, *PCMFCRibbonQuickAccessToolBarDefaultState;

struct CMFCRibbonQuickAccessToolBarDefaultState { /* PlaceHolder Structure */
};

typedef struct CMFCRibbonSlider CMFCRibbonSlider, *PCMFCRibbonSlider;

struct CMFCRibbonSlider { /* PlaceHolder Structure */
};

typedef struct CMFCStatusBar CMFCStatusBar, *PCMFCStatusBar;

struct CMFCStatusBar { /* PlaceHolder Structure */
};

typedef struct CMFCStatusBarPaneInfo CMFCStatusBarPaneInfo, *PCMFCStatusBarPaneInfo;

struct CMFCStatusBarPaneInfo { /* PlaceHolder Structure */
};

typedef struct CMFCTabInfo CMFCTabInfo, *PCMFCTabInfo;

struct CMFCTabInfo { /* PlaceHolder Structure */
};

typedef struct CMFCTasksPaneTask CMFCTasksPaneTask, *PCMFCTasksPaneTask;

struct CMFCTasksPaneTask { /* PlaceHolder Structure */
};

typedef struct CMFCTasksPaneTaskGroup CMFCTasksPaneTaskGroup, *PCMFCTasksPaneTaskGroup;

struct CMFCTasksPaneTaskGroup { /* PlaceHolder Structure */
};

typedef struct CMFCToolBarComboBoxButton CMFCToolBarComboBoxButton, *PCMFCToolBarComboBoxButton;

struct CMFCToolBarComboBoxButton { /* PlaceHolder Structure */
};

typedef struct CMFCToolBarEditBoxButton CMFCToolBarEditBoxButton, *PCMFCToolBarEditBoxButton;

struct CMFCToolBarEditBoxButton { /* PlaceHolder Structure */
};

typedef struct CMFCToolBarImages CMFCToolBarImages, *PCMFCToolBarImages;

struct CMFCToolBarImages { /* PlaceHolder Structure */
};

typedef struct CMFCToolBarInfo CMFCToolBarInfo, *PCMFCToolBarInfo;

struct CMFCToolBarInfo { /* PlaceHolder Structure */
};

typedef struct CMFCToolBarMenuButton CMFCToolBarMenuButton, *PCMFCToolBarMenuButton;

struct CMFCToolBarMenuButton { /* PlaceHolder Structure */
};

typedef struct CMFCToolTipInfo CMFCToolTipInfo, *PCMFCToolTipInfo;

struct CMFCToolTipInfo { /* PlaceHolder Structure */
};

typedef struct CMFCVisualManager CMFCVisualManager, *PCMFCVisualManager;

struct CMFCVisualManager { /* PlaceHolder Structure */
};

typedef struct CMultiDocTemplate CMultiDocTemplate, *PCMultiDocTemplate;

struct CMultiDocTemplate { /* PlaceHolder Structure */
};

typedef struct CNoTrackObject CNoTrackObject, *PCNoTrackObject;

struct CNoTrackObject { /* PlaceHolder Structure */
};

typedef struct CObject CObject, *PCObject;

struct CObject { /* PlaceHolder Structure */
};

typedef struct COleClientItem COleClientItem, *PCOleClientItem;

struct COleClientItem { /* PlaceHolder Structure */
};

typedef struct COleControlSite COleControlSite, *PCOleControlSite;

struct COleControlSite { /* PlaceHolder Structure */
};

typedef struct COleControlSiteOrWnd COleControlSiteOrWnd, *PCOleControlSiteOrWnd;

struct COleControlSiteOrWnd { /* PlaceHolder Structure */
};

typedef struct COleDataObject COleDataObject, *PCOleDataObject;

struct COleDataObject { /* PlaceHolder Structure */
};

typedef struct COleDispatchDriver COleDispatchDriver, *PCOleDispatchDriver;

struct COleDispatchDriver { /* PlaceHolder Structure */
};

typedef struct COleDispParams COleDispParams, *PCOleDispParams;

struct COleDispParams { /* PlaceHolder Structure */
};

typedef struct COleIPFrameWnd COleIPFrameWnd, *PCOleIPFrameWnd;

struct COleIPFrameWnd { /* PlaceHolder Structure */
};

typedef struct COleObjectFactory COleObjectFactory, *PCOleObjectFactory;

struct COleObjectFactory { /* PlaceHolder Structure */
};

typedef struct COleServerDoc COleServerDoc, *PCOleServerDoc;

struct COleServerDoc { /* PlaceHolder Structure */
};

typedef struct COleVariant COleVariant, *PCOleVariant;

struct COleVariant { /* PlaceHolder Structure */
};

typedef struct CPalette CPalette, *PCPalette;

struct CPalette { /* PlaceHolder Structure */
};

typedef struct CPaneContainer CPaneContainer, *PCPaneContainer;

struct CPaneContainer { /* PlaceHolder Structure */
};

typedef struct CPaneContainerManager CPaneContainerManager, *PCPaneContainerManager;

struct CPaneContainerManager { /* PlaceHolder Structure */
};

typedef struct CPaneDivider CPaneDivider, *PCPaneDivider;

struct CPaneDivider { /* PlaceHolder Structure */
};

typedef struct CPaneFrameWnd CPaneFrameWnd, *PCPaneFrameWnd;

struct CPaneFrameWnd { /* PlaceHolder Structure */
};

typedef struct CPen CPen, *PCPen;

struct CPen { /* PlaceHolder Structure */
};

typedef struct CPlex CPlex, *PCPlex;

struct CPlex { /* PlaceHolder Structure */
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { /* PlaceHolder Structure */
};

typedef struct CPreviewDC CPreviewDC, *PCPreviewDC;

struct CPreviewDC { /* PlaceHolder Structure */
};

typedef struct CPreviewView CPreviewView, *PCPreviewView;

struct CPreviewView { /* PlaceHolder Structure */
};

typedef struct CPrintInfo CPrintInfo, *PCPrintInfo;

struct CPrintInfo { /* PlaceHolder Structure */
};

typedef struct CPrintPreviewState CPrintPreviewState, *PCPrintPreviewState;

struct CPrintPreviewState { /* PlaceHolder Structure */
};

typedef struct CProcessLocalObject CProcessLocalObject, *PCProcessLocalObject;

struct CProcessLocalObject { /* PlaceHolder Structure */
};

typedef struct CPushRoutingFrame CPushRoutingFrame, *PCPushRoutingFrame;

struct CPushRoutingFrame { /* PlaceHolder Structure */
};

typedef struct CPushRoutingView CPushRoutingView, *PCPushRoutingView;

struct CPushRoutingView { /* PlaceHolder Structure */
};

typedef struct CRecentFileList CRecentFileList, *PCRecentFileList;

struct CRecentFileList { /* PlaceHolder Structure */
};

typedef struct CRect CRect, *PCRect;

struct CRect { /* PlaceHolder Structure */
};

typedef struct CReflectorWnd CReflectorWnd, *PCReflectorWnd;

struct CReflectorWnd { /* PlaceHolder Structure */
};

typedef struct CRgn CRgn, *PCRgn;

struct CRgn { /* PlaceHolder Structure */
};

typedef struct CRuntimeClass CRuntimeClass, *PCRuntimeClass;

struct CRuntimeClass { /* PlaceHolder Structure */
};

typedef struct CSettingsStore CSettingsStore, *PCSettingsStore;

struct CSettingsStore { /* PlaceHolder Structure */
};

typedef struct CShellManager CShellManager, *PCShellManager;

struct CShellManager { /* PlaceHolder Structure */
};

typedef struct CSimpleList CSimpleList, *PCSimpleList;

struct CSimpleList { /* PlaceHolder Structure */
};

typedef struct CSize CSize, *PCSize;

struct CSize { /* PlaceHolder Structure */
};

typedef struct CSplitterWnd CSplitterWnd, *PCSplitterWnd;

struct CSplitterWnd { /* PlaceHolder Structure */
};

typedef struct CSplitterWndEx CSplitterWndEx, *PCSplitterWndEx;

struct CSplitterWndEx { /* PlaceHolder Structure */
};

typedef struct CTabCtrl CTabCtrl, *PCTabCtrl;

struct CTabCtrl { /* PlaceHolder Structure */
};

typedef struct CThreadData CThreadData, *PCThreadData;

struct CThreadData { /* PlaceHolder Structure */
};

typedef struct CThreadLocal<class_AFX_MODULE_THREAD_STATE> CThreadLocal<class_AFX_MODULE_THREAD_STATE>, *PCThreadLocal<class_AFX_MODULE_THREAD_STATE>;

struct CThreadLocal<class_AFX_MODULE_THREAD_STATE> { /* PlaceHolder Structure */
};

typedef struct CThreadLocalObject CThreadLocalObject, *PCThreadLocalObject;

struct CThreadLocalObject { /* PlaceHolder Structure */
};

typedef struct CThreadSlotData CThreadSlotData, *PCThreadSlotData;

struct CThreadSlotData { /* PlaceHolder Structure */
};

typedef struct CToolBarCtrl CToolBarCtrl, *PCToolBarCtrl;

struct CToolBarCtrl { /* PlaceHolder Structure */
};

typedef struct CToolInfo CToolInfo, *PCToolInfo;

struct CToolInfo { /* PlaceHolder Structure */
};

typedef struct CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*>, *PCTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*>;

struct CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> { /* PlaceHolder Structure */
};

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { /* PlaceHolder Structure */
};

typedef struct CUserTool CUserTool, *PCUserTool;

struct CUserTool { /* PlaceHolder Structure */
};

typedef struct CUserToolsManager CUserToolsManager, *PCUserToolsManager;

struct CUserToolsManager { /* PlaceHolder Structure */
};

typedef struct CVariantBoolConverter CVariantBoolConverter, *PCVariantBoolConverter;

struct CVariantBoolConverter { /* PlaceHolder Structure */
};

typedef struct CVariantBoolPair CVariantBoolPair, *PCVariantBoolPair;

struct CVariantBoolPair { /* PlaceHolder Structure */
};

typedef struct CView CView, *PCView;

struct CView { /* PlaceHolder Structure */
};

typedef struct CWaitCursor CWaitCursor, *PCWaitCursor;

struct CWaitCursor { /* PlaceHolder Structure */
};

typedef struct CWnd CWnd, *PCWnd;

struct CWnd { /* PlaceHolder Structure */
};

typedef struct DLGITEMTEMPLATE DLGITEMTEMPLATE, *PDLGITEMTEMPLATE;

struct DLGITEMTEMPLATE { /* PlaceHolder Structure */
};

typedef enum DSCSTATE {
} DSCSTATE;

typedef enum eActCtxResult {
} eActCtxResult;

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { /* PlaceHolder Structure */
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { /* PlaceHolder Structure */
};

typedef struct IAccessible IAccessible, *PIAccessible;

struct IAccessible { /* PlaceHolder Structure */
};

typedef struct IAccessibleProxy IAccessibleProxy, *PIAccessibleProxy;

struct IAccessibleProxy { /* PlaceHolder Structure */
};

typedef struct IAccessor IAccessor, *PIAccessor;

struct IAccessor { /* PlaceHolder Structure */
};

typedef struct IControlSiteFactory IControlSiteFactory, *PIControlSiteFactory;

struct IControlSiteFactory { /* PlaceHolder Structure */
};

typedef struct ICursor ICursor, *PICursor;

struct ICursor { /* PlaceHolder Structure */
};

typedef struct IEnumVOID IEnumVOID, *PIEnumVOID;

struct IEnumVOID { /* PlaceHolder Structure */
};

typedef struct IFileDialog IFileDialog, *PIFileDialog;

struct IFileDialog { /* PlaceHolder Structure */
};

typedef struct IOleContainer IOleContainer, *PIOleContainer;

struct IOleContainer { /* PlaceHolder Structure */
};

typedef struct IRowset IRowset, *PIRowset;

struct IRowset { /* PlaceHolder Structure */
};

typedef struct IRowsetChange IRowsetChange, *PIRowsetChange;

struct IRowsetChange { /* PlaceHolder Structure */
};

typedef struct IRowsetInfo IRowsetInfo, *PIRowsetInfo;

struct IRowsetInfo { /* PlaceHolder Structure */
};

typedef struct IShellItem IShellItem, *PIShellItem;

struct IShellItem { /* PlaceHolder Structure */
};

typedef struct tagACTCTXW tagACTCTXW, *PtagACTCTXW;

struct tagACTCTXW { /* PlaceHolder Structure */
};

typedef struct tagCHOOSECOLORW tagCHOOSECOLORW, *PtagCHOOSECOLORW;

struct tagCHOOSECOLORW { /* PlaceHolder Structure */
};

typedef struct tagCOMPAREITEMSTRUCT tagCOMPAREITEMSTRUCT, *PtagCOMPAREITEMSTRUCT;

struct tagCOMPAREITEMSTRUCT { /* PlaceHolder Structure */
};

typedef enum tagDATADIR {
} tagDATADIR;

typedef struct tagDB_NUMERIC tagDB_NUMERIC, *PtagDB_NUMERIC;

struct tagDB_NUMERIC { /* PlaceHolder Structure */
};

typedef struct tagDBBINDING tagDBBINDING, *PtagDBBINDING;

struct tagDBBINDING { /* PlaceHolder Structure */
};

typedef struct tagDBCOLUMNID tagDBCOLUMNID, *PtagDBCOLUMNID;

struct tagDBCOLUMNID { /* PlaceHolder Structure */
};

typedef struct tagDBNOTIFYREASON tagDBNOTIFYREASON, *PtagDBNOTIFYREASON;

struct tagDBNOTIFYREASON { /* PlaceHolder Structure */
};

typedef struct tagDBOBJECT tagDBOBJECT, *PtagDBOBJECT;

struct tagDBOBJECT { /* PlaceHolder Structure */
};

typedef struct tagDBTIMESTAMP tagDBTIMESTAMP, *PtagDBTIMESTAMP;

struct tagDBTIMESTAMP { /* PlaceHolder Structure */
};

typedef struct tagDELETEITEMSTRUCT tagDELETEITEMSTRUCT, *PtagDELETEITEMSTRUCT;

struct tagDELETEITEMSTRUCT { /* PlaceHolder Structure */
};

typedef struct tagDRAWITEMSTRUCT tagDRAWITEMSTRUCT, *PtagDRAWITEMSTRUCT;

struct tagDRAWITEMSTRUCT { /* PlaceHolder Structure */
};

typedef enum tagFDE_SHAREVIOLATION_RESPONSE {
} tagFDE_SHAREVIOLATION_RESPONSE;

typedef struct tagINITCOMMONCONTROLSEX tagINITCOMMONCONTROLSEX, *PtagINITCOMMONCONTROLSEX;

struct tagINITCOMMONCONTROLSEX { /* PlaceHolder Structure */
};

typedef struct tagLVCOLUMNW tagLVCOLUMNW, *PtagLVCOLUMNW;

struct tagLVCOLUMNW { /* PlaceHolder Structure */
};

typedef struct tagMEASUREITEMSTRUCT tagMEASUREITEMSTRUCT, *PtagMEASUREITEMSTRUCT;

struct tagMEASUREITEMSTRUCT { /* PlaceHolder Structure */
};

typedef struct tagMINMAXINFO tagMINMAXINFO, *PtagMINMAXINFO;

struct tagMINMAXINFO { /* PlaceHolder Structure */
};

typedef struct tagNCCALCSIZE_PARAMS tagNCCALCSIZE_PARAMS, *PtagNCCALCSIZE_PARAMS;

struct tagNCCALCSIZE_PARAMS { /* PlaceHolder Structure */
};

typedef struct tagNMHDR tagNMHDR, *PtagNMHDR;

struct tagNMHDR { /* PlaceHolder Structure */
};

typedef struct tagNONCLIENTMETRICSW tagNONCLIENTMETRICSW, *PtagNONCLIENTMETRICSW;

struct tagNONCLIENTMETRICSW { /* PlaceHolder Structure */
};

typedef struct tagOFNW tagOFNW, *PtagOFNW;

struct tagOFNW { /* PlaceHolder Structure */
};

typedef enum tagOLECLOSE {
} tagOLECLOSE;

typedef struct tagPOINTF tagPOINTF, *PtagPOINTF;

struct tagPOINTF { /* PlaceHolder Structure */
};

typedef struct tagSTYLESTRUCT tagSTYLESTRUCT, *PtagSTYLESTRUCT;

struct tagSTYLESTRUCT { /* PlaceHolder Structure */
};

typedef struct tagTOOLINFOW tagTOOLINFOW, *PtagTOOLINFOW;

struct tagTOOLINFOW { /* PlaceHolder Structure */
};

typedef struct tagWINDOWPOS tagWINDOWPOS, *PtagWINDOWPOS;

struct tagWINDOWPOS { /* PlaceHolder Structure */
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

struct tagWNDCLASSA { /* PlaceHolder Structure */
};

typedef enum THEMESIZE {
} THEMESIZE;

typedef struct TranslatorGuardRN TranslatorGuardRN, *PTranslatorGuardRN;

struct TranslatorGuardRN { /* PlaceHolder Structure */
};

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; /* Magic number */
    word e_cblp; /* Bytes of last page */
    word e_cp; /* Pages in file */
    word e_crlc; /* Relocations */
    word e_cparhdr; /* Size of header in paragraphs */
    word e_minalloc; /* Minimum extra paragraphs needed */
    word e_maxalloc; /* Maximum extra paragraphs needed */
    word e_ss; /* Initial (relative) SS value */
    word e_sp; /* Initial SP value */
    word e_csum; /* Checksum */
    word e_ip; /* Initial IP value */
    word e_cs; /* Initial (relative) CS value */
    word e_lfarlc; /* File address of relocation table */
    word e_ovno; /* Overlay number */
    word e_res[4][4]; /* Reserved words */
    word e_oemid; /* OEM identifier (for e_oeminfo) */
    word e_oeminfo; /* OEM information; e_oemid specific */
    word e_res2[10][10]; /* Reserved words */
    dword e_lfanew; /* File address of new exe header */
    byte e_program[64]; /* Actual DOS program */
};

typedef int __ehstate_t;

typedef struct PMD PMD, *PPMD;

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef ulong DWORD;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

typedef uchar BYTE;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef void *PVOID;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef void (*_PHNDLR)(int);

typedef struct _strflt _strflt, *P_strflt;

struct _strflt {
    int sign;
    int decpt;
    int flag;
    char *mantissa;
};

typedef enum enum_3272 {
    INTRNCVT_OK=0,
    INTRNCVT_OVERFLOW=1,
    INTRNCVT_UNDERFLOW=2
} enum_3272;

typedef enum enum_3272 INTRNCVT_STATUS;

typedef struct _strflt *STRFLT;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};


/* WARNING! conflicting data type names: /guiddef.h/GUID - /GUID */

typedef GUID CLSID;

typedef GUID IID;

typedef CLSID *LPCLSID;

typedef struct HIMC__ HIMC__, *PHIMC__;

typedef struct HIMC__ *HIMC;

struct HIMC__ {
    int unused;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct _tiddata *_ptiddata;

typedef uint uintptr_t;

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct setloc_struct _setloc_struct;

typedef int BOOL;

typedef uint UINT;

struct setloc_struct {
    wchar_t *pchLanguage;
    wchar_t *pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char *_token;
    wchar_t *_wtoken;
    uchar *_mtoken;
    char *_errmsg;
    wchar_t *_werrmsg;
    char *_namebuf0;
    wchar_t *_wnamebuf0;
    char *_namebuf1;
    wchar_t *_wnamebuf1;
    char *_asctimebuf;
    wchar_t *_wasctimebuf;
    void *_gmtimebuf;
    char *_cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void *_initaddr;
    void *_initarg;
    void *_pxcptacttab;
    void *_tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void *_terminate;
    void *_unexpected;
    void *_translator;
    void *_purecall;
    void *_curexception;
    void *_curcontext;
    int _ProcessingThrow;
    void *_curexcspec;
    void *_pFrameInfoChain;
    _setloc_struct _setloc_data;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
};

typedef struct __tagBRECORD __tagBRECORD, *P__tagBRECORD;

typedef struct IRecordInfo IRecordInfo, *PIRecordInfo;

typedef struct IRecordInfoVtbl IRecordInfoVtbl, *PIRecordInfoVtbl;

typedef long HRESULT;

typedef DWORD ULONG;

typedef wchar_t WCHAR;

typedef WCHAR OLECHAR;

typedef OLECHAR *BSTR;

typedef struct ITypeInfo ITypeInfo, *PITypeInfo;

typedef OLECHAR *LPCOLESTR;

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

typedef struct tagVARIANT VARIANT;

typedef struct ITypeInfoVtbl ITypeInfoVtbl, *PITypeInfoVtbl;

typedef struct tagTYPEATTR tagTYPEATTR, *PtagTYPEATTR;

typedef struct tagTYPEATTR TYPEATTR;

typedef struct ITypeComp ITypeComp, *PITypeComp;

typedef struct tagFUNCDESC tagFUNCDESC, *PtagFUNCDESC;

typedef struct tagFUNCDESC FUNCDESC;

typedef struct tagVARDESC tagVARDESC, *PtagVARDESC;

typedef struct tagVARDESC VARDESC;

typedef long LONG;

typedef LONG DISPID;

typedef DISPID MEMBERID;

typedef DWORD HREFTYPE;

typedef int INT;

typedef OLECHAR *LPOLESTR;

typedef ushort WORD;

typedef struct tagDISPPARAMS tagDISPPARAMS, *PtagDISPPARAMS;

typedef struct tagDISPPARAMS DISPPARAMS;

typedef struct tagEXCEPINFO tagEXCEPINFO, *PtagEXCEPINFO;

typedef struct tagEXCEPINFO EXCEPINFO;

typedef enum tagINVOKEKIND {
    INVOKE_FUNC=1,
    INVOKE_PROPERTYGET=2,
    INVOKE_PROPERTYPUT=4,
    INVOKE_PROPERTYPUTREF=8
} tagINVOKEKIND;

typedef enum tagINVOKEKIND INVOKEKIND;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct ITypeLib ITypeLib, *PITypeLib;

typedef union _union_2683 _union_2683, *P_union_2683;

typedef DWORD LCID;

typedef enum tagTYPEKIND {
    TKIND_ENUM=0,
    TKIND_RECORD=1,
    TKIND_MODULE=2,
    TKIND_INTERFACE=3,
    TKIND_DISPATCH=4,
    TKIND_COCLASS=5,
    TKIND_ALIAS=6,
    TKIND_UNION=7,
    TKIND_MAX=8
} tagTYPEKIND;

typedef enum tagTYPEKIND TYPEKIND;

typedef struct tagTYPEDESC tagTYPEDESC, *PtagTYPEDESC;

typedef struct tagTYPEDESC TYPEDESC;

typedef struct tagIDLDESC tagIDLDESC, *PtagIDLDESC;

typedef struct tagIDLDESC IDLDESC;

typedef struct ITypeCompVtbl ITypeCompVtbl, *PITypeCompVtbl;

typedef enum tagDESCKIND {
    DESCKIND_NONE=0,
    DESCKIND_FUNCDESC=1,
    DESCKIND_VARDESC=2,
    DESCKIND_TYPECOMP=3,
    DESCKIND_IMPLICITAPPOBJ=4,
    DESCKIND_MAX=5
} tagDESCKIND;

typedef enum tagDESCKIND DESCKIND;

typedef union tagBINDPTR tagBINDPTR, *PtagBINDPTR;

typedef union tagBINDPTR BINDPTR;

typedef LONG SCODE;

typedef struct tagELEMDESC tagELEMDESC, *PtagELEMDESC;

typedef struct tagELEMDESC ELEMDESC;

typedef enum tagFUNCKIND {
    FUNC_VIRTUAL=0,
    FUNC_PUREVIRTUAL=1,
    FUNC_NONVIRTUAL=2,
    FUNC_STATIC=3,
    FUNC_DISPATCH=4
} tagFUNCKIND;

typedef enum tagFUNCKIND FUNCKIND;

typedef enum tagCALLCONV {
    CC_FASTCALL=0,
    CC_CDECL=1,
    CC_MSCPASCAL=2,
    CC_PASCAL=3,
    CC_MACPASCAL=4,
    CC_STDCALL=5,
    CC_FPFASTCALL=6,
    CC_SYSCALL=7,
    CC_MPWCDECL=8,
    CC_MPWPASCAL=9,
    CC_MAX=10
} tagCALLCONV;

typedef enum tagCALLCONV CALLCONV;

typedef short SHORT;

typedef union _union_2711 _union_2711, *P_union_2711;

typedef enum tagVARKIND {
    VAR_PERINSTANCE=0,
    VAR_STATIC=1,
    VAR_CONST=2,
    VAR_DISPATCH=3
} tagVARKIND;

typedef enum tagVARKIND VARKIND;

typedef VARIANT VARIANTARG;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct ITypeLibVtbl ITypeLibVtbl, *PITypeLibVtbl;

typedef struct tagTLIBATTR tagTLIBATTR, *PtagTLIBATTR;

typedef struct tagTLIBATTR TLIBATTR;

typedef ushort USHORT;

typedef struct __tagVARIANT __tagVARIANT, *P__tagVARIANT;

typedef struct tagDEC tagDEC, *PtagDEC;

typedef struct tagDEC DECIMAL;

typedef union _union_2691 _union_2691, *P_union_2691;

typedef ushort VARTYPE;

typedef union _union_2702 _union_2702, *P_union_2702;

typedef enum tagSYSKIND {
    SYS_WIN16=0,
    SYS_WIN32=1,
    SYS_MAC=2,
    SYS_WIN64=3
} tagSYSKIND;

typedef enum tagSYSKIND SYSKIND;

typedef union _union_2685 _union_2685, *P_union_2685;

typedef union _union_1695 _union_1695, *P_union_1695;

typedef union _union_1697 _union_1697, *P_union_1697;

typedef struct tagARRAYDESC tagARRAYDESC, *PtagARRAYDESC;

typedef struct tagPARAMDESC tagPARAMDESC, *PtagPARAMDESC;

typedef struct tagPARAMDESC PARAMDESC;

typedef double LONGLONG;

typedef float FLOAT;

typedef double DOUBLE;

typedef short VARIANT_BOOL;

typedef union tagCY tagCY, *PtagCY;

typedef union tagCY CY;

typedef double DATE;

typedef struct IDispatch IDispatch, *PIDispatch;

typedef struct tagSAFEARRAY tagSAFEARRAY, *PtagSAFEARRAY;

typedef struct tagSAFEARRAY SAFEARRAY;

typedef char CHAR;

typedef double ULONGLONG;

typedef struct _struct_1696 _struct_1696, *P_struct_1696;

typedef struct _struct_1698 _struct_1698, *P_struct_1698;

typedef struct tagSAFEARRAYBOUND tagSAFEARRAYBOUND, *PtagSAFEARRAYBOUND;

typedef struct tagSAFEARRAYBOUND SAFEARRAYBOUND;

typedef struct tagPARAMDESCEX tagPARAMDESCEX, *PtagPARAMDESCEX;

typedef struct tagPARAMDESCEX *LPPARAMDESCEX;

typedef struct _struct_1693 _struct_1693, *P_struct_1693;

typedef struct IDispatchVtbl IDispatchVtbl, *PIDispatchVtbl;

struct _struct_1693 {
    ulong Lo;
    long Hi;
};

union tagCY {
    struct _struct_1693 s;
    LONGLONG int64;
};

struct _struct_1698 {
    ULONG Lo32;
    ULONG Mid32;
};

union _union_1697 {
    struct _struct_1698 s2;
    ULONGLONG Lo64;
};

struct _struct_1696 {
    BYTE scale;
    BYTE sign;
};

union _union_1695 {
    struct _struct_1696 s;
    USHORT signscale;
};

struct tagDEC {
    USHORT wReserved;
    union _union_1695 u;
    ULONG Hi32;
    union _union_1697 u2;
};

struct __tagBRECORD {
    PVOID pvRecord;
    struct IRecordInfo *pRecInfo;
};

union _union_2685 {
    LONGLONG llVal;
    LONG lVal;
    BYTE bVal;
    SHORT iVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    BSTR bstrVal;
    struct IUnknown *punkVal;
    struct IDispatch *pdispVal;
    SAFEARRAY *parray;
    BYTE *pbVal;
    SHORT *piVal;
    LONG *plVal;
    LONGLONG *pllVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    struct IUnknown **ppunkVal;
    struct IDispatch **ppdispVal;
    SAFEARRAY **pparray;
    VARIANT *pvarVal;
    PVOID byref;
    CHAR cVal;
    USHORT uiVal;
    ULONG ulVal;
    ULONGLONG ullVal;
    INT intVal;
    UINT uintVal;
    DECIMAL *pdecVal;
    CHAR *pcVal;
    USHORT *puiVal;
    ULONG *pulVal;
    ULONGLONG *pullVal;
    INT *pintVal;
    UINT *puintVal;
    struct __tagBRECORD brecVal;
};

struct __tagVARIANT {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    union _union_2685 n3;
};

union _union_2683 {
    struct __tagVARIANT n2;
    DECIMAL decVal;
};

union _union_2691 {
    struct tagTYPEDESC *lptdesc;
    struct tagARRAYDESC *lpadesc;
    HREFTYPE hreftype;
};

struct tagTYPEDESC {
    union _union_2691 u;
    VARTYPE vt;
};

struct tagIDLDESC {
    ULONG_PTR dwReserved;
    USHORT wIDLFlags;
};

struct tagPARAMDESC {
    LPPARAMDESCEX pparamdescex;
    USHORT wParamFlags;
};

union _union_2702 {
    IDLDESC idldesc;
    PARAMDESC paramdesc;
};

struct tagELEMDESC {
    TYPEDESC tdesc;
    union _union_2702 u;
};

struct tagFUNCDESC {
    MEMBERID memid;
    SCODE *lprgscode;
    ELEMDESC *lprgelemdescParam;
    FUNCKIND funckind;
    INVOKEKIND invkind;
    CALLCONV callconv;
    SHORT cParams;
    SHORT cParamsOpt;
    SHORT oVft;
    SHORT cScodes;
    ELEMDESC elemdescFunc;
    WORD wFuncFlags;
};

struct tagVARIANT {
    union _union_2683 n1;
};

struct tagPARAMDESCEX {
    ULONG cBytes;
    VARIANTARG varDefaultValue;
};

union _union_2711 {
    ULONG oInst;
    VARIANT *lpvarValue;
};

struct tagVARDESC {
    MEMBERID memid;
    LPOLESTR lpstrSchema;
    union _union_2711 u;
    ELEMDESC elemdescVar;
    WORD wVarFlags;
    VARKIND varkind;
};

struct ITypeCompVtbl {
    HRESULT (*QueryInterface)(struct ITypeComp *, IID *, void **);
    ULONG (*AddRef)(struct ITypeComp *);
    ULONG (*Release)(struct ITypeComp *);
    HRESULT (*Bind)(struct ITypeComp *, LPOLESTR, ULONG, WORD, struct ITypeInfo **, DESCKIND *, BINDPTR *);
    HRESULT (*BindType)(struct ITypeComp *, LPOLESTR, ULONG, struct ITypeInfo **, struct ITypeComp **);
};

struct ITypeInfoVtbl {
    HRESULT (*QueryInterface)(struct ITypeInfo *, IID *, void **);
    ULONG (*AddRef)(struct ITypeInfo *);
    ULONG (*Release)(struct ITypeInfo *);
    HRESULT (*GetTypeAttr)(struct ITypeInfo *, TYPEATTR **);
    HRESULT (*GetTypeComp)(struct ITypeInfo *, struct ITypeComp **);
    HRESULT (*GetFuncDesc)(struct ITypeInfo *, UINT, FUNCDESC **);
    HRESULT (*GetVarDesc)(struct ITypeInfo *, UINT, VARDESC **);
    HRESULT (*GetNames)(struct ITypeInfo *, MEMBERID, BSTR *, UINT, UINT *);
    HRESULT (*GetRefTypeOfImplType)(struct ITypeInfo *, UINT, HREFTYPE *);
    HRESULT (*GetImplTypeFlags)(struct ITypeInfo *, UINT, INT *);
    HRESULT (*GetIDsOfNames)(struct ITypeInfo *, LPOLESTR *, UINT, MEMBERID *);
    HRESULT (*Invoke)(struct ITypeInfo *, PVOID, MEMBERID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetDocumentation)(struct ITypeInfo *, MEMBERID, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*GetDllEntry)(struct ITypeInfo *, MEMBERID, INVOKEKIND, BSTR *, BSTR *, WORD *);
    HRESULT (*GetRefTypeInfo)(struct ITypeInfo *, HREFTYPE, struct ITypeInfo **);
    HRESULT (*AddressOfMember)(struct ITypeInfo *, MEMBERID, INVOKEKIND, PVOID *);
    HRESULT (*CreateInstance)(struct ITypeInfo *, struct IUnknown *, IID *, PVOID *);
    HRESULT (*GetMops)(struct ITypeInfo *, MEMBERID, BSTR *);
    HRESULT (*GetContainingTypeLib)(struct ITypeInfo *, struct ITypeLib **, UINT *);
    void (*ReleaseTypeAttr)(struct ITypeInfo *, TYPEATTR *);
    void (*ReleaseFuncDesc)(struct ITypeInfo *, FUNCDESC *);
    void (*ReleaseVarDesc)(struct ITypeInfo *, VARDESC *);
};

struct ITypeLibVtbl {
    HRESULT (*QueryInterface)(struct ITypeLib *, IID *, void **);
    ULONG (*AddRef)(struct ITypeLib *);
    ULONG (*Release)(struct ITypeLib *);
    UINT (*GetTypeInfoCount)(struct ITypeLib *);
    HRESULT (*GetTypeInfo)(struct ITypeLib *, UINT, struct ITypeInfo **);
    HRESULT (*GetTypeInfoType)(struct ITypeLib *, UINT, TYPEKIND *);
    HRESULT (*GetTypeInfoOfGuid)(struct ITypeLib *, GUID *, struct ITypeInfo **);
    HRESULT (*GetLibAttr)(struct ITypeLib *, TLIBATTR **);
    HRESULT (*GetTypeComp)(struct ITypeLib *, struct ITypeComp **);
    HRESULT (*GetDocumentation)(struct ITypeLib *, INT, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*IsName)(struct ITypeLib *, LPOLESTR, ULONG, BOOL *);
    HRESULT (*FindName)(struct ITypeLib *, LPOLESTR, ULONG, struct ITypeInfo **, MEMBERID *, USHORT *);
    void (*ReleaseTLibAttr)(struct ITypeLib *, TLIBATTR *);
};

struct tagSAFEARRAYBOUND {
    ULONG cElements;
    LONG lLbound;
};

struct tagSAFEARRAY {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    PVOID pvData;
    SAFEARRAYBOUND rgsabound[1];
};

struct tagTLIBATTR {
    GUID guid;
    LCID lcid;
    SYSKIND syskind;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    WORD wLibFlags;
};

struct tagARRAYDESC {
    TYPEDESC tdescElem;
    USHORT cDims;
    SAFEARRAYBOUND rgbounds[1];
};

struct ITypeComp {
    struct ITypeCompVtbl *lpVtbl;
};

struct IRecordInfo {
    struct IRecordInfoVtbl *lpVtbl;
};

struct tagTYPEATTR {
    GUID guid;
    LCID lcid;
    DWORD dwReserved;
    MEMBERID memidConstructor;
    MEMBERID memidDestructor;
    LPOLESTR lpstrSchema;
    ULONG cbSizeInstance;
    TYPEKIND typekind;
    WORD cFuncs;
    WORD cVars;
    WORD cImplTypes;
    WORD cbSizeVft;
    WORD cbAlignment;
    WORD wTypeFlags;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    TYPEDESC tdescAlias;
    IDLDESC idldescType;
};

struct IRecordInfoVtbl {
    HRESULT (*QueryInterface)(struct IRecordInfo *, IID *, void **);
    ULONG (*AddRef)(struct IRecordInfo *);
    ULONG (*Release)(struct IRecordInfo *);
    HRESULT (*RecordInit)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordClear)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordCopy)(struct IRecordInfo *, PVOID, PVOID);
    HRESULT (*GetGuid)(struct IRecordInfo *, GUID *);
    HRESULT (*GetName)(struct IRecordInfo *, BSTR *);
    HRESULT (*GetSize)(struct IRecordInfo *, ULONG *);
    HRESULT (*GetTypeInfo)(struct IRecordInfo *, struct ITypeInfo **);
    HRESULT (*GetField)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNoCopy)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *, PVOID *);
    HRESULT (*PutField)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*PutFieldNoCopy)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNames)(struct IRecordInfo *, ULONG *, BSTR *);
    BOOL (*IsMatchingType)(struct IRecordInfo *, struct IRecordInfo *);
    PVOID (*RecordCreate)(struct IRecordInfo *);
    HRESULT (*RecordCreateCopy)(struct IRecordInfo *, PVOID, PVOID *);
    HRESULT (*RecordDestroy)(struct IRecordInfo *, PVOID);
};

struct tagDISPPARAMS {
    VARIANTARG *rgvarg;
    DISPID *rgdispidNamedArgs;
    UINT cArgs;
    UINT cNamedArgs;
};

union tagBINDPTR {
    FUNCDESC *lpfuncdesc;
    VARDESC *lpvardesc;
    struct ITypeComp *lptcomp;
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IDispatch {
    struct IDispatchVtbl *lpVtbl;
};

struct IDispatchVtbl {
    HRESULT (*QueryInterface)(struct IDispatch *, IID *, void **);
    ULONG (*AddRef)(struct IDispatch *);
    ULONG (*Release)(struct IDispatch *);
    HRESULT (*GetTypeInfoCount)(struct IDispatch *, UINT *);
    HRESULT (*GetTypeInfo)(struct IDispatch *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IDispatch *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IDispatch *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

struct ITypeLib {
    struct ITypeLibVtbl *lpVtbl;
};

struct ITypeInfo {
    struct ITypeInfoVtbl *lpVtbl;
};

struct tagEXCEPINFO {
    WORD wCode;
    WORD wReserved;
    BSTR bstrSource;
    BSTR bstrDescription;
    BSTR bstrHelpFile;
    DWORD dwHelpContext;
    PVOID pvReserved;
    HRESULT (*pfnDeferredFillIn)(struct tagEXCEPINFO *);
    SCODE scode;
};

typedef union _union_2260 _union_2260, *P_union_2260;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

typedef void *HMETAFILEPICT;

typedef struct HENHMETAFILE__ HENHMETAFILE__, *PHENHMETAFILE__;

typedef struct HENHMETAFILE__ *HENHMETAFILE;

typedef void *HANDLE;

typedef HANDLE HGLOBAL;

typedef struct IStream IStream, *PIStream;

typedef struct IStorage IStorage, *PIStorage;

typedef struct IStreamVtbl IStreamVtbl, *PIStreamVtbl;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef struct IStorageVtbl IStorageVtbl, *PIStorageVtbl;

typedef LPOLESTR *SNB;

typedef struct IEnumSTATSTG IEnumSTATSTG, *PIEnumSTATSTG;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef struct IEnumSTATSTGVtbl IEnumSTATSTGVtbl, *PIEnumSTATSTGVtbl;

struct IStreamVtbl {
    HRESULT (*QueryInterface)(struct IStream *, IID *, void **);
    ULONG (*AddRef)(struct IStream *);
    ULONG (*Release)(struct IStream *);
    HRESULT (*Read)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Write)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Seek)(struct IStream *, LARGE_INTEGER, DWORD, ULARGE_INTEGER *);
    HRESULT (*SetSize)(struct IStream *, ULARGE_INTEGER);
    HRESULT (*CopyTo)(struct IStream *, struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER *, ULARGE_INTEGER *);
    HRESULT (*Commit)(struct IStream *, DWORD);
    HRESULT (*Revert)(struct IStream *);
    HRESULT (*LockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct IStream *, STATSTG *, DWORD);
    HRESULT (*Clone)(struct IStream *, struct IStream **);
};

union _union_2260 {
    HBITMAP hBitmap;
    HMETAFILEPICT hMetaFilePict;
    HENHMETAFILE hEnhMetaFile;
    HGLOBAL hGlobal;
    LPOLESTR lpszFileName;
    struct IStream *pstm;
    struct IStorage *pstg;
};

struct IStream {
    struct IStreamVtbl *lpVtbl;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct tagSTATSTG {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
};

struct IStorageVtbl {
    HRESULT (*QueryInterface)(struct IStorage *, IID *, void **);
    ULONG (*AddRef)(struct IStorage *);
    ULONG (*Release)(struct IStorage *);
    HRESULT (*CreateStream)(struct IStorage *, OLECHAR *, DWORD, DWORD, DWORD, struct IStream **);
    HRESULT (*OpenStream)(struct IStorage *, OLECHAR *, void *, DWORD, DWORD, struct IStream **);
    HRESULT (*CreateStorage)(struct IStorage *, OLECHAR *, DWORD, DWORD, DWORD, struct IStorage **);
    HRESULT (*OpenStorage)(struct IStorage *, OLECHAR *, struct IStorage *, DWORD, SNB, DWORD, struct IStorage **);
    HRESULT (*CopyTo)(struct IStorage *, DWORD, IID *, SNB, struct IStorage *);
    HRESULT (*MoveElementTo)(struct IStorage *, OLECHAR *, struct IStorage *, OLECHAR *, DWORD);
    HRESULT (*Commit)(struct IStorage *, DWORD);
    HRESULT (*Revert)(struct IStorage *);
    HRESULT (*EnumElements)(struct IStorage *, DWORD, void *, DWORD, struct IEnumSTATSTG **);
    HRESULT (*DestroyElement)(struct IStorage *, OLECHAR *);
    HRESULT (*RenameElement)(struct IStorage *, OLECHAR *, OLECHAR *);
    HRESULT (*SetElementTimes)(struct IStorage *, OLECHAR *, FILETIME *, FILETIME *, FILETIME *);
    HRESULT (*SetClass)(struct IStorage *, IID *);
    HRESULT (*SetStateBits)(struct IStorage *, DWORD, DWORD);
    HRESULT (*Stat)(struct IStorage *, STATSTG *, DWORD);
};

struct IStorage {
    struct IStorageVtbl *lpVtbl;
};

struct IEnumSTATSTGVtbl {
    HRESULT (*QueryInterface)(struct IEnumSTATSTG *, IID *, void **);
    ULONG (*AddRef)(struct IEnumSTATSTG *);
    ULONG (*Release)(struct IEnumSTATSTG *);
    HRESULT (*Next)(struct IEnumSTATSTG *, ULONG, STATSTG *, ULONG *);
    HRESULT (*Skip)(struct IEnumSTATSTG *, ULONG);
    HRESULT (*Reset)(struct IEnumSTATSTG *);
    HRESULT (*Clone)(struct IEnumSTATSTG *, struct IEnumSTATSTG **);
};

struct HBITMAP__ {
    int unused;
};

struct IEnumSTATSTG {
    struct IEnumSTATSTGVtbl *lpVtbl;
};

struct HENHMETAFILE__ {
    int unused;
};

typedef struct tagBIND_OPTS tagBIND_OPTS, *PtagBIND_OPTS;

typedef struct tagBIND_OPTS BIND_OPTS;

struct tagBIND_OPTS {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
};

typedef struct tagDVTARGETDEVICE tagDVTARGETDEVICE, *PtagDVTARGETDEVICE;

typedef struct tagDVTARGETDEVICE DVTARGETDEVICE;

struct tagDVTARGETDEVICE {
    DWORD tdSize;
    WORD tdDriverNameOffset;
    WORD tdDeviceNameOffset;
    WORD tdPortNameOffset;
    WORD tdExtDevmodeOffset;
    BYTE tdData[1];
};

typedef struct tagFORMATETC tagFORMATETC, *PtagFORMATETC;

typedef struct tagFORMATETC FORMATETC;

typedef WORD CLIPFORMAT;

struct tagFORMATETC {
    CLIPFORMAT cfFormat;
    DVTARGETDEVICE *ptd;
    DWORD dwAspect;
    LONG lindex;
    DWORD tymed;
};

typedef struct IAdviseSink IAdviseSink, *PIAdviseSink;

typedef struct IAdviseSinkVtbl IAdviseSinkVtbl, *PIAdviseSinkVtbl;

typedef struct tagSTGMEDIUM tagSTGMEDIUM, *PtagSTGMEDIUM;

typedef struct tagSTGMEDIUM uSTGMEDIUM;

typedef uSTGMEDIUM STGMEDIUM;

typedef struct IMoniker IMoniker, *PIMoniker;

typedef struct IMonikerVtbl IMonikerVtbl, *PIMonikerVtbl;

typedef struct IBindCtx IBindCtx, *PIBindCtx;

typedef struct IEnumMoniker IEnumMoniker, *PIEnumMoniker;

typedef struct IBindCtxVtbl IBindCtxVtbl, *PIBindCtxVtbl;

typedef struct IRunningObjectTable IRunningObjectTable, *PIRunningObjectTable;

typedef struct IEnumString IEnumString, *PIEnumString;

typedef struct IEnumMonikerVtbl IEnumMonikerVtbl, *PIEnumMonikerVtbl;

typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl, *PIRunningObjectTableVtbl;

typedef struct IEnumStringVtbl IEnumStringVtbl, *PIEnumStringVtbl;

struct IAdviseSink {
    struct IAdviseSinkVtbl *lpVtbl;
};

struct IAdviseSinkVtbl {
    HRESULT (*QueryInterface)(struct IAdviseSink *, IID *, void **);
    ULONG (*AddRef)(struct IAdviseSink *);
    ULONG (*Release)(struct IAdviseSink *);
    void (*OnDataChange)(struct IAdviseSink *, FORMATETC *, STGMEDIUM *);
    void (*OnViewChange)(struct IAdviseSink *, DWORD, LONG);
    void (*OnRename)(struct IAdviseSink *, struct IMoniker *);
    void (*OnSave)(struct IAdviseSink *);
    void (*OnClose)(struct IAdviseSink *);
};

struct IEnumStringVtbl {
    HRESULT (*QueryInterface)(struct IEnumString *, IID *, void **);
    ULONG (*AddRef)(struct IEnumString *);
    ULONG (*Release)(struct IEnumString *);
    HRESULT (*Next)(struct IEnumString *, ULONG, LPOLESTR *, ULONG *);
    HRESULT (*Skip)(struct IEnumString *, ULONG);
    HRESULT (*Reset)(struct IEnumString *);
    HRESULT (*Clone)(struct IEnumString *, struct IEnumString **);
};

struct IMoniker {
    struct IMonikerVtbl *lpVtbl;
};

struct IEnumString {
    struct IEnumStringVtbl *lpVtbl;
};

struct IEnumMonikerVtbl {
    HRESULT (*QueryInterface)(struct IEnumMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IEnumMoniker *);
    ULONG (*Release)(struct IEnumMoniker *);
    HRESULT (*Next)(struct IEnumMoniker *, ULONG, struct IMoniker **, ULONG *);
    HRESULT (*Skip)(struct IEnumMoniker *, ULONG);
    HRESULT (*Reset)(struct IEnumMoniker *);
    HRESULT (*Clone)(struct IEnumMoniker *, struct IEnumMoniker **);
};

struct tagSTGMEDIUM {
    DWORD tymed;
    union _union_2260 u;
    struct IUnknown *pUnkForRelease;
};

struct IBindCtx {
    struct IBindCtxVtbl *lpVtbl;
};

struct IBindCtxVtbl {
    HRESULT (*QueryInterface)(struct IBindCtx *, IID *, void **);
    ULONG (*AddRef)(struct IBindCtx *);
    ULONG (*Release)(struct IBindCtx *);
    HRESULT (*RegisterObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*RevokeObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*ReleaseBoundObjects)(struct IBindCtx *);
    HRESULT (*SetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetRunningObjectTable)(struct IBindCtx *, struct IRunningObjectTable **);
    HRESULT (*RegisterObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown *);
    HRESULT (*GetObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown **);
    HRESULT (*EnumObjectParam)(struct IBindCtx *, struct IEnumString **);
    HRESULT (*RevokeObjectParam)(struct IBindCtx *, LPOLESTR);
};

struct IRunningObjectTableVtbl {
    HRESULT (*QueryInterface)(struct IRunningObjectTable *, IID *, void **);
    ULONG (*AddRef)(struct IRunningObjectTable *);
    ULONG (*Release)(struct IRunningObjectTable *);
    HRESULT (*Register)(struct IRunningObjectTable *, DWORD, struct IUnknown *, struct IMoniker *, DWORD *);
    HRESULT (*Revoke)(struct IRunningObjectTable *, DWORD);
    HRESULT (*IsRunning)(struct IRunningObjectTable *, struct IMoniker *);
    HRESULT (*GetObjectA)(struct IRunningObjectTable *, struct IMoniker *, struct IUnknown **);
    HRESULT (*NoteChangeTime)(struct IRunningObjectTable *, DWORD, FILETIME *);
    HRESULT (*GetTimeOfLastChange)(struct IRunningObjectTable *, struct IMoniker *, FILETIME *);
    HRESULT (*EnumRunning)(struct IRunningObjectTable *, struct IEnumMoniker **);
};

struct IMonikerVtbl {
    HRESULT (*QueryInterface)(struct IMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IMoniker *);
    ULONG (*Release)(struct IMoniker *);
    HRESULT (*GetClassID)(struct IMoniker *, CLSID *);
    HRESULT (*IsDirty)(struct IMoniker *);
    HRESULT (*Load)(struct IMoniker *, struct IStream *);
    HRESULT (*Save)(struct IMoniker *, struct IStream *, BOOL);
    HRESULT (*GetSizeMax)(struct IMoniker *, ULARGE_INTEGER *);
    HRESULT (*BindToObject)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*BindToStorage)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*Reduce)(struct IMoniker *, struct IBindCtx *, DWORD, struct IMoniker **, struct IMoniker **);
    HRESULT (*ComposeWith)(struct IMoniker *, struct IMoniker *, BOOL, struct IMoniker **);
    HRESULT (*Enum)(struct IMoniker *, BOOL, struct IEnumMoniker **);
    HRESULT (*IsEqual)(struct IMoniker *, struct IMoniker *);
    HRESULT (*Hash)(struct IMoniker *, DWORD *);
    HRESULT (*IsRunning)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, struct IMoniker *);
    HRESULT (*GetTimeOfLastChange)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, FILETIME *);
    HRESULT (*Inverse)(struct IMoniker *, struct IMoniker **);
    HRESULT (*CommonPrefixWith)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*RelativePathTo)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*GetDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR *);
    HRESULT (*ParseDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR, ULONG *, struct IMoniker **);
    HRESULT (*IsSystemMoniker)(struct IMoniker *, DWORD *);
};

struct IRunningObjectTable {
    struct IRunningObjectTableVtbl *lpVtbl;
};

struct IEnumMoniker {
    struct IEnumMonikerVtbl *lpVtbl;
};

typedef struct IDataObject IDataObject, *PIDataObject;

typedef struct IDataObjectVtbl IDataObjectVtbl, *PIDataObjectVtbl;

typedef struct IEnumFORMATETC IEnumFORMATETC, *PIEnumFORMATETC;

typedef struct IEnumSTATDATA IEnumSTATDATA, *PIEnumSTATDATA;

typedef struct IEnumFORMATETCVtbl IEnumFORMATETCVtbl, *PIEnumFORMATETCVtbl;

typedef struct IEnumSTATDATAVtbl IEnumSTATDATAVtbl, *PIEnumSTATDATAVtbl;

typedef struct tagSTATDATA tagSTATDATA, *PtagSTATDATA;

typedef struct tagSTATDATA STATDATA;

struct IEnumSTATDATA {
    struct IEnumSTATDATAVtbl *lpVtbl;
};

struct IEnumSTATDATAVtbl {
    HRESULT (*QueryInterface)(struct IEnumSTATDATA *, IID *, void **);
    ULONG (*AddRef)(struct IEnumSTATDATA *);
    ULONG (*Release)(struct IEnumSTATDATA *);
    HRESULT (*Next)(struct IEnumSTATDATA *, ULONG, STATDATA *, ULONG *);
    HRESULT (*Skip)(struct IEnumSTATDATA *, ULONG);
    HRESULT (*Reset)(struct IEnumSTATDATA *);
    HRESULT (*Clone)(struct IEnumSTATDATA *, struct IEnumSTATDATA **);
};

struct IEnumFORMATETCVtbl {
    HRESULT (*QueryInterface)(struct IEnumFORMATETC *, IID *, void **);
    ULONG (*AddRef)(struct IEnumFORMATETC *);
    ULONG (*Release)(struct IEnumFORMATETC *);
    HRESULT (*Next)(struct IEnumFORMATETC *, ULONG, FORMATETC *, ULONG *);
    HRESULT (*Skip)(struct IEnumFORMATETC *, ULONG);
    HRESULT (*Reset)(struct IEnumFORMATETC *);
    HRESULT (*Clone)(struct IEnumFORMATETC *, struct IEnumFORMATETC **);
};

struct IDataObject {
    struct IDataObjectVtbl *lpVtbl;
};

struct IDataObjectVtbl {
    HRESULT (*QueryInterface)(struct IDataObject *, IID *, void **);
    ULONG (*AddRef)(struct IDataObject *);
    ULONG (*Release)(struct IDataObject *);
    HRESULT (*GetData)(struct IDataObject *, FORMATETC *, STGMEDIUM *);
    HRESULT (*GetDataHere)(struct IDataObject *, FORMATETC *, STGMEDIUM *);
    HRESULT (*QueryGetData)(struct IDataObject *, FORMATETC *);
    HRESULT (*GetCanonicalFormatEtc)(struct IDataObject *, FORMATETC *, FORMATETC *);
    HRESULT (*SetData)(struct IDataObject *, FORMATETC *, STGMEDIUM *, BOOL);
    HRESULT (*EnumFormatEtc)(struct IDataObject *, DWORD, struct IEnumFORMATETC **);
    HRESULT (*DAdvise)(struct IDataObject *, FORMATETC *, DWORD, struct IAdviseSink *, DWORD *);
    HRESULT (*DUnadvise)(struct IDataObject *, DWORD);
    HRESULT (*EnumDAdvise)(struct IDataObject *, struct IEnumSTATDATA **);
};

struct tagSTATDATA {
    FORMATETC formatetc;
    DWORD advf;
    struct IAdviseSink *pAdvSink;
    DWORD dwConnection;
};

struct IEnumFORMATETC {
    struct IEnumFORMATETCVtbl *lpVtbl;
};

typedef struct ILockBytes ILockBytes, *PILockBytes;

typedef struct ILockBytesVtbl ILockBytesVtbl, *PILockBytesVtbl;

struct ILockBytesVtbl {
    HRESULT (*QueryInterface)(struct ILockBytes *, IID *, void **);
    ULONG (*AddRef)(struct ILockBytes *);
    ULONG (*Release)(struct ILockBytes *);
    HRESULT (*ReadAt)(struct ILockBytes *, ULARGE_INTEGER, void *, ULONG, ULONG *);
    HRESULT (*WriteAt)(struct ILockBytes *, ULARGE_INTEGER, void *, ULONG, ULONG *);
    HRESULT (*Flush)(struct ILockBytes *);
    HRESULT (*SetSize)(struct ILockBytes *, ULARGE_INTEGER);
    HRESULT (*LockRegion)(struct ILockBytes *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct ILockBytes *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct ILockBytes *, STATSTG *, DWORD);
};

struct ILockBytes {
    struct ILockBytesVtbl *lpVtbl;
};

typedef struct IMessageFilter IMessageFilter, *PIMessageFilter;

typedef struct IMessageFilterVtbl IMessageFilterVtbl, *PIMessageFilterVtbl;

typedef struct HTASK__ HTASK__, *PHTASK__;

typedef struct HTASK__ *HTASK;

typedef struct tagINTERFACEINFO tagINTERFACEINFO, *PtagINTERFACEINFO;

typedef struct tagINTERFACEINFO *LPINTERFACEINFO;

struct IMessageFilter {
    struct IMessageFilterVtbl *lpVtbl;
};

struct tagINTERFACEINFO {
    struct IUnknown *pUnk;
    IID iid;
    WORD wMethod;
};

struct IMessageFilterVtbl {
    HRESULT (*QueryInterface)(struct IMessageFilter *, IID *, void **);
    ULONG (*AddRef)(struct IMessageFilter *);
    ULONG (*Release)(struct IMessageFilter *);
    DWORD (*HandleInComingCall)(struct IMessageFilter *, DWORD, HTASK, DWORD, LPINTERFACEINFO);
    DWORD (*RetryRejectedCall)(struct IMessageFilter *, HTASK, DWORD, DWORD);
    DWORD (*MessagePending)(struct IMessageFilter *, HTASK, DWORD, DWORD);
};

struct HTASK__ {
    int unused;
};

typedef struct IDataObject *LPDATAOBJECT;

typedef struct ILockBytes *LPLOCKBYTES;

typedef struct IMessageFilter *LPMESSAGEFILTER;

typedef STGMEDIUM *LPSTGMEDIUM;

typedef struct IStream *LPSTREAM;

typedef HGLOBAL HOLEMENU;

typedef struct IDropSource IDropSource, *PIDropSource;

typedef struct IDropSourceVtbl IDropSourceVtbl, *PIDropSourceVtbl;

struct IDropSourceVtbl {
    HRESULT (*QueryInterface)(struct IDropSource *, IID *, void **);
    ULONG (*AddRef)(struct IDropSource *);
    ULONG (*Release)(struct IDropSource *);
    HRESULT (*QueryContinueDrag)(struct IDropSource *, BOOL, DWORD);
    HRESULT (*GiveFeedback)(struct IDropSource *, DWORD);
};

struct IDropSource {
    struct IDropSourceVtbl *lpVtbl;
};

typedef struct IDropTarget IDropTarget, *PIDropTarget;

typedef struct IDropTargetVtbl IDropTargetVtbl, *PIDropTargetVtbl;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

struct IDropTargetVtbl {
    HRESULT (*QueryInterface)(struct IDropTarget *, IID *, void **);
    ULONG (*AddRef)(struct IDropTarget *);
    ULONG (*Release)(struct IDropTarget *);
    HRESULT (*DragEnter)(struct IDropTarget *, struct IDataObject *, DWORD, POINTL, DWORD *);
    HRESULT (*DragOver)(struct IDropTarget *, DWORD, POINTL, DWORD *);
    HRESULT (*DragLeave)(struct IDropTarget *);
    HRESULT (*Drop)(struct IDropTarget *, struct IDataObject *, DWORD, POINTL, DWORD *);
};

struct _POINTL {
    LONG x;
    LONG y;
};

struct IDropTarget {
    struct IDropTargetVtbl *lpVtbl;
};

typedef struct IOleInPlaceActiveObject IOleInPlaceActiveObject, *PIOleInPlaceActiveObject;

typedef struct IOleInPlaceActiveObjectVtbl IOleInPlaceActiveObjectVtbl, *PIOleInPlaceActiveObjectVtbl;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG *LPMSG;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

typedef RECT *LPCRECT;

typedef struct IOleInPlaceUIWindow IOleInPlaceUIWindow, *PIOleInPlaceUIWindow;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef struct IOleInPlaceUIWindowVtbl IOleInPlaceUIWindowVtbl, *PIOleInPlaceUIWindowVtbl;

typedef struct tagRECT *LPRECT;

typedef LPCRECT LPCBORDERWIDTHS;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct IOleInPlaceActiveObjectVtbl {
    HRESULT (*QueryInterface)(struct IOleInPlaceActiveObject *, IID *, void **);
    ULONG (*AddRef)(struct IOleInPlaceActiveObject *);
    ULONG (*Release)(struct IOleInPlaceActiveObject *);
    HRESULT (*GetWindow)(struct IOleInPlaceActiveObject *, HWND *);
    HRESULT (*ContextSensitiveHelp)(struct IOleInPlaceActiveObject *, BOOL);
    HRESULT (*TranslateAcceleratorA)(struct IOleInPlaceActiveObject *, LPMSG);
    HRESULT (*OnFrameWindowActivate)(struct IOleInPlaceActiveObject *, BOOL);
    HRESULT (*OnDocWindowActivate)(struct IOleInPlaceActiveObject *, BOOL);
    HRESULT (*ResizeBorder)(struct IOleInPlaceActiveObject *, LPCRECT, struct IOleInPlaceUIWindow *, BOOL);
    HRESULT (*EnableModeless)(struct IOleInPlaceActiveObject *, BOOL);
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct IOleInPlaceUIWindow {
    struct IOleInPlaceUIWindowVtbl *lpVtbl;
};

struct IOleInPlaceUIWindowVtbl {
    HRESULT (*QueryInterface)(struct IOleInPlaceUIWindow *, IID *, void **);
    ULONG (*AddRef)(struct IOleInPlaceUIWindow *);
    ULONG (*Release)(struct IOleInPlaceUIWindow *);
    HRESULT (*GetWindow)(struct IOleInPlaceUIWindow *, HWND *);
    HRESULT (*ContextSensitiveHelp)(struct IOleInPlaceUIWindow *, BOOL);
    HRESULT (*GetBorder)(struct IOleInPlaceUIWindow *, LPRECT);
    HRESULT (*RequestBorderSpace)(struct IOleInPlaceUIWindow *, LPCBORDERWIDTHS);
    HRESULT (*SetBorderSpace)(struct IOleInPlaceUIWindow *, LPCBORDERWIDTHS);
    HRESULT (*SetActiveObject)(struct IOleInPlaceUIWindow *, struct IOleInPlaceActiveObject *, LPCOLESTR);
};

struct HWND__ {
    int unused;
};

struct IOleInPlaceActiveObject {
    struct IOleInPlaceActiveObjectVtbl *lpVtbl;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct IOleInPlaceFrame IOleInPlaceFrame, *PIOleInPlaceFrame;

typedef struct IOleInPlaceFrameVtbl IOleInPlaceFrameVtbl, *PIOleInPlaceFrameVtbl;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

typedef struct tagOleMenuGroupWidths tagOleMenuGroupWidths, *PtagOleMenuGroupWidths;

typedef struct tagOleMenuGroupWidths *LPOLEMENUGROUPWIDTHS;

struct HMENU__ {
    int unused;
};

struct tagOleMenuGroupWidths {
    LONG width[6];
};

struct IOleInPlaceFrame {
    struct IOleInPlaceFrameVtbl *lpVtbl;
};

struct IOleInPlaceFrameVtbl {
    HRESULT (*QueryInterface)(struct IOleInPlaceFrame *, IID *, void **);
    ULONG (*AddRef)(struct IOleInPlaceFrame *);
    ULONG (*Release)(struct IOleInPlaceFrame *);
    HRESULT (*GetWindow)(struct IOleInPlaceFrame *, HWND *);
    HRESULT (*ContextSensitiveHelp)(struct IOleInPlaceFrame *, BOOL);
    HRESULT (*GetBorder)(struct IOleInPlaceFrame *, LPRECT);
    HRESULT (*RequestBorderSpace)(struct IOleInPlaceFrame *, LPCBORDERWIDTHS);
    HRESULT (*SetBorderSpace)(struct IOleInPlaceFrame *, LPCBORDERWIDTHS);
    HRESULT (*SetActiveObject)(struct IOleInPlaceFrame *, struct IOleInPlaceActiveObject *, LPCOLESTR);
    HRESULT (*InsertMenus)(struct IOleInPlaceFrame *, HMENU, LPOLEMENUGROUPWIDTHS);
    HRESULT (*SetMenu)(struct IOleInPlaceFrame *, HMENU, HOLEMENU, HWND);
    HRESULT (*RemoveMenus)(struct IOleInPlaceFrame *, HMENU);
    HRESULT (*SetStatusText)(struct IOleInPlaceFrame *, LPCOLESTR);
    HRESULT (*EnableModeless)(struct IOleInPlaceFrame *, BOOL);
    HRESULT (*TranslateAcceleratorA)(struct IOleInPlaceFrame *, LPMSG, WORD);
};

typedef struct IDropSource *LPDROPSOURCE;

typedef struct IDropTarget *LPDROPTARGET;

typedef struct IOleInPlaceFrame *LPOLEINPLACEFRAME;

typedef struct tagOIFI tagOIFI, *PtagOIFI;

typedef struct tagOIFI *LPOLEINPLACEFRAMEINFO;

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

typedef struct HACCEL__ *HACCEL;

struct HACCEL__ {
    int unused;
};

struct tagOIFI {
    UINT cb;
    BOOL fMDIApp;
    HWND hwndFrame;
    HACCEL haccel;
    UINT cAccelEntries;
};

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; /* 332 */
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_IMPORT_BY_NAME_18 IMAGE_IMPORT_BY_NAME_18, *PIMAGE_IMPORT_BY_NAME_18;

struct IMAGE_IMPORT_BY_NAME_18 {
    word Hint;
    char Name[18];
};

typedef struct IMAGE_IMPORT_BY_NAME_26 IMAGE_IMPORT_BY_NAME_26, *PIMAGE_IMPORT_BY_NAME_26;

struct IMAGE_IMPORT_BY_NAME_26 {
    word Hint;
    char Name[26];
};

typedef struct IMAGE_IMPORT_BY_NAME_27 IMAGE_IMPORT_BY_NAME_27, *PIMAGE_IMPORT_BY_NAME_27;

struct IMAGE_IMPORT_BY_NAME_27 {
    word Hint;
    char Name[27];
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct ImgDelayDescr ImgDelayDescr, *PImgDelayDescr;

struct ImgDelayDescr {
    dword grAttrs;
    ImageBaseOffset32 szName;
    ImageBaseOffset32 phmod;
    ImageBaseOffset32 pIAT;
    ImageBaseOffset32 pINT;
    ImageBaseOffset32 pBoundIAT;
    ImageBaseOffset32 pUnloadIAT;
    dword dwTimeStamp;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct _PROPSHEETHEADERA_V2 _PROPSHEETHEADERA_V2, *P_PROPSHEETHEADERA_V2;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef union _union_1954 _union_1954, *P_union_1954;

typedef CHAR *LPCSTR;

typedef union _union_1955 _union_1955, *P_union_1955;

typedef union _union_1956 _union_1956, *P_union_1956;

typedef int (*PFNPROPSHEETCALLBACK)(HWND, UINT, LPARAM);

typedef union _union_1957 _union_1957, *P_union_1957;

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

typedef struct HPALETTE__ *HPALETTE;

typedef union _union_1958 _union_1958, *P_union_1958;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef struct _PROPSHEETPAGEA _PROPSHEETPAGEA, *P_PROPSHEETPAGEA;

typedef struct _PROPSHEETPAGEA PROPSHEETPAGEA_V4;

typedef PROPSHEETPAGEA_V4 *LPCPROPSHEETPAGEA_V4;

typedef LPCPROPSHEETPAGEA_V4 LPCPROPSHEETPAGEA;

typedef struct _PSP _PSP, *P_PSP;

typedef struct _PSP *HPROPSHEETPAGE;

typedef union _union_1933 _union_1933, *P_union_1933;

typedef union _union_1934 _union_1934, *P_union_1934;

typedef INT_PTR (*DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef UINT (*LPFNPSPCALLBACKA)(HWND, UINT, struct _PROPSHEETPAGEA *);

typedef union _union_1935 _union_1935, *P_union_1935;

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

typedef struct DLGTEMPLATE *LPCDLGTEMPLATEA;

typedef LPCDLGTEMPLATEA LPCDLGTEMPLATE;

typedef LPCDLGTEMPLATE PROPSHEETPAGE_RESOURCE;

struct _PSP {
};

struct HICON__ {
    int unused;
};

struct DLGTEMPLATE {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
};

union _union_1956 {
    LPCPROPSHEETPAGEA ppsp;
    HPROPSHEETPAGE *phpage;
};

union _union_1934 {
    HICON hIcon;
    LPCSTR pszIcon;
};

union _union_1957 {
    HBITMAP hbmWatermark;
    LPCSTR pszbmWatermark;
};

union _union_1935 {
    HBITMAP hbmHeader;
    LPCSTR pszbmHeader;
};

union _union_1958 {
    HBITMAP hbmHeader;
    LPCSTR pszbmHeader;
};

union _union_1954 {
    HICON hIcon;
    LPCSTR pszIcon;
};

union _union_1955 {
    UINT nStartPage;
    LPCSTR pStartPage;
};

union _union_1933 {
    LPCSTR pszTemplate;
    PROPSHEETPAGE_RESOURCE pResource;
};

struct _PROPSHEETPAGEA {
    DWORD dwSize;
    DWORD dwFlags;
    HINSTANCE hInstance;
    union _union_1933 u;
    union _union_1934 u2;
    LPCSTR pszTitle;
    DLGPROC pfnDlgProc;
    LPARAM lParam;
    LPFNPSPCALLBACKA pfnCallback;
    UINT *pcRefParent;
    LPCSTR pszHeaderTitle;
    LPCSTR pszHeaderSubTitle;
    HANDLE hActCtx;
    union _union_1935 u3;
};

struct HPALETTE__ {
    int unused;
};

struct _PROPSHEETHEADERA_V2 {
    DWORD dwSize;
    DWORD dwFlags;
    HWND hwndParent;
    HINSTANCE hInstance;
    union _union_1954 u;
    LPCSTR pszCaption;
    UINT nPages;
    union _union_1955 u2;
    union _union_1956 u3;
    PFNPROPSHEETCALLBACK pfnCallback;
    union _union_1957 u4;
    HPALETTE hplWatermark;
    union _union_1958 u5;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct _PROPSHEETHEADERA_V2 PROPSHEETHEADERA_V2;

typedef PROPSHEETHEADERA_V2 *LPCPROPSHEETHEADERA_V2;

typedef LPCPROPSHEETHEADERA_V2 LPCPROPSHEETHEADERA;

typedef struct _SP_DEVICE_INTERFACE_DATA _SP_DEVICE_INTERFACE_DATA, *P_SP_DEVICE_INTERFACE_DATA;

struct _SP_DEVICE_INTERFACE_DATA {
    DWORD cbSize;
    GUID InterfaceClassGuid;
    DWORD Flags;
    ULONG_PTR Reserved;
};

typedef struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A _SP_DEVICE_INTERFACE_DETAIL_DATA_A, *P_SP_DEVICE_INTERFACE_DETAIL_DATA_A;

struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A {
    DWORD cbSize;
    CHAR DevicePath[1];
};

typedef struct _SP_DEVINFO_DATA _SP_DEVINFO_DATA, *P_SP_DEVINFO_DATA;

struct _SP_DEVINFO_DATA {
    DWORD cbSize;
    GUID ClassGuid;
    DWORD DevInst;
    ULONG_PTR Reserved;
};

typedef PVOID HDEVINFO;

typedef struct _SP_DEVICE_INTERFACE_DATA *PSP_DEVICE_INTERFACE_DATA;

typedef struct _SP_DEVICE_INTERFACE_DETAIL_DATA_A *PSP_DEVICE_INTERFACE_DETAIL_DATA_A;

typedef struct _SP_DEVINFO_DATA *PSP_DEVINFO_DATA;

typedef struct _AppBarData _AppBarData, *P_AppBarData;

struct _AppBarData {
    DWORD cbSize;
    HWND hWnd;
    UINT uCallbackMessage;
    UINT uEdge;
    RECT rc;
    LPARAM lParam;
};

typedef struct _SHELLEXECUTEINFOW _SHELLEXECUTEINFOW, *P_SHELLEXECUTEINFOW;


/* WARNING! conflicting data type names: /WinDef.h/ULONG - /wtypes.h/ULONG */

typedef WCHAR *LPCWSTR;

typedef struct HKEY__ HKEY__, *PHKEY__;

typedef struct HKEY__ *HKEY;

typedef union _union_1208 _union_1208, *P_union_1208;

struct HKEY__ {
    int unused;
};

union _union_1208 {
    HANDLE hIcon;
};

struct _SHELLEXECUTEINFOW {
    DWORD cbSize;
    ULONG fMask;
    HWND hwnd;
    LPCWSTR lpVerb;
    LPCWSTR lpFile;
    LPCWSTR lpParameters;
    LPCWSTR lpDirectory;
    int nShow;
    HINSTANCE hInstApp;
    void *lpIDList;
    LPCWSTR lpClass;
    HKEY hkeyClass;
    DWORD dwHotKey;
    union _union_1208 u;
    HANDLE hProcess;
};

typedef struct _SHFILEINFOW _SHFILEINFOW, *P_SHFILEINFOW;

struct _SHFILEINFOW {
    HICON hIcon;
    int iIcon;
    DWORD dwAttributes;
    WCHAR szDisplayName[260];
    WCHAR szTypeName[80];
};

typedef struct _SHFILEOPSTRUCTW _SHFILEOPSTRUCTW, *P_SHFILEOPSTRUCTW;

typedef WORD FILEOP_FLAGS;

typedef void *LPVOID;

struct _SHFILEOPSTRUCTW {
    HWND hwnd;
    UINT wFunc;
    LPCWSTR pFrom;
    LPCWSTR pTo;
    FILEOP_FLAGS fFlags;
    BOOL fAnyOperationsAborted;
    LPVOID hNameMappings;
    LPCWSTR lpszProgressTitle;
};

typedef struct HDROP__ HDROP__, *PHDROP__;

typedef struct HDROP__ *HDROP;

struct HDROP__ {
    int unused;
};

typedef struct _SHFILEOPSTRUCTW *LPSHFILEOPSTRUCTW;

typedef struct _AppBarData *PAPPBARDATA;

typedef struct _SHELLEXECUTEINFOW SHELLEXECUTEINFOW;

typedef struct _SHFILEINFOW SHFILEINFOW;

typedef struct _browseinfoW _browseinfoW, *P_browseinfoW;

typedef struct _ITEMIDLIST _ITEMIDLIST, *P_ITEMIDLIST;

typedef struct _ITEMIDLIST ITEMIDLIST;

typedef ITEMIDLIST *LPCITEMIDLIST;

typedef WCHAR *LPWSTR;

typedef int (*BFFCALLBACK)(HWND, UINT, LPARAM, LPARAM);

typedef struct _SHITEMID _SHITEMID, *P_SHITEMID;

typedef struct _SHITEMID SHITEMID;

struct _SHITEMID {
    USHORT cb;
    BYTE abID[1];
};

struct _ITEMIDLIST {
    SHITEMID mkid;
};

struct _browseinfoW {
    HWND hwndOwner;
    LPCITEMIDLIST pidlRoot;
    LPWSTR pszDisplayName;
    LPCWSTR lpszTitle;
    UINT ulFlags;
    BFFCALLBACK lpfn;
    LPARAM lParam;
    int iImage;
};

typedef struct _browseinfoW *LPBROWSEINFOW;

typedef int STIF_FLAGS;

typedef HANDLE HTHEME;

typedef ITEMIDLIST *LPITEMIDLIST;

typedef struct __non_rtti_object __non_rtti_object, *P__non_rtti_object;

struct __non_rtti_object { /* PlaceHolder Class Structure */
};

typedef struct bad_cast bad_cast, *Pbad_cast;

struct bad_cast { /* PlaceHolder Class Structure */
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { /* PlaceHolder Class Structure */
};

typedef struct bad_typeid bad_typeid, *Pbad_typeid;

struct bad_typeid { /* PlaceHolder Class Structure */
};

typedef struct exception exception, *Pexception;

struct exception { /* PlaceHolder Class Structure */
};

typedef struct _CRT_DOUBLE _CRT_DOUBLE, *P_CRT_DOUBLE;

struct _CRT_DOUBLE {
    double x;
};

typedef struct _CRT_FLOAT _CRT_FLOAT, *P_CRT_FLOAT;

struct _CRT_FLOAT {
    float f;
};

typedef struct _LDBL12 _LDBL12, *P_LDBL12;

struct _LDBL12 {
    uchar ld12[12];
};

typedef int (*_onexit_t)(void);

typedef wchar_t *STRSAFE_PCNZWCH;

typedef long clock_t;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef struct IUnknown *LPUNKNOWN;

typedef char *va_list;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef struct _struct_519 _struct_519, *P_struct_519;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR *LPSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _SYSTEM_POWER_STATUS _SYSTEM_POWER_STATUS, *P_SYSTEM_POWER_STATUS;

struct _SYSTEM_POWER_STATUS {
    BYTE ACLineStatus;
    BYTE BatteryFlag;
    BYTE BatteryLifePercent;
    BYTE Reserved1;
    DWORD BatteryLifeTime;
    DWORD BatteryFullLifeTime;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef HINSTANCE HMODULE;

typedef BOOL (*ENUMRESLANGPROCW)(HMODULE, LPCWSTR, LPCWSTR, WORD, LONG_PTR);

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef struct _SYSTEM_POWER_STATUS *LPSYSTEM_POWER_STATUS;

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef WORD ATOM;

typedef DWORD COLORREF;

typedef int (*FARPROC)(void);

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

struct HBRUSH__ {
    int unused;
};

typedef HICON HCURSOR;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

struct HDC__ {
    int unused;
};

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef void *HGDIOBJ;

typedef struct HHOOK__ HHOOK__, *PHHOOK__;

typedef struct HHOOK__ *HHOOK;

struct HHOOK__ {
    int unused;
};

typedef struct HKL__ HKL__, *PHKL__;

typedef struct HKL__ *HKL;

struct HKL__ {
    int unused;
};

typedef HANDLE HLOCAL;

typedef struct HMETAFILE__ HMETAFILE__, *PHMETAFILE__;

typedef struct HMETAFILE__ *HMETAFILE;

struct HMETAFILE__ {
    int unused;
};

typedef struct HPEN__ HPEN__, *PHPEN__;

typedef struct HPEN__ *HPEN;

struct HPEN__ {
    int unused;
};

typedef struct HRGN__ HRGN__, *PHRGN__;

typedef struct HRGN__ *HRGN;

struct HRGN__ {
    int unused;
};

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ *HRSRC;

struct HRSRC__ {
    int unused;
};

typedef BOOL *LPBOOL;

typedef void *LPCVOID;

typedef DWORD *LPDWORD;

typedef struct _FILETIME *LPFILETIME;

typedef HANDLE *LPHANDLE;

typedef int *LPINT;

typedef struct tagPOINT *LPPOINT;

typedef struct tagSIZE tagSIZE, *PtagSIZE;

typedef struct tagSIZE *LPSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef WORD *LPWORD;

typedef LONG_PTR LRESULT;

typedef BYTE *PBYTE;

typedef DWORD *PDWORD;

typedef struct _FILETIME *PFILETIME;

typedef HKEY *PHKEY;

typedef struct tagSIZE SIZE;

typedef struct _BLENDFUNCTION _BLENDFUNCTION, *P_BLENDFUNCTION;

struct _BLENDFUNCTION {
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
};

typedef struct _devicemodeW _devicemodeW, *P_devicemodeW;

typedef union _union_660 _union_660, *P_union_660;

typedef union _union_663 _union_663, *P_union_663;

typedef struct _struct_661 _struct_661, *P_struct_661;

typedef struct _struct_662 _struct_662, *P_struct_662;

union _union_663 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _struct_661 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

struct _struct_662 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

union _union_660 {
    struct _struct_661 field0;
    struct _struct_662 field1;
};

struct _devicemodeW {
    WCHAR dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_660 field6_0x4c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_663 field17_0xb4;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct _BLENDFUNCTION BLENDFUNCTION;

typedef struct tagLOGFONTW tagLOGFONTW, *PtagLOGFONTW;

typedef struct tagLOGFONTW LOGFONTW;

typedef struct tagTEXTMETRICW tagTEXTMETRICW, *PtagTEXTMETRICW;

typedef struct tagTEXTMETRICW TEXTMETRICW;

typedef int (*OLDFONTENUMPROCW)(LOGFONTW *, TEXTMETRICW *, DWORD, LPARAM);

typedef OLDFONTENUMPROCW FONTENUMPROCW;

struct tagLOGFONTW {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[32];
};

struct tagTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef struct tagLOGPALETTE tagLOGPALETTE, *PtagLOGPALETTE;

typedef struct tagLOGPALETTE LOGPALETTE;

typedef struct tagPALETTEENTRY tagPALETTEENTRY, *PtagPALETTEENTRY;

typedef struct tagPALETTEENTRY PALETTEENTRY;

struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
};

struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    PALETTEENTRY palPalEntry[1];
};

typedef struct _devicemodeW *LPDEVMODEW;

typedef struct tagFONTSIGNATURE tagFONTSIGNATURE, *PtagFONTSIGNATURE;

typedef struct tagFONTSIGNATURE *LPFONTSIGNATURE;

struct tagFONTSIGNATURE {
    DWORD fsUsb[4];
    DWORD fsCsb[2];
};

typedef struct tagLOGFONTW *LPLOGFONTW;

typedef struct tagPALETTEENTRY *LPPALETTEENTRY;

typedef struct tagTEXTMETRICW *LPTEXTMETRICW;

typedef struct _devicemodeW *PDEVMODEW;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef DWORD LCTYPE;

typedef struct _cpinfo *LPCPINFO;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_226 _union_226, *P_union_226;

union _union_226 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_226 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOW _OSVERSIONINFOW, *P_OSVERSIONINFOW;

struct _OSVERSIONINFOW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR szCSDVersion[128];
};

typedef DWORD ACCESS_MASK;

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef struct _OSVERSIONINFOW *LPOSVERSIONINFOW;

typedef WCHAR *LPWCH;

typedef CHAR *PCNZCH;

typedef WCHAR *PCNZWCH;

typedef CHAR *PCSTR;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef LONG *PLONG;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct _PRINTER_DEFAULTSW _PRINTER_DEFAULTSW, *P_PRINTER_DEFAULTSW;

struct _PRINTER_DEFAULTSW {
    LPWSTR pDatatype;
    LPDEVMODEW pDevMode;
    ACCESS_MASK DesiredAccess;
};

typedef struct _PRINTER_DEFAULTSW *LPPRINTER_DEFAULTSW;

typedef struct _ICONINFO _ICONINFO, *P_ICONINFO;

struct _ICONINFO {
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
};

typedef BOOL (*DRAWSTATEPROC)(HDC, LPARAM, WPARAM, int, int);

typedef BOOL (*GRAYSTRINGPROC)(HDC, LPARAM, int);

typedef PVOID HDEVNOTIFY;

typedef HANDLE HDWP;

typedef LRESULT (*HOOKPROC)(int, WPARAM, LPARAM);

typedef struct _ICONINFO ICONINFO;

typedef struct tagACCEL tagACCEL, *PtagACCEL;

typedef struct tagACCEL *LPACCEL;

struct tagACCEL {
    BYTE fVirt;
    WORD key;
    WORD cmd;
};

typedef struct DLGTEMPLATE *LPCDLGTEMPLATEW;

typedef struct tagMENUITEMINFOW tagMENUITEMINFOW, *PtagMENUITEMINFOW;

typedef struct tagMENUITEMINFOW MENUITEMINFOW;

typedef MENUITEMINFOW *LPCMENUITEMINFOW;

struct tagMENUITEMINFOW {
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPWSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
};

typedef struct tagSCROLLINFO tagSCROLLINFO, *PtagSCROLLINFO;

typedef struct tagSCROLLINFO SCROLLINFO;

typedef SCROLLINFO *LPCSCROLLINFO;

struct tagSCROLLINFO {
    UINT cbSize;
    UINT fMask;
    int nMin;
    int nMax;
    UINT nPage;
    int nPos;
    int nTrackPos;
};

typedef struct tagDRAWTEXTPARAMS tagDRAWTEXTPARAMS, *PtagDRAWTEXTPARAMS;

typedef struct tagDRAWTEXTPARAMS *LPDRAWTEXTPARAMS;

struct tagDRAWTEXTPARAMS {
    UINT cbSize;
    int iTabLength;
    int iLeftMargin;
    int iRightMargin;
    UINT uiLengthDrawn;
};

typedef struct tagMENUITEMINFOW *LPMENUITEMINFOW;

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct tagSCROLLINFO *LPSCROLLINFO;

typedef struct tagTRACKMOUSEEVENT tagTRACKMOUSEEVENT, *PtagTRACKMOUSEEVENT;

typedef struct tagTRACKMOUSEEVENT *LPTRACKMOUSEEVENT;

struct tagTRACKMOUSEEVENT {
    DWORD cbSize;
    DWORD dwFlags;
    HWND hwndTrack;
    DWORD dwHoverTime;
};

typedef struct tagWNDCLASSEXW tagWNDCLASSEXW, *PtagWNDCLASSEXW;

typedef struct tagWNDCLASSEXW *LPWNDCLASSEXW;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagWNDCLASSEXW {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON hIconSm;
};

typedef struct tagWNDCLASSW tagWNDCLASSW, *PtagWNDCLASSW;

typedef struct tagWNDCLASSW *LPWNDCLASSW;

struct tagWNDCLASSW {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
};

typedef struct tagMSG MSG;

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef ICONINFO *PICONINFO;

typedef struct tagWINDOWPLACEMENT tagWINDOWPLACEMENT, *PtagWINDOWPLACEMENT;

struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
};

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef struct tagWINDOWPLACEMENT WINDOWPLACEMENT;

typedef struct tagWNDCLASSW WNDCLASSW;

typedef ulonglong __uint64;

typedef struct _AFX_BASE_MODULE_STATE _AFX_BASE_MODULE_STATE, *P_AFX_BASE_MODULE_STATE;

struct _AFX_BASE_MODULE_STATE { /* PlaceHolder Class Structure */
};

typedef struct _AFX_CHECKLIST_STATE _AFX_CHECKLIST_STATE, *P_AFX_CHECKLIST_STATE;

struct _AFX_CHECKLIST_STATE { /* PlaceHolder Class Structure */
};

typedef struct _AFX_EDIT_STATE _AFX_EDIT_STATE, *P_AFX_EDIT_STATE;

struct _AFX_EDIT_STATE { /* PlaceHolder Class Structure */
};

typedef struct _AFX_MOUSEANCHORWND _AFX_MOUSEANCHORWND, *P_AFX_MOUSEANCHORWND;

struct _AFX_MOUSEANCHORWND { /* PlaceHolder Class Structure */
};

typedef struct _AFX_OLE_STATE _AFX_OLE_STATE, *P_AFX_OLE_STATE;

struct _AFX_OLE_STATE { /* PlaceHolder Class Structure */
};

typedef struct _AFX_PROPPAGEFONTINFO _AFX_PROPPAGEFONTINFO, *P_AFX_PROPPAGEFONTINFO;

struct _AFX_PROPPAGEFONTINFO { /* PlaceHolder Class Structure */
};

typedef struct _AFX_RICHEDIT_STATE _AFX_RICHEDIT_STATE, *P_AFX_RICHEDIT_STATE;

struct _AFX_RICHEDIT_STATE { /* PlaceHolder Class Structure */
};

typedef struct _AFX_THREAD_STATE _AFX_THREAD_STATE, *P_AFX_THREAD_STATE;

struct _AFX_THREAD_STATE { /* PlaceHolder Class Structure */
};

typedef struct _CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*> _CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*>, *P_CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*>;

struct _CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*> { /* PlaceHolder Class Structure */
};

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; /* bit flags */
    dword numBaseClasses; /* number of base classes (i.e. rtti1Count) */
    RTTIBaseClassDescriptor **pBaseClassArray; /* ref to BaseClassArray (RTTI 2) */
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor *pTypeDescriptor; /* ref to TypeDescriptor (RTTI 0) for class */
    dword numContainedBases; /* count of extended classes in BaseClassArray (RTTI 2) */
    struct PMD where; /* member displacement structure */
    dword attributes; /* bit flags */
    RTTIClassHierarchyDescriptor *pClassHierarchyDescriptor; /* ref to ClassHierarchyDescriptor (RTTI 3) for class */
};

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; /* offset of vbtable within class */
    dword cdOffset; /* constructor displacement offset */
    struct TypeDescriptor *pTypeDescriptor; /* ref to TypeDescriptor (RTTI 0) for class */
    RTTIClassHierarchyDescriptor *pClassDescriptor; /* ref to ClassHierarchyDescriptor (RTTI 3) */
};

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

struct _s_ESTypeList {
    int nCount;
    HandlerType *pTypeArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s_ESTypeList ESTypeList;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
    ESTypeList *pESTypeList;
    int EHFlags;
};

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

typedef struct AFX_MODULE_STATE AFX_MODULE_STATE, *PAFX_MODULE_STATE;

struct AFX_MODULE_STATE { /* PlaceHolder Class Structure */
};

typedef struct AFX_MODULE_THREAD_STATE AFX_MODULE_THREAD_STATE, *PAFX_MODULE_THREAD_STATE;

struct AFX_MODULE_THREAD_STATE { /* PlaceHolder Class Structure */
};

typedef struct CAfxStringMgr CAfxStringMgr, *PCAfxStringMgr;

struct CAfxStringMgr { /* PlaceHolder Class Structure */
};

typedef struct CArchiveStream CArchiveStream, *PCArchiveStream;

struct CArchiveStream { /* PlaceHolder Class Structure */
};

typedef struct CArray<class_CVariantBoolPair,class_CVariantBoolPair_const&> CArray<class_CVariantBoolPair,class_CVariantBoolPair_const&>, *PCArray<class_CVariantBoolPair,class_CVariantBoolPair_const&>;

struct CArray<class_CVariantBoolPair,class_CVariantBoolPair_const&> { /* PlaceHolder Class Structure */
};

typedef struct CArray<enum_CArchive::LoadArrayObjType,enum_CArchive::LoadArrayObjType_const&> CArray<enum_CArchive::LoadArrayObjType,enum_CArchive::LoadArrayObjType_const&>, *PCArray<enum_CArchive::LoadArrayObjType,enum_CArchive::LoadArrayObjType_const&>;

struct CArray<enum_CArchive::LoadArrayObjType,enum_CArchive::LoadArrayObjType_const&> { /* PlaceHolder Class Structure */
};

typedef struct CArray<int,int> CArray<int,int>, *PCArray<int,int>;

struct CArray<int,int> { /* PlaceHolder Class Structure */
};

typedef struct CArray<int,int_const&> CArray<int,int_const&>, *PCArray<int,int_const&>;

struct CArray<int,int_const&> { /* PlaceHolder Class Structure */
};

typedef struct CArray<struct_HWND__*,struct_HWND__*> CArray<struct_HWND__*,struct_HWND__*>, *PCArray<struct_HWND__*,struct_HWND__*>;

struct CArray<struct_HWND__*,struct_HWND__*> { /* PlaceHolder Class Structure */
};

typedef struct CAutoHideDockSite CAutoHideDockSite, *PCAutoHideDockSite;

struct CAutoHideDockSite { /* PlaceHolder Class Structure */
};

typedef struct CBitmap CBitmap, *PCBitmap;

struct CBitmap { /* PlaceHolder Class Structure */
};

typedef struct CBrush CBrush, *PCBrush;

struct CBrush { /* PlaceHolder Class Structure */
};

typedef struct CButton CButton, *PCButton;

struct CButton { /* PlaceHolder Class Structure */
};

typedef struct CByteArray CByteArray, *PCByteArray;

struct CByteArray { /* PlaceHolder Class Structure */
};

typedef struct CCellObj CCellObj, *PCCellObj;

struct CCellObj { /* PlaceHolder Class Structure */
};

typedef struct CCheckListBox CCheckListBox, *PCCheckListBox;

struct CCheckListBox { /* PlaceHolder Class Structure */
};

typedef struct CChevronOwnerDrawMenu CChevronOwnerDrawMenu, *PCChevronOwnerDrawMenu;

struct CChevronOwnerDrawMenu { /* PlaceHolder Class Structure */
};

typedef struct CClientDC CClientDC, *PCClientDC;

struct CClientDC { /* PlaceHolder Class Structure */
};

typedef struct CCmdUI CCmdUI, *PCCmdUI;

struct CCmdUI { /* PlaceHolder Class Structure */
};

typedef struct CColorDialog CColorDialog, *PCColorDialog;

struct CColorDialog { /* PlaceHolder Class Structure */
};

typedef struct CComboBox CComboBox, *PCComboBox;

struct CComboBox { /* PlaceHolder Class Structure */
};

typedef struct CComCtlWrapper CComCtlWrapper, *PCComCtlWrapper;

struct CComCtlWrapper { /* PlaceHolder Class Structure */
};

typedef struct CCommandManager CCommandManager, *PCCommandManager;

struct CCommandManager { /* PlaceHolder Class Structure */
};

typedef struct CCommDlgWrapper CCommDlgWrapper, *PCCommDlgWrapper;

struct CCommDlgWrapper { /* PlaceHolder Class Structure */
};

typedef struct CCommonDialog CCommonDialog, *PCCommonDialog;

struct CCommonDialog { /* PlaceHolder Class Structure */
};

typedef struct CControlBar CControlBar, *PCControlBar;

struct CControlBar { /* PlaceHolder Class Structure */
};

typedef struct CControlSiteFactoryMgr CControlSiteFactoryMgr, *PCControlSiteFactoryMgr;

struct CControlSiteFactoryMgr { /* PlaceHolder Class Structure */
};

typedef struct CCriticalSection CCriticalSection, *PCCriticalSection;

struct CCriticalSection { /* PlaceHolder Class Structure */
};

typedef struct CDataSourceControl CDataSourceControl, *PCDataSourceControl;

struct CDataSourceControl { /* PlaceHolder Class Structure */
};

typedef struct CDialog CDialog, *PCDialog;

struct CDialog { /* PlaceHolder Class Structure */
};

typedef struct CDialogEx CDialogEx, *PCDialogEx;

struct CDialogEx { /* PlaceHolder Class Structure */
};

typedef struct CDialogImpl CDialogImpl, *PCDialogImpl;

struct CDialogImpl { /* PlaceHolder Class Structure */
};

typedef struct CDllIsolationWrapperBase CDllIsolationWrapperBase, *PCDllIsolationWrapperBase;

struct CDllIsolationWrapperBase { /* PlaceHolder Class Structure */
};

typedef struct CDocItem CDocItem, *PCDocItem;

struct CDocItem { /* PlaceHolder Class Structure */
};

typedef struct CDockablePaneAdapter CDockablePaneAdapter, *PCDockablePaneAdapter;

struct CDockablePaneAdapter { /* PlaceHolder Class Structure */
};

typedef struct CDockBar CDockBar, *PCDockBar;

struct CDockBar { /* PlaceHolder Class Structure */
};

typedef struct CDockingPanesRow CDockingPanesRow, *PCDockingPanesRow;

struct CDockingPanesRow { /* PlaceHolder Class Structure */
};

typedef struct CDockState CDockState, *PCDockState;

struct CDockState { /* PlaceHolder Class Structure */
};

typedef struct CDrawingManager CDrawingManager, *PCDrawingManager;

struct CDrawingManager { /* PlaceHolder Class Structure */
};

typedef struct CEdit CEdit, *PCEdit;

struct CEdit { /* PlaceHolder Class Structure */
};

typedef struct CEnumArray CEnumArray, *PCEnumArray;

struct CEnumArray { /* PlaceHolder Class Structure */
};

typedef struct CEnumFormatEtc CEnumFormatEtc, *PCEnumFormatEtc;

struct CEnumFormatEtc { /* PlaceHolder Class Structure */
};

typedef struct CEnumUnknown CEnumUnknown, *PCEnumUnknown;

struct CEnumUnknown { /* PlaceHolder Class Structure */
};

typedef struct CException CException, *PCException;

struct CException { /* PlaceHolder Class Structure */
};

typedef struct CFileDialog CFileDialog, *PCFileDialog;

struct CFileDialog { /* PlaceHolder Class Structure */
};

typedef struct CFileException CFileException, *PCFileException;

struct CFileException { /* PlaceHolder Class Structure */
};

typedef struct CFrameImpl CFrameImpl, *PCFrameImpl;

struct CFrameImpl { /* PlaceHolder Class Structure */
};

typedef struct CFrameWndEx CFrameWndEx, *PCFrameWndEx;

struct CFrameWndEx { /* PlaceHolder Class Structure */
};

typedef struct CFullScreenImpl CFullScreenImpl, *PCFullScreenImpl;

struct CFullScreenImpl { /* PlaceHolder Class Structure */
};

typedef struct CGlobalUtils CGlobalUtils, *PCGlobalUtils;

struct CGlobalUtils { /* PlaceHolder Class Structure */
};

typedef struct CHandleMap CHandleMap, *PCHandleMap;

struct CHandleMap { /* PlaceHolder Class Structure */
};

typedef struct CHelpComboBoxButton CHelpComboBoxButton, *PCHelpComboBoxButton;

struct CHelpComboBoxButton { /* PlaceHolder Class Structure */
};

typedef struct CImageList CImageList, *PCImageList;

struct CImageList { /* PlaceHolder Class Structure */
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct CList<class_IControlSiteFactory*,class_IControlSiteFactory*> CList<class_IControlSiteFactory*,class_IControlSiteFactory*>, *PCList<class_IControlSiteFactory*,class_IControlSiteFactory*>;

struct CList<class_IControlSiteFactory*,class_IControlSiteFactory*> { /* PlaceHolder Class Structure */
};

typedef struct CList<struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> CList<struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>, *PCList<struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>;

struct CList<struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,struct_AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> { /* PlaceHolder Class Structure */
};

typedef struct CList<struct_CMFCRestoredTabInfo,struct_CMFCRestoredTabInfo> CList<struct_CMFCRestoredTabInfo,struct_CMFCRestoredTabInfo>, *PCList<struct_CMFCRestoredTabInfo,struct_CMFCRestoredTabInfo>;

struct CList<struct_CMFCRestoredTabInfo,struct_CMFCRestoredTabInfo> { /* PlaceHolder Class Structure */
};

typedef struct CList<struct_HWND__*,struct_HWND__*&> CList<struct_HWND__*,struct_HWND__*&>, *PCList<struct_HWND__*,struct_HWND__*&>;

struct CList<struct_HWND__*,struct_HWND__*&> { /* PlaceHolder Class Structure */
};

typedef struct CList<struct_HWND__*,struct_HWND__*> CList<struct_HWND__*,struct_HWND__*>, *PCList<struct_HWND__*,struct_HWND__*>;

struct CList<struct_HWND__*,struct_HWND__*> { /* PlaceHolder Class Structure */
};

typedef struct CList<struct_tagPOINT,struct_tagPOINT> CList<struct_tagPOINT,struct_tagPOINT>, *PCList<struct_tagPOINT,struct_tagPOINT>;

struct CList<struct_tagPOINT,struct_tagPOINT> { /* PlaceHolder Class Structure */
};

typedef struct CList<unsigned_int,unsigned_int&> CList<unsigned_int,unsigned_int&>, *PCList<unsigned_int,unsigned_int&>;

struct CList<unsigned_int,unsigned_int&> { /* PlaceHolder Class Structure */
};

typedef struct CList<unsigned_int,unsigned_int> CList<unsigned_int,unsigned_int>, *PCList<unsigned_int,unsigned_int>;

struct CList<unsigned_int,unsigned_int> { /* PlaceHolder Class Structure */
};

typedef struct CListBox CListBox, *PCListBox;

struct CListBox { /* PlaceHolder Class Structure */
};

typedef struct CListCtrl CListCtrl, *PCListCtrl;

struct CListCtrl { /* PlaceHolder Class Structure */
};

typedef struct CMap<int,int,int,int> CMap<int,int,int,int>, *PCMap<int,int,int,int>;

struct CMap<int,int,int,int> { /* PlaceHolder Class Structure */
};

typedef struct CMap<unsigned_int,unsigned_int&,class_CMFCToolBarButton*,class_CMFCToolBarButton*&> CMap<unsigned_int,unsigned_int&,class_CMFCToolBarButton*,class_CMFCToolBarButton*&>, *PCMap<unsigned_int,unsigned_int&,class_CMFCToolBarButton*,class_CMFCToolBarButton*&>;

struct CMap<unsigned_int,unsigned_int&,class_CMFCToolBarButton*,class_CMFCToolBarButton*&> { /* PlaceHolder Class Structure */
};

typedef struct CMap<unsigned_int,unsigned_int,int,int> CMap<unsigned_int,unsigned_int,int,int>, *PCMap<unsigned_int,unsigned_int,int,int>;

struct CMap<unsigned_int,unsigned_int,int,int> { /* PlaceHolder Class Structure */
};

typedef struct CMapPtrToPtr CMapPtrToPtr, *PCMapPtrToPtr;

struct CMapPtrToPtr { /* PlaceHolder Class Structure */
};

typedef struct CMapStringToPtr CMapStringToPtr, *PCMapStringToPtr;

struct CMapStringToPtr { /* PlaceHolder Class Structure */
};

typedef struct CMDIChildWndEx CMDIChildWndEx, *PCMDIChildWndEx;

struct CMDIChildWndEx { /* PlaceHolder Class Structure */
};

typedef struct CMDIClientAreaWnd CMDIClientAreaWnd, *PCMDIClientAreaWnd;

struct CMDIClientAreaWnd { /* PlaceHolder Class Structure */
};

typedef struct CMDIFrameWnd CMDIFrameWnd, *PCMDIFrameWnd;

struct CMDIFrameWnd { /* PlaceHolder Class Structure */
};

typedef struct CMDIFrameWndEx CMDIFrameWndEx, *PCMDIFrameWndEx;

struct CMDIFrameWndEx { /* PlaceHolder Class Structure */
};

typedef struct CMemFile CMemFile, *PCMemFile;

struct CMemFile { /* PlaceHolder Class Structure */
};

typedef struct CMenuHash CMenuHash, *PCMenuHash;

struct CMenuHash { /* PlaceHolder Class Structure */
};

typedef struct CMFCAcceleratorKey CMFCAcceleratorKey, *PCMFCAcceleratorKey;

struct CMFCAcceleratorKey { /* PlaceHolder Class Structure */
};

typedef struct CMFCAcceleratorKeyAssignCtrl CMFCAcceleratorKeyAssignCtrl, *PCMFCAcceleratorKeyAssignCtrl;

struct CMFCAcceleratorKeyAssignCtrl { /* PlaceHolder Class Structure */
};

typedef struct CMFCBaseToolBar CMFCBaseToolBar, *PCMFCBaseToolBar;

struct CMFCBaseToolBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCBaseVisualManager CMFCBaseVisualManager, *PCMFCBaseVisualManager;

struct CMFCBaseVisualManager { /* PlaceHolder Class Structure */
};

typedef struct CMFCButton CMFCButton, *PCMFCButton;

struct CMFCButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCCaptionMenuButton CMFCCaptionMenuButton, *PCMFCCaptionMenuButton;

struct CMFCCaptionMenuButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCCmdUsageCount CMFCCmdUsageCount, *PCMFCCmdUsageCount;

struct CMFCCmdUsageCount { /* PlaceHolder Class Structure */
};

typedef struct CMFCColorBar CMFCColorBar, *PCMFCColorBar;

struct CMFCColorBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCColorDialog CMFCColorDialog, *PCMFCColorDialog;

struct CMFCColorDialog { /* PlaceHolder Class Structure */
};

typedef struct CMFCColorMenuButton CMFCColorMenuButton, *PCMFCColorMenuButton;

struct CMFCColorMenuButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCColorPickerCtrl CMFCColorPickerCtrl, *PCMFCColorPickerCtrl;

struct CMFCColorPickerCtrl { /* PlaceHolder Class Structure */
};

typedef struct CMFCColorPopupMenu CMFCColorPopupMenu, *PCMFCColorPopupMenu;

struct CMFCColorPopupMenu { /* PlaceHolder Class Structure */
};

typedef struct CMFCColorPropertySheet CMFCColorPropertySheet, *PCMFCColorPropertySheet;

struct CMFCColorPropertySheet { /* PlaceHolder Class Structure */
};

typedef struct CMFCComObject<class_ATL::CAccessibleProxy> CMFCComObject<class_ATL::CAccessibleProxy>, *PCMFCComObject<class_ATL::CAccessibleProxy>;

struct CMFCComObject<class_ATL::CAccessibleProxy> { /* PlaceHolder Class Structure */
};

typedef struct CMFCControlRenderer CMFCControlRenderer, *PCMFCControlRenderer;

struct CMFCControlRenderer { /* PlaceHolder Class Structure */
};

typedef struct CMFCCustomColorsPropertyPage CMFCCustomColorsPropertyPage, *PCMFCCustomColorsPropertyPage;

struct CMFCCustomColorsPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCCustomizeButton CMFCCustomizeButton, *PCMFCCustomizeButton;

struct CMFCCustomizeButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCCustomizeMenuButton CMFCCustomizeMenuButton, *PCMFCCustomizeMenuButton;

struct CMFCCustomizeMenuButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCDisableMenuAnimation CMFCDisableMenuAnimation, *PCMFCDisableMenuAnimation;

struct CMFCDisableMenuAnimation { /* PlaceHolder Class Structure */
};

typedef struct CMFCDragFrameImpl CMFCDragFrameImpl, *PCMFCDragFrameImpl;

struct CMFCDragFrameImpl { /* PlaceHolder Class Structure */
};

typedef struct CMFCDropDownFrame CMFCDropDownFrame, *PCMFCDropDownFrame;

struct CMFCDropDownFrame { /* PlaceHolder Class Structure */
};

typedef struct CMFCDropDownToolBar CMFCDropDownToolBar, *PCMFCDropDownToolBar;

struct CMFCDropDownToolBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCDropDownToolbarButton CMFCDropDownToolbarButton, *PCMFCDropDownToolbarButton;

struct CMFCDropDownToolbarButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCEditBrowseCtrl CMFCEditBrowseCtrl, *PCMFCEditBrowseCtrl;

struct CMFCEditBrowseCtrl { /* PlaceHolder Class Structure */
};

typedef struct CMFCImageEditorDialog CMFCImageEditorDialog, *PCMFCImageEditorDialog;

struct CMFCImageEditorDialog { /* PlaceHolder Class Structure */
};

typedef struct CMFCImageEditorPaletteBar CMFCImageEditorPaletteBar, *PCMFCImageEditorPaletteBar;

struct CMFCImageEditorPaletteBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCImagePaintArea CMFCImagePaintArea, *PCMFCImagePaintArea;

struct CMFCImagePaintArea { /* PlaceHolder Class Structure */
};

typedef struct CMFCMenuButton CMFCMenuButton, *PCMFCMenuButton;

struct CMFCMenuButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCMousePropertyPage CMFCMousePropertyPage, *PCMFCMousePropertyPage;

struct CMFCMousePropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCOutlookBar CMFCOutlookBar, *PCMFCOutlookBar;

struct CMFCOutlookBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCOutlookBarPane CMFCOutlookBarPane, *PCMFCOutlookBarPane;

struct CMFCOutlookBarPane { /* PlaceHolder Class Structure */
};

typedef struct CMFCOutlookBarPaneButton CMFCOutlookBarPaneButton, *PCMFCOutlookBarPaneButton;

struct CMFCOutlookBarPaneButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCOutlookBarScrollButton CMFCOutlookBarScrollButton, *PCMFCOutlookBarScrollButton;

struct CMFCOutlookBarScrollButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCOutlookBarTabCtrl CMFCOutlookBarTabCtrl, *PCMFCOutlookBarTabCtrl;

struct CMFCOutlookBarTabCtrl { /* PlaceHolder Class Structure */
};

typedef struct CMFCOutlookBarToolBar CMFCOutlookBarToolBar, *PCMFCOutlookBarToolBar;

struct CMFCOutlookBarToolBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCPopupMenuBar CMFCPopupMenuBar, *PCMFCPopupMenuBar;

struct CMFCPopupMenuBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCPropertyPage CMFCPropertyPage, *PCMFCPropertyPage;

struct CMFCPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonCaptionButton CMFCRibbonCaptionButton, *PCMFCRibbonCaptionButton;

struct CMFCRibbonCaptionButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonCategory CMFCRibbonCategory, *PCMFCRibbonCategory;

struct CMFCRibbonCategory { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonColorButton CMFCRibbonColorButton, *PCMFCRibbonColorButton;

struct CMFCRibbonColorButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonColorMenuButton CMFCRibbonColorMenuButton, *PCMFCRibbonColorMenuButton;

struct CMFCRibbonColorMenuButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonDefaultPanelButton CMFCRibbonDefaultPanelButton, *PCMFCRibbonDefaultPanelButton;

struct CMFCRibbonDefaultPanelButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonEdit CMFCRibbonEdit, *PCMFCRibbonEdit;

struct CMFCRibbonEdit { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonKeyTip CMFCRibbonKeyTip, *PCMFCRibbonKeyTip;

struct CMFCRibbonKeyTip { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonLabel CMFCRibbonLabel, *PCMFCRibbonLabel;

struct CMFCRibbonLabel { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonLaunchButton CMFCRibbonLaunchButton, *PCMFCRibbonLaunchButton;

struct CMFCRibbonLaunchButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonMiniToolBar CMFCRibbonMiniToolBar, *PCMFCRibbonMiniToolBar;

struct CMFCRibbonMiniToolBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonQuickAccessCustomizeButton CMFCRibbonQuickAccessCustomizeButton, *PCMFCRibbonQuickAccessCustomizeButton;

struct CMFCRibbonQuickAccessCustomizeButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonRichEditCtrl CMFCRibbonRichEditCtrl, *PCMFCRibbonRichEditCtrl;

struct CMFCRibbonRichEditCtrl { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonTab CMFCRibbonTab, *PCMFCRibbonTab;

struct CMFCRibbonTab { /* PlaceHolder Class Structure */
};

typedef struct CMFCRibbonUndoButton CMFCRibbonUndoButton, *PCMFCRibbonUndoButton;

struct CMFCRibbonUndoButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCShadowRenderer CMFCShadowRenderer, *PCMFCShadowRenderer;

struct CMFCShadowRenderer { /* PlaceHolder Class Structure */
};

typedef struct CMFCShadowWnd CMFCShadowWnd, *PCMFCShadowWnd;

struct CMFCShadowWnd { /* PlaceHolder Class Structure */
};

typedef struct CMFCShowAllButton CMFCShowAllButton, *PCMFCShowAllButton;

struct CMFCShowAllButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCStandardColorsPropertyPage CMFCStandardColorsPropertyPage, *PCMFCStandardColorsPropertyPage;

struct CMFCStandardColorsPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCTabCtrl CMFCTabCtrl, *PCMFCTabCtrl;

struct CMFCTabCtrl { /* PlaceHolder Class Structure */
};

typedef struct CMFCTabDropTarget CMFCTabDropTarget, *PCMFCTabDropTarget;

struct CMFCTabDropTarget { /* PlaceHolder Class Structure */
};

typedef struct CMFCTasksPane CMFCTasksPane, *PCMFCTasksPane;

struct CMFCTasksPane { /* PlaceHolder Class Structure */
};

typedef struct CMFCTasksPaneFrameWnd CMFCTasksPaneFrameWnd, *PCMFCTasksPaneFrameWnd;

struct CMFCTasksPaneFrameWnd { /* PlaceHolder Class Structure */
};

typedef struct CMFCTasksPanePropertyPage CMFCTasksPanePropertyPage, *PCMFCTasksPanePropertyPage;

struct CMFCTasksPanePropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCTasksPaneToolBar CMFCTasksPaneToolBar, *PCMFCTasksPaneToolBar;

struct CMFCTasksPaneToolBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBar CMFCToolBar, *PCMFCToolBar;

struct CMFCToolBar { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarButton CMFCToolBarButton, *PCMFCToolBarButton;

struct CMFCToolBarButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarCmdUI CMFCToolBarCmdUI, *PCMFCToolBarCmdUI;

struct CMFCToolBarCmdUI { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarColorButton CMFCToolBarColorButton, *PCMFCToolBarColorButton;

struct CMFCToolBarColorButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarComboBoxEdit CMFCToolBarComboBoxEdit, *PCMFCToolBarComboBoxEdit;

struct CMFCToolBarComboBoxEdit { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarDropSource CMFCToolBarDropSource, *PCMFCToolBarDropSource;

struct CMFCToolBarDropSource { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarEditCtrl CMFCToolBarEditCtrl, *PCMFCToolBarEditCtrl;

struct CMFCToolBarEditCtrl { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarMenuButtonsButton CMFCToolBarMenuButtonsButton, *PCMFCToolBarMenuButtonsButton;

struct CMFCToolBarMenuButtonsButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarsCommandsListBox CMFCToolBarsCommandsListBox, *PCMFCToolBarsCommandsListBox;

struct CMFCToolBarsCommandsListBox { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarsCommandsPropertyPage CMFCToolBarsCommandsPropertyPage, *PCMFCToolBarsCommandsPropertyPage;

struct CMFCToolBarsCommandsPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarsCustomizeDialog CMFCToolBarsCustomizeDialog, *PCMFCToolBarsCustomizeDialog;

struct CMFCToolBarsCustomizeDialog { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarsKeyboardPropertyPage CMFCToolBarsKeyboardPropertyPage, *PCMFCToolBarsKeyboardPropertyPage;

struct CMFCToolBarsKeyboardPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarsListCheckBox CMFCToolBarsListCheckBox, *PCMFCToolBarsListCheckBox;

struct CMFCToolBarsListCheckBox { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarsListPropertyPage CMFCToolBarsListPropertyPage, *PCMFCToolBarsListPropertyPage;

struct CMFCToolBarsListPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarsMenuPropertyPage CMFCToolBarsMenuPropertyPage, *PCMFCToolBarsMenuPropertyPage;

struct CMFCToolBarsMenuPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarsOptionsPropertyPage CMFCToolBarsOptionsPropertyPage, *PCMFCToolBarsOptionsPropertyPage;

struct CMFCToolBarsOptionsPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarsToolsPropertyPage CMFCToolBarsToolsPropertyPage, *PCMFCToolBarsToolsPropertyPage;

struct CMFCToolBarsToolsPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolBarSystemMenuButton CMFCToolBarSystemMenuButton, *PCMFCToolBarSystemMenuButton;

struct CMFCToolBarSystemMenuButton { /* PlaceHolder Class Structure */
};

typedef struct CMFCToolTipCtrl CMFCToolTipCtrl, *PCMFCToolTipCtrl;

struct CMFCToolTipCtrl { /* PlaceHolder Class Structure */
};

typedef struct CMFCVisualManagerBitmapCache CMFCVisualManagerBitmapCache, *PCMFCVisualManagerBitmapCache;

struct CMFCVisualManagerBitmapCache { /* PlaceHolder Class Structure */
};

typedef struct CMFCVisualManagerOffice2003 CMFCVisualManagerOffice2003, *PCMFCVisualManagerOffice2003;

struct CMFCVisualManagerOffice2003 { /* PlaceHolder Class Structure */
};

typedef struct CMFCVisualManagerOffice2007 CMFCVisualManagerOffice2007, *PCMFCVisualManagerOffice2007;

struct CMFCVisualManagerOffice2007 { /* PlaceHolder Class Structure */
};

typedef struct CMFCVisualManagerOfficeXP CMFCVisualManagerOfficeXP, *PCMFCVisualManagerOfficeXP;

struct CMFCVisualManagerOfficeXP { /* PlaceHolder Class Structure */
};

typedef struct CMiniDockFrameWnd CMiniDockFrameWnd, *PCMiniDockFrameWnd;

struct CMiniDockFrameWnd { /* PlaceHolder Class Structure */
};

typedef struct CMiniFrameWnd CMiniFrameWnd, *PCMiniFrameWnd;

struct CMiniFrameWnd { /* PlaceHolder Class Structure */
};

typedef struct CMouseManager CMouseManager, *PCMouseManager;

struct CMouseManager { /* PlaceHolder Class Structure */
};

typedef struct CMultiPaneFrameWnd CMultiPaneFrameWnd, *PCMultiPaneFrameWnd;

struct CMultiPaneFrameWnd { /* PlaceHolder Class Structure */
};

typedef struct CObArray CObArray, *PCObArray;

struct CObArray { /* PlaceHolder Class Structure */
};

typedef struct CObList CObList, *PCObList;

struct CObList { /* PlaceHolder Class Structure */
};

typedef struct COccManager COccManager, *PCOccManager;

struct COccManager { /* PlaceHolder Class Structure */
};

typedef struct COleBusyDialog COleBusyDialog, *PCOleBusyDialog;

struct COleBusyDialog { /* PlaceHolder Class Structure */
};

typedef struct COleCntrFrameWnd COleCntrFrameWnd, *PCOleCntrFrameWnd;

struct COleCntrFrameWnd { /* PlaceHolder Class Structure */
};

typedef struct COleCntrFrameWndEx COleCntrFrameWndEx, *PCOleCntrFrameWndEx;

struct COleCntrFrameWndEx { /* PlaceHolder Class Structure */
};

typedef struct COleControlContainer COleControlContainer, *PCOleControlContainer;

struct COleControlContainer { /* PlaceHolder Class Structure */
};

typedef struct COleControlSiteFactory COleControlSiteFactory, *PCOleControlSiteFactory;

struct COleControlSiteFactory { /* PlaceHolder Class Structure */
};

typedef struct COleDataSource COleDataSource, *PCOleDataSource;

struct COleDataSource { /* PlaceHolder Class Structure */
};

typedef struct COleDialog COleDialog, *PCOleDialog;

struct COleDialog { /* PlaceHolder Class Structure */
};

typedef struct COleDispatchException COleDispatchException, *PCOleDispatchException;

struct COleDispatchException { /* PlaceHolder Class Structure */
};

typedef struct COleDocIPFrameWnd COleDocIPFrameWnd, *PCOleDocIPFrameWnd;

struct COleDocIPFrameWnd { /* PlaceHolder Class Structure */
};

typedef struct COleDocIPFrameWndEx COleDocIPFrameWndEx, *PCOleDocIPFrameWndEx;

struct COleDocIPFrameWndEx { /* PlaceHolder Class Structure */
};

typedef struct COleDropSource COleDropSource, *PCOleDropSource;

struct COleDropSource { /* PlaceHolder Class Structure */
};

typedef struct COleDropTarget COleDropTarget, *PCOleDropTarget;

struct COleDropTarget { /* PlaceHolder Class Structure */
};

typedef struct COleException COleException, *PCOleException;

struct COleException { /* PlaceHolder Class Structure */
};

typedef struct COleIPFrameWndEx COleIPFrameWndEx, *PCOleIPFrameWndEx;

struct COleIPFrameWndEx { /* PlaceHolder Class Structure */
};

typedef struct COleMessageFilter COleMessageFilter, *PCOleMessageFilter;

struct COleMessageFilter { /* PlaceHolder Class Structure */
};

typedef struct COleStreamFile COleStreamFile, *PCOleStreamFile;

struct COleStreamFile { /* PlaceHolder Class Structure */
};

typedef struct CPaintDC CPaintDC, *PCPaintDC;

struct CPaintDC { /* PlaceHolder Class Structure */
};

typedef struct CPane CPane, *PCPane;

struct CPane { /* PlaceHolder Class Structure */
};

typedef struct CPngImage CPngImage, *PCPngImage;

struct CPngImage { /* PlaceHolder Class Structure */
};

typedef struct CPreviewViewEx CPreviewViewEx, *PCPreviewViewEx;

struct CPreviewViewEx { /* PlaceHolder Class Structure */
};

typedef struct CProgressCtrl CProgressCtrl, *PCProgressCtrl;

struct CProgressCtrl { /* PlaceHolder Class Structure */
};

typedef struct CPropertyPage CPropertyPage, *PCPropertyPage;

struct CPropertyPage { /* PlaceHolder Class Structure */
};

typedef struct CPropertySheet CPropertySheet, *PCPropertySheet;

struct CPropertySheet { /* PlaceHolder Class Structure */
};

typedef struct CPtrArray CPtrArray, *PCPtrArray;

struct CPtrArray { /* PlaceHolder Class Structure */
};

typedef struct CPtrList CPtrList, *PCPtrList;

struct CPtrList { /* PlaceHolder Class Structure */
};

typedef struct CRecentDockSiteInfo CRecentDockSiteInfo, *PCRecentDockSiteInfo;

struct CRecentDockSiteInfo { /* PlaceHolder Class Structure */
};

typedef struct CRecentPaneContainerInfo CRecentPaneContainerInfo, *PCRecentPaneContainerInfo;

struct CRecentPaneContainerInfo { /* PlaceHolder Class Structure */
};

typedef struct CRibbonCategoryScroll CRibbonCategoryScroll, *PCRibbonCategoryScroll;

struct CRibbonCategoryScroll { /* PlaceHolder Class Structure */
};

typedef struct CRichEditCtrl CRichEditCtrl, *PCRichEditCtrl;

struct CRichEditCtrl { /* PlaceHolder Class Structure */
};

typedef struct CScrollBar CScrollBar, *PCScrollBar;

struct CScrollBar { /* PlaceHolder Class Structure */
};

typedef struct CScrollView CScrollView, *PCScrollView;

struct CScrollView { /* PlaceHolder Class Structure */
};

typedef struct CSharedFile CSharedFile, *PCSharedFile;

struct CSharedFile { /* PlaceHolder Class Structure */
};

typedef struct CShellWrapper CShellWrapper, *PCShellWrapper;

struct CShellWrapper { /* PlaceHolder Class Structure */
};

typedef struct CSimpleException CSimpleException, *PCSimpleException;

struct CSimpleException { /* PlaceHolder Class Structure */
};

typedef struct CSmartDockingGroupGuide CSmartDockingGroupGuide, *PCSmartDockingGroupGuide;

struct CSmartDockingGroupGuide { /* PlaceHolder Class Structure */
};

typedef struct CSmartDockingGroupGuidesManager CSmartDockingGroupGuidesManager, *PCSmartDockingGroupGuidesManager;

struct CSmartDockingGroupGuidesManager { /* PlaceHolder Class Structure */
};

typedef struct CSmartDockingManager CSmartDockingManager, *PCSmartDockingManager;

struct CSmartDockingManager { /* PlaceHolder Class Structure */
};

typedef struct CSmartDockingStandaloneGuide CSmartDockingStandaloneGuide, *PCSmartDockingStandaloneGuide;

struct CSmartDockingStandaloneGuide { /* PlaceHolder Class Structure */
};

typedef struct CSpinButtonCtrl CSpinButtonCtrl, *PCSpinButtonCtrl;

struct CSpinButtonCtrl { /* PlaceHolder Class Structure */
};

typedef struct CStatic CStatic, *PCStatic;

struct CStatic { /* PlaceHolder Class Structure */
};

typedef struct CStatusBar CStatusBar, *PCStatusBar;

struct CStatusBar { /* PlaceHolder Class Structure */
};

typedef struct CStatusCmdUI CStatusCmdUI, *PCStatusCmdUI;

struct CStatusCmdUI { /* PlaceHolder Class Structure */
};

typedef struct CStringArray CStringArray, *PCStringArray;

struct CStringArray { /* PlaceHolder Class Structure */
};

typedef struct CStringList CStringList, *PCStringList;

struct CStringList { /* PlaceHolder Class Structure */
};

typedef struct CSyncObject CSyncObject, *PCSyncObject;

struct CSyncObject { /* PlaceHolder Class Structure */
};

typedef struct CTabbedPane CTabbedPane, *PCTabbedPane;

struct CTabbedPane { /* PlaceHolder Class Structure */
};

typedef struct CTagManager CTagManager, *PCTagManager;

struct CTagManager { /* PlaceHolder Class Structure */
};

typedef struct CTasksPaneHistoryButton CTasksPaneHistoryButton, *PCTasksPaneHistoryButton;

struct CTasksPaneHistoryButton { /* PlaceHolder Class Structure */
};

typedef struct CTasksPaneMenuButton CTasksPaneMenuButton, *PCTasksPaneMenuButton;

struct CTasksPaneMenuButton { /* PlaceHolder Class Structure */
};

typedef struct CTasksPaneNavigateButton CTasksPaneNavigateButton, *PCTasksPaneNavigateButton;

struct CTasksPaneNavigateButton { /* PlaceHolder Class Structure */
};

typedef struct CTestCmdUI CTestCmdUI, *PCTestCmdUI;

struct CTestCmdUI { /* PlaceHolder Class Structure */
};

typedef struct CToolBar CToolBar, *PCToolBar;

struct CToolBar { /* PlaceHolder Class Structure */
};

typedef struct CToolCmdUI CToolCmdUI, *PCToolCmdUI;

struct CToolCmdUI { /* PlaceHolder Class Structure */
};

typedef struct CToolTipCtrl CToolTipCtrl, *PCToolTipCtrl;

struct CToolTipCtrl { /* PlaceHolder Class Structure */
};

typedef struct CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*> CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*>, *PCTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*>;

struct CTypedPtrList<class_CPtrList,struct_COleControlSiteOrWnd*> { /* PlaceHolder Class Structure */
};

typedef struct CUIntArray CUIntArray, *PCUIntArray;

struct CUIntArray { /* PlaceHolder Class Structure */
};

typedef struct CVSListBox CVSListBox, *PCVSListBox;

struct CVSListBox { /* PlaceHolder Class Structure */
};

typedef struct CVSListBoxBase CVSListBoxBase, *PCVSListBoxBase;

struct CVSListBoxBase { /* PlaceHolder Class Structure */
};

typedef struct CVSListBoxEditCtrl CVSListBoxEditCtrl, *PCVSListBoxEditCtrl;

struct CVSListBoxEditCtrl { /* PlaceHolder Class Structure */
};

typedef struct CVSToolsListBox CVSToolsListBox, *PCVSToolsListBox;

struct CVSToolsListBox { /* PlaceHolder Class Structure */
};

typedef struct CWinApp CWinApp, *PCWinApp;

struct CWinApp { /* PlaceHolder Class Structure */
};

typedef struct CWindowDC CWindowDC, *PCWindowDC;

struct CWindowDC { /* PlaceHolder Class Structure */
};

typedef struct CWinThread CWinThread, *PCWinThread;

struct CWinThread { /* PlaceHolder Class Structure */
};

typedef struct _s_FuncInfo FuncInfo;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef struct type_info type_info, *Ptype_info;

struct type_info { /* PlaceHolder Class Structure */
};

