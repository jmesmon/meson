project('project and global arg cross/native test', 'cpp', 'c')

add_global_arguments('-DGLOBAL_BOTH=1', language: 'c')
add_global_arguments('-DGLOBAL_IS_NATIVE=1', language : 'c', native : true)
add_global_arguments('-DGLOBAL_IS_NATIVE=0', language : 'c', native : false)

add_project_arguments('-DPROJECT_BOTH=1', language: 'c')
add_project_arguments('-DPROJECT_IS_NATIVE=1', language: 'c', native: true)
add_project_arguments('-DPROJECT_IS_NATIVE=0', language: 'c', native: false)

if meson.is_cross_build()
  c_args = ['-DARG_CROSS']
else
  c_args = ['-DARG_NATIVE']
endif

executable('prog-native', 'prog-native.c', native: true, c_args: c_args)
executable('prog-cross', 'prog-cross.c', native: false, c_args: c_args)
