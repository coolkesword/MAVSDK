// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: gimbal/gimbal.proto

#include "gimbal/gimbal.pb.h"
#include "gimbal/gimbal.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace gimbal {

static const char* GimbalService_method_names[] = {
  "/mavsdk.rpc.gimbal.GimbalService/SetPitchAndYaw",
  "/mavsdk.rpc.gimbal.GimbalService/SetMode",
};

std::unique_ptr< GimbalService::Stub> GimbalService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GimbalService::Stub> stub(new GimbalService::Stub(channel));
  return stub;
}

GimbalService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SetPitchAndYaw_(GimbalService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetMode_(GimbalService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status GimbalService::Stub::SetPitchAndYaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest& request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetPitchAndYaw_, context, request, response);
}

void GimbalService::Stub::experimental_async::SetPitchAndYaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest* request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetPitchAndYaw_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::SetPitchAndYaw(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetPitchAndYaw_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::SetPitchAndYaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest* request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetPitchAndYaw_, context, request, response, reactor);
}

void GimbalService::Stub::experimental_async::SetPitchAndYaw(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetPitchAndYaw_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetPitchAndYawResponse>* GimbalService::Stub::AsyncSetPitchAndYawRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::gimbal::SetPitchAndYawResponse>::Create(channel_.get(), cq, rpcmethod_SetPitchAndYaw_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetPitchAndYawResponse>* GimbalService::Stub::PrepareAsyncSetPitchAndYawRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::gimbal::SetPitchAndYawResponse>::Create(channel_.get(), cq, rpcmethod_SetPitchAndYaw_, context, request, false);
}

::grpc::Status GimbalService::Stub::SetMode(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest& request, ::mavsdk::rpc::gimbal::SetModeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetMode_, context, request, response);
}

void GimbalService::Stub::experimental_async::SetMode(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest* request, ::mavsdk::rpc::gimbal::SetModeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetMode_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::SetMode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::gimbal::SetModeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetMode_, context, request, response, std::move(f));
}

void GimbalService::Stub::experimental_async::SetMode(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest* request, ::mavsdk::rpc::gimbal::SetModeResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetMode_, context, request, response, reactor);
}

void GimbalService::Stub::experimental_async::SetMode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mavsdk::rpc::gimbal::SetModeResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetMode_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetModeResponse>* GimbalService::Stub::AsyncSetModeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::gimbal::SetModeResponse>::Create(channel_.get(), cq, rpcmethod_SetMode_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetModeResponse>* GimbalService::Stub::PrepareAsyncSetModeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::gimbal::SetModeResponse>::Create(channel_.get(), cq, rpcmethod_SetMode_, context, request, false);
}

GimbalService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SetPitchAndYawRequest, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse>(
          std::mem_fn(&GimbalService::Service::SetPitchAndYaw), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SetModeRequest, ::mavsdk::rpc::gimbal::SetModeResponse>(
          std::mem_fn(&GimbalService::Service::SetMode), this)));
}

GimbalService::Service::~Service() {
}

::grpc::Status GimbalService::Service::SetPitchAndYaw(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SetPitchAndYawRequest* request, ::mavsdk::rpc::gimbal::SetPitchAndYawResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SetMode(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SetModeRequest* request, ::mavsdk::rpc::gimbal::SetModeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace gimbal

