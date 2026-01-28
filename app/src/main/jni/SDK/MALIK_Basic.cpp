// Pubg Mobile (3.2.0) DUMP BY @K_Y_2 Mon May 13 11:25:07 2024
 
#include "../SDK.hpp"

namespace SDK
{
TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GUObjectArray = nullptr;
//---------------------------------------------------------------------------
bool FWeakObjectPtr::IsValid() const
{
    if (ObjectSerialNumber == 0)
    {
        return false;
    }
    if (ObjectIndex < 0)
    {
        return false;
    }
    auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
    if (!ObjectItem)
    {
        return false;
    }
    if (!SerialNumbersMatch(ObjectItem))
    {
        return false;
    }
    return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
    if (IsValid())
    {
        auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
        if (ObjectItem)
        {
            return ObjectItem->Object;
        }
    }
    return nullptr;
}
//---------------------------------------------------------------------------
}

