**\*IMPORTANT**: Conceptor is a client, and needs a locally running ComfyUI instance to function properly. You can learn how to set up ComfyUI below (don't worry, it's free).\*

## What is Conceptor?

**Short answer**: Conceptor is a Plugin for Unreal Engine 5, that using ComfyUI lets You generate AI images based on what you see in engine's viewport.

**Long answer**: Conceptor is a client for ComfyUI. It hooks up to locally running Comfy's backend instance and makes use of it's powerful workflows to generate images using Img2Img method. It captures a screenshot of whatever You see in the viewport and then sends that as an input for image generation.

## Key features:

**Privacy**: ComfyUI runs locally on Your GPU/CPU, so everything You create stays on Your computer until You decide to share it with the rest of the world :)

**Use Workflows**: You can export any workflow from ComfyUI and use it in Conceptor.

**Thousands of models**: You can download any model from CivitAI, Huggingface or any other place and use them in ComfyUI, which means You can also use them in Conceptor

**It's FREE**: As ComfyUI runs the models locally, You can generate as many images as You want without any usage fees.

## Some examples:

![Example1](https://public-files.gumroad.com/zt5farbwyv4mana7k5rech3eo5fg "Example1")

![Example2](https://public-files.gumroad.com/y8zhdscgeg7j7biaucan648xz5hu "Example2")

![Example3](https://public-files.gumroad.com/z1v875hbs4s1qrux5pn1qqv7txrq "Example3")

## Requirements:

**ComfyUI** (obviously) - You can download it here (see Instalation section in the repo's page - In most cases just download and unpack the portable version)

**ComfyUI-Manager** (optional but highly recommended) - This will help You install some nodes, we need for Conceptor to work. (download here)

**ComfyUI_Ib_CustomNodes** - (It's ID in custom nodes manager is: 782) This package will provide us with LoadImageFromPath node.

**comfyui_controlnet_aux** - (It's ID in custom nodes manager is: 5) This will provide us with some helpers for depth and pose calculation from input images.

**Depth and Pose ControlNets for both SD1.5 and SDXL** - You can choose whichever You want, but here are ControlNets I use. For SD1.5: (Depth and Pose). For SDXL: (Depth and Pose)

Preferably some prior ComfyUI experience to set it all up, but if You don't, no worries, it's not that hard :D

[Get models here](https://civitai.com "Get models here")

## Installation Guide:

1. Download ComfyUI
2. Install ComfyUI-Manager and then all required nodes ("ComfyUI_Ib_CustomNodes" and "comfyui_controlnet_aux")
3. Download ControlNets and put them in Your ComfyUI location under "models/controlnet"
4. Download model/models You want to use and put them in ComfyUI location under "models/checkpoints" (for starters just install Dreamshaper_8 and go from there)
5. Unpack Conceptor into Your project's Plugins folder.
6. You're all set!

#### Supported engine versions:

UE5.5
UE5.4
UE5.3 (coming soon)

## How to use:

1. Navigate to ComfyUI location and run "run_nvidia_gpu" or "run_cpu" depending on what GPU You have. (if it's a Nvidia GPU capable of running AI models, go ahead and run in GPU mode, it's much faster)
2. Wait for Comfy to initialize and open the UI in the browser (that means it's fully up and running). You can close the browser UI if You want, we won't be needing that, but DO NOT close the cmd app, as it's the backend running. (that's what's actually running the models)
3. Once Comfy is initialized, open Your project and navigate to Conceptor plugin's content folder. Right click on "Conceptor" and press "Run". Conceptor is an Editor Utility Widget, which means it runs in the editor. Go ahead and just dock it somewhere conveniant. (next time You open this project, it should be already loaded where you left it)
4. Choose preferred settings, put in prompts, and click on Prompt. That will take a screenshot of the viewport and send it to Comfy for processing.
5. Wait for the result :) (first generation usually takes a while, as Comfy needs to load models)

## Parameters explained:

- Positive prompt: What You want to see in the image
- Negative prompt: What You don't want to see in the image
- Workflow: What ComfyUI workflow to use
- Model: Model to use
- CFG Scale: How much the model should take prompts into consideration (experiment with that)
- Denoise: How much new information to introduce during generation (0 means original image, 1 means fully AI generated)
- Steps: Number of inference steps (experiment with that)
- ControlNet: Pick appropriate controlnet for situation. (pose or depth? SD1.5 or SDXL?)
- Strength: Influence of the control net

## Using custom workflows:

1. In ComfyUI enable Dev mode, that will enable You to export workflows in API version
2. Replace text in Your positive prompts with "positiveprompt"
3. Replace text in Your negative prompts with "negativeprompt"
4. Export the workflow (API version)
5. Place the exported workflow file in Conceptor/Content/Data/ folder

## Troubleshooting:

If You encounter any issues, take a look at the OutputLog. I've tried to print out most of the steps and errors, so it should give You a hint of what's happening.

Make sure to use SD1.5 control nets with SD1.5 models and SDXL nets with SDXL models.

If You can't fix it yourself, feel free to contact me via email, or through the dedicated Discord server for Conceptor

[Join Discord here](https://discord.gg/kd3RJ9s5n7 "Join Discord here")
