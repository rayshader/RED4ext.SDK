#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct CharacterRandomizationCategoriesList_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCharacterRandomizationCategoriesList_Record";
    static constexpr const char* ALIAS = "CharacterRandomizationCategoriesList_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CharacterRandomizationCategoriesList_Record, 0x58);
} // namespace game::data
using gamedataCharacterRandomizationCategoriesList_Record = game::data::CharacterRandomizationCategoriesList_Record;
using CharacterRandomizationCategoriesList_Record = game::data::CharacterRandomizationCategoriesList_Record;
} // namespace RED4ext

// clang-format on
