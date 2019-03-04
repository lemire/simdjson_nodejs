#ifndef __AVX2__
#include "nonavx2.h"

Napi::Boolean simdjson::hasAVX2Wrapped(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, false);
}

Napi::Object simdjson::Init(Napi::Env env, Napi::Object exports) {
  exports.Set("hasAVX2", Napi::Function::New(env, simdjson::hasAVX2Wrapped));
  return exports;
}

#endif