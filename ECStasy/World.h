#pragma once

#include <Ecstasy/Object.h>

namespace Ecstasy
{
    class World
    {
    public:
        World();
        
        ~World();
        
        #pragma region Objects
        
        Object CreateObject() noexcept;
        
        template<typename T, typename ... Args>
        Object CreateObject() noexcept
        {
            //TODO: Implement.
        }
        
        bool DestroyObject(const Object& object);
        
        #pragma endregion
        
        #pragma region Datas
        
        //Only works if T_Data has an empty constructor variant.
        template<typename T_Data, typename std::enable_if<std::is_default_constructible<T>::value, int>::type = 0>
        void AddData(Object& object)
        {
        
        }
        
        template<typename T_Data>
        void AddData(Object& object, T_Data data)
        {
        
        }
        
        #pragma endregion
    };
}