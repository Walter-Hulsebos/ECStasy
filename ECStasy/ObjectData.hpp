#pragma once

#include <cstdint>

namespace Ecstasy
{
    class Chunk;
    
    struct ObjectData
    {
        Chunk* chunk = nullptr;
        uint32_t index_in_chunk = 0;
        uint32_t version = 1;
        
        ObjectData() : chunk(nullptr), index_in_chunk(0), version(1) { }
        
        ObjectData(Chunk* chunk, uint32_t index_in_chunk, uint32_t version = 1)
        {
            this->chunk = chunk;
            this->index_in_chunk = index_in_chunk;
            this->version = version;
        }
    };
}