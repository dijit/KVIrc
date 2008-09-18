#ifndef _OPTW_PROTECTION_H_
#define _OPTW_PROTECTION_H_
//=============================================================================
//
//   File : optw_protection.h
//   Creation date : Wed Ott 19 16:15:16 2005 GMT by Grifisx & Noldor
//
//   This file is part of the KVirc irc client distribution
//   Copyright (C) 2005-2008 Alessandro Carbone (elfonol at gmail dot com)
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

#include "kvi_settings.h"
#include "kvi_optionswidget.h"
#include "kvi_selectors.h"

#define KVI_OPTIONS_WIDGET_ICON_KviProtectionOptionsWidget KVI_SMALLICON_SPY
#define KVI_OPTIONS_WIDGET_NAME_KviProtectionOptionsWidget __tr2qs_no_lookup("Protection")
#define KVI_OPTIONS_WIDGET_PARENT_KviProtectionOptionsWidget KviIrcOptionsWidget
#define KVI_OPTIONS_WIDGET_PRIORITY_KviProtectionOptionsWidget 60000
#define KVI_OPTIONS_WIDGET_KEYWORDS_KviProtectionOptionsWidget __tr2qs_no_lookup("ctcp,flood")
#define KVI_OPTIONS_WIDGET_CONTAINER_KviProtectionOptionsWidget true
#define KVI_OPTIONS_WIDGET_NOTCONTAINED_KviProtectionOptionsWidget true

class KviProtectionOptionsWidget : public KviOptionsWidget
{
	Q_OBJECT
public:
	KviProtectionOptionsWidget(QWidget * parent);
	~KviProtectionOptionsWidget();
};

#endif //!_OPTW_PROTECTION_H_
