template <typename T> 
struct tst {

};
template <>
struct tst<int>{};

template <>
struct tst<float> {};

template <typename T>
struct tst<T*> {};

int main() {
	return 0;
}