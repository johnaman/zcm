/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __consts1_hpp__
#define __consts1_hpp__



class consts1
{
    public:
        static const int8_t   k8 = 1;
        static const int16_t  k16 = 2;
        enum { i32 = 3 };
        static const int64_t  i64 = 4LL;
        static const float    f = 5.0;
        static const double   d = 6.0;

    public:
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
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "consts1"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr *p);
};

int consts1::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int consts1::decode(const void *buf, int offset, int maxlen)
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

int consts1::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t consts1::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* consts1::getTypeName()
{
    return "consts1";
}

int consts1::_encodeNoHash(void *, int, int) const
{
    return 0;
}

int consts1::_decodeNoHash(const void *, int, int)
{
    return 0;
}

int consts1::_getEncodedSizeNoHash() const
{
    return 0;
}

uint64_t consts1::_computeHash(const __zcm_hash_ptr *)
{
    uint64_t hash = (uint64_t)0x0000000012345678LL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
