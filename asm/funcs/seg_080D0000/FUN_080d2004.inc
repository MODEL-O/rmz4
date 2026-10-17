@ FUN_080d2004  entry 0x080d2004  size 148
.thumb
.org 0xd2004
FUN_080d2004:
	push {r4, lr}	@ 000d2004 10b5
.org 0xd2006
	adds r4, r0, #0	@ 000d2006 041c
.org 0xd2008
	bl 0x1cc9c	@ 000d2008 4af748fe
.org 0xd200c
	ldrb r1, [r4, #10]	@ 000d200c a17a
.org 0xd200e
	movs r0, #1	@ 000d200e 0120
.org 0xd2010
	orrs r0, r1	@ 000d2010 0843
.org 0xd2012
	movs r1, #2	@ 000d2012 0221
.org 0xd2014
	orrs r0, r1	@ 000d2014 0843
.org 0xd2016
	strb r0, [r4, #10]	@ 000d2016 a072
.org 0xd2018
	adds r0, r4, #0	@ 000d2018 201c
.org 0xd201a
	movs r1, #15	@ 000d201a 0f21
.org 0xd201c
	bl 0x1cf00	@ 000d201c 4af770ff
.org 0xd2020
	ldrb r1, [r4, #10]	@ 000d2020 a17a
.org 0xd2022
	movs r0, #16	@ 000d2022 1020
.org 0xd2024
	ands r0, r1	@ 000d2024 0840
.org 0xd2026
	cmp r0, #0	@ 000d2026 0028
.org 0xd2028
	beq.n 0xd2050	@ 000d2028 12d0
.org 0xd202a
	ldr r2, [pc, #24]	@ 000d202a 064a
.org 0xd202c
	ldr r1, [r2, #0]	@ 000d202c 1168
.org 0xd202e
	ldr r0, [pc, #24]	@ 000d202e 0648
.org 0xd2030
	muls r0, r1	@ 000d2030 4843
.org 0xd2032
	ldr r1, [pc, #24]	@ 000d2032 0649
.org 0xd2034
	adds r0, r0, r1	@ 000d2034 4018
.org 0xd2036
	lsls r0, r0, #1	@ 000d2036 4000
.org 0xd2038
	lsrs r1, r0, #1	@ 000d2038 4108
.org 0xd203a
	str r1, [r2, #0]	@ 000d203a 1160
.org 0xd203c
	lsls r0, r0, #6	@ 000d203c 8001
.org 0xd203e
	lsrs r0, r0, #23	@ 000d203e c00d
.org 0xd2040
	b.n 0xd2068	@ 000d2040 12e0
.org 0xd2042
	.byte 0x00	@ 000d2042 data
.org 0xd2043
	.byte 0x00	@ 000d2043 data
.org 0xd2044
	.byte 0x38,0xdc,0x02,0x02	@ 000d2044 data
.org 0xd2048
	.byte 0xfd,0x43,0x03,0x00	@ 000d2048 data
.org 0xd204c
	.byte 0xc3,0x9e,0x26,0x00	@ 000d204c data
.org 0xd2050
	ldr r2, [pc, #84]	@ 000d2050 154a
.org 0xd2052
	ldr r1, [r2, #0]	@ 000d2052 1168
.org 0xd2054
	ldr r0, [pc, #84]	@ 000d2054 1548
.org 0xd2056
	muls r0, r1	@ 000d2056 4843
.org 0xd2058
	ldr r1, [pc, #84]	@ 000d2058 1549
.org 0xd205a
	adds r0, r0, r1	@ 000d205a 4018
.org 0xd205c
	lsls r0, r0, #1	@ 000d205c 4000
.org 0xd205e
	lsrs r1, r0, #1	@ 000d205e 4108
.org 0xd2060
	str r1, [r2, #0]	@ 000d2060 1160
.org 0xd2062
	lsls r0, r0, #6	@ 000d2062 8001
.org 0xd2064
	lsrs r0, r0, #23	@ 000d2064 c00d
.org 0xd2066
	negs r0, r0	@ 000d2066 4042
.org 0xd2068
	str r0, [r4, #92]	@ 000d2068 e065
.org 0xd206a
	ldr r1, [r2, #0]	@ 000d206a 1168
.org 0xd206c
	ldr r0, [pc, #60]	@ 000d206c 0f48
.org 0xd206e
	muls r0, r1	@ 000d206e 4843
.org 0xd2070
	ldr r1, [pc, #60]	@ 000d2070 0f49
.org 0xd2072
	adds r0, r0, r1	@ 000d2072 4018
.org 0xd2074
	lsls r0, r0, #1	@ 000d2074 4000
.org 0xd2076
	lsrs r1, r0, #1	@ 000d2076 4108
.org 0xd2078
	str r1, [r2, #0]	@ 000d2078 1160
.org 0xd207a
	lsrs r0, r0, #17	@ 000d207a 400c
.org 0xd207c
	movs r1, #15	@ 000d207c 0f21
.org 0xd207e
	ands r0, r1	@ 000d207e 0840
.org 0xd2080
	adds r0, #13	@ 000d2080 0d30
.org 0xd2082
	lsls r0, r0, #6	@ 000d2082 8001
.org 0xd2084
	negs r0, r0	@ 000d2084 4042
.org 0xd2086
	str r0, [r4, #96]	@ 000d2086 2066
.org 0xd2088
	ldr r1, [pc, #40]	@ 000d2088 0a49
.org 0xd208a
	ldrb r0, [r4, #9]	@ 000d208a 607a
.org 0xd208c
	lsls r0, r0, #2	@ 000d208c 8000
.org 0xd208e
	adds r0, r0, r1	@ 000d208e 4018
.org 0xd2090
	movs r1, #1	@ 000d2090 0121
.org 0xd2092
	str r1, [r4, #12]	@ 000d2092 e160
.org 0xd2094
	ldr r0, [r0, #0]	@ 000d2094 0068
.org 0xd2096
	ldr r0, [r0, #4]	@ 000d2096 4068
