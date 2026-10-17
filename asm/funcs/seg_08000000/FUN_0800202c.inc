@ FUN_0800202c  entry 0x0800202c  size 78
.thumb
.org 0x202c
FUN_0800202c:
	push {r4, lr}	@ 0000202c 10b5
.org 0x202e
	sub sp, #4	@ 0000202e 81b0
.org 0x2030
	movs r3, #0	@ 00002030 0023
.org 0x2032
	str r3, [sp, #0]	@ 00002032 0093
.org 0x2034
	ldr r0, [pc, #68]	@ 00002034 1148
.org 0x2036
	mov r1, sp	@ 00002036 6946
.org 0x2038
	str r1, [r0, #0]	@ 00002038 0160
.org 0x203a
	ldr r2, [pc, #68]	@ 0000203a 114a
.org 0x203c
	str r2, [r0, #4]	@ 0000203c 4260
.org 0x203e
	ldr r1, [pc, #68]	@ 0000203e 1149
.org 0x2040
	str r1, [r0, #8]	@ 00002040 8160
.org 0x2042
	ldr r1, [r0, #8]	@ 00002042 8168
.org 0x2044
	str r2, [r0, #0]	@ 00002044 0260
.org 0x2046
	movs r1, #160	@ 00002046 a021
.org 0x2048
	lsls r1, r1, #19	@ 00002048 c904
.org 0x204a
	str r1, [r0, #4]	@ 0000204a 4160
.org 0x204c
	ldr r1, [pc, #56]	@ 0000204c 0e49
.org 0x204e
	str r1, [r0, #8]	@ 0000204e 8160
.org 0x2050
	ldr r0, [r0, #8]	@ 00002050 8068
.org 0x2052
	ldr r4, [pc, #56]	@ 00002052 0e4c
.org 0x2054
	adds r0, r2, r4	@ 00002054 1019
.org 0x2056
	movs r1, #32	@ 00002056 2021
.org 0x2058
	strb r1, [r0, #0]	@ 00002058 0170
.org 0x205a
	subs r4, #1	@ 0000205a 013c
.org 0x205c
	adds r0, r2, r4	@ 0000205c 1019
.org 0x205e
	strb r1, [r0, #0]	@ 0000205e 0170
.org 0x2060
	subs r4, #1	@ 00002060 013c
.org 0x2062
	adds r0, r2, r4	@ 00002062 1019
.org 0x2064
	strb r1, [r0, #0]	@ 00002064 0170
.org 0x2066
	ldr r1, [pc, #40]	@ 00002066 0a49
.org 0x2068
	adds r0, r2, r1	@ 00002068 5018
.org 0x206a
	strh r3, [r0, #0]	@ 0000206a 0380
.org 0x206c
	adds r4, #8	@ 0000206c 0834
.org 0x206e
	adds r2, r2, r4	@ 0000206e 1219
.org 0x2070
	str r3, [r2, #0]	@ 00002070 1360
.org 0x2072
	add sp, #4	@ 00002072 01b0
.org 0x2074
	pop {r4}	@ 00002074 10bc
.org 0x2076
	pop {r0}	@ 00002076 01bc
.org 0x2078
	bx r0	@ 00002078 0047
