#ifndef _OPTW_TEXTENCODING_H_
#define _OPTW_TEXTENCODING_H_
//=============================================================================
//
//   File : optw_textencoding.h
//   Creation date : Sat Mar 02 2002 12:09:19 CEST by Szymon Stefanek
//
//   This file is part of the KVirc irc client distribution
//   Copyright (C) 2002-2008 Szymon Stefanek (pragma at kvirc dot net)
//
//   This program is FREE software. You can redistribute it and/or
//   modify it under the terms of the GNU General Public License
//   as published by the Free Software Foundation; either version 2
//   of the License, or (at your opinion) any later version.
//
//   This program is distributed in the HOPE that it will be USEFUL,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//   See the GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public License
//   along with this program. If not, write to the Free Software Foundation,
//   Inc. ,59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
//
//=============================================================================

#include "kvi_optionswidget.h"

#include <QComboBox>

#define KVI_OPTIONS_WIDGET_ICON_KviTextEncodingOptionsWidget KVI_SMALLICON_TEXTENCODING
#define KVI_OPTIONS_WIDGET_NAME_KviTextEncodingOptionsWidget __tr2qs_no_lookup("Language")
#define KVI_OPTIONS_WIDGET_PRIORITY_KviTextEncodingOptionsWidget 50000
#define KVI_OPTIONS_WIDGET_PARENT_KviTextEncodingOptionsWidget KviGeneralOptOptionsWidget
#define KVI_OPTIONS_WIDGET_KEYWORDS_KviTextEncodingOptionsWidget __tr2qs_no_lookup("language,encoding,charset,codepage")

class KviTextEncodingOptionsWidget : public KviOptionsWidget
{
	Q_OBJECT
public:
	KviTextEncodingOptionsWidget(QWidget * parent);
	~KviTextEncodingOptionsWidget();
protected:
	QString     m_szLanguage;
	QComboBox * m_pTextEncodingCombo;
	QComboBox * m_pSrvEncodingCombo;
	QComboBox * m_pForcedLocaleCombo;
public:
	virtual void commit();
};

#endif //!_OPTW_TEXTENCODING_H_
