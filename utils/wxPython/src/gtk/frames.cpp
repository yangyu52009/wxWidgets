/*
 * FILE : gtk/frames.cpp
 * 
 * This file was automatically generated by :
 * Simplified Wrapper and Interface Generator (SWIG)
 * Version 1.1 (Patch 5)
 * 
 * Portions Copyright (c) 1995-1998
 * The University of Utah and The Regents of the University of California.
 * Permission is granted to distribute this file in any manner provided
 * this notice remains intact.
 * 
 * Do not make changes to this file--changes will be lost!
 *
 */


#define SWIGCODE
/* Implementation : PYTHON */

#define SWIGPYTHON
#include <string.h>
#include <stdlib.h>
/* Definitions for Windows/Unix exporting */
#if defined(__WIN32__)
#   if defined(_MSC_VER)
#	define SWIGEXPORT(a,b) __declspec(dllexport) a b
#   else
#	if defined(__BORLANDC__)
#	    define SWIGEXPORT(a,b) a _export b
#	else
#	    define SWIGEXPORT(a,b) a b
#	endif
#   endif
#else
#   define SWIGEXPORT(a,b) a b
#endif

#ifdef __cplusplus
extern "C" {
#endif
#include "Python.h"
extern void SWIG_MakePtr(char *, void *, char *);
extern void SWIG_RegisterMapping(char *, char *, void *(*)(void *));
extern char *SWIG_GetPtr(char *, void **, char *);
extern void SWIG_addvarlink(PyObject *, char *, PyObject *(*)(void), int (*)(PyObject *));
extern PyObject *SWIG_newvarlink(void);
#ifdef __cplusplus
}
#endif

#define SWIG_init    initframesc

#define SWIG_name    "framesc"

#include "helpers.h"

#ifdef __WXMSW__
#include <wx/minifram.h>
#endif

static PyObject* l_output_helper(PyObject* target, PyObject* o) {
    PyObject*   o2;
    PyObject*   o3;
    if (!target) {                   
        target = o;
    } else if (target == Py_None) {  
        Py_DECREF(Py_None);
        target = o;
    } else {                         
        if (!PyList_Check(target)) {
            o2 = target;
            target = PyList_New(0);
            PyList_Append(target, o2);
	    Py_XDECREF(o2);
        }
        PyList_Append(target,o);
	Py_XDECREF(o);
    }
    return target;
}

static PyObject* t_output_helper(PyObject* target, PyObject* o) {
    PyObject*   o2;
    PyObject*   o3;

    if (!target) {                   
        target = o;
    } else if (target == Py_None) {  
        Py_DECREF(Py_None);
        target = o;
    } else {                         
        if (!PyTuple_Check(target)) {
            o2 = target;
            target = PyTuple_New(1);
            PyTuple_SetItem(target, 0, o2);
        }
        o3 = PyTuple_New(1);            
        PyTuple_SetItem(o3, 0, o);      

        o2 = target;
        target = PySequence_Concat(o2, o3); 
        Py_DECREF(o2);                      
        Py_DECREF(o3);
    }
    return target;
}


extern int* int_LIST_helper(PyObject* source);
extern long* long_LIST_helper(PyObject* source);
extern char** string_LIST_helper(PyObject* source);
extern wxPoint* wxPoint_LIST_helper(PyObject* source);
extern wxBitmap** wxBitmap_LIST_helper(PyObject* source);
extern wxString* wxString_LIST_helper(PyObject* source);
extern wxAcceleratorEntry* wxAcceleratorEntry_LIST_helper(PyObject* source);


static char* wxStringErrorMsg = "string type is required for parameter";
static void *SwigwxFrameTowxWindow(void *ptr) {
    wxFrame *src;
    wxWindow *dest;
    src = (wxFrame *) ptr;
    dest = (wxWindow *) src;
    return (void *) dest;
}

static void *SwigwxFrameTowxEvtHandler(void *ptr) {
    wxFrame *src;
    wxEvtHandler *dest;
    src = (wxFrame *) ptr;
    dest = (wxEvtHandler *) src;
    return (void *) dest;
}

