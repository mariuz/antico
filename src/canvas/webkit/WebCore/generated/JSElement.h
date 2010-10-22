/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSElement_h
#define JSElement_h

#include "Element.h"
#include "JSNode.h"
#include <runtime/Lookup.h>
#include <wtf/AlwaysInline.h>

namespace WebCore {

class Element;

class JSElement : public JSNode {
    typedef JSNode Base;
public:
    JSElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<Element>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    virtual void markChildren(JSC::MarkStack&);

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom functions
    JSC::JSValue setAttribute(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue setAttributeNode(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue setAttributeNS(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue setAttributeNodeNS(JSC::ExecState*, const JSC::ArgList&);
    Element* impl() const
    {
        return static_cast<Element*>(Base::impl());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

ALWAYS_INLINE bool JSElement::getOwnPropertySlot(JSC::ExecState* exec, const JSC::Identifier& propertyName, JSC::PropertySlot& slot)
{
    return JSC::getStaticValueSlot<JSElement, Base>(exec, s_info.staticPropHashTable, this, propertyName, slot);
}

ALWAYS_INLINE bool JSElement::getOwnPropertyDescriptor(JSC::ExecState* exec, const JSC::Identifier& propertyName, JSC::PropertyDescriptor& descriptor)
{
    return JSC::getStaticValueDescriptor<JSElement, Base>(exec, s_info.staticPropHashTable, this, propertyName, descriptor);
}

Element* toElement(JSC::JSValue);
JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject*, Element*);

class JSElementPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSElementPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionRemoveAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttributeNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttributeNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionRemoveAttributeNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetElementsByTagName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttributeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttributeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionRemoveAttributeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetElementsByTagNameNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetAttributeNodeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionSetAttributeNodeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionHasAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionHasAttributeNS(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionFocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionBlur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollIntoView(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionContains(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollIntoViewIfNeeded(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollByLines(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionScrollByPages(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetElementsByClassName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionQuerySelector(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionQuerySelectorAll(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionWebkitMatchesSelector(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetClientRects(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
JSC::JSValue JSC_HOST_CALL jsElementPrototypeFunctionGetBoundingClientRect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue, const JSC::ArgList&);
// Attributes

JSC::JSValue jsElementTagName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementStyle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementOffsetLeft(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementOffsetTop(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementOffsetWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementOffsetHeight(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementOffsetParent(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementClientLeft(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementClientTop(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementClientWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementClientHeight(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementScrollLeft(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementScrollLeft(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementScrollTop(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementScrollTop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementScrollWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementScrollHeight(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementFirstElementChild(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementLastElementChild(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementPreviousElementSibling(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementNextElementSibling(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementChildElementCount(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsElementOnabort(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnblur(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnblur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnchange(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnclick(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOncontextmenu(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOncontextmenu(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndblclick(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOndblclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndrag(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOndrag(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragend(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOndragend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragenter(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOndragenter(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragleave(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOndragleave(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragover(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOndragover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndragstart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOndragstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOndrop(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOndrop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnerror(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnfocus(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnfocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOninput(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOninput(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOninvalid(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOninvalid(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnkeydown(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnkeydown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnkeypress(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnkeypress(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnkeyup(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnkeyup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnload(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmousedown(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnmousedown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmousemove(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnmousemove(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmouseout(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnmouseout(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmouseover(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnmouseover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmouseup(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnmouseup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnmousewheel(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnmousewheel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnscroll(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnscroll(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnselect(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnselect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnsubmit(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnsubmit(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnbeforecut(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnbeforecut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOncut(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOncut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnbeforecopy(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnbeforecopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOncopy(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOncopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnbeforepaste(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnbeforepaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnpaste(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnpaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnreset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnreset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnsearch(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnsearch(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOnselectstart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOnselectstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOntouchstart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOntouchstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOntouchmove(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOntouchmove(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOntouchend(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOntouchend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementOntouchcancel(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSElementOntouchcancel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsElementConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
