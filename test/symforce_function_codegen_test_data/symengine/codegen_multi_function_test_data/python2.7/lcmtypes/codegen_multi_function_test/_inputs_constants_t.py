# This file automatically generated by skymarshal
# DO NOT MODIFY BY HAND
# fmt: off
# mypy: disallow-untyped-defs

import copy
import typing as T  # pylint: disable=unused-import

from io import BytesIO
import struct

class inputs_constants_t(object):
    __slots__ = ["epsilon"]  # type: T.List[str]

    def __init__(
        self,
        epsilon=0.0,  # type: float
        _skip_initialize=False,  # type: bool
    ):
        # type: (...) -> None
        """ If _skip_initialize is True, all other constructor arguments are ignored """
        if _skip_initialize:
            return
        self.epsilon = epsilon

    @staticmethod
    def _skytype_meta():
        # type: () -> T.Dict[str, str]
        return dict(
            type="struct",
            package="codegen_multi_function_test",
            name="inputs_constants_t",
        )

    @classmethod
    def _default(cls):
        # type: () -> inputs_constants_t
        return cls()

    def __repr__(self):
        # type: () -> str
        return "inputs_constants_t({})".format(
            ", ".join("{}={}".format(name, repr(getattr(self, name))) for name in self.__slots__))

    def __eq__(self, other):
        # type: (object) -> bool
        if not isinstance(other, inputs_constants_t):
            return NotImplemented
        return (
            (self.epsilon==other.epsilon)
        )
    # Disallow hashing for python struct lcmtypes.
    __hash__ = None  # type: ignore

    def encode(self):
        # type: () -> bytes
        buf = BytesIO()
        buf.write(inputs_constants_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        # type: (T.BinaryIO) -> None
        buf.write(inputs_constants_t._CACHED_STRUCT_0.pack(self.epsilon))

    @staticmethod
    def decode(data):
        # type: (T.Union[bytes, T.BinaryIO]) -> inputs_constants_t
        # NOTE(eric): This function can technically accept either a BinaryIO or
        # anything that supports the C++ Buffer Protocol,
        # which is unspecifiable in type hints.

        if hasattr(data, "read"):
            # NOTE(eric): mypy isn't able to figure out the hasattr check
            buf = T.cast(T.BinaryIO, data)
        else:
            buf = BytesIO(T.cast(bytes, data))

        if buf.read(8) != inputs_constants_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return inputs_constants_t._decode_one(buf)

    @staticmethod
    def _decode_one(buf):
        # type: (T.BinaryIO) -> inputs_constants_t
        self = inputs_constants_t(_skip_initialize=True)
        self.epsilon = inputs_constants_t._CACHED_STRUCT_0.unpack(buf.read(8))[0]
        return self

    @staticmethod
    def _get_hash_recursive(parents):
        # type: (T.List[T.Type]) -> int
        if inputs_constants_t in parents: return 0
        tmphash = (0x152f505c823f2cbc) & 0xffffffffffffffff
        tmphash = (((tmphash<<1)&0xffffffffffffffff)  + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash

    _packed_fingerprint = None  # type: T.Optional[bytes]

    @staticmethod
    def _get_packed_fingerprint():
        # type: () -> bytes
        if inputs_constants_t._packed_fingerprint is None:
            inputs_constants_t._packed_fingerprint = struct.pack(">Q", inputs_constants_t._get_hash_recursive([]))
        return inputs_constants_t._packed_fingerprint

    def deepcopy(self, **kwargs):
        # type: (**T.Any) -> inputs_constants_t
        """
        Deep copy of this LCM type

        Returns a copy w/ members specified by kwargs replaced with new values specified by kwargs.
        """
        result = copy.deepcopy(self)
        for key in kwargs:
            if not hasattr(result, key):
                raise KeyError("Type inputs_constants_t does not have attribute: " + str(key))
            setattr(result, key, kwargs[key])
        return result

    _CACHED_STRUCT_0 = struct.Struct(">d")
