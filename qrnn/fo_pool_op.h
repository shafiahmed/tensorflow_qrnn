#ifndef QRNN_FO_POOL_OP_H
#define QRNN_FO_POOL_OP_H

// tf_qrnn namespace start and stop defines
#define TF_QRNN_NAMESPACE_BEGIN namespace tf_qrnn {
#define TF_QRNN_NAMESPACE_STOP }

//  namespace start and stop defines
#define TF_QRNN_FO_POOL_NAMESPACE_BEGIN namespace  {
#define TF_QRNN_FO_POOL_NAMESPACE_STOP }

TF_QRNN_NAMESPACE_BEGIN
TF_QRNN_FO_POOL_NAMESPACE_BEGIN

// General definition of the FoPool op, which will be specialised in:
//   - FO_POOL_op_cpu.h for CPUs
//   - FO_POOL_op_gpu.cuh for CUDA devices
// Concrete template instantions of this class are provided in:
//   - FO_POOL_op_cpu.cpp for CPUs
//   - FO_POOL_op_gpu.cu for CUDA devices
template <typename Device, typename FT>
class FoPool {};

TF_QRNN_FO_POOL_NAMESPACE_STOP
TF_QRNN_NAMESPACE_STOP

#endif // #ifndef QRNN_FO_POOL_OP_H
