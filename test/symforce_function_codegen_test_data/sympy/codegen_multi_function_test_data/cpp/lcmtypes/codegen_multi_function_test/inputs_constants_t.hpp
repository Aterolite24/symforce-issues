/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __codegen_multi_function_test_inputs_constants_t_hpp__
#define __codegen_multi_function_test_inputs_constants_t_hpp__

#include <ostream>

namespace codegen_multi_function_test
{

class inputs_constants_t
{
    public:
        double epsilon;

    public:
        inputs_constants_t() = default;

        /**
         * Member constructor
         */
        inline inputs_constants_t(
            const double& epsilon_arg
        );

        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to read while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        constexpr static int64_t getHash();

        using type_name_array_t = const char[19];

        inline static constexpr type_name_array_t* getTypeNameArrayPtr();

        /**
         * Returns "inputs_constants_t"
         */
        inline static constexpr const char* getTypeName();

        /**
         * Returns "codegen_multi_function_test"
         */
        inline static const char * getPackageName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        constexpr static uint64_t _computeHash(const __lcm_hash_ptr *)
        {
            uint64_t hash = 0x152f505c823f2cbcLL;
            return (hash<<1) + ((hash>>63)&1);
        }

        // Comparison operators.
        inline bool operator==(const inputs_constants_t& other) const;
        inline bool operator!=(const inputs_constants_t& other) const;

        // Ability to print to standard streams as well as the fmt library.
        friend std::ostream& operator<<(std::ostream& stream, const inputs_constants_t& obj) {
#if defined(SKYMARSHAL_PRINTING_ENABLED)
            stream << "inputs_constants_t(";
            stream << "epsilon=" << obj.epsilon;
            stream << ")";
#else
            stream << "<FORMATTING DISABLED>";
#endif
            return stream;
        }
};

inputs_constants_t::inputs_constants_t(
    const double& epsilon_arg
) : epsilon(epsilon_arg) {}

int inputs_constants_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int inputs_constants_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int inputs_constants_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

constexpr int64_t inputs_constants_t::getHash()
{
    return _computeHash(NULL);
}

constexpr inputs_constants_t::type_name_array_t* inputs_constants_t::getTypeNameArrayPtr() {
    return &"inputs_constants_t";
}

constexpr const char* inputs_constants_t::getTypeName()
{
    return *inputs_constants_t::getTypeNameArrayPtr();
}

const char * inputs_constants_t::getPackageName()
{
    return "codegen_multi_function_test";
}

int inputs_constants_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->epsilon, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int inputs_constants_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->epsilon, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int inputs_constants_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __double_encoded_array_size(NULL, 1);
    return enc_size;
}

bool inputs_constants_t::operator==(const inputs_constants_t& other) const {
  return (
          (epsilon==other.epsilon));
}

bool inputs_constants_t::operator!=(const inputs_constants_t& other) const {
  return !(*this==other);
}

}

#endif