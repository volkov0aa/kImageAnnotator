/*
 * Copyright (C) 2018 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef ANNOTATIONITEMARRANGERTEST_H
#define ANNOTATIONITEMARRANGERTEST_H

#include <QtTest>
#include <QUndoStack>

#include "../../../src/annotations/modifiers/AnnotationItemArranger.h"
#include "../../../src/annotations/items/AnnotationLine.h"

class AnnotationItemArrangerTest : public QObject
{
    Q_OBJECT
private slots:
    void TestBringToFront_Should_BringAllSelectedItemsToFront();
    void TestBringForward_Should_MoveAllSelectedItemsOnePositionUp();
    void TestSendBackward_Should_MoveAllSelectedItemsOnePositionBack();
    void TestSendToBack_Should_SendAllSelectedItemToBack();
    void TestAnnotationItemArranger_Should_SortAllItemsByZValue_When_PositionHaveBeenSwapped();
    void TestAnnotationItemArranger_Should_NotSwapAnyPosition_When_NoItemsHaveBeenSelected();
};

#endif // ANNOTATIONITEMARRANGERTEST_H
