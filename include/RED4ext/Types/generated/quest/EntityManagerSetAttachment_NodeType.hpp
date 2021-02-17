#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest { struct IEntityManagerSetAttachment_NodeSubType; }

namespace quest { 
struct EntityManagerSetAttachment_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerSetAttachment_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IEntityManagerSetAttachment_NodeSubType> subtype; // 30
};
RED4EXT_ASSERT_SIZE(EntityManagerSetAttachment_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext