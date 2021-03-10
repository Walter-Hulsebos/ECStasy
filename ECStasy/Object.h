#pragma once

namespace Ecstasy
{
    
    ///Calling the Entities Objects because as far as I'm planning right now it won't have the traditional ECS features like parallelism.
    ///Because of that I won't be calling it an Entity Component System, there for the Entities Components and Systems will have different names to avoid confusion.
    
    class Object final
    {
    public:
        uint32_t id;
        
        /**
         * Needed for pooling, when you "destroy" an Object it'll be recycled.
         * The ID won't be reset, only the version will be updated.
         */
        uint32_t version;
    
    public:
        Object();
        Object(const uint32_t id, const uint32_t version);
        Object(const Object& other);
    
    public:
        bool operator==(const Object& other) const;
        bool operator!=(const Object& other) const;
    };
    
}