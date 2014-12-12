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

ConfigNetwork::ConfigNetwork(const char *name, int kind, int srcID, int destID) : ::cMessage(name,kind)
{
    this->sourceID_var = 0;
    this->destinationID_var = 0;

    this->n0g1Tn1g0_var = 2;
    this->n0g2Tn8g0_var = 10;
    this->n1g1Tn2g0_var = 4;
    this->n1g2Tn3g0_var = 20;
    this->n2g1Tn5g0_var = 14;
    this->n3g1Tn4g0_var = 9;
    this->n3g1Tn10g0_var = 18;
    this->n4g1Tn5g1_var = 7;
    this->n4g2Tn6g0_var = 24;
    this->n5g2Tn7g0_var = 13;
    this->n5g3Tn12g0_var = 1;
    this->n6g1Tn8g1_var = 490;
    this->n7g1Tn9g1_var = 3;
    this->n8g2Tn9g0_var = 15;
    this->n9g2Tn11g0_var = 30;
    this->n9g3Tn13g0_var = 29;
    this->n10g1Tn13g1_var = 8;
    this->n11g1Tn12g1_var = 6;
    this->n12g2Tn13g2_var = 2;
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
    this->n0g1Tn1g0_var = other.n0g1Tn1g0_var;
    this->n0g2Tn8g0_var = other.n0g2Tn8g0_var;
    this->n1g1Tn2g0_var = other.n1g1Tn2g0_var;
    this->n1g2Tn3g0_var = other.n1g2Tn3g0_var;
    this->n2g1Tn5g0_var = other.n2g1Tn5g0_var;
    this->n3g1Tn4g0_var = other.n3g1Tn4g0_var;
    this->n3g1Tn10g0_var = other.n3g1Tn10g0_var;
    this->n4g1Tn5g1_var = other.n4g1Tn5g1_var;
    this->n4g2Tn6g0_var = other.n4g2Tn6g0_var;
    this->n5g2Tn7g0_var = other.n5g2Tn7g0_var;
    this->n5g3Tn12g0_var = other.n5g3Tn12g0_var;
    this->n6g1Tn8g1_var = other.n6g1Tn8g1_var;
    this->n7g1Tn9g1_var = other.n7g1Tn9g1_var;
    this->n8g2Tn9g0_var = other.n8g2Tn9g0_var;
    this->n9g2Tn11g0_var = other.n9g2Tn11g0_var;
    this->n9g3Tn13g0_var = other.n9g3Tn13g0_var;
    this->n10g1Tn13g1_var = other.n10g1Tn13g1_var;
    this->n11g1Tn12g1_var = other.n11g1Tn12g1_var;
    this->n12g2Tn13g2_var = other.n12g2Tn13g2_var;
}

void ConfigNetwork::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->sourceID_var);
    doPacking(b,this->destinationID_var);
    doPacking(b,this->n0g1Tn1g0_var);
    doPacking(b,this->n0g2Tn8g0_var);
    doPacking(b,this->n1g1Tn2g0_var);
    doPacking(b,this->n1g2Tn3g0_var);
    doPacking(b,this->n2g1Tn5g0_var);
    doPacking(b,this->n3g1Tn4g0_var);
    doPacking(b,this->n3g1Tn10g0_var);
    doPacking(b,this->n4g1Tn5g1_var);
    doPacking(b,this->n4g2Tn6g0_var);
    doPacking(b,this->n5g2Tn7g0_var);
    doPacking(b,this->n5g3Tn12g0_var);
    doPacking(b,this->n6g1Tn8g1_var);
    doPacking(b,this->n7g1Tn9g1_var);
    doPacking(b,this->n8g2Tn9g0_var);
    doPacking(b,this->n9g2Tn11g0_var);
    doPacking(b,this->n9g3Tn13g0_var);
    doPacking(b,this->n10g1Tn13g1_var);
    doPacking(b,this->n11g1Tn12g1_var);
    doPacking(b,this->n12g2Tn13g2_var);
}

