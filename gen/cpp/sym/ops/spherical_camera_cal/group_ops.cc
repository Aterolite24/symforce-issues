// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     ops/CLASS/group_ops.cc.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "./group_ops.h"

#include <sym/spherical_camera_cal.h>

namespace sym {

/**
 *
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: <lambda>
 *
 * Args:
 *
 * Outputs:
 *     res: SphericalCameraCal
 */
template <typename Scalar>
sym::SphericalCameraCal<Scalar> GroupOps<SphericalCameraCal<Scalar>>::Identity() {
  // Total ops: 0

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 11, 1> _res;

  _res[0] = 0;
  _res[1] = 0;
  _res[2] = 0;
  _res[3] = 0;
  _res[4] = 0;
  _res[5] = 0;
  _res[6] = 0;
  _res[7] = 0;
  _res[8] = 0;
  _res[9] = 0;
  _res[10] = 0;

  return sym::SphericalCameraCal<Scalar>(_res, /* normalize */ false);
}

/**
 *
 * Inverse of the element a.
 *
 * Returns:
 *     Element: b such that a @ b = identity
 */
template <typename Scalar>
sym::SphericalCameraCal<Scalar> GroupOps<SphericalCameraCal<Scalar>>::Inverse(
    const sym::SphericalCameraCal<Scalar>& a) {
  // Total ops: 11

  // Input arrays
  const Eigen::Matrix<Scalar, 11, 1>& _a = a.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 11, 1> _res;

  _res[0] = -_a[0];
  _res[1] = -_a[1];
  _res[2] = -_a[2];
  _res[3] = -_a[3];
  _res[4] = -_a[4];
  _res[5] = -_a[5];
  _res[6] = -_a[6];
  _res[7] = -_a[7];
  _res[8] = -_a[8];
  _res[9] = -_a[9];
  _res[10] = -_a[10];

  return sym::SphericalCameraCal<Scalar>(_res);
}

/**
 *
 * Composition of two elements in the group.
 *
 * Returns:
 *     Element: a @ b
 */
template <typename Scalar>
sym::SphericalCameraCal<Scalar> GroupOps<SphericalCameraCal<Scalar>>::Compose(
    const sym::SphericalCameraCal<Scalar>& a, const sym::SphericalCameraCal<Scalar>& b) {
  // Total ops: 11

  // Input arrays
  const Eigen::Matrix<Scalar, 11, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 11, 1>& _b = b.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 11, 1> _res;

  _res[0] = _a[0] + _b[0];
  _res[1] = _a[1] + _b[1];
  _res[2] = _a[2] + _b[2];
  _res[3] = _a[3] + _b[3];
  _res[4] = _a[4] + _b[4];
  _res[5] = _a[5] + _b[5];
  _res[6] = _a[6] + _b[6];
  _res[7] = _a[7] + _b[7];
  _res[8] = _a[8] + _b[8];
  _res[9] = _a[9] + _b[9];
  _res[10] = _a[10] + _b[10];

  return sym::SphericalCameraCal<Scalar>(_res);
}

/**
 *
 * Returns the element that when composed with a produces b. For vector spaces it is b - a.
 *
 * Implementation is simply ``compose(inverse(a), b)``.
 *
 * Returns:
 *     Element: c such that a @ c = b
 */
template <typename Scalar>
sym::SphericalCameraCal<Scalar> GroupOps<SphericalCameraCal<Scalar>>::Between(
    const sym::SphericalCameraCal<Scalar>& a, const sym::SphericalCameraCal<Scalar>& b) {
  // Total ops: 11

  // Input arrays
  const Eigen::Matrix<Scalar, 11, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 11, 1>& _b = b.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 11, 1> _res;

  _res[0] = -_a[0] + _b[0];
  _res[1] = -_a[1] + _b[1];
  _res[2] = -_a[2] + _b[2];
  _res[3] = -_a[3] + _b[3];
  _res[4] = -_a[4] + _b[4];
  _res[5] = -_a[5] + _b[5];
  _res[6] = -_a[6] + _b[6];
  _res[7] = -_a[7] + _b[7];
  _res[8] = -_a[8] + _b[8];
  _res[9] = -_a[9] + _b[9];
  _res[10] = -_a[10] + _b[10];

  return sym::SphericalCameraCal<Scalar>(_res);
}

/**
 *
 * Inverse of the element a.
 *
 * Returns:
 *     Element: b such that a @ b = identity
 *     res_D_a: (11x11) jacobian of res (11) wrt arg a (11)
 */
template <typename Scalar>
sym::SphericalCameraCal<Scalar> GroupOps<SphericalCameraCal<Scalar>>::InverseWithJacobian(
    const sym::SphericalCameraCal<Scalar>& a, SelfJacobian* const res_D_a) {
  // Total ops: 11

  // Input arrays
  const Eigen::Matrix<Scalar, 11, 1>& _a = a.Data();

  // Intermediate terms (0)

  // Output terms (2)
  Eigen::Matrix<Scalar, 11, 1> _res;

  _res[0] = -_a[0];
  _res[1] = -_a[1];
  _res[2] = -_a[2];
  _res[3] = -_a[3];
  _res[4] = -_a[4];
  _res[5] = -_a[5];
  _res[6] = -_a[6];
  _res[7] = -_a[7];
  _res[8] = -_a[8];
  _res[9] = -_a[9];
  _res[10] = -_a[10];

  if (res_D_a != nullptr) {
    Eigen::Matrix<Scalar, 11, 11>& _res_D_a = (*res_D_a);

    _res_D_a.setZero();

    _res_D_a(0, 0) = -1;
    _res_D_a(1, 1) = -1;
    _res_D_a(2, 2) = -1;
    _res_D_a(3, 3) = -1;
    _res_D_a(4, 4) = -1;
    _res_D_a(5, 5) = -1;
    _res_D_a(6, 6) = -1;
    _res_D_a(7, 7) = -1;
    _res_D_a(8, 8) = -1;
    _res_D_a(9, 9) = -1;
    _res_D_a(10, 10) = -1;
  }

  return sym::SphericalCameraCal<Scalar>(_res);
}

/**
 *
 * Composition of two elements in the group.
 *
 * Returns:
 *     Element: a @ b
 *     res_D_a: (11x11) jacobian of res (11) wrt arg a (11)
 *     res_D_b: (11x11) jacobian of res (11) wrt arg b (11)
 */
template <typename Scalar>
sym::SphericalCameraCal<Scalar> GroupOps<SphericalCameraCal<Scalar>>::ComposeWithJacobians(
    const sym::SphericalCameraCal<Scalar>& a, const sym::SphericalCameraCal<Scalar>& b,
    SelfJacobian* const res_D_a, SelfJacobian* const res_D_b) {
  // Total ops: 11

  // Input arrays
  const Eigen::Matrix<Scalar, 11, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 11, 1>& _b = b.Data();

  // Intermediate terms (0)

  // Output terms (3)
  Eigen::Matrix<Scalar, 11, 1> _res;

  _res[0] = _a[0] + _b[0];
  _res[1] = _a[1] + _b[1];
  _res[2] = _a[2] + _b[2];
  _res[3] = _a[3] + _b[3];
  _res[4] = _a[4] + _b[4];
  _res[5] = _a[5] + _b[5];
  _res[6] = _a[6] + _b[6];
  _res[7] = _a[7] + _b[7];
  _res[8] = _a[8] + _b[8];
  _res[9] = _a[9] + _b[9];
  _res[10] = _a[10] + _b[10];

  if (res_D_a != nullptr) {
    Eigen::Matrix<Scalar, 11, 11>& _res_D_a = (*res_D_a);

    _res_D_a.setZero();

    _res_D_a(0, 0) = 1;
    _res_D_a(1, 1) = 1;
    _res_D_a(2, 2) = 1;
    _res_D_a(3, 3) = 1;
    _res_D_a(4, 4) = 1;
    _res_D_a(5, 5) = 1;
    _res_D_a(6, 6) = 1;
    _res_D_a(7, 7) = 1;
    _res_D_a(8, 8) = 1;
    _res_D_a(9, 9) = 1;
    _res_D_a(10, 10) = 1;
  }

  if (res_D_b != nullptr) {
    Eigen::Matrix<Scalar, 11, 11>& _res_D_b = (*res_D_b);

    _res_D_b.setZero();

    _res_D_b(0, 0) = 1;
    _res_D_b(1, 1) = 1;
    _res_D_b(2, 2) = 1;
    _res_D_b(3, 3) = 1;
    _res_D_b(4, 4) = 1;
    _res_D_b(5, 5) = 1;
    _res_D_b(6, 6) = 1;
    _res_D_b(7, 7) = 1;
    _res_D_b(8, 8) = 1;
    _res_D_b(9, 9) = 1;
    _res_D_b(10, 10) = 1;
  }

  return sym::SphericalCameraCal<Scalar>(_res);
}

/**
 *
 * Returns the element that when composed with a produces b. For vector spaces it is b - a.
 *
 * Implementation is simply ``compose(inverse(a), b)``.
 *
 * Returns:
 *     Element: c such that a @ c = b
 *     res_D_a: (11x11) jacobian of res (11) wrt arg a (11)
 *     res_D_b: (11x11) jacobian of res (11) wrt arg b (11)
 */
template <typename Scalar>
sym::SphericalCameraCal<Scalar> GroupOps<SphericalCameraCal<Scalar>>::BetweenWithJacobians(
    const sym::SphericalCameraCal<Scalar>& a, const sym::SphericalCameraCal<Scalar>& b,
    SelfJacobian* const res_D_a, SelfJacobian* const res_D_b) {
  // Total ops: 11

  // Input arrays
  const Eigen::Matrix<Scalar, 11, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 11, 1>& _b = b.Data();

  // Intermediate terms (0)

  // Output terms (3)
  Eigen::Matrix<Scalar, 11, 1> _res;

  _res[0] = -_a[0] + _b[0];
  _res[1] = -_a[1] + _b[1];
  _res[2] = -_a[2] + _b[2];
  _res[3] = -_a[3] + _b[3];
  _res[4] = -_a[4] + _b[4];
  _res[5] = -_a[5] + _b[5];
  _res[6] = -_a[6] + _b[6];
  _res[7] = -_a[7] + _b[7];
  _res[8] = -_a[8] + _b[8];
  _res[9] = -_a[9] + _b[9];
  _res[10] = -_a[10] + _b[10];

  if (res_D_a != nullptr) {
    Eigen::Matrix<Scalar, 11, 11>& _res_D_a = (*res_D_a);

    _res_D_a.setZero();

    _res_D_a(0, 0) = -1;
    _res_D_a(1, 1) = -1;
    _res_D_a(2, 2) = -1;
    _res_D_a(3, 3) = -1;
    _res_D_a(4, 4) = -1;
    _res_D_a(5, 5) = -1;
    _res_D_a(6, 6) = -1;
    _res_D_a(7, 7) = -1;
    _res_D_a(8, 8) = -1;
    _res_D_a(9, 9) = -1;
    _res_D_a(10, 10) = -1;
  }

  if (res_D_b != nullptr) {
    Eigen::Matrix<Scalar, 11, 11>& _res_D_b = (*res_D_b);

    _res_D_b.setZero();

    _res_D_b(0, 0) = 1;
    _res_D_b(1, 1) = 1;
    _res_D_b(2, 2) = 1;
    _res_D_b(3, 3) = 1;
    _res_D_b(4, 4) = 1;
    _res_D_b(5, 5) = 1;
    _res_D_b(6, 6) = 1;
    _res_D_b(7, 7) = 1;
    _res_D_b(8, 8) = 1;
    _res_D_b(9, 9) = 1;
    _res_D_b(10, 10) = 1;
  }

  return sym::SphericalCameraCal<Scalar>(_res);
}

}  // namespace sym

// Explicit instantiation
template struct sym::GroupOps<sym::SphericalCameraCal<double>>;
template struct sym::GroupOps<sym::SphericalCameraCal<float>>;
