


#ifndef __gst_rtp_ENUM_TYPES_H__
#define __gst_rtp_ENUM_TYPES_H__

#include <gst/gst.h>
#include <gst/rtp/rtp-prelude.h>
G_BEGIN_DECLS

/* enumerations from "gstrtpdefs.h" */
GST_RTP_API
GType gst_rtp_profile_get_type (void);
#define GST_TYPE_RTP_PROFILE (gst_rtp_profile_get_type())

/* enumerations from "gstrtpbuffer.h" */
GST_RTP_API
GType gst_rtp_buffer_flags_get_type (void);
#define GST_TYPE_RTP_BUFFER_FLAGS (gst_rtp_buffer_flags_get_type())
GST_RTP_API
GType gst_rtp_buffer_map_flags_get_type (void);
#define GST_TYPE_RTP_BUFFER_MAP_FLAGS (gst_rtp_buffer_map_flags_get_type())

/* enumerations from "gstrtcpbuffer.h" */
GST_RTP_API
GType gst_rtcp_type_get_type (void);
#define GST_TYPE_RTCP_TYPE (gst_rtcp_type_get_type())
GST_RTP_API
GType gst_rtcpfb_type_get_type (void);
#define GST_TYPE_RTCPFB_TYPE (gst_rtcpfb_type_get_type())
GST_RTP_API
GType gst_rtcpsdes_type_get_type (void);
#define GST_TYPE_RTCPSDES_TYPE (gst_rtcpsdes_type_get_type())

/* enumerations from "gstrtppayloads.h" */
GST_RTP_API
GType gst_rtp_payload_get_type (void);
#define GST_TYPE_RTP_PAYLOAD (gst_rtp_payload_get_type())
G_END_DECLS

#endif /* __gst_rtp_ENUM_TYPES_H__ */



