#pragma once

#include "ffmpeg.h"
#include "InputStream.h"
#include "Frame Sinks/VideoFrameSink.h"

namespace ffmpegcpp
{
	class VideoInputStream : public InputStream
	{

	public:

		VideoInputStream(VideoFrameSink* frameSink, AVFormatContext* format, AVStream* stream);
		~VideoInputStream();

	protected:

		virtual void ConfigureCodecContext();

	};
}