void ConfigNetwork::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->sourceID_var);
    doUnpacking(b,this->destinationID_var);
    doUnpacking(b,this->n0g1Tn1g0_var);
    doUnpacking(b,this->n0g2Tn8g0_var);
    doUnpacking(b,this->n1g1Tn2g0_var);
    doUnpacking(b,this->n1g2Tn3g0_var);
    doUnpacking(b,this->n2g1Tn5g0_var);
    doUnpacking(b,this->n3g1Tn4g0_var);
    doUnpacking(b,this->n3g1Tn10g0_var);
    doUnpacking(b,this->n4g1Tn5g1_var);
    doUnpacking(b,this->n4g2Tn6g0_var);
    doUnpacking(b,this->n5g2Tn7g0_var);
    doUnpacking(b,this->n5g3Tn12g0_var);
    doUnpacking(b,this->n6g1Tn8g1_var);
    doUnpacking(b,this->n7g1Tn9g1_var);
    doUnpacking(b,this->n8g2Tn9g0_var);
    doUnpacking(b,this->n9g2Tn11g0_var);
    doUnpacking(b,this->n9g3Tn13g0_var);
    doUnpacking(b,this->n10g1Tn13g1_var);
    doUnpacking(b,this->n11g1Tn12g1_var);
    doUnpacking(b,this->n12g2Tn13g2_var);
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

int ConfigNetwork::getN0g1Tn1g0() const
{
    return n0g1Tn1g0_var;
}

void ConfigNetwork::setN0g1Tn1g0(int n0g1Tn1g0)
{
    this->n0g1Tn1g0_var = n0g1Tn1g0;
}

int ConfigNetwork::getN0g2Tn8g0() const
{
    return n0g2Tn8g0_var;
}

void ConfigNetwork::setN0g2Tn8g0(int n0g2Tn8g0)
{
    this->n0g2Tn8g0_var = n0g2Tn8g0;
}

int ConfigNetwork::getN1g1Tn2g0() const
{
    return n1g1Tn2g0_var;
}

void ConfigNetwork::setN1g1Tn2g0(int n1g1Tn2g0)
{
    this->n1g1Tn2g0_var = n1g1Tn2g0;
}

int ConfigNetwork::getN1g2Tn3g0() const
{
    return n1g2Tn3g0_var;
}

void ConfigNetwork::setN1g2Tn3g0(int n1g2Tn3g0)
{
    this->n1g2Tn3g0_var = n1g2Tn3g0;
}

int ConfigNetwork::getN2g1Tn5g0() const
{
    return n2g1Tn5g0_var;
}

void ConfigNetwork::setN2g1Tn5g0(int n2g1Tn5g0)
{
    this->n2g1Tn5g0_var = n2g1Tn5g0;
}

int ConfigNetwork::getN3g1Tn4g0() const
{
    return n3g1Tn4g0_var;
}

void ConfigNetwork::setN3g1Tn4g0(int n3g1Tn4g0)
{
    this->n3g1Tn4g0_var = n3g1Tn4g0;
}

int ConfigNetwork::getN3g1Tn10g0() const
{
    return n3g1Tn10g0_var;
}

void ConfigNetwork::setN3g1Tn10g0(int n3g1Tn10g0)
{
    this->n3g1Tn10g0_var = n3g1Tn10g0;
}

int ConfigNetwork::getN4g1Tn5g1() const
{
    return n4g1Tn5g1_var;
}

void ConfigNetwork::setN4g1Tn5g1(int n4g1Tn5g1)
{
    this->n4g1Tn5g1_var = n4g1Tn5g1;
}

int ConfigNetwork::getN4g2Tn6g0() const
{
    return n4g2Tn6g0_var;
}

void ConfigNetwork::setN4g2Tn6g0(int n4g2Tn6g0)
{
    this->n4g2Tn6g0_var = n4g2Tn6g0;
}

int ConfigNetwork::getN5g2Tn7g0() const
{
    return n5g2Tn7g0_var;
}

void ConfigNetwork::setN5g2Tn7g0(int n5g2Tn7g0)
{
    this->n5g2Tn7g0_var = n5g2Tn7g0;
}

int ConfigNetwork::getN5g3Tn12g0() const
{
    return n5g3Tn12g0_var;
}

