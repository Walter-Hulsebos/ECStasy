#include <Ecstasy/Object.h>

namespace Ecstasy
{

    #pragma region Constructors
    
    Object::Object()
    {
        this->id = 0;
        this->version = 0;
    }
    
    Object::Object(const uint32_t id, const uint32_t version)
    {
        this->id = id;
        this->version = version;
    }
    
    Object::Object(const Object& other)
    {
        this->id = other.id;
        this->version = other.version;
    }

    #pragma endregion

    #pragma region Operators
    
    bool Object::operator==(const Object& other) const
    {
        return (this->id == other.id &&
                this->version == other.version);
    }
    
    bool Object::operator!=(const Object& other) const
    {
        return !(this == other);
    }

    #pragma endregion

}