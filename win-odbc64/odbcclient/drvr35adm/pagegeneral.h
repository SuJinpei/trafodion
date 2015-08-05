// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2002-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@

#if !defined(AFX_PAGEGENERAL_H__0DC14BC8_5653_11D3_9E7E_00508B0B983B__INCLUDED_)
#define AFX_PAGEGENERAL_H__0DC14BC8_5653_11D3_9E7E_00508B0B983B__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// PageGeneral.h : header file
//

#include "propsheet.h"

/////////////////////////////////////////////////////////////////////////////
// PageGeneral dialog

class PageGeneral : public CPropertyPage
{
	DECLARE_DYNCREATE(PageGeneral)

// Construction
public:
	PageGeneral();
	~PageGeneral();

// Dialog Data
	CPropSheet* m_ppropsheet;

	//{{AFX_DATA(PageGeneral)
	enum { IDD = IDD_PAGE_GENRAL };
	CEdit	m_service_name;
	CStatic	m_static_general;
	CEdit	m_dsname;
	CEdit	m_desc;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(PageGeneral)
	public:
	virtual BOOL OnSetActive();
	virtual LRESULT OnWizardNext();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(PageGeneral)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGEGENERAL_H__0DC14BC8_5653_11D3_9E7E_00508B0B983B__INCLUDED_)