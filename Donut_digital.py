import bpy

new_mesh=bpy.data.meshes.new("new_mesh")
new_mesh.from_pydata([(0,0,0),[],[])
new_mesh.update()
## make objec from the mesh
new_object = bpy.data.objects.new("dot",new_mesh)
view_layer=bpy.context.view_layer
view_layer.active_layer_collection.collection.objects.link(new_object)
