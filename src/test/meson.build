gtest = dependency('gtest', main:false)
test('geometricVector.h',
	executable('turn_test.cc', 'main_test.cc',
                sources: ['turn_test.cc', 'main_test.cc'],
                include_directories: src,
                dependencies: [gtest]
)
)