#define new_wxFrame(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5,_swigarg6) (new wxFrame(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5,_swigarg6))
static PyObject *_wrap_new_wxFrame(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _result;
    wxWindow * _arg0;
    wxWindowID  _arg1;
    wxString * _arg2;
    wxPoint * _arg3 = &wxPyDefaultPosition;
    wxSize * _arg4 = &wxPyDefaultSize;
    long  _arg5 = (wxDEFAULT_FRAME_STYLE);
    char * _arg6 = "frame";
    char * _argc0 = 0;
    PyObject * _obj2 = 0;
    char * _argc3 = 0;
    char * _argc4 = 0;
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTuple(args,"siO|ssls:new_wxFrame",&_argc0,&_arg1,&_obj2,&_argc3,&_argc4,&_arg5,&_arg6)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxWindow_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of new_wxFrame. Expected _wxWindow_p.");
        return NULL;
        }
    }
{
    if (!PyString_Check(_obj2)) {
        PyErr_SetString(PyExc_TypeError, wxStringErrorMsg);
        return NULL;
    }
    _arg2 = new wxString(PyString_AsString(_obj2));
}
    if (_argc3) {
        if (SWIG_GetPtr(_argc3,(void **) &_arg3,"_wxPoint_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 4 of new_wxFrame. Expected _wxPoint_p.");
        return NULL;
        }
    }
    if (_argc4) {
        if (SWIG_GetPtr(_argc4,(void **) &_arg4,"_wxSize_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 5 of new_wxFrame. Expected _wxSize_p.");
        return NULL;
        }
    }
    _result = (wxFrame *)new_wxFrame(_arg0,_arg1,*_arg2,*_arg3,*_arg4,_arg5,_arg6);
    SWIG_MakePtr(_ptemp, (char *) _result,"_wxFrame_p");
    _resultobj = Py_BuildValue("s",_ptemp);
{
    if (_obj2)
        delete _arg2;
}
    return _resultobj;
}

#define wxFrame_Centre(_swigobj,_swigarg0)  (_swigobj->Centre(_swigarg0))
static PyObject *_wrap_wxFrame_Centre(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    int  _arg1 = (wxBOTH);
    char * _argc0 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"s|i:wxFrame_Centre",&_argc0,&_arg1)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_Centre. Expected _wxFrame_p.");
        return NULL;
        }
    }
    wxFrame_Centre(_arg0,_arg1);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxFrame_CreateStatusBar(_swigobj,_swigarg0,_swigarg1,_swigarg2,_swigarg3)  (_swigobj->CreateStatusBar(_swigarg0,_swigarg1,_swigarg2,_swigarg3))
static PyObject *_wrap_wxFrame_CreateStatusBar(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxStatusBar * _result;
    wxFrame * _arg0;
    int  _arg1 = 1;
    long  _arg2 = wxST_SIZEGRIP;
    wxWindowID  _arg3 = -1;
    char * _arg4 = "statusBar";
    char * _argc0 = 0;
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTuple(args,"s|ilis:wxFrame_CreateStatusBar",&_argc0,&_arg1,&_arg2,&_arg3,&_arg4)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_CreateStatusBar. Expected _wxFrame_p.");
        return NULL;
        }
    }
    _result = (wxStatusBar *)wxFrame_CreateStatusBar(_arg0,_arg1,_arg2,_arg3,_arg4);
    SWIG_MakePtr(_ptemp, (char *) _result,"_wxStatusBar_p");
    _resultobj = Py_BuildValue("s",_ptemp);
    return _resultobj;
}

#define wxFrame_CreateToolBar(_swigobj,_swigarg0,_swigarg1,_swigarg2)  (_swigobj->CreateToolBar(_swigarg0,_swigarg1,_swigarg2))
static PyObject *_wrap_wxFrame_CreateToolBar(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxToolBar * _result;
    wxFrame * _arg0;
    long  _arg1 = (wxNO_BORDER)|(wxTB_HORIZONTAL);
    wxWindowID  _arg2 = -1;
    char * _arg3 = "toolBar";
    char * _argc0 = 0;
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTuple(args,"s|lis:wxFrame_CreateToolBar",&_argc0,&_arg1,&_arg2,&_arg3)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_CreateToolBar. Expected _wxFrame_p.");
        return NULL;
        }
    }
    _result = (wxToolBar *)wxFrame_CreateToolBar(_arg0,_arg1,_arg2,_arg3);
    SWIG_MakePtr(_ptemp, (char *) _result,"_wxToolBar_p");
    _resultobj = Py_BuildValue("s",_ptemp);
    return _resultobj;
}

#define wxFrame_GetMenuBar(_swigobj)  (_swigobj->GetMenuBar())
static PyObject *_wrap_wxFrame_GetMenuBar(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxMenuBar * _result;
    wxFrame * _arg0;
    char * _argc0 = 0;
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTuple(args,"s:wxFrame_GetMenuBar",&_argc0)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_GetMenuBar. Expected _wxFrame_p.");
        return NULL;
        }
    }
    _result = (wxMenuBar *)wxFrame_GetMenuBar(_arg0);
    SWIG_MakePtr(_ptemp, (char *) _result,"_wxMenuBar_p");
    _resultobj = Py_BuildValue("s",_ptemp);
    return _resultobj;
}

#define wxFrame_GetStatusBar(_swigobj)  (_swigobj->GetStatusBar())
static PyObject *_wrap_wxFrame_GetStatusBar(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxStatusBar * _result;
    wxFrame * _arg0;
    char * _argc0 = 0;
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTuple(args,"s:wxFrame_GetStatusBar",&_argc0)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_GetStatusBar. Expected _wxFrame_p.");
        return NULL;
        }
    }
    _result = (wxStatusBar *)wxFrame_GetStatusBar(_arg0);
    SWIG_MakePtr(_ptemp, (char *) _result,"_wxStatusBar_p");
    _resultobj = Py_BuildValue("s",_ptemp);
    return _resultobj;
}

