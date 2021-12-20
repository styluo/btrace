//
// Created by puyingmin on 2019/12/18.
//

#ifndef NPTH_DL_H
#define NPTH_DL_H

#ifdef __cplusplus
extern "C" {
#endif
extern void* npth_dlopen(const char* so_name);
extern void* npth_dlsym(void* handle, const char* sym_str);
extern void* npth_dlopen_full(const char* so_name);
extern void* npth_dlsym_full(void* handle, const char* sym_str);
extern void* npth_dlsym_full_with_size(void* handle, const char* sym_str, size_t* sym_size_ptr);
extern void npth_dlclose(void* handle);
extern void* npth_dliterater(void);
extern char* npth_dlbuildid(const char*);

extern char* get_routine_so_path(size_t routine, size_t* start, size_t* end);
extern char* get_path_from_maps(const void* address);

#ifdef __cplusplus
}
#endif

#endif //NPTH_DL_H
