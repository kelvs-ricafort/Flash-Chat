/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/annotations/security.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_ANNOTATIONS_SECURITY_PROTO_UPB_H_
#define UDPA_ANNOTATIONS_SECURITY_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct udpa_annotations_FieldSecurityAnnotation;
typedef struct udpa_annotations_FieldSecurityAnnotation udpa_annotations_FieldSecurityAnnotation;
extern const upb_MiniTable udpa_annotations_FieldSecurityAnnotation_msginit;
extern const upb_MiniTable_Extension udpa_annotations_security_ext;
struct google_protobuf_FieldOptions;
extern const upb_MiniTable google_protobuf_FieldOptions_msginit;



/* udpa.annotations.FieldSecurityAnnotation */

UPB_INLINE udpa_annotations_FieldSecurityAnnotation* udpa_annotations_FieldSecurityAnnotation_new(upb_Arena* arena) {
  return (udpa_annotations_FieldSecurityAnnotation*)_upb_Message_New(&udpa_annotations_FieldSecurityAnnotation_msginit, arena);
}
UPB_INLINE udpa_annotations_FieldSecurityAnnotation* udpa_annotations_FieldSecurityAnnotation_parse(const char* buf, size_t size, upb_Arena* arena) {
  udpa_annotations_FieldSecurityAnnotation* ret = udpa_annotations_FieldSecurityAnnotation_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &udpa_annotations_FieldSecurityAnnotation_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE udpa_annotations_FieldSecurityAnnotation* udpa_annotations_FieldSecurityAnnotation_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  udpa_annotations_FieldSecurityAnnotation* ret = udpa_annotations_FieldSecurityAnnotation_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &udpa_annotations_FieldSecurityAnnotation_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* udpa_annotations_FieldSecurityAnnotation_serialize(const udpa_annotations_FieldSecurityAnnotation* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &udpa_annotations_FieldSecurityAnnotation_msginit, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* udpa_annotations_FieldSecurityAnnotation_serialize_ex(const udpa_annotations_FieldSecurityAnnotation* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &udpa_annotations_FieldSecurityAnnotation_msginit, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void udpa_annotations_FieldSecurityAnnotation_clear_configure_for_untrusted_downstream(const udpa_annotations_FieldSecurityAnnotation* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = 0;
}
UPB_INLINE bool udpa_annotations_FieldSecurityAnnotation_configure_for_untrusted_downstream(const udpa_annotations_FieldSecurityAnnotation* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool);
}
UPB_INLINE void udpa_annotations_FieldSecurityAnnotation_clear_configure_for_untrusted_upstream(const udpa_annotations_FieldSecurityAnnotation* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool) = 0;
}
UPB_INLINE bool udpa_annotations_FieldSecurityAnnotation_configure_for_untrusted_upstream(const udpa_annotations_FieldSecurityAnnotation* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool);
}

UPB_INLINE void udpa_annotations_FieldSecurityAnnotation_set_configure_for_untrusted_downstream(udpa_annotations_FieldSecurityAnnotation *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = value;
}
UPB_INLINE void udpa_annotations_FieldSecurityAnnotation_set_configure_for_untrusted_upstream(udpa_annotations_FieldSecurityAnnotation *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool) = value;
}

UPB_INLINE bool udpa_annotations_has_security(const struct google_protobuf_FieldOptions* msg) {
  return _upb_Message_Getext(msg, &udpa_annotations_security_ext) != NULL;
}
UPB_INLINE void udpa_annotations_clear_security(struct google_protobuf_FieldOptions* msg) {
  _upb_Message_Clearext(msg, &udpa_annotations_security_ext);
}
UPB_INLINE const udpa_annotations_FieldSecurityAnnotation* udpa_annotations_security(const struct google_protobuf_FieldOptions* msg) {
  const upb_Message_Extension* ext = _upb_Message_Getext(msg, &udpa_annotations_security_ext);
  UPB_ASSERT(ext);
  return *UPB_PTR_AT(&ext->data, 0, const udpa_annotations_FieldSecurityAnnotation*);
}
UPB_INLINE void udpa_annotations_set_security(struct google_protobuf_FieldOptions* msg, const udpa_annotations_FieldSecurityAnnotation* ext, upb_Arena* arena) {
  const upb_Message_Extension* msg_ext =
      _upb_Message_GetOrCreateExtension(msg, &udpa_annotations_security_ext, arena);
  UPB_ASSERT(msg_ext);
  *UPB_PTR_AT(&msg_ext->data, 0, const udpa_annotations_FieldSecurityAnnotation*) = ext;
}
extern const upb_MiniTable_File udpa_annotations_security_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* UDPA_ANNOTATIONS_SECURITY_PROTO_UPB_H_ */
