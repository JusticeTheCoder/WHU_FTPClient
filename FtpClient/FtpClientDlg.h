﻿
// FtpClientDlg.h: 头文件
//

#pragma once


// CFtpClientDlg 对话框
class CFtpClientDlg : public CDialogEx
{
// 构造
public:
	CFtpClientDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FTPCLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonQuit();
private:
	CButton m_btnDownload;
	CButton m_btnPause;
	CButton m_btnQuery;
public:
	CButton m_btnQuit;
private:
	CButton m_btnUpload;
public:
	CString m_strPwd;
private:
	CString m_strUrl;
	CString m_strUsername;
	CListBox m_listFile;
};
