/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TextLabel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextLabelBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TextLabelBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TextLabelBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TextLabel::_sfText field.

inline
std::string &TextLabelBase::editText(void)
{
    editSField(TextFieldMask);

    return _sfText.getValue();
}

//! Get the value of the TextLabel::_sfText field.
inline
const std::string &TextLabelBase::getText(void) const
{
    return _sfText.getValue();
}

//! Set the value of the TextLabel::_sfText field.
inline
void TextLabelBase::setText(const std::string &value)
{
    editSField(TextFieldMask);

    _sfText.setValue(value);
}
//! Get the value of the TextLabel::_sfSize field.

inline
Real32 &TextLabelBase::editSize(void)
{
    editSField(SizeFieldMask);

    return _sfSize.getValue();
}

//! Get the value of the TextLabel::_sfSize field.
inline
      Real32  TextLabelBase::getSize(void) const
{
    return _sfSize.getValue();
}

//! Set the value of the TextLabel::_sfSize field.
inline
void TextLabelBase::setSize(const Real32 value)
{
    editSField(SizeFieldMask);

    _sfSize.setValue(value);
}
//! Get the value of the TextLabel::_sfFamily field.

inline
std::string &TextLabelBase::editFamily(void)
{
    editSField(FamilyFieldMask);

    return _sfFamily.getValue();
}

//! Get the value of the TextLabel::_sfFamily field.
inline
const std::string &TextLabelBase::getFamily(void) const
{
    return _sfFamily.getValue();
}

//! Set the value of the TextLabel::_sfFamily field.
inline
void TextLabelBase::setFamily(const std::string &value)
{
    editSField(FamilyFieldMask);

    _sfFamily.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TextLabelBase::execSync (      TextLabelBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TextFieldMask & whichField))
        _sfText.syncWith(pFrom->_sfText);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pFrom->_sfSize);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
        _sfFamily.syncWith(pFrom->_sfFamily);
}
#endif


inline
const Char8 *TextLabelBase::getClassname(void)
{
    return "TextLabel";
}
OSG_GEN_CONTAINERPTR(TextLabel);

OSG_END_NAMESPACE
