#ifndef SMART_PTR_H
#define SMART_PTR_H

template <typename T>
class smart_ptr {
    T *obj;
public:
    explicit smart_ptr(T *obj = nullptr) : obj(obj) { }

    ~smart_ptr() {
        delete obj;
    }

    T* operator->() {
        return obj;
    }

    T& operator*() {
        return *obj;
    }

    smart_ptr(const smart_ptr&) = delete;
    smart_ptr& operator=(const smart_ptr&) = delete;

    smart_ptr(smart_ptr&& other) : obj(other.obj) {
        other.obj = nullptr;
    }

    smart_ptr& operator=(smart_ptr&& other) {
        if (this != &other) {
            delete obj;
            obj = other.obj;
            other.obj = nullptr;
        }
        return *this;
    }
};

#endif