void ConfigNetwork::setN5g3Tn12g0(int n5g3Tn12g0)
{
    this->n5g3Tn12g0_var = n5g3Tn12g0;
}

int ConfigNetwork::getN6g1Tn8g1() const
{
    return n6g1Tn8g1_var;
}

void ConfigNetwork::setN6g1Tn8g1(int n6g1Tn8g1)
{
    this->n6g1Tn8g1_var = n6g1Tn8g1;
}

int ConfigNetwork::getN7g1Tn9g1() const
{
    return n7g1Tn9g1_var;
}

void ConfigNetwork::setN7g1Tn9g1(int n7g1Tn9g1)
{
    this->n7g1Tn9g1_var = n7g1Tn9g1;
}

int ConfigNetwork::getN8g2Tn9g0() const
{
    return n8g2Tn9g0_var;
}

void ConfigNetwork::setN8g2Tn9g0(int n8g2Tn9g0)
{
    this->n8g2Tn9g0_var = n8g2Tn9g0;
}

int ConfigNetwork::getN9g2Tn11g0() const
{
    return n9g2Tn11g0_var;
}

void ConfigNetwork::setN9g2Tn11g0(int n9g2Tn11g0)
{
    this->n9g2Tn11g0_var = n9g2Tn11g0;
}

int ConfigNetwork::getN9g3Tn13g0() const
{
    return n9g3Tn13g0_var;
}

void ConfigNetwork::setN9g3Tn13g0(int n9g3Tn13g0)
{
    this->n9g3Tn13g0_var = n9g3Tn13g0;
}

int ConfigNetwork::getN10g1Tn13g1() const
{
    return n10g1Tn13g1_var;
}

void ConfigNetwork::setN10g1Tn13g1(int n10g1Tn13g1)
{
    this->n10g1Tn13g1_var = n10g1Tn13g1;
}

int ConfigNetwork::getN11g1Tn12g1() const
{
    return n11g1Tn12g1_var;
}

void ConfigNetwork::setN11g1Tn12g1(int n11g1Tn12g1)
{
    this->n11g1Tn12g1_var = n11g1Tn12g1;
}

int ConfigNetwork::getN12g2Tn13g2() const
{
    return n12g2Tn13g2_var;
}

void ConfigNetwork::setN12g2Tn13g2(int n12g2Tn13g2)
{
    this->n12g2Tn13g2_var = n12g2Tn13g2;
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
    return basedesc ? 21+basedesc->getFieldCount(object) : 21;
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<21) ? fieldTypeFlags[field] : 0;
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
        "n0g1Tn1g0",
        "n0g2Tn8g0",
        "n1g1Tn2g0",
        "n1g2Tn3g0",
        "n2g1Tn5g0",
        "n3g1Tn4g0",
        "n3g1Tn10g0",
        "n4g1Tn5g1",
        "n4g2Tn6g0",
        "n5g2Tn7g0",
        "n5g3Tn12g0",
        "n6g1Tn8g1",
        "n7g1Tn9g1",
        "n8g2Tn9g0",
        "n9g2Tn11g0",
        "n9g3Tn13g0",
        "n10g1Tn13g1",
        "n11g1Tn12g1",
        "n12g2Tn13g2",
    };
    return (field>=0 && field<21) ? fieldNames[field] : NULL;
}

int ConfigNetworkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceID")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationID")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "n0g1Tn1g0")==0) return base+2;
    if (fieldName[0]=='n' && strcmp(fieldName, "n0g2Tn8g0")==0) return base+3;
    if (fieldName[0]=='n' && strcmp(fieldName, "n1g1Tn2g0")==0) return base+4;
    if (fieldName[0]=='n' && strcmp(fieldName, "n1g2Tn3g0")==0) return base+5;
    if (fieldName[0]=='n' && strcmp(fieldName, "n2g1Tn5g0")==0) return base+6;
    if (fieldName[0]=='n' && strcmp(fieldName, "n3g1Tn4g0")==0) return base+7;
    if (fieldName[0]=='n' && strcmp(fieldName, "n3g1Tn10g0")==0) return base+8;
    if (fieldName[0]=='n' && strcmp(fieldName, "n4g1Tn5g1")==0) return base+9;
    if (fieldName[0]=='n' && strcmp(fieldName, "n4g2Tn6g0")==0) return base+10;
    if (fieldName[0]=='n' && strcmp(fieldName, "n5g2Tn7g0")==0) return base+11;
    if (fieldName[0]=='n' && strcmp(fieldName, "n5g3Tn12g0")==0) return base+12;
    if (fieldName[0]=='n' && strcmp(fieldName, "n6g1Tn8g1")==0) return base+13;
    if (fieldName[0]=='n' && strcmp(fieldName, "n7g1Tn9g1")==0) return base+14;
    if (fieldName[0]=='n' && strcmp(fieldName, "n8g2Tn9g0")==0) return base+15;
    if (fieldName[0]=='n' && strcmp(fieldName, "n9g2Tn11g0")==0) return base+16;
    if (fieldName[0]=='n' && strcmp(fieldName, "n9g3Tn13g0")==0) return base+17;
    if (fieldName[0]=='n' && strcmp(fieldName, "n10g1Tn13g1")==0) return base+18;
    if (fieldName[0]=='n' && strcmp(fieldName, "n11g1Tn12g1")==0) return base+19;
    if (fieldName[0]=='n' && strcmp(fieldName, "n12g2Tn13g2")==0) return base+20;
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
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<21) ? fieldTypeStrings[field] : NULL;
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
        case 2: return long2string(pp->getN0g1Tn1g0());
        case 3: return long2string(pp->getN0g2Tn8g0());
        case 4: return long2string(pp->getN1g1Tn2g0());
        case 5: return long2string(pp->getN1g2Tn3g0());
        case 6: return long2string(pp->getN2g1Tn5g0());
        case 7: return long2string(pp->getN3g1Tn4g0());
        case 8: return long2string(pp->getN3g1Tn10g0());
        case 9: return long2string(pp->getN4g1Tn5g1());
        case 10: return long2string(pp->getN4g2Tn6g0());
        case 11: return long2string(pp->getN5g2Tn7g0());
        case 12: return long2string(pp->getN5g3Tn12g0());
        case 13: return long2string(pp->getN6g1Tn8g1());
        case 14: return long2string(pp->getN7g1Tn9g1());
        case 15: return long2string(pp->getN8g2Tn9g0());
        case 16: return long2string(pp->getN9g2Tn11g0());
        case 17: return long2string(pp->getN9g3Tn13g0());
        case 18: return long2string(pp->getN10g1Tn13g1());
        case 19: return long2string(pp->getN11g1Tn12g1());
        case 20: return long2string(pp->getN12g2Tn13g2());
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
        case 2: pp->setN0g1Tn1g0(string2long(value)); return true;
        case 3: pp->setN0g2Tn8g0(string2long(value)); return true;
        case 4: pp->setN1g1Tn2g0(string2long(value)); return true;
        case 5: pp->setN1g2Tn3g0(string2long(value)); return true;
        case 6: pp->setN2g1Tn5g0(string2long(value)); return true;
        case 7: pp->setN3g1Tn4g0(string2long(value)); return true;
        case 8: pp->setN3g1Tn10g0(string2long(value)); return true;
        case 9: pp->setN4g1Tn5g1(string2long(value)); return true;
        case 10: pp->setN4g2Tn6g0(string2long(value)); return true;
        case 11: pp->setN5g2Tn7g0(string2long(value)); return true;
        case 12: pp->setN5g3Tn12g0(string2long(value)); return true;
        case 13: pp->setN6g1Tn8g1(string2long(value)); return true;
        case 14: pp->setN7g1Tn9g1(string2long(value)); return true;
        case 15: pp->setN8g2Tn9g0(string2long(value)); return true;
        case 16: pp->setN9g2Tn11g0(string2long(value)); return true;
        case 17: pp->setN9g3Tn13g0(string2long(value)); return true;
        case 18: pp->setN10g1Tn13g1(string2long(value)); return true;
        case 19: pp->setN11g1Tn12g1(string2long(value)); return true;
        case 20: pp->setN12g2Tn13g2(string2long(value)); return true;
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


