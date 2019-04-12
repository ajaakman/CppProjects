emcc -std=c++11 "Engine/Graphics/GUtility/VertexLayout.cpp" "Engine/Graphics/Meshes/Mesh.cpp" "Engine/Graphics/Cameras/Camera2D.cpp" "Engine/Graphics/Cameras/Camera3D.cpp" "Engine/Graphics/GUtility/TextureCache.cpp" "Engine/Graphics/GUtility/MeshLoader.cpp" "Engine/Graphics/Renderables/Renderable.cpp" "Engine/Graphics/Materials/Material.cpp" "Engine/Graphics/Renderer.cpp" "Engine/Graphics/GLBase/Texture.cpp" "Engine/Graphics/GLBase/Program.cpp" "Engine/Graphics/GLBase/ElementArrayBuffer.cpp" "Engine/Graphics/GLBase/Buffer.cpp" "Engine/IO/Window.cpp" "Engine/Utility/Error.cpp" "Engine/Libraries/stbi/stbi.cpp" "Engine/Libraries/obj_loader/obj_loader.cpp" "Engine/Libraries/imgui/imgui.cpp" "Engine/Libraries/imgui/imgui_demo.cpp" "Engine/Libraries/imgui/imgui_draw.cpp" "Engine/Libraries/imgui/imgui_impl_glfw.cpp" "Engine/Libraries/imgui/imgui_impl_opengl3.cpp" "Engine/Libraries/imgui/imgui_widgets.cpp" "Engine/Engine.cpp" "Test/game.cpp" "Test/main.cpp" -lopenal -s USE_GLFW=3 -s FULL_ES3=1 -DEMSCRIPTEN=1 --memory-init-file 0 --embed-file Resources -O3 -o Web/WebGl.html