#define wxFrame_GetTitle(_swigobj)  (_swigobj->GetTitle())
static PyObject *_wrap_wxFrame_GetTitle(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxString * _result;
    wxFrame * _arg0;
    char * _argc0 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"s:wxFrame_GetTitle",&_argc0)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_GetTitle. Expected _wxFrame_p.");
        return NULL;
        }
    }
    _result = new wxString (wxFrame_GetTitle(_arg0));
{
    _resultobj = PyString_FromString(WXSTRINGCAST *(_result));
}
{
    delete _result;
}
    return _resultobj;
}

#define wxFrame_GetToolBar(_swigobj)  (_swigobj->GetToolBar())
static PyObject *_wrap_wxFrame_GetToolBar(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxToolBar * _result;
    wxFrame * _arg0;
    char * _argc0 = 0;
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTuple(args,"s:wxFrame_GetToolBar",&_argc0)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_GetToolBar. Expected _wxFrame_p.");
        return NULL;
        }
    }
    _result = (wxToolBar *)wxFrame_GetToolBar(_arg0);
    SWIG_MakePtr(_ptemp, (char *) _result,"_wxToolBar_p");
    _resultobj = Py_BuildValue("s",_ptemp);
    return _resultobj;
}

#define wxFrame_Iconize(_swigobj,_swigarg0)  (_swigobj->Iconize(_swigarg0))
static PyObject *_wrap_wxFrame_Iconize(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    bool  _arg1;
    char * _argc0 = 0;
    int tempbool1;

    self = self;
    if(!PyArg_ParseTuple(args,"si:wxFrame_Iconize",&_argc0,&tempbool1)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_Iconize. Expected _wxFrame_p.");
        return NULL;
        }
    }
    _arg1 = (bool ) tempbool1;
    wxFrame_Iconize(_arg0,_arg1);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxFrame_IsIconized(_swigobj)  (_swigobj->IsIconized())
static PyObject *_wrap_wxFrame_IsIconized(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    bool  _result;
    wxFrame * _arg0;
    char * _argc0 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"s:wxFrame_IsIconized",&_argc0)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_IsIconized. Expected _wxFrame_p.");
        return NULL;
        }
    }
    _result = (bool )wxFrame_IsIconized(_arg0);
    _resultobj = Py_BuildValue("i",_result);
    return _resultobj;
}

#define wxFrame_Maximize(_swigobj,_swigarg0)  (_swigobj->Maximize(_swigarg0))
static PyObject *_wrap_wxFrame_Maximize(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    bool  _arg1;
    char * _argc0 = 0;
    int tempbool1;

    self = self;
    if(!PyArg_ParseTuple(args,"si:wxFrame_Maximize",&_argc0,&tempbool1)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_Maximize. Expected _wxFrame_p.");
        return NULL;
        }
    }
    _arg1 = (bool ) tempbool1;
    wxFrame_Maximize(_arg0,_arg1);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxFrame_SetAcceleratorTable(_swigobj,_swigarg0)  (_swigobj->SetAcceleratorTable(_swigarg0))
static PyObject *_wrap_wxFrame_SetAcceleratorTable(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    wxAcceleratorTable * _arg1;
    char * _argc0 = 0;
    char * _argc1 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"ss:wxFrame_SetAcceleratorTable",&_argc0,&_argc1)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_SetAcceleratorTable. Expected _wxFrame_p.");
        return NULL;
        }
    }
    if (_argc1) {
        if (SWIG_GetPtr(_argc1,(void **) &_arg1,"_wxAcceleratorTable_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 2 of wxFrame_SetAcceleratorTable. Expected _wxAcceleratorTable_p.");
        return NULL;
        }
    }
    wxFrame_SetAcceleratorTable(_arg0,*_arg1);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxFrame_SetIcon(_swigobj,_swigarg0)  (_swigobj->SetIcon(_swigarg0))
static PyObject *_wrap_wxFrame_SetIcon(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    wxIcon * _arg1;
    char * _argc0 = 0;
    char * _argc1 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"ss:wxFrame_SetIcon",&_argc0,&_argc1)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_SetIcon. Expected _wxFrame_p.");
        return NULL;
        }
    }
    if (_argc1) {
        if (SWIG_GetPtr(_argc1,(void **) &_arg1,"_wxIcon_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 2 of wxFrame_SetIcon. Expected _wxIcon_p.");
        return NULL;
        }
    }
    wxFrame_SetIcon(_arg0,*_arg1);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxFrame_SetMenuBar(_swigobj,_swigarg0)  (_swigobj->SetMenuBar(_swigarg0))
static PyObject *_wrap_wxFrame_SetMenuBar(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    wxMenuBar * _arg1;
    char * _argc0 = 0;
    char * _argc1 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"ss:wxFrame_SetMenuBar",&_argc0,&_argc1)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_SetMenuBar. Expected _wxFrame_p.");
        return NULL;
        }
    }
    if (_argc1) {
        if (SWIG_GetPtr(_argc1,(void **) &_arg1,"_wxMenuBar_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 2 of wxFrame_SetMenuBar. Expected _wxMenuBar_p.");
        return NULL;
        }
    }
    wxFrame_SetMenuBar(_arg0,_arg1);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxFrame_SetStatusBar(_swigobj,_swigarg0)  (_swigobj->SetStatusBar(_swigarg0))
