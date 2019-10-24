p      = 1
n      = 0616015
TARGET = out

all: $(TARGET)

$(TARGET):
	g++ $(n)_hw2-$(p).cpp -o $(p).out

.PHONY: test

test: $(TARGET)
	./test.sh $(p)

.PHONY: clean

clean:
	rm *.out

.PHONY: gen

gen: $(TARGET)
	./gen.sh $(p)

.PHONY: ans

ans: $(TARGET)
	./ans.sh $(p)
