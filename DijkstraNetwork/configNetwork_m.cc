//
// Generated file, do not edit! Created by nedtool 4.6 from configNetwork.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "configNetwork_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

Register_Class(ConfigNetwork);

ConfigNetwork::ConfigNetwork(const char *name, int kind, int srcID, int destID, std::string weights) : ::cMessage(name,kind)
{
    this->sourceID_var = srcID;
    this->destinationID_var = destID;
    this->weights_var = weights;
}

ConfigNetwork::ConfigNetwork(const ConfigNetwork& other) : ::cMessage(other)
{
    copy(other);
}

ConfigNetwork::~ConfigNetwork()
{
}

ConfigNetwork& ConfigNetwork::operator=(const ConfigNetwork& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void ConfigNetwork::copy(const ConfigNetwork& other)
{
    this->sourceID_var = other.sourceID_var;
    this->destinationID_var = other.destinationID_var;
    this->weights_var = other.weights_var;
}

void ConfigNetwork::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->sourceID_var);
    doPacking(b,this->destinationID_var);
}

void ConfigNetwork::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->sourceID_var);
    doUnpacking(b,this->destinationID_var);
}

int ConfigNetwork::getSourceID() const
{
    return sourceID_var;
}

void ConfigNetwork::setSourceID(int sourceID)
{
    this->sourceID_var = sourceID;
}

int ConfigNetwork::getDestinationID() const
{
    return destinationID_var;
}

void ConfigNetwork::setDestinationID(int destinationID)
{
    this->destinationID_var = destinationID;
}

std::string ConfigNetwork::getPathsWeight() const
{
    return weights_var;
}


class ConfigNetworkDescriptor : public cClassDescriptor
{
  public:
    ConfigNetworkDescriptor();
    virtual ~ConfigNetworkDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(ConfigNetworkDescriptor);

ConfigNetworkDescriptor::ConfigNetworkDescriptor() : cClassDescriptor("ConfigNetwork", "cMessage")
{
}

ConfigNetworkDescriptor::~ConfigNetworkDescriptor()
{
}

bool ConfigNetworkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ConfigNetwork *>(obj)!=NULL;
}

const char *ConfigNetworkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ConfigNetworkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ConfigNetworkDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *ConfigNetworkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sourceID",
        "destinationID",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ConfigNetworkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceID")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationID")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ConfigNetworkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ConfigNetworkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int ConfigNetworkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ConfigNetwork *pp = (ConfigNetwork *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ConfigNetworkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ConfigNetwork *pp = (ConfigNetwork *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSourceID());
        case 1: return long2string(pp->getDestinationID());
        default: return "";
    }
}

bool ConfigNetworkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ConfigNetwork *pp = (ConfigNetwork *)object; (void)pp;
    switch (field) {
        case 0: pp->setSourceID(string2long(value)); return true;
        case 1: pp->setDestinationID(string2long(value)); return true;
        default: return false;
    }
}

const char *ConfigNetworkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *ConfigNetworkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ConfigNetwork *pp = (ConfigNetwork *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


