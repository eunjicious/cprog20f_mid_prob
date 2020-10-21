CC=gcc
SRCS +=\
	1_add_even.c\
	2_triangle.c\
	3_hanoi.c\
	4_score.c\
	5_one_count.c\
	6_mountain.c\
	7_blood.c

OBJS = $(SRCS:.c=)

#$(info $(OBJS))
all: $(OBJS)

%.out: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)
