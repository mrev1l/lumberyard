/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/
// Original file Copyright Crytek GMBH or its affiliates, used under license.

#pragma once
////////////////////////////////////////////////////////////////////////////
//  Crytek Engine Source File.
//  (c) 2001 - 2014 Crytek GmbH
// -------------------------------------------------------------------------
//  File name:   RingSelectionTool.h
//  Created:     Feb/13/2014 by Jaesik.
////////////////////////////////////////////////////////////////////////////

#include "Tools/BaseTool.h"

class RingSelectionTool
    : public BaseTool
{
public:

    RingSelectionTool(CD::EDesignerTool tool)
        : BaseTool(tool)
    {
    }

    void Enter() override;
    static void RingSelection(const CD::SMainContext& mc);

private:

    static void SelectFaceRing(const CD::SMainContext& mc);
    static void SelectRing(const CD::SMainContext& mc, const BrushEdge3D& inputEdge);
};