static PyObject *_wrap_wxFrame_SetStatusBar(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    wxStatusBar * _arg1;
    char * _argc0 = 0;
    char * _argc1 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"ss:wxFrame_SetStatusBar",&_argc0,&_argc1)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_SetStatusBar. Expected _wxFrame_p.");
        return NULL;
        }
    }
    if (_argc1) {
        if (SWIG_GetPtr(_argc1,(void **) &_arg1,"_wxStatusBar_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 2 of wxFrame_SetStatusBar. Expected _wxStatusBar_p.");
        return NULL;
        }
    }
    wxFrame_SetStatusBar(_arg0,_arg1);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxFrame_SetStatusText(_swigobj,_swigarg0,_swigarg1)  (_swigobj->SetStatusText(_swigarg0,_swigarg1))
static PyObject *_wrap_wxFrame_SetStatusText(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    wxString * _arg1;
    int  _arg2 = 0;
    char * _argc0 = 0;
    PyObject * _obj1 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"sO|i:wxFrame_SetStatusText",&_argc0,&_obj1,&_arg2)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_SetStatusText. Expected _wxFrame_p.");
        return NULL;
        }
    }
{
    if (!PyString_Check(_obj1)) {
        PyErr_SetString(PyExc_TypeError, wxStringErrorMsg);
        return NULL;
    }
    _arg1 = new wxString(PyString_AsString(_obj1));
}
    wxFrame_SetStatusText(_arg0,*_arg1,_arg2);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
{
    if (_obj1)
        delete _arg1;
}
    return _resultobj;
}

#define wxFrame_SetStatusWidths(_swigobj,_swigarg0,_swigarg1)  (_swigobj->SetStatusWidths(_swigarg0,_swigarg1))
static PyObject *_wrap_wxFrame_SetStatusWidths(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    int  _arg1;
    int * _arg2;
    char * _argc0 = 0;
    PyObject * _obj2 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"sO:wxFrame_SetStatusWidths",&_argc0,&_obj2)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_SetStatusWidths. Expected _wxFrame_p.");
        return NULL;
        }
    }
    if (_obj2)
{
    _arg2 = int_LIST_helper(_obj2);
    if (_arg2 == NULL) {
        return NULL;
    }
}
{
    _arg1 = PyList_Size(_obj2);
}
    wxFrame_SetStatusWidths(_arg0,_arg1,_arg2);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
{
    delete [] _arg2;
}
    return _resultobj;
}

#define wxFrame_SetTitle(_swigobj,_swigarg0)  (_swigobj->SetTitle(_swigarg0))
static PyObject *_wrap_wxFrame_SetTitle(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    wxString * _arg1;
    char * _argc0 = 0;
    PyObject * _obj1 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"sO:wxFrame_SetTitle",&_argc0,&_obj1)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_SetTitle. Expected _wxFrame_p.");
        return NULL;
        }
    }
{
    if (!PyString_Check(_obj1)) {
        PyErr_SetString(PyExc_TypeError, wxStringErrorMsg);
        return NULL;
    }
    _arg1 = new wxString(PyString_AsString(_obj1));
}
    wxFrame_SetTitle(_arg0,*_arg1);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
{
    if (_obj1)
        delete _arg1;
}
    return _resultobj;
}

