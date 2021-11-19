/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/guanbin/PX4-Autopilot/src/drivers/uavcan/libuavcan/dsdl/uavcan/equipment/hardpoint/1071.Status.uavcan
 */

#ifndef UAVCAN_EQUIPMENT_HARDPOINT_STATUS_HPP_INCLUDED
#define UAVCAN_EQUIPMENT_HARDPOINT_STATUS_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Generic cargo holder/hardpoint status.
#

uint8 hardpoint_id

float16 payload_weight           # Newton
float16 payload_weight_variance

#
# Meaning is the same as for the command field in the Command message
#
uint16 status
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.hardpoint.Status
saturated uint8 hardpoint_id
saturated float16 payload_weight
saturated float16 payload_weight_variance
saturated uint16 status
******************************************************************************/

#undef hardpoint_id
#undef payload_weight
#undef payload_weight_variance
#undef status

namespace uavcan
{
namespace equipment
{
namespace hardpoint
{

template <int _tmpl>
struct UAVCAN_EXPORT Status_
{
    typedef const Status_<_tmpl>& ParameterType;
    typedef Status_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > hardpoint_id;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > payload_weight;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > payload_weight_variance;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > status;
    };

    enum
    {
        MinBitLen
            = FieldTypes::hardpoint_id::MinBitLen
            + FieldTypes::payload_weight::MinBitLen
            + FieldTypes::payload_weight_variance::MinBitLen
            + FieldTypes::status::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::hardpoint_id::MaxBitLen
            + FieldTypes::payload_weight::MaxBitLen
            + FieldTypes::payload_weight_variance::MaxBitLen
            + FieldTypes::status::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::hardpoint_id >::Type hardpoint_id;
    typename ::uavcan::StorageType< typename FieldTypes::payload_weight >::Type payload_weight;
    typename ::uavcan::StorageType< typename FieldTypes::payload_weight_variance >::Type payload_weight_variance;
    typename ::uavcan::StorageType< typename FieldTypes::status >::Type status;

    Status_()
        : hardpoint_id()
        , payload_weight()
        , payload_weight_variance()
        , status()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<56 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 1071 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.hardpoint.Status";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Status_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        hardpoint_id == rhs.hardpoint_id &&
        payload_weight == rhs.payload_weight &&
        payload_weight_variance == rhs.payload_weight_variance &&
        status == rhs.status;
}

template <int _tmpl>
bool Status_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(hardpoint_id, rhs.hardpoint_id) &&
        ::uavcan::areClose(payload_weight, rhs.payload_weight) &&
        ::uavcan::areClose(payload_weight_variance, rhs.payload_weight_variance) &&
        ::uavcan::areClose(status, rhs.status);
}

template <int _tmpl>
int Status_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::hardpoint_id::encode(self.hardpoint_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::payload_weight::encode(self.payload_weight, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::payload_weight_variance::encode(self.payload_weight_variance, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::status::encode(self.status, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Status_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::hardpoint_id::decode(self.hardpoint_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::payload_weight::decode(self.payload_weight, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::payload_weight_variance::decode(self.payload_weight_variance, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::status::decode(self.status, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Status_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x624A519D42553D82ULL);

    FieldTypes::hardpoint_id::extendDataTypeSignature(signature);
    FieldTypes::payload_weight::extendDataTypeSignature(signature);
    FieldTypes::payload_weight_variance::extendDataTypeSignature(signature);
    FieldTypes::status::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Status_<0> Status;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::hardpoint::Status > _uavcan_gdtr_registrator_Status;

}

} // Namespace hardpoint
} // Namespace equipment
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::hardpoint::Status >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::hardpoint::Status::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::hardpoint::Status >::stream(Stream& s, ::uavcan::equipment::hardpoint::Status::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "hardpoint_id: ";
    YamlStreamer< ::uavcan::equipment::hardpoint::Status::FieldTypes::hardpoint_id >::stream(s, obj.hardpoint_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "payload_weight: ";
    YamlStreamer< ::uavcan::equipment::hardpoint::Status::FieldTypes::payload_weight >::stream(s, obj.payload_weight, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "payload_weight_variance: ";
    YamlStreamer< ::uavcan::equipment::hardpoint::Status::FieldTypes::payload_weight_variance >::stream(s, obj.payload_weight_variance, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "status: ";
    YamlStreamer< ::uavcan::equipment::hardpoint::Status::FieldTypes::status >::stream(s, obj.status, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace hardpoint
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::hardpoint::Status::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::hardpoint::Status >::stream(s, obj, 0);
    return s;
}

} // Namespace hardpoint
} // Namespace equipment
} // Namespace uavcan

#endif // UAVCAN_EQUIPMENT_HARDPOINT_STATUS_HPP_INCLUDED