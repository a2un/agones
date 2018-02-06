// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: sdk.proto
// Original file comments:
// Copyright 2017 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_sdk_2eproto__INCLUDED
#define GRPC_sdk_2eproto__INCLUDED

#include "sdk.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace stable {
namespace agones {
namespace dev {
namespace sdk {

// SDK service to be used in the GameServer SDK to the Pod Sidecar
class SDK final {
 public:
  static constexpr char const* service_full_name() {
    return "stable.agones.dev.sdk.SDK";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Call when the GameServer is ready
    virtual ::grpc::Status Ready(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::stable::agones::dev::sdk::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>> AsyncReady(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>>(AsyncReadyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>> PrepareAsyncReady(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>>(PrepareAsyncReadyRaw(context, request, cq));
    }
    // Call when the GmaeServer is shutting down
    virtual ::grpc::Status Shutdown(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::stable::agones::dev::sdk::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>> AsyncShutdown(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>>(AsyncShutdownRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>> PrepareAsyncShutdown(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>>(PrepareAsyncShutdownRaw(context, request, cq));
    }
    // Send a Empty every d Duration to declare that this GameSever is healthy
    std::unique_ptr< ::grpc::ClientWriterInterface< ::stable::agones::dev::sdk::Empty>> Health(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::stable::agones::dev::sdk::Empty>>(HealthRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::stable::agones::dev::sdk::Empty>> AsyncHealth(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::stable::agones::dev::sdk::Empty>>(AsyncHealthRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::stable::agones::dev::sdk::Empty>> PrepareAsyncHealth(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::stable::agones::dev::sdk::Empty>>(PrepareAsyncHealthRaw(context, response, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>* AsyncReadyRaw(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>* PrepareAsyncReadyRaw(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>* AsyncShutdownRaw(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::stable::agones::dev::sdk::Empty>* PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientWriterInterface< ::stable::agones::dev::sdk::Empty>* HealthRaw(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::stable::agones::dev::sdk::Empty>* AsyncHealthRaw(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::stable::agones::dev::sdk::Empty>* PrepareAsyncHealthRaw(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Ready(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::stable::agones::dev::sdk::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>> AsyncReady(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>>(AsyncReadyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>> PrepareAsyncReady(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>>(PrepareAsyncReadyRaw(context, request, cq));
    }
    ::grpc::Status Shutdown(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::stable::agones::dev::sdk::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>> AsyncShutdown(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>>(AsyncShutdownRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>> PrepareAsyncShutdown(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>>(PrepareAsyncShutdownRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriter< ::stable::agones::dev::sdk::Empty>> Health(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::stable::agones::dev::sdk::Empty>>(HealthRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::stable::agones::dev::sdk::Empty>> AsyncHealth(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::stable::agones::dev::sdk::Empty>>(AsyncHealthRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::stable::agones::dev::sdk::Empty>> PrepareAsyncHealth(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::stable::agones::dev::sdk::Empty>>(PrepareAsyncHealthRaw(context, response, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>* AsyncReadyRaw(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>* PrepareAsyncReadyRaw(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>* AsyncShutdownRaw(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::stable::agones::dev::sdk::Empty>* PrepareAsyncShutdownRaw(::grpc::ClientContext* context, const ::stable::agones::dev::sdk::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientWriter< ::stable::agones::dev::sdk::Empty>* HealthRaw(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response) override;
    ::grpc::ClientAsyncWriter< ::stable::agones::dev::sdk::Empty>* AsyncHealthRaw(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncWriter< ::stable::agones::dev::sdk::Empty>* PrepareAsyncHealthRaw(::grpc::ClientContext* context, ::stable::agones::dev::sdk::Empty* response, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Ready_;
    const ::grpc::internal::RpcMethod rpcmethod_Shutdown_;
    const ::grpc::internal::RpcMethod rpcmethod_Health_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Call when the GameServer is ready
    virtual ::grpc::Status Ready(::grpc::ServerContext* context, const ::stable::agones::dev::sdk::Empty* request, ::stable::agones::dev::sdk::Empty* response);
    // Call when the GmaeServer is shutting down
    virtual ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::stable::agones::dev::sdk::Empty* request, ::stable::agones::dev::sdk::Empty* response);
    // Send a Empty every d Duration to declare that this GameSever is healthy
    virtual ::grpc::Status Health(::grpc::ServerContext* context, ::grpc::ServerReader< ::stable::agones::dev::sdk::Empty>* reader, ::stable::agones::dev::sdk::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Ready : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Ready() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Ready() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ready(::grpc::ServerContext* context, const ::stable::agones::dev::sdk::Empty* request, ::stable::agones::dev::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReady(::grpc::ServerContext* context, ::stable::agones::dev::sdk::Empty* request, ::grpc::ServerAsyncResponseWriter< ::stable::agones::dev::sdk::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Shutdown() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::stable::agones::dev::sdk::Empty* request, ::stable::agones::dev::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestShutdown(::grpc::ServerContext* context, ::stable::agones::dev::sdk::Empty* request, ::grpc::ServerAsyncResponseWriter< ::stable::agones::dev::sdk::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Health : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Health() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Health() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Health(::grpc::ServerContext* context, ::grpc::ServerReader< ::stable::agones::dev::sdk::Empty>* reader, ::stable::agones::dev::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHealth(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::stable::agones::dev::sdk::Empty, ::stable::agones::dev::sdk::Empty>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(2, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Ready<WithAsyncMethod_Shutdown<WithAsyncMethod_Health<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Ready : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Ready() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Ready() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ready(::grpc::ServerContext* context, const ::stable::agones::dev::sdk::Empty* request, ::stable::agones::dev::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Shutdown() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::stable::agones::dev::sdk::Empty* request, ::stable::agones::dev::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Health : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Health() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Health() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Health(::grpc::ServerContext* context, ::grpc::ServerReader< ::stable::agones::dev::sdk::Empty>* reader, ::stable::agones::dev::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Ready : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Ready() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::stable::agones::dev::sdk::Empty, ::stable::agones::dev::sdk::Empty>(std::bind(&WithStreamedUnaryMethod_Ready<BaseClass>::StreamedReady, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Ready() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Ready(::grpc::ServerContext* context, const ::stable::agones::dev::sdk::Empty* request, ::stable::agones::dev::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedReady(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::stable::agones::dev::sdk::Empty,::stable::agones::dev::sdk::Empty>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Shutdown : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Shutdown() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::stable::agones::dev::sdk::Empty, ::stable::agones::dev::sdk::Empty>(std::bind(&WithStreamedUnaryMethod_Shutdown<BaseClass>::StreamedShutdown, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Shutdown() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Shutdown(::grpc::ServerContext* context, const ::stable::agones::dev::sdk::Empty* request, ::stable::agones::dev::sdk::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedShutdown(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::stable::agones::dev::sdk::Empty,::stable::agones::dev::sdk::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Ready<WithStreamedUnaryMethod_Shutdown<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Ready<WithStreamedUnaryMethod_Shutdown<Service > > StreamedService;
};

}  // namespace sdk
}  // namespace dev
}  // namespace agones
}  // namespace stable


#endif  // GRPC_sdk_2eproto__INCLUDED
