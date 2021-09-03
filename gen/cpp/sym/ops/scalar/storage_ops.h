//  -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <cstdint>
#include <random>
#include <type_traits>

#include <lcmtypes/sym/type_t.hpp>

#include "../storage_ops.h"

namespace sym {
namespace scalar {

/**
 * C++ StorageOps implementation for scalars.
 */
template <typename ScalarType>
struct StorageOps {
  using Scalar = ScalarType;
  static_assert(std::is_floating_point<ScalarType>::value, "");

  static constexpr int32_t StorageDim() {
    return 1;
  }

  static void ToStorage(const ScalarType& a, ScalarType* out) {
    assert(out != nullptr);
    out[0] = a;
  }

  static ScalarType FromStorage(const ScalarType* data) {
    assert(data != nullptr);
    return data[0];
  }

  static type_t TypeEnum() {
    return type_t::SCALAR;
  }

  template <typename Generator>
  static Scalar Random(Generator& gen) {
    return std::normal_distribution<Scalar>{}(gen);
  }
};

}  // namespace scalar

template <>
struct StorageOps<double> : public scalar::StorageOps<double> {};
template <>
struct StorageOps<float> : public scalar::StorageOps<float> {};

}  // namespace sym

// Explicit instantiation
extern template struct sym::StorageOps<double>;
extern template struct sym::StorageOps<float>;
