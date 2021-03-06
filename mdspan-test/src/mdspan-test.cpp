// mdspan-test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "mdspan/mdspan.hpp"

int main() {
	using extent_type = md::extents<-1, -1, -1, -1>;

	using span_type = md::mdspan<double, extent_type, md::layout_right>;

	using other_extent_type = md::extents<4, 2, 5, 4>;
	using other_span_type   = md::mdspan<double, extent_type>;

	span_type empty(nullptr);
	span_type def;

	std::unique_ptr<double[]> raw_array_1 = std::make_unique<double[]>(span_type::required_span_size(4, 2, 5, 4));
	std::unique_ptr<double[]> raw_array_2 = std::make_unique<double[]>(span_type::required_span_size(4, 2, 5, 4));

	span_type mda_1(raw_array_1.get(), 4, 2, 5, 4);
	span_type mda_2(raw_array_2.get(), 4, 2, 5, 4);

	other_span_type other_1(mda_1);

	constexpr std::array<std::ptrdiff_t, 2> a = { 1, 2 };

	for(int i = 0; i < 4; ++i) {
		for(int j = 0; j < 2; ++j) {
			for(int k = 0; k < 5; ++k) {
				for(int l = 0; l < 4; ++l) {
					mda_1(i, j, k, l) = i + j + k + l;
					mda_2(i, j, k, l) = i * j * k * l;
				}
			}
		}
	}

	std::unique_ptr<double[]> raw_array_3 = std::make_unique<double[]>(span_type::required_span_size(4, 2, 5, 4));
	span_type mda_3(raw_array_3.get(), 4, 2, 5, 4);

	for(int i = 0; i < 4; ++i) {
		for(int j = 0; j < 2; ++j) {
			for(int k = 0; k < 5; ++k) {
				for(int l = 0; l < 4; ++l) {
					mda_3(i, j, k, l) = mda_1(i, j, k, l) * mda_2(i, j, k, l);
				}
			}
		}
	}

	for(int i = 0; i < 4; ++i) {
		for(int j = 0; j < 2; ++j) {
			for(int k = 0; k < 5; ++k) {
				for(int l = 0; l < 4; ++l) {
					std::cout << i << " " << j << " " << k << " " << l << ": " << mda_3(i, j, k, l) << std::endl;
				}
			}
		}
	}

	for(int i = 0; i < 4; ++i) {
		for(int j = 0; j < 2; ++j) {
			for(int k = 0; k < 5; ++k) {
				for(int l = 0; l < 4; ++l) {
					mda_3(i, j, k, l) = i * j * k * l;
				}
			}
		}
	}

	double raw_array[4][2][5][4];
	span_type mda_4(&raw_array[0][0][0][0], 4, 2, 5, 4);

	for(int i = 0; i < 4; ++i) {
		for(int j = 0; j < 2; ++j) {
			for(int k = 0; k < 5; ++k) {
				for(int l = 0; l < 4; ++l) {
					raw_array[i][j][k][l] = i * j * k * l;
				}
			}
		}
	}

	for(int i = 0; i < 4; ++i) {
		for(int j = 0; j < 2; ++j) {
			for(int k = 0; k < 5; ++k) {
				for(int l = 0; l < 4; ++l) {
					std::cout << i << " " << j << " " << k << " " << l << ": " << &raw_array[i][j][k][l] << " " << &mda_4(i, j, k, l) << std::endl;
				}
			}
		}
	}
	return 0;
}
