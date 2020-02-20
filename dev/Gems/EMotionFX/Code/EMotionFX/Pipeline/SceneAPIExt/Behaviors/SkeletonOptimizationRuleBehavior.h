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

#pragma once

#include <AzSceneDef.h>
#include <SceneAPI/SceneCore/Components/BehaviorComponent.h>
#include <SceneAPI/SceneCore/Events/AssetImportRequest.h>
#include <SceneAPI/SceneCore/Events/ManifestMetaInfoBus.h>

namespace EMotionFX
{
    namespace Pipeline
    {
        namespace Behavior
        {
            class SkeletonOptimizationRuleBehavior
                : public SceneCore::BehaviorComponent
                , public SceneEvents::ManifestMetaInfoBus::Handler
                , public SceneEvents::AssetImportRequestBus::Handler
            {
            public:
                AZ_COMPONENT(SkeletonOptimizationRuleBehavior, "{09D017C6-2F6E-4F64-895D-454205AD3E50}", SceneCore::BehaviorComponent);

                ~SkeletonOptimizationRuleBehavior() override = default;

                void Activate() override;
                void Deactivate() override;
                static void Reflect(AZ::ReflectContext* context);

                void InitializeObject(const SceneContainers::Scene& scene, SceneDataTypes::IManifestObject& target) override;
                SceneEvents::ProcessingResult UpdateManifest(SceneContainers::Scene& scene, ManifestAction action,
                    RequestingApplication requester) override;

            private:
                AZ::SceneAPI::Events::ProcessingResult UpdateSelection(AZ::SceneAPI::Containers::Scene& scene) const;
            };
        }
    }
}