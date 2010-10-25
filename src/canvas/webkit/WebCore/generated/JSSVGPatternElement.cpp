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

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGPatternElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGPatternElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPatternElement);

/* Hash table */

static const HashTableValue JSSVGPatternElementTableValues[20] =
{
    { "patternUnits", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPatternUnits), (intptr_t)0 },
    { "patternContentUnits", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPatternContentUnits), (intptr_t)0 },
    { "patternTransform", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPatternTransform), (intptr_t)0 },
    { "x", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementX), (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementY), (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementWidth), (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementHeight), (intptr_t)0 },
    { "href", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementHref), (intptr_t)0 },
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementRequiredFeatures), (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementRequiredExtensions), (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementSystemLanguage), (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementXmllang), (intptr_t)setJSSVGPatternElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementXmlspace), (intptr_t)setJSSVGPatternElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementExternalResourcesRequired), (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementClassName), (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementStyle), (intptr_t)0 },
    { "viewBox", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementViewBox), (intptr_t)0 },
    { "preserveAspectRatio", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPreserveAspectRatio), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPatternElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSSVGPatternElementTableValues, 0 };
#else
    { 68, 63, JSSVGPatternElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGPatternElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPatternElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPatternElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGPatternElementConstructorTableValues, 0 };
#endif

class JSSVGPatternElementConstructor : public DOMConstructorObject {
public:
    JSSVGPatternElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGPatternElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGPatternElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGPatternElementConstructor::s_info = { "SVGPatternElementConstructor", 0, &JSSVGPatternElementConstructorTable, 0 };

bool JSSVGPatternElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPatternElementConstructor, DOMObject>(exec, &JSSVGPatternElementConstructorTable, this, propertyName, slot);
}

bool JSSVGPatternElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPatternElementConstructor, DOMObject>(exec, &JSSVGPatternElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPatternElementPrototypeTableValues[3] =
{
    { "hasExtension", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGPatternElementPrototypeFunctionHasExtension), (intptr_t)1 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGPatternElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPatternElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSSVGPatternElementPrototypeTableValues, 0 };
#else
    { 4, 3, JSSVGPatternElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGPatternElementPrototype::s_info = { "SVGPatternElementPrototype", 0, &JSSVGPatternElementPrototypeTable, 0 };

JSObject* JSSVGPatternElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPatternElement>(exec, globalObject);
}

bool JSSVGPatternElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPatternElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGPatternElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGPatternElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGPatternElement::s_info = { "SVGPatternElement", &JSSVGElement::s_info, &JSSVGPatternElementTable, 0 };

JSSVGPatternElement::JSSVGPatternElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPatternElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGPatternElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPatternElementPrototype(JSSVGPatternElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGPatternElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPatternElement, Base>(exec, &JSSVGPatternElementTable, this, propertyName, slot);
}

bool JSSVGPatternElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPatternElement, Base>(exec, &JSSVGPatternElementTable, this, propertyName, descriptor);
}

JSValue jsSVGPatternElementPatternUnits(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->patternUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementPatternContentUnits(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->patternContentUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementPatternTransform(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->patternTransformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementHref(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredFeatures()), imp);
    return result;
}

JSValue jsSVGPatternElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredExtensions()), imp);
    return result;
}

JSValue jsSVGPatternElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->systemLanguage()), imp);
    return result;
}

JSValue jsSVGPatternElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}

JSValue jsSVGPatternElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}

JSValue jsSVGPatternElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGPatternElementViewBox(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedRect> obj = imp->viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementPreserveAspectRatio(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* castedThis = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGPatternElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPatternElement* domObject = static_cast<JSSVGPatternElement*>(asObject(slotBase));
    return JSSVGPatternElement::getConstructor(exec, domObject->globalObject());
}
void JSSVGPatternElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPatternElement, Base>(exec, propertyName, value, &JSSVGPatternElementTable, this, slot);
}

void setJSSVGPatternElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPatternElement* castedThisObj = static_cast<JSSVGPatternElement*>(thisObject);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThisObj->impl());
    imp->setXmllang(value.toString(exec));
}

void setJSSVGPatternElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPatternElement* castedThisObj = static_cast<JSSVGPatternElement*>(thisObject);
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThisObj->impl());
    imp->setXmlspace(value.toString(exec));
}

JSValue JSSVGPatternElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPatternElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGPatternElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPatternElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPatternElement* castedThisObj = static_cast<JSSVGPatternElement*>(asObject(thisValue));
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThisObj->impl());
    const UString& extension = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue JSC_HOST_CALL jsSVGPatternElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPatternElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPatternElement* castedThisObj = static_cast<JSSVGPatternElement*>(asObject(thisValue));
    SVGPatternElement* imp = static_cast<SVGPatternElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG)