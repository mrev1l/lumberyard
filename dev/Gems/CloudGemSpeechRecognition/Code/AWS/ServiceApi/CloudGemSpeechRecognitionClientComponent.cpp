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

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
// THIS CODE IS AUTOGENERATED, DO NOT MODIFY
// NOTE: This file was generated by renaming
// cpp_api_only_swagger.json to swagger.json (backing up
// the more comprehensive version) and running the 
// code gen. The cpp_api_only_swagger.json contains only
// the API's needed for the client, as the more 
// comprehensive API for CGP won't compile in C++. If you do
// this be sure to copy the comprehensive back to swagger.json
// before attempting to upload resources from the Cloud
// Canvas Resource Manager or the CGP API's won't be set up
// correctly.
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

#include "CloudGemSpeechRecognition_precompiled.h"


#include "AWS/ServiceApi/CloudGemSpeechRecognitionClientComponent.h"

namespace CloudGemSpeechRecognition {
namespace ServiceAPI {

    
    const char* LmbrAWS_CodeGen_PostAudioResponse_UUID= "{f3a674ed-8733-4734-a62c-647854710b37}";
    
    const char* LmbrAWS_CodeGen_Component_UUID= "{395da881-5b36-4461-85ad-969954598529}";
    
    const char* LmbrAWS_CodeGen_ResponseHandler_UUID= "{6b5c2592-5c81-4846-ade7-c2520701c2e8}";
    
    const char* LmbrAWS_CodeGen_PostTextRequest_UUID= "{7c3c582c-fac1-422e-bc67-e0134f2a8944}";
    
    const char* LmbrAWS_CodeGen_NotificationBus1_UUID= "{94559ad6-81e3-418d-9479-51375bb3e9b9}";
    
    const char* LmbrAWS_CodeGen_RequestBus1_UUID= "{2d95e0dd-f662-4215-bc00-64b9e5c9fe73}";
    
    const char* LmbrAWS_CodeGen_ServiceStatus_UUID= "{ce266396-6813-47b5-864e-e5a2f56bb44f}";
    
    const char* LmbrAWS_CodeGen_PostAudioRequest_UUID= "{45c9a237-0ce8-4131-bf3f-17f01bc61d8f}";
    

    void Configure()
    {
        // Insert any necessary CloudGemFramework configuration here
    }

    // redefs
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const int& item)
    {
        return writer.Int(item);
    }

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const AZStd::string& item)
    {
        return writer.String(item);
    }

    bool WriteJson(CloudGemFramework::JsonWriter& writer, const double& item)
    {
        return writer.Double(item);
    }

    
    
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const PostTextRequest& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();
            
            ok = ok && writer.Key("text");
            ok = ok && WriteJson(writer, item.text);
            
            ok = ok && writer.Key("session_attributes");
            ok = ok && WriteJson(writer, item.session_attributes);
            
            ok = ok && writer.Key("user_id");
            ok = ok && WriteJson(writer, item.user_id);
            
            ok = ok && writer.Key("name");
            ok = ok && WriteJson(writer, item.name);
            
            ok = ok && writer.Key("bot_alias");
            ok = ok && WriteJson(writer, item.bot_alias);
            
            ok = ok && writer.EndObject();
            return ok;
    }
    
    
    
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const PostAudioResponse& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();
            
            ok = ok && writer.Key("slot_to_elicit");
            ok = ok && WriteJson(writer, item.slot_to_elicit);
            
            ok = ok && writer.Key("session_attributes");
            ok = ok && WriteJson(writer, item.session_attributes);
            
            ok = ok && writer.Key("intent");
            ok = ok && WriteJson(writer, item.intent);
            
            ok = ok && writer.Key("input_transcript");
            ok = ok && WriteJson(writer, item.input_transcript);
            
            ok = ok && writer.Key("dialog_state");
            ok = ok && WriteJson(writer, item.dialog_state);
            
            ok = ok && writer.Key("slots");
            ok = ok && WriteJson(writer, item.slots);
            
            ok = ok && writer.Key("message");
            ok = ok && WriteJson(writer, item.message);
            
            ok = ok && writer.EndObject();
            return ok;
    }
    
    
    
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const ServiceStatus& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();
            
            ok = ok && writer.Key("status");
            ok = ok && WriteJson(writer, item.status);
            
            ok = ok && writer.EndObject();
            return ok;
    }
    
    
    
    bool WriteJson(CloudGemFramework::JsonWriter& writer, const PostAudioRequest& item)
    {
            bool ok = true;
            ok = ok && writer.StartObject();
            
            ok = ok && writer.Key("session_attributes");
            ok = ok && WriteJson(writer, item.session_attributes);
            
            ok = ok && writer.Key("audio");
            ok = ok && WriteJson(writer, item.audio);
            
            ok = ok && writer.Key("user_id");
            ok = ok && WriteJson(writer, item.user_id);
            
            ok = ok && writer.Key("name");
            ok = ok && WriteJson(writer, item.name);
            
            ok = ok && writer.Key("bot_alias");
            ok = ok && WriteJson(writer, item.bot_alias);
            
            ok = ok && writer.EndObject();
            return ok;
    }
    
    

    // Generated Function Parameters
    
    bool PostServicePosttextRequest::Parameters::BuildRequest(CloudGemFramework::RequestBuilder& request)
    {
                bool ok = true;
                
                
                ok = ok && request.WriteJsonBodyParameter(*this);
                return ok;
    }

    bool PostServicePosttextRequest::Parameters::WriteJson(CloudGemFramework::JsonWriter& writer) const
    {
        bool ok = true;
        
        ok = ok && CloudGemSpeechRecognition::ServiceAPI::WriteJson(writer, post_text);
        
        return ok;
    }
    
    bool GetServiceStatusRequest::Parameters::BuildRequest(CloudGemFramework::RequestBuilder& request)
    {
                bool ok = true;
                
                
                ok = ok && request.WriteJsonBodyParameter(*this);
                return ok;
    }

    bool GetServiceStatusRequest::Parameters::WriteJson(CloudGemFramework::JsonWriter& writer) const
    {
        bool ok = true;
        
        return ok;
    }
    
    bool PostServicePostaudioRequest::Parameters::BuildRequest(CloudGemFramework::RequestBuilder& request)
    {
                bool ok = true;
                
                
                ok = ok && request.WriteJsonBodyParameter(*this);
                return ok;
    }

    bool PostServicePostaudioRequest::Parameters::WriteJson(CloudGemFramework::JsonWriter& writer) const
    {
        bool ok = true;
        
        ok = ok && CloudGemSpeechRecognition::ServiceAPI::WriteJson(writer, post_audio);
        
        return ok;
    }
    




    // CloudGemSpeechRecognitionNotificationBus
    
    
    void CloudGemSpeechRecognitionNotifications::OnPostServicePosttextRequestSuccess(const PostAudioResponse response) { }
    
    void CloudGemSpeechRecognitionNotifications::OnPostServicePosttextRequestError(const CloudGemFramework::Error error) { }
    
    
    void CloudGemSpeechRecognitionNotifications::OnGetServiceStatusRequestSuccess(const ServiceStatus response) { }
    
    void CloudGemSpeechRecognitionNotifications::OnGetServiceStatusRequestError(const CloudGemFramework::Error error) { }
    
    
    void CloudGemSpeechRecognitionNotifications::OnPostServicePostaudioRequestSuccess(const PostAudioResponse response) { }
    
    void CloudGemSpeechRecognitionNotifications::OnPostServicePostaudioRequestError(const CloudGemFramework::Error error) { }
    


    // BehaviorContext CloudGemSpeechRecognitionNotificationBus handler implementation
    
    
    void BehaviorCloudGemSpeechRecognitionNotificationBusHandler::OnPostServicePosttextRequestSuccess(const PostAudioResponse response)
    {
        Call(FN_OnPostServicePosttextRequestSuccess, response);
    }
    
    void BehaviorCloudGemSpeechRecognitionNotificationBusHandler::OnPostServicePosttextRequestError(const CloudGemFramework::Error error)
    {
        Call(FN_OnPostServicePosttextRequestError, error);
    }
    
    
    void BehaviorCloudGemSpeechRecognitionNotificationBusHandler::OnGetServiceStatusRequestSuccess(const ServiceStatus response)
    {
        Call(FN_OnGetServiceStatusRequestSuccess, response);
    }
    
    void BehaviorCloudGemSpeechRecognitionNotificationBusHandler::OnGetServiceStatusRequestError(const CloudGemFramework::Error error)
    {
        Call(FN_OnGetServiceStatusRequestError, error);
    }
    
    
    void BehaviorCloudGemSpeechRecognitionNotificationBusHandler::OnPostServicePostaudioRequestSuccess(const PostAudioResponse response)
    {
        Call(FN_OnPostServicePostaudioRequestSuccess, response);
    }
    
    void BehaviorCloudGemSpeechRecognitionNotificationBusHandler::OnPostServicePostaudioRequestError(const CloudGemFramework::Error error)
    {
        Call(FN_OnPostServicePostaudioRequestError, error);
    }
    

    // CloudGemSpeechRecognitionRequestBus
    
    
    void CloudGemSpeechRecognitionRequests::PostServicePosttext(const PostTextRequest& post_text, CloudGemSpeechRecognitionResponseHandler* responseHandler) { }
    
    
    
    void CloudGemSpeechRecognitionRequests::GetServiceStatus(CloudGemSpeechRecognitionResponseHandler* responseHandler) { }
    
    
    
    void CloudGemSpeechRecognitionRequests::PostServicePostaudio(const PostAudioRequest& post_audio, CloudGemSpeechRecognitionResponseHandler* responseHandler) { }
    
    

    // CloudGemSpeechRecognitionResponseHandler
    
    void CloudGemSpeechRecognitionResponseHandler::HandlePostServicePosttextSuccess(PostServicePosttextRequestJob* job, AZ::EntityId entityId)
    {
        
        EBUS_EVENT_ID(entityId, CloudGemSpeechRecognitionNotificationBus, OnPostServicePosttextRequestSuccess, job->result);
        
    }

    void CloudGemSpeechRecognitionResponseHandler::HandlePostServicePosttextError(PostServicePosttextRequestJob* job, AZ::EntityId entityId)
    {
        EBUS_EVENT_ID(entityId, CloudGemSpeechRecognitionNotificationBus, OnPostServicePosttextRequestError, job->error);
    }
    
    void CloudGemSpeechRecognitionResponseHandler::HandleGetServiceStatusSuccess(GetServiceStatusRequestJob* job, AZ::EntityId entityId)
    {
        
        EBUS_EVENT_ID(entityId, CloudGemSpeechRecognitionNotificationBus, OnGetServiceStatusRequestSuccess, job->result);
        
    }

    void CloudGemSpeechRecognitionResponseHandler::HandleGetServiceStatusError(GetServiceStatusRequestJob* job, AZ::EntityId entityId)
    {
        EBUS_EVENT_ID(entityId, CloudGemSpeechRecognitionNotificationBus, OnGetServiceStatusRequestError, job->error);
    }
    
    void CloudGemSpeechRecognitionResponseHandler::HandlePostServicePostaudioSuccess(PostServicePostaudioRequestJob* job, AZ::EntityId entityId)
    {
        
        EBUS_EVENT_ID(entityId, CloudGemSpeechRecognitionNotificationBus, OnPostServicePostaudioRequestSuccess, job->result);
        
    }

    void CloudGemSpeechRecognitionResponseHandler::HandlePostServicePostaudioError(PostServicePostaudioRequestJob* job, AZ::EntityId entityId)
    {
        EBUS_EVENT_ID(entityId, CloudGemSpeechRecognitionNotificationBus, OnPostServicePostaudioRequestError, job->error);
    }
    


    // CloudGemSpeechRecognitionClientComponent
    void CloudGemSpeechRecognitionClientComponent::Init()
    {
        m_defaultResponseHandler = AZStd::make_shared<CloudGemSpeechRecognitionResponseHandler>();
        CloudGemSpeechRecognition::ServiceAPI::Configure();
    }

    void CloudGemSpeechRecognitionClientComponent::Activate()
    {
        CloudGemSpeechRecognitionRequestBus::Handler::BusConnect(m_entity->GetId());
    }

    void CloudGemSpeechRecognitionClientComponent::Deactivate()
    {
        CloudGemSpeechRecognitionRequestBus::Handler::BusDisconnect();
    }

    
    
    void CloudGemSpeechRecognitionClientComponent::PostServicePosttext(const PostTextRequest& post_text, CloudGemSpeechRecognitionResponseHandler* responseHandler)
    
    {
        // Cache our entityId in case the entity goes away
        AZ::EntityId entityId;
        if (m_entity)
        {
            entityId = m_entity->GetId();
        }

        // Cache our default response handler in case this component goes away
        AZStd::shared_ptr < CloudGemSpeechRecognitionResponseHandler > defaultResponseHandler = m_defaultResponseHandler;

        // Create job
        PostServicePosttextRequestJob* requestJob = PostServicePosttextRequestJob::Create(
            [responseHandler, defaultResponseHandler, entityId](PostServicePosttextRequestJob* successJob)
            {
                // handle success
                CloudGemSpeechRecognitionResponseHandler* successHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (successHandler)
                {
                    successHandler->HandlePostServicePosttextSuccess(successJob, entityId);
                }
            },
            [responseHandler, defaultResponseHandler, entityId](PostServicePosttextRequestJob* failedJob)
            {
                // handle error
                CloudGemSpeechRecognitionResponseHandler* failureHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (failureHandler)
                {
                    failureHandler->HandlePostServicePosttextError(failedJob, entityId);
                }
            }
        );
        
        requestJob->parameters.post_text = post_text;
        
        
        
        requestJob->Start();
    }
    
    
    void CloudGemSpeechRecognitionClientComponent::GetServiceStatus(CloudGemSpeechRecognitionResponseHandler* responseHandler)
    
    {
        // Cache our entityId in case the entity goes away
        AZ::EntityId entityId;
        if (m_entity)
        {
            entityId = m_entity->GetId();
        }

        // Cache our default response handler in case this component goes away
        AZStd::shared_ptr < CloudGemSpeechRecognitionResponseHandler > defaultResponseHandler = m_defaultResponseHandler;

        // Create job
        GetServiceStatusRequestJob* requestJob = GetServiceStatusRequestJob::Create(
            [responseHandler, defaultResponseHandler, entityId](GetServiceStatusRequestJob* successJob)
            {
                // handle success
                CloudGemSpeechRecognitionResponseHandler* successHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (successHandler)
                {
                    successHandler->HandleGetServiceStatusSuccess(successJob, entityId);
                }
            },
            [responseHandler, defaultResponseHandler, entityId](GetServiceStatusRequestJob* failedJob)
            {
                // handle error
                CloudGemSpeechRecognitionResponseHandler* failureHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (failureHandler)
                {
                    failureHandler->HandleGetServiceStatusError(failedJob, entityId);
                }
            }
        );
        
        
        
        requestJob->Start();
    }
    
    
    void CloudGemSpeechRecognitionClientComponent::PostServicePostaudio(const PostAudioRequest& post_audio, CloudGemSpeechRecognitionResponseHandler* responseHandler)
    
    {
        // Cache our entityId in case the entity goes away
        AZ::EntityId entityId;
        if (m_entity)
        {
            entityId = m_entity->GetId();
        }

        // Cache our default response handler in case this component goes away
        AZStd::shared_ptr < CloudGemSpeechRecognitionResponseHandler > defaultResponseHandler = m_defaultResponseHandler;

        // Create job
        PostServicePostaudioRequestJob* requestJob = PostServicePostaudioRequestJob::Create(
            [responseHandler, defaultResponseHandler, entityId](PostServicePostaudioRequestJob* successJob)
            {
                // handle success
                CloudGemSpeechRecognitionResponseHandler* successHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (successHandler)
                {
                    successHandler->HandlePostServicePostaudioSuccess(successJob, entityId);
                }
            },
            [responseHandler, defaultResponseHandler, entityId](PostServicePostaudioRequestJob* failedJob)
            {
                // handle error
                CloudGemSpeechRecognitionResponseHandler* failureHandler = responseHandler ? responseHandler : defaultResponseHandler.get();
                if (failureHandler)
                {
                    failureHandler->HandlePostServicePostaudioError(failedJob, entityId);
                }
            }
        );
        
        requestJob->parameters.post_audio = post_audio;
        
        
        
        requestJob->Start();
    }
    

    
    
    bool PostTextRequest::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {
        
        if (strcmp(key, "text") == 0) return reader.Accept(text);
        
        if (strcmp(key, "session_attributes") == 0) return reader.Accept(session_attributes);
        
        if (strcmp(key, "user_id") == 0) return reader.Accept(user_id);
        
        if (strcmp(key, "name") == 0) return reader.Accept(name);
        
        if (strcmp(key, "bot_alias") == 0) return reader.Accept(bot_alias);
        
        return reader.Ignore();
    }

    void PostTextRequest::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<PostTextRequest>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<PostTextRequest>("CloudGemSpeechRecognition_PostTextRequest")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)
            
                ->Property("text", BehaviorValueProperty(&PostTextRequest::text))
            
                ->Property("session_attributes", BehaviorValueProperty(&PostTextRequest::session_attributes))
            
                ->Property("user_id", BehaviorValueProperty(&PostTextRequest::user_id))
            
                ->Property("name", BehaviorValueProperty(&PostTextRequest::name))
            
                ->Property("bot_alias", BehaviorValueProperty(&PostTextRequest::bot_alias))
            
            ;
        }
    }
    
    
    
    bool PostAudioResponse::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {
        
        if (strcmp(key, "slot_to_elicit") == 0) return reader.Accept(slot_to_elicit);
        
        if (strcmp(key, "session_attributes") == 0) return reader.Accept(session_attributes);
        
        if (strcmp(key, "intent") == 0) return reader.Accept(intent);
        
        if (strcmp(key, "input_transcript") == 0) return reader.Accept(input_transcript);
        
        if (strcmp(key, "dialog_state") == 0) return reader.Accept(dialog_state);
        
        if (strcmp(key, "slots") == 0) return reader.Accept(slots);
        
        if (strcmp(key, "message") == 0) return reader.Accept(message);
        
        return reader.Ignore();
    }

    void PostAudioResponse::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<PostAudioResponse>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<PostAudioResponse>("CloudGemSpeechRecognition_PostAudioResponse")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)
            
                ->Property("slot_to_elicit", BehaviorValueProperty(&PostAudioResponse::slot_to_elicit))
            
                ->Property("session_attributes", BehaviorValueProperty(&PostAudioResponse::session_attributes))
            
                ->Property("intent", BehaviorValueProperty(&PostAudioResponse::intent))
            
                ->Property("input_transcript", BehaviorValueProperty(&PostAudioResponse::input_transcript))
            
                ->Property("dialog_state", BehaviorValueProperty(&PostAudioResponse::dialog_state))
            
                ->Property("slots", BehaviorValueProperty(&PostAudioResponse::slots))
            
                ->Property("message", BehaviorValueProperty(&PostAudioResponse::message))
            
            ;
        }
    }
    
    
    
    bool ServiceStatus::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {
        
        if (strcmp(key, "status") == 0) return reader.Accept(status);
        
        return reader.Ignore();
    }

    void ServiceStatus::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<ServiceStatus>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<ServiceStatus>("CloudGemSpeechRecognition_ServiceStatus")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)
            
                ->Property("status", BehaviorValueProperty(&ServiceStatus::status))
            
            ;
        }
    }
    
    
    
    bool PostAudioRequest::OnJsonKey(const char* key, CloudGemFramework::JsonReader& reader)
    {
        
        if (strcmp(key, "session_attributes") == 0) return reader.Accept(session_attributes);
        
        if (strcmp(key, "audio") == 0) return reader.Accept(audio);
        
        if (strcmp(key, "user_id") == 0) return reader.Accept(user_id);
        
        if (strcmp(key, "name") == 0) return reader.Accept(name);
        
        if (strcmp(key, "bot_alias") == 0) return reader.Accept(bot_alias);
        
        return reader.Ignore();
    }

    void PostAudioRequest::Reflect(AZ::ReflectContext* reflection)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);

        if (serializeContext)
        {
            serializeContext->Class<PostAudioRequest>()
                ->Version(1);
        }

        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(reflection);
        if (behaviorContext)
        {
            behaviorContext->Class<PostAudioRequest>("CloudGemSpeechRecognition_PostAudioRequest")
                ->Attribute(AZ::Script::Attributes::Storage, AZ::Script::Attributes::StorageType::Value)
            
                ->Property("session_attributes", BehaviorValueProperty(&PostAudioRequest::session_attributes))
            
                ->Property("audio", BehaviorValueProperty(&PostAudioRequest::audio))
            
                ->Property("user_id", BehaviorValueProperty(&PostAudioRequest::user_id))
            
                ->Property("name", BehaviorValueProperty(&PostAudioRequest::name))
            
                ->Property("bot_alias", BehaviorValueProperty(&PostAudioRequest::bot_alias))
            
            ;
        }
    }
    
    
}
}