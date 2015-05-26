//
// C++ Interface: selection navigation dialog
//
// Description:
//
//
// Author: Vadim Lopatin <vadim.lopatin@coolreader.org>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
// selnavig.h

#ifndef SELNAVIG_H_INCLUDED
#define SELNAVIG_H_INCLUDED

#include "bgfit.h"

class CRSelNavigationDialog : public BackgroundFitWindow
{
protected:
    CRViewDialog * _mainwin;
    lString16 _pattern;
    void moveBy( int delta );
public:
    CRSelNavigationDialog(  CRGUIWindowManager * wm, CRViewDialog * mainwin, lString16 pattern );

    /// returns true if command is processed
    virtual bool onCommand( int command, int params );
};

#endif