#define wxFrame_SetToolBar(_swigobj,_swigarg0)  (_swigobj->SetToolBar(_swigarg0))
static PyObject *_wrap_wxFrame_SetToolBar(PyObject *self, PyObject *args) {
    PyObject * _resultobj;
    wxFrame * _arg0;
    wxToolBar * _arg1;
    char * _argc0 = 0;
    char * _argc1 = 0;

    self = self;
    if(!PyArg_ParseTuple(args,"ss:wxFrame_SetToolBar",&_argc0,&_argc1)) 
        return NULL;
    if (_argc0) {
        if (SWIG_GetPtr(_argc0,(void **) &_arg0,"_wxFrame_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxFrame_SetToolBar. Expected _wxFrame_p.");
        return NULL;
        }
    }
    if (_argc1) {
        if (SWIG_GetPtr(_argc1,(void **) &_arg1,"_wxToolBar_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 2 of wxFrame_SetToolBar. Expected _wxToolBar_p.");
        return NULL;
        }
    }
    wxFrame_SetToolBar(_arg0,_arg1);
    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

static PyMethodDef framescMethods[] = {
	 { "wxFrame_SetToolBar", _wrap_wxFrame_SetToolBar, 1 },
	 { "wxFrame_SetTitle", _wrap_wxFrame_SetTitle, 1 },
	 { "wxFrame_SetStatusWidths", _wrap_wxFrame_SetStatusWidths, 1 },
	 { "wxFrame_SetStatusText", _wrap_wxFrame_SetStatusText, 1 },
	 { "wxFrame_SetStatusBar", _wrap_wxFrame_SetStatusBar, 1 },
	 { "wxFrame_SetMenuBar", _wrap_wxFrame_SetMenuBar, 1 },
	 { "wxFrame_SetIcon", _wrap_wxFrame_SetIcon, 1 },
	 { "wxFrame_SetAcceleratorTable", _wrap_wxFrame_SetAcceleratorTable, 1 },
	 { "wxFrame_Maximize", _wrap_wxFrame_Maximize, 1 },
	 { "wxFrame_IsIconized", _wrap_wxFrame_IsIconized, 1 },
	 { "wxFrame_Iconize", _wrap_wxFrame_Iconize, 1 },
	 { "wxFrame_GetToolBar", _wrap_wxFrame_GetToolBar, 1 },
	 { "wxFrame_GetTitle", _wrap_wxFrame_GetTitle, 1 },
	 { "wxFrame_GetStatusBar", _wrap_wxFrame_GetStatusBar, 1 },
	 { "wxFrame_GetMenuBar", _wrap_wxFrame_GetMenuBar, 1 },
	 { "wxFrame_CreateToolBar", _wrap_wxFrame_CreateToolBar, 1 },
	 { "wxFrame_CreateStatusBar", _wrap_wxFrame_CreateStatusBar, 1 },
	 { "wxFrame_Centre", _wrap_wxFrame_Centre, 1 },
	 { "new_wxFrame", _wrap_new_wxFrame, 1 },
	 { NULL, NULL }
};
static PyObject *SWIG_globals;
#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT(void,initframesc)() {
	 PyObject *m, *d;
	 SWIG_globals = SWIG_newvarlink();
	 m = Py_InitModule("framesc", framescMethods);
	 d = PyModule_GetDict(m);
/*
 * These are the pointer type-equivalency mappings. 
 * (Used by the SWIG pointer type-checker).
 */
	 SWIG_RegisterMapping("_wxAcceleratorTable","_class_wxAcceleratorTable",0);
	 SWIG_RegisterMapping("_wxEvent","_class_wxEvent",0);
	 SWIG_RegisterMapping("_class_wxActivateEvent","_wxActivateEvent",0);
	 SWIG_RegisterMapping("_signed_long","_long",0);
	 SWIG_RegisterMapping("_wxMenuEvent","_class_wxMenuEvent",0);
	 SWIG_RegisterMapping("_class_wxMenuBar","_wxMenuBar",0);
	 SWIG_RegisterMapping("_class_wxEvtHandler","_class_wxFrame",SwigwxFrameTowxEvtHandler);
	 SWIG_RegisterMapping("_class_wxEvtHandler","_wxFrame",SwigwxFrameTowxEvtHandler);
	 SWIG_RegisterMapping("_class_wxEvtHandler","_wxEvtHandler",0);
	 SWIG_RegisterMapping("_wxPaintEvent","_class_wxPaintEvent",0);
	 SWIG_RegisterMapping("_wxIndividualLayoutConstraint","_class_wxIndividualLayoutConstraint",0);
	 SWIG_RegisterMapping("_wxCursor","_class_wxCursor",0);
	 SWIG_RegisterMapping("_wxMask","_class_wxMask",0);
	 SWIG_RegisterMapping("_wxPyMenu","_class_wxPyMenu",0);
	 SWIG_RegisterMapping("_wxPen","_class_wxPen",0);
	 SWIG_RegisterMapping("_wxUpdateUIEvent","_class_wxUpdateUIEvent",0);
	 SWIG_RegisterMapping("_byte","_unsigned_char",0);
	 SWIG_RegisterMapping("_wxStaticBox","_class_wxStaticBox",0);
	 SWIG_RegisterMapping("_wxChoice","_class_wxChoice",0);
	 SWIG_RegisterMapping("_wxSlider","_class_wxSlider",0);
	 SWIG_RegisterMapping("_long","_wxDash",0);
	 SWIG_RegisterMapping("_long","_unsigned_long",0);
	 SWIG_RegisterMapping("_long","_signed_long",0);
	 SWIG_RegisterMapping("_wxDropFilesEvent","_class_wxDropFilesEvent",0);
	 SWIG_RegisterMapping("_wxBitmapButton","_class_wxBitmapButton",0);
	 SWIG_RegisterMapping("_class_wxAcceleratorTable","_wxAcceleratorTable",0);
	 SWIG_RegisterMapping("_class_wxGauge","_wxGauge",0);
	 SWIG_RegisterMapping("_wxDC","_class_wxDC",0);
	 SWIG_RegisterMapping("_class_wxRealPoint","_wxRealPoint",0);
	 SWIG_RegisterMapping("_class_wxMenuItem","_wxMenuItem",0);
	 SWIG_RegisterMapping("_class_wxPaintEvent","_wxPaintEvent",0);
	 SWIG_RegisterMapping("_wxSysColourChangedEvent","_class_wxSysColourChangedEvent",0);
	 SWIG_RegisterMapping("_class_wxStatusBar","_wxStatusBar",0);
	 SWIG_RegisterMapping("_class_wxPostScriptDC","_wxPostScriptDC",0);
	 SWIG_RegisterMapping("_wxPanel","_class_wxPanel",0);
	 SWIG_RegisterMapping("_wxInitDialogEvent","_class_wxInitDialogEvent",0);
	 SWIG_RegisterMapping("_wxCheckBox","_class_wxCheckBox",0);
	 SWIG_RegisterMapping("_wxTextCtrl","_class_wxTextCtrl",0);
	 SWIG_RegisterMapping("_class_wxMask","_wxMask",0);
	 SWIG_RegisterMapping("_class_wxKeyEvent","_wxKeyEvent",0);
	 SWIG_RegisterMapping("_wxColour","_class_wxColour",0);
	 SWIG_RegisterMapping("_class_wxDialog","_wxDialog",0);
	 SWIG_RegisterMapping("_wxIdleEvent","_class_wxIdleEvent",0);
	 SWIG_RegisterMapping("_class_wxUpdateUIEvent","_wxUpdateUIEvent",0);
	 SWIG_RegisterMapping("_wxToolBar","_class_wxToolBar",0);
	 SWIG_RegisterMapping("_wxBrush","_class_wxBrush",0);
	 SWIG_RegisterMapping("_wxShowEvent","_class_wxShowEvent",0);
	 SWIG_RegisterMapping("_uint","_unsigned_int",0);
	 SWIG_RegisterMapping("_uint","_int",0);
	 SWIG_RegisterMapping("_uint","_wxWindowID",0);
	 SWIG_RegisterMapping("_class_wxEvent","_wxEvent",0);
	 SWIG_RegisterMapping("_wxRect","_class_wxRect",0);
	 SWIG_RegisterMapping("_wxCommandEvent","_class_wxCommandEvent",0);
	 SWIG_RegisterMapping("_wxSizeEvent","_class_wxSizeEvent",0);
	 SWIG_RegisterMapping("_wxPoint","_class_wxPoint",0);
	 SWIG_RegisterMapping("_class_wxButton","_wxButton",0);
	 SWIG_RegisterMapping("_wxRadioBox","_class_wxRadioBox",0);
	 SWIG_RegisterMapping("_wxBitmap","_class_wxBitmap",0);
	 SWIG_RegisterMapping("_wxPyTimer","_class_wxPyTimer",0);
	 SWIG_RegisterMapping("_wxScrollBar","_class_wxScrollBar",0);
	 SWIG_RegisterMapping("_wxToolBarTool","_class_wxToolBarTool",0);
	 SWIG_RegisterMapping("_class_wxIndividualLayoutConstraint","_wxIndividualLayoutConstraint",0);
	 SWIG_RegisterMapping("_class_wxIconizeEvent","_wxIconizeEvent",0);
	 SWIG_RegisterMapping("_class_wxStaticBitmap","_wxStaticBitmap",0);
	 SWIG_RegisterMapping("_class_wxToolBar","_wxToolBar",0);
	 SWIG_RegisterMapping("_wxScrollEvent","_class_wxScrollEvent",0);
	 SWIG_RegisterMapping("_EBool","_signed_int",0);
	 SWIG_RegisterMapping("_EBool","_int",0);
	 SWIG_RegisterMapping("_EBool","_wxWindowID",0);
	 SWIG_RegisterMapping("_class_wxDropFilesEvent","_wxDropFilesEvent",0);
	 SWIG_RegisterMapping("_wxStaticText","_class_wxStaticText",0);
	 SWIG_RegisterMapping("_wxFont","_class_wxFont",0);
	 SWIG_RegisterMapping("_wxCloseEvent","_class_wxCloseEvent",0);
	 SWIG_RegisterMapping("_unsigned_long","_wxDash",0);
	 SWIG_RegisterMapping("_unsigned_long","_long",0);
	 SWIG_RegisterMapping("_class_wxRect","_wxRect",0);
	 SWIG_RegisterMapping("_class_wxDC","_wxDC",0);
	 SWIG_RegisterMapping("_class_wxPyTimer","_wxPyTimer",0);
	 SWIG_RegisterMapping("_wxFocusEvent","_class_wxFocusEvent",0);
	 SWIG_RegisterMapping("_wxMaximizeEvent","_class_wxMaximizeEvent",0);
	 SWIG_RegisterMapping("_wxAcceleratorEntry","_class_wxAcceleratorEntry",0);
	 SWIG_RegisterMapping("_class_wxPanel","_wxPanel",0);
	 SWIG_RegisterMapping("_class_wxCheckBox","_wxCheckBox",0);
	 SWIG_RegisterMapping("_wxComboBox","_class_wxComboBox",0);
	 SWIG_RegisterMapping("_wxRadioButton","_class_wxRadioButton",0);
	 SWIG_RegisterMapping("_signed_int","_EBool",0);
	 SWIG_RegisterMapping("_signed_int","_wxWindowID",0);
	 SWIG_RegisterMapping("_signed_int","_int",0);
	 SWIG_RegisterMapping("_class_wxTextCtrl","_wxTextCtrl",0);
	 SWIG_RegisterMapping("_wxLayoutConstraints","_class_wxLayoutConstraints",0);
	 SWIG_RegisterMapping("_wxMenu","_class_wxMenu",0);
	 SWIG_RegisterMapping("_class_wxMoveEvent","_wxMoveEvent",0);
	 SWIG_RegisterMapping("_wxListBox","_class_wxListBox",0);
	 SWIG_RegisterMapping("_wxScreenDC","_class_wxScreenDC",0);
	 SWIG_RegisterMapping("_WXTYPE","_short",0);
	 SWIG_RegisterMapping("_WXTYPE","_signed_short",0);
	 SWIG_RegisterMapping("_WXTYPE","_unsigned_short",0);
	 SWIG_RegisterMapping("_class_wxBrush","_wxBrush",0);
	 SWIG_RegisterMapping("_unsigned_short","_WXTYPE",0);
	 SWIG_RegisterMapping("_unsigned_short","_short",0);
	 SWIG_RegisterMapping("_class_wxWindow","_class_wxFrame",SwigwxFrameTowxWindow);
	 SWIG_RegisterMapping("_class_wxWindow","_wxFrame",SwigwxFrameTowxWindow);
	 SWIG_RegisterMapping("_class_wxWindow","_wxWindow",0);
	 SWIG_RegisterMapping("_class_wxStaticText","_wxStaticText",0);
	 SWIG_RegisterMapping("_class_wxFont","_wxFont",0);
	 SWIG_RegisterMapping("_class_wxCloseEvent","_wxCloseEvent",0);
	 SWIG_RegisterMapping("_class_wxMenuEvent","_wxMenuEvent",0);
	 SWIG_RegisterMapping("_wxClientDC","_class_wxClientDC",0);
	 SWIG_RegisterMapping("_wxMouseEvent","_class_wxMouseEvent",0);
	 SWIG_RegisterMapping("_class_wxPoint","_wxPoint",0);
	 SWIG_RegisterMapping("_wxRealPoint","_class_wxRealPoint",0);
	 SWIG_RegisterMapping("_class_wxRadioBox","_wxRadioBox",0);
	 SWIG_RegisterMapping("_signed_short","_WXTYPE",0);
	 SWIG_RegisterMapping("_signed_short","_short",0);
	 SWIG_RegisterMapping("_wxMemoryDC","_class_wxMemoryDC",0);
	 SWIG_RegisterMapping("_wxPaintDC","_class_wxPaintDC",0);
	 SWIG_RegisterMapping("_class_wxFocusEvent","_wxFocusEvent",0);
	 SWIG_RegisterMapping("_class_wxMaximizeEvent","_wxMaximizeEvent",0);
	 SWIG_RegisterMapping("_wxStatusBar","_class_wxStatusBar",0);
	 SWIG_RegisterMapping("_class_wxToolBarTool","_wxToolBarTool",0);
	 SWIG_RegisterMapping("_class_wxAcceleratorEntry","_wxAcceleratorEntry",0);
	 SWIG_RegisterMapping("_class_wxCursor","_wxCursor",0);
	 SWIG_RegisterMapping("_wxPostScriptDC","_class_wxPostScriptDC",0);
	 SWIG_RegisterMapping("_wxScrolledWindow","_class_wxScrolledWindow",0);
	 SWIG_RegisterMapping("_unsigned_char","_byte",0);
	 SWIG_RegisterMapping("_class_wxMenu","_wxMenu",0);
	 SWIG_RegisterMapping("_wxControl","_class_wxControl",0);
	 SWIG_RegisterMapping("_class_wxListBox","_wxListBox",0);
	 SWIG_RegisterMapping("_unsigned_int","_uint",0);
	 SWIG_RegisterMapping("_unsigned_int","_wxWindowID",0);
	 SWIG_RegisterMapping("_unsigned_int","_int",0);
	 SWIG_RegisterMapping("_wxIcon","_class_wxIcon",0);
	 SWIG_RegisterMapping("_wxDialog","_class_wxDialog",0);
	 SWIG_RegisterMapping("_class_wxPyMenu","_wxPyMenu",0);
	 SWIG_RegisterMapping("_class_wxPen","_wxPen",0);
	 SWIG_RegisterMapping("_short","_WXTYPE",0);
	 SWIG_RegisterMapping("_short","_unsigned_short",0);
	 SWIG_RegisterMapping("_short","_signed_short",0);
	 SWIG_RegisterMapping("_class_wxStaticBox","_wxStaticBox",0);
	 SWIG_RegisterMapping("_class_wxScrollEvent","_wxScrollEvent",0);
	 SWIG_RegisterMapping("_wxJoystickEvent","_class_wxJoystickEvent",0);
	 SWIG_RegisterMapping("_class_wxChoice","_wxChoice",0);
	 SWIG_RegisterMapping("_class_wxSlider","_wxSlider",0);
	 SWIG_RegisterMapping("_class_wxBitmapButton","_wxBitmapButton",0);
	 SWIG_RegisterMapping("_wxFrame","_class_wxFrame",0);
	 SWIG_RegisterMapping("_wxWindowID","_EBool",0);
	 SWIG_RegisterMapping("_wxWindowID","_uint",0);
	 SWIG_RegisterMapping("_wxWindowID","_int",0);
	 SWIG_RegisterMapping("_wxWindowID","_signed_int",0);
	 SWIG_RegisterMapping("_wxWindowID","_unsigned_int",0);
	 SWIG_RegisterMapping("_int","_EBool",0);
	 SWIG_RegisterMapping("_int","_uint",0);
	 SWIG_RegisterMapping("_int","_wxWindowID",0);
	 SWIG_RegisterMapping("_int","_unsigned_int",0);
	 SWIG_RegisterMapping("_int","_signed_int",0);
	 SWIG_RegisterMapping("_class_wxMouseEvent","_wxMouseEvent",0);
	 SWIG_RegisterMapping("_wxButton","_class_wxButton",0);
	 SWIG_RegisterMapping("_wxSize","_class_wxSize",0);
	 SWIG_RegisterMapping("_class_wxPaintDC","_wxPaintDC",0);
	 SWIG_RegisterMapping("_class_wxSysColourChangedEvent","_wxSysColourChangedEvent",0);
	 SWIG_RegisterMapping("_class_wxInitDialogEvent","_wxInitDialogEvent",0);
	 SWIG_RegisterMapping("_class_wxComboBox","_wxComboBox",0);
	 SWIG_RegisterMapping("_class_wxRadioButton","_wxRadioButton",0);
	 SWIG_RegisterMapping("_class_wxLayoutConstraints","_wxLayoutConstraints",0);
	 SWIG_RegisterMapping("_wxIconizeEvent","_class_wxIconizeEvent",0);
	 SWIG_RegisterMapping("_class_wxControl","_wxControl",0);
	 SWIG_RegisterMapping("_wxStaticBitmap","_class_wxStaticBitmap",0);
	 SWIG_RegisterMapping("_class_wxIcon","_wxIcon",0);
	 SWIG_RegisterMapping("_class_wxColour","_wxColour",0);
	 SWIG_RegisterMapping("_class_wxScreenDC","_wxScreenDC",0);
	 SWIG_RegisterMapping("_class_wxIdleEvent","_wxIdleEvent",0);
	 SWIG_RegisterMapping("_wxEraseEvent","_class_wxEraseEvent",0);
	 SWIG_RegisterMapping("_class_wxJoystickEvent","_wxJoystickEvent",0);
	 SWIG_RegisterMapping("_class_wxShowEvent","_wxShowEvent",0);
	 SWIG_RegisterMapping("_wxActivateEvent","_class_wxActivateEvent",0);
	 SWIG_RegisterMapping("_wxGauge","_class_wxGauge",0);
	 SWIG_RegisterMapping("_class_wxCommandEvent","_wxCommandEvent",0);
	 SWIG_RegisterMapping("_class_wxClientDC","_wxClientDC",0);
	 SWIG_RegisterMapping("_class_wxSizeEvent","_wxSizeEvent",0);
	 SWIG_RegisterMapping("_class_wxSize","_wxSize",0);
	 SWIG_RegisterMapping("_class_wxBitmap","_wxBitmap",0);
	 SWIG_RegisterMapping("_class_wxMemoryDC","_wxMemoryDC",0);
	 SWIG_RegisterMapping("_wxMenuBar","_class_wxMenuBar",0);
	 SWIG_RegisterMapping("_wxEvtHandler","_class_wxFrame",SwigwxFrameTowxEvtHandler);
	 SWIG_RegisterMapping("_wxEvtHandler","_wxFrame",SwigwxFrameTowxEvtHandler);
	 SWIG_RegisterMapping("_wxEvtHandler","_class_wxEvtHandler",0);
	 SWIG_RegisterMapping("_wxMenuItem","_class_wxMenuItem",0);
	 SWIG_RegisterMapping("_class_wxScrollBar","_wxScrollBar",0);
	 SWIG_RegisterMapping("_wxDash","_unsigned_long",0);
	 SWIG_RegisterMapping("_wxDash","_long",0);
	 SWIG_RegisterMapping("_class_wxScrolledWindow","_wxScrolledWindow",0);
	 SWIG_RegisterMapping("_wxKeyEvent","_class_wxKeyEvent",0);
	 SWIG_RegisterMapping("_wxMoveEvent","_class_wxMoveEvent",0);
	 SWIG_RegisterMapping("_class_wxEraseEvent","_wxEraseEvent",0);
	 SWIG_RegisterMapping("_wxWindow","_class_wxFrame",SwigwxFrameTowxWindow);
	 SWIG_RegisterMapping("_wxWindow","_wxFrame",SwigwxFrameTowxWindow);
	 SWIG_RegisterMapping("_wxWindow","_class_wxWindow",0);
	 SWIG_RegisterMapping("_class_wxFrame","_wxFrame",0);
}
