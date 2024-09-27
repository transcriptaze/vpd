#include "plugin.hpp"

#include "demo_widget.h"
#include "pushbutton.h"

struct Demo : Module {
	enum ParamId {
		TRIMPOT_PARAM,
		PUSHBUTTON_PARAM,
		BUTTON_PARAM,
		SLIDER_PARAM,
		ROUNDBLACKKNOB_PARAM,
		PARAMS_LEN
	};

	enum InputId {
		PJ301M_INPUT,
		INPUTS_LEN
	};

	enum OutputId {
		OUTPUTS_LEN
	};

	enum LightId {
		PUSHBUTTON_LIGHT,
		BUTTON_LIGHT,
		LIGHTS_LEN
	};

    dsp::BooleanTrigger pushBoolean;
    dsp::BooleanTrigger buttonBoolean;
    bool hold = false;

	Demo() {
		config(PARAMS_LEN, INPUTS_LEN, OUTPUTS_LEN, LIGHTS_LEN);
		configParam(TRIMPOT_PARAM, 0.f, 1.f, 0.f, "Trimpot");
		configButton(PUSHBUTTON_PARAM, "PushButton");
		configButton(BUTTON_PARAM, "Button");
		configParam(SLIDER_PARAM, 0.f, 1.f, 0.f, "Slider");
	}

	void process(const ProcessArgs& args) override {
		// pushbutton
		bool push = params[PUSHBUTTON_PARAM].getValue() > 0.f;

		// button
		if (buttonBoolean.process(params[BUTTON_PARAM].getValue()))
			hold ^= true;

		// pushbutton & button lights
		bool gate = push ^ hold;

		lights[BUTTON_LIGHT].setBrightnessSmooth(hold, args.sampleTime);
		lights[PUSHBUTTON_LIGHT].setBrightnessSmooth(gate, args.sampleTime);
	}
};


struct DemoWidget : ModuleWidget {
	DemoWidget(Demo* module) {
		setModule(module);
		setPanel(createPanel(asset::plugin(pluginInstance, "res/demo.svg"),
		                     asset::plugin(pluginInstance, "res/demo-dark.svg")));

		addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, 0)));
		addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, 0)));
		addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));
		addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));

		addParam(createParamCentered<Trimpot>(DEMO_PARAM_TRIMPOT, module, Demo::TRIMPOT_PARAM));
        addParam(createLightParamCentered<LightButton<PushButton, PushButtonLight<WhiteLight>>>(DEMO_PARAM_PUSHBUTTON, module, Demo::PUSHBUTTON_PARAM, Demo::PUSHBUTTON_LIGHT));
		addParam(createLightParamCentered<VCVLightButton<MediumSimpleLight<WhiteLight>>>(DEMO_PARAM_BUTTON, module, Demo::BUTTON_PARAM, Demo::BUTTON_LIGHT));
		addParam(createParamCentered<VCVSlider>(DEMO_PARAM_SLIDER, module, Demo::SLIDER_PARAM));
		addParam(createParamCentered<RoundBlackKnob>(DEMO_PARAM_ROUNDBLACKKNOB, module, Demo::ROUNDBLACKKNOB_PARAM));
		addInput(createInputCentered<PJ301MPort>(DEMO_INPUT_PJ301M, module, Demo::PJ301M_INPUT));
	}
};


Model* modelDemo = createModel<Demo, DemoWidget>("demo");