/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGPYFIELDACCESSHANDLER_H_
#define _OSGPYFIELDACCESSHANDLER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGPyFieldAccessHandlerBase.h"

#include "OSGPythonScript.h"
//#include "OSGPointerSField.h"
#include "OSGPointerMField.h"

#include <boost/python/list.hpp>

OSG_BEGIN_NAMESPACE

class PyInterpreter;

/*! \brief PyFieldAccessHandler class. See \ref
           PageScriptingPyFieldAccessHandler for a description.
*/

class OSG_SCRIPTING_DLLMAPPING PyFieldAccessHandler : public PyFieldAccessHandlerBase
{
    /*==========================  PUBLIC  =================================*/

  public:

    typedef PyFieldAccessHandlerBase Inherited;
    typedef PyFieldAccessHandler     Self;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                        Init                                  */
    /*! \{                                                                 */

    bool init(PythonScriptWeakPtr  pythonScript,
              PyInterpreter       *inter);
    //void reset(); // TODO: how?
    static void registerTypeMappings();

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                        Field Access                          */
    /*! \{                                                                 */

    bool setupFieldAccess();
    bool exposeField(const std::string& fieldName,
                     OSG::UInt32 fieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Code Generation                        */
    /*! \{                                                                 */

    static void listSupportedFieldTypes();
    void generateSupportedFieldsList();

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                        Field Access                          */
    /*! \{                                                                */

    // CAUTION: editSField, editMField members get excluded by Py++. Fix that
    // later!

    template<class T>
    void     setSField   (const std::string& name, const T& value);
    template<class T>
          T& myEditSField(const std::string& name, const T& type );
    template<class T>
    const T& getSField   (const std::string& name, const T& type );

    template<class T>
    void             setMField  (const std::string& name,
                                 bp::list           values,
                                 const T&           type   );
    template<class T>
    const MField<T>* myGetMField(const std::string& name,
                                 const T& type             );

#if 0 // TODO: fix compile errors with PointerMFields
    template<class T>
    void     setPointerSField(const std::string& name, T* value );
    template<class T>
    const T* getPointerSField(const std::string& name, T* type  );

    template<class T>
    void             setPointerMField(const std::string& name,
                                      bp::list           values,
                                      const T&           type   );
    template<class T>
    const PointerMField<T*, UnrecordedRefCountPolicy, 0>*
    getPointerMField(const std::string& name, const T& type);
#endif

    void setSFieldBool(const std::string& name, const bool type);
    bool getSFieldBool(const std::string& name, const bool type);

    // TODO: add multi field equivalent. I have to figure out the best way
    //       to access multi fields from python

    /*! \}                                                                 */

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in PyFieldAccessHandlerBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    PyFieldAccessHandler(void);
    PyFieldAccessHandler(const PyFieldAccessHandler &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PyFieldAccessHandler(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class PyFieldAccessHandlerBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const PyFieldAccessHandler &source);

    PyInterpreter       *_pPyInterpreter;
    PythonScriptWeakPtr  _pPythonScript;

    typedef std::map<std::string, std::string> PyFieldTypeMap;
    typedef PyFieldTypeMap::iterator           PyFieldTypeMapIterator;
    typedef PyFieldTypeMap::const_iterator     PyFieldTypeMapConstIterator;

    static PyFieldTypeMap _pyFieldTypeMap;

    bool generateFieldAccessBaseFunctions(const std::string& fieldName,
                                          bool& getAccess,
                                          bool& editAccess,
                                          bool& setAccess);
};

typedef PyFieldAccessHandler *PyFieldAccessHandlerP;

OSG_END_NAMESPACE

#include "OSGPyFieldAccessHandlerBase.inl"
#include "OSGPyFieldAccessHandler.inl"

#endif /* _OSGPYFIELDACCESSHANDLER_H_ */