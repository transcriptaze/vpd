#pragma once
#include <rack.hpp>

using namespace rack;

struct PushButton : app::SvgSwitch {
	PushButton() {
		momentary = true;
		addFrame(Svg::load(asset::plugin(pluginInstance, "res/PushButton.svg")));
	}
};


template <typename TBase>
struct PushButtonLight : TBase {
	PushButtonLight() {
		this->borderColor = color::BLACK_TRANSPARENT;
		this->bgColor = color::BLACK_TRANSPARENT;
		this->box.size = mm2px(math::Vec(11.1936, 11.1936));
	}
};