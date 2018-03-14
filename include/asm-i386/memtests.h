#ifndef _jubav_ASM_MEMTESTS_H_
#define _jubav_ASM_MEMTESTS_H_

#define MEMTEST_ADDR_PATTERN_ALL		0x0001
#define MEMTEST_ADDR_PATTERN_ODDS		0x0002

#define MEMTEST_DATA_PATTERN_BINARY		0x0001
#define MEMTEST_DATA_PATTERN_XOR		0x0002

#define MEMTEST_CHECK_RW			0x0001
#define MEMTEST_CHECK_ECC			0x0002

#define MEMTEST_MAX_ADDR_PATTERNS		4
#define MEMTEST_MAX_DATA_PATTERNS		4
#define MEMTEST_MAX_CHECK_TYPES			4

struct memtest_s;

struct memtest_addr_pattern_s {
    int memtest_addr_pattern_type;
    u32 (*next_addr)(u32 addr);
};

struct memtest_data_pattern_s {
    int memtest_data_pattern_type;
    u32 (*next_data)(u32 data);
};

struct memtest_check_type_s {
    int memtest_check_type;
    int (*check_mem)(u32 addr_check, u32 data_check);
};

struct memtest_check_s {
    int memtest_check_type;
    int memtest_check_flags;
    int memtest_check_rate;
    int (*check_mem)(struct memtest_s *memtest, u32 start_addr, u32 start_data, int check_nr);
};

int do_memtests(void);

#endif
