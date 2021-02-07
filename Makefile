src = t_complex.cpp t_complex_test.cpp
project = t_complex
t_complex: $(src)
    g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: t_complex
    ./$^
clean:
    rm *.out
