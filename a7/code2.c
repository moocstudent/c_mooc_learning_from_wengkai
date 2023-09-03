////
//// Created by tanghuijuan on 2023/5/22.
////
//typedef int(compute_func_t)(int, void*);
//
//int compute_with(int x, compute_func_t* user_func, void* user_data) {
//    int completed_work = (x + 2) * 3;
//    return user_func(completed_work, user_data);
//}
//
//int main () {
//    int x = 1;
//    __auto_type f = [x](int y) {
//        return x + y;
//    };
//    typedef __typeof(f) lambda_t;
//    compute_func_t* f_dispatch = [](int y, void* ptr) {
//        lambda_t* f_ptr = (lambda_t*)ptr;
//        return (*f_ptr)(y);
//    };
//    return compute_with(1, f_dispatch, &f);
//}