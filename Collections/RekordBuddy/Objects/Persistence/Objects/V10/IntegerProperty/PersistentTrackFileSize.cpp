//
//  Rekord Buddy - The future proof music collection tool made by DJs for DJs.
//  Copyright (C) 2020-2021 Didier Malenfant (didier@rekordbuddy.org)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#include <RekordBuddyCollectionImplementationPersistence/V10/IntegerProperty/PersistentTrackFileSize.hpp>

#include <RekordBuddyCollectionImplementationPersistence/V10/IntegerProperty/PersistentIntegerProperty.hpp>
using namespace NxA;

using namespace NxA::RekordBuddy::CollectionImplementation::V10;

using LocalType = PersistentTrackFileSize;

template class NxA::Array<std::shared_ptr<PersistentTrackFileSize>>;
void PersistentTrackFileSize::bind(SourceBinder& parentBinder)
{
    PersistentIntegerProperty::bind(parentBinder);
    parentBinder.bind(RBSchema::Type::TrackFileSize, RBSchema::Type::IntegerProperty);
}
void PersistentTrackFileSize::faultObject()
{
    if (isFaulted()) {
        return;
    }
    PersistentIntegerProperty::faultObject();
}
void PersistentTrackFileSize::deleteObject()
{
    if (isDeleted()) {
        return;
    }
    PersistentIntegerProperty::deleteObject();
}