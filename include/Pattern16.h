#pragma once

#include <string>

#include "scanners/base.h"

namespace Pattern16 {
	inline void* scan(void* regionStart, size_t regionSize, std::string signature, const Impl::Frequencies16& frequencies = Impl::loadFrequencyCache()) {
		auto signature_u8 = Impl::processSignatureString(signature);
		return (void*)Impl::scan(regionStart, regionSize, signature_u8, frequencies);
	}

	inline const void* scan(const void* regionStart, size_t regionSize, std::string signature, const Impl::Frequencies16& frequencies = Impl::loadFrequencyCache()) {
		auto signature_u8 = Impl::processSignatureString(signature);
		return Impl::scan(regionStart, regionSize, signature_u8, frequencies);
	}
}
