@ FUN_080a2030  entry 0x080a2030  size 122
.thumb
.org 0xa2030
FUN_080a2030:
	push {r4, lr}	@ 000a2030 10b5
.org 0xa2032
	adds r4, r0, #0	@ 000a2032 041c
.org 0xa2034
	ldrb r0, [r4, #14]	@ 000a2034 a07b
.org 0xa2036
	cmp r0, #0	@ 000a2036 0028
.org 0xa2038
	bne.n 0xa2060	@ 000a2038 12d1
.org 0xa203a
	ldr r1, [pc, #24]	@ 000a203a 0649
.org 0xa203c
	adds r0, r4, #0	@ 000a203c 201c
.org 0xa203e
	bl 0x1cf00	@ 000a203e 7af75fff
.org 0xa2042
	ldr r0, [pc, #20]	@ 000a2042 0548
.org 0xa2044
	str r0, [r4, #96]	@ 000a2044 2066
.org 0xa2046
	ldr r0, [pc, #20]	@ 000a2046 0548
.org 0xa2048
	bl 0x2b10	@ 000a2048 60f762fd
.org 0xa204c
	ldrb r0, [r4, #14]	@ 000a204c a07b
.org 0xa204e
	adds r0, #1	@ 000a204e 0130
.org 0xa2050
	strb r0, [r4, #14]	@ 000a2050 a073
.org 0xa2052
	b.n 0xa20b0	@ 000a2052 2de0
.org 0xa2054
	.byte 0x06,0x5f,0x00,0x00	@ 000a2054 data
.org 0xa2058
	.byte 0x00,0xfb,0xff,0xff	@ 000a2058 data
.org 0xa205c
	.byte 0x33,0x01,0x00,0x00	@ 000a205c data
.org 0xa2060
	ldr r0, [r4, #88]	@ 000a2060 a06d
.org 0xa2062
	ldr r1, [r4, #96]	@ 000a2062 216e
.org 0xa2064
	adds r0, r0, r1	@ 000a2064 4018
.org 0xa2066
	str r0, [r4, #88]	@ 000a2066 a065
.org 0xa2068
	adds r1, #64	@ 000a2068 4031
.org 0xa206a
	str r1, [r4, #96]	@ 000a206a 2166
.org 0xa206c
	adds r2, r4, #0	@ 000a206c 221c
.org 0xa206e
	adds r2, #184	@ 000a206e b832
.org 0xa2070
	ldr r1, [r2, #0]	@ 000a2070 1168
.org 0xa2072
	cmp r0, r1	@ 000a2072 8842
.org 0xa2074
	bge.n 0xa207e	@ 000a2074 03da
.org 0xa2076
	movs r0, #0	@ 000a2076 0020
.org 0xa2078
	str r0, [r4, #96]	@ 000a2078 2066
.org 0xa207a
	ldr r0, [r2, #0]	@ 000a207a 1068
.org 0xa207c
	str r0, [r4, #88]	@ 000a207c a065
.org 0xa207e
	ldr r0, [r4, #84]	@ 000a207e 606d
.org 0xa2080
	ldr r1, [r4, #88]	@ 000a2080 a16d
.org 0xa2082
	bl 0x7c7c	@ 000a2082 65f7fbfd
.org 0xa2086
	lsls r0, r0, #16	@ 000a2086 0004
.org 0xa2088
	cmp r0, #0	@ 000a2088 0028
.org 0xa208a
	beq.n 0xa20b0	@ 000a208a 11d0
.org 0xa208c
	movs r1, #0	@ 000a208c 0021
.org 0xa208e
	movs r0, #1	@ 000a208e 0120
.org 0xa2090
	strb r0, [r4, #13]	@ 000a2090 6073
.org 0xa2092
	strb r1, [r4, #14]	@ 000a2092 a173
.org 0xa2094
	movs r0, #159	@ 000a2094 9f20
.org 0xa2096
	lsls r0, r0, #1	@ 000a2096 4000
.org 0xa2098
	bl 0x2b10	@ 000a2098 60f73afd
.org 0xa209c
	ldr r0, [r4, #84]	@ 000a209c 606d
.org 0xa209e
	ldr r1, [r4, #88]	@ 000a209e a16d
.org 0xa20a0
	bl 0x8534	@ 000a20a0 66f748fa
.org 0xa20a4
	str r0, [r4, #88]	@ 000a20a4 a065
.org 0xa20a6
	adds r1, r4, #0	@ 000a20a6 211c
.org 0xa20a8
	adds r1, #84	@ 000a20a8 5431
