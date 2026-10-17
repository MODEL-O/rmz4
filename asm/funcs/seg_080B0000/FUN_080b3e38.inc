@ FUN_080b3e38  entry 0x080b3e38  size 112
.thumb
.org 0xb3e38
FUN_080b3e38:
	push {r4, r5, lr}	@ 000b3e38 30b5
.org 0xb3e3a
	adds r3, r0, #0	@ 000b3e3a 031c
.org 0xb3e3c
	ldrb r2, [r3, #10]	@ 000b3e3c 9a7a
.org 0xb3e3e
	lsrs r4, r2, #4	@ 000b3e3e 1409
.org 0xb3e40
	movs r5, #1	@ 000b3e40 0125
.org 0xb3e42
	ands r4, r5	@ 000b3e42 2c40
.org 0xb3e44
	ldr r0, [pc, #44]	@ 000b3e44 0b48
.org 0xb3e46
	ldr r0, [r0, #0]	@ 000b3e46 0068
.org 0xb3e48
	ldr r1, [r0, #84]	@ 000b3e48 416d
.org 0xb3e4a
	ldr r0, [r3, #84]	@ 000b3e4a 586d
.org 0xb3e4c
	cmp r1, r0	@ 000b3e4c 8142
.org 0xb3e4e
	ble.n 0xb3e78	@ 000b3e4e 13dd
.org 0xb3e50
	movs r0, #16	@ 000b3e50 1020
.org 0xb3e52
	orrs r0, r2	@ 000b3e52 1043
.org 0xb3e54
	strb r0, [r3, #10]	@ 000b3e54 9872
.org 0xb3e56
	adds r0, r3, #0	@ 000b3e56 181c
.org 0xb3e58
	adds r0, #76	@ 000b3e58 4c30
.org 0xb3e5a
	strb r5, [r0, #0]	@ 000b3e5a 0570
.org 0xb3e5c
	movs r0, #74	@ 000b3e5c 4a20
.org 0xb3e5e
	adds r0, r0, r3	@ 000b3e5e c018
.org 0xb3e60
	mov ip, r0	@ 000b3e60 8446
.org 0xb3e62
	movs r2, #16	@ 000b3e62 1022
.org 0xb3e64
	ldrb r1, [r0, #0]	@ 000b3e64 0178
.org 0xb3e66
	movs r0, #17	@ 000b3e66 1120
.org 0xb3e68
	negs r0, r0	@ 000b3e68 4042
.org 0xb3e6a
	ands r0, r1	@ 000b3e6a 0840
.org 0xb3e6c
	orrs r0, r2	@ 000b3e6c 1043
.org 0xb3e6e
	mov r1, ip	@ 000b3e6e 6146
.org 0xb3e70
	strb r0, [r1, #0]	@ 000b3e70 0870
.org 0xb3e72
	b.n 0xb3e94	@ 000b3e72 0fe0
.org 0xb3e74
	.byte 0xf0,0xdb,0x02,0x02	@ 000b3e74 data
.org 0xb3e78
	movs r1, #0	@ 000b3e78 0021
.org 0xb3e7a
	movs r0, #239	@ 000b3e7a ef20
.org 0xb3e7c
	ands r0, r2	@ 000b3e7c 1040
.org 0xb3e7e
	strb r0, [r3, #10]	@ 000b3e7e 9872
.org 0xb3e80
	adds r0, r3, #0	@ 000b3e80 181c
.org 0xb3e82
	adds r0, #76	@ 000b3e82 4c30
.org 0xb3e84
	strb r1, [r0, #0]	@ 000b3e84 0170
.org 0xb3e86
	adds r2, r3, #0	@ 000b3e86 1a1c
.org 0xb3e88
	adds r2, #74	@ 000b3e88 4a32
.org 0xb3e8a
	ldrb r1, [r2, #0]	@ 000b3e8a 1178
.org 0xb3e8c
	movs r0, #17	@ 000b3e8c 1120
.org 0xb3e8e
	negs r0, r0	@ 000b3e8e 4042
.org 0xb3e90
	ands r0, r1	@ 000b3e90 0840
.org 0xb3e92
	strb r0, [r2, #0]	@ 000b3e92 1070
.org 0xb3e94
	ldrb r0, [r3, #10]	@ 000b3e94 987a
.org 0xb3e96
	lsrs r0, r0, #4	@ 000b3e96 0009
.org 0xb3e98
	movs r1, #1	@ 000b3e98 0121
.org 0xb3e9a
	ands r0, r1	@ 000b3e9a 0840
.org 0xb3e9c
	cmp r4, r0	@ 000b3e9c 8442
.org 0xb3e9e
	bne.n 0xb3ea4	@ 000b3e9e 01d1
.org 0xb3ea0
	movs r0, #0	@ 000b3ea0 0020
.org 0xb3ea2
	b.n 0xb3ea6	@ 000b3ea2 00e0
.org 0xb3ea4
	movs r0, #1	@ 000b3ea4 0120
.org 0xb3ea6
	pop {r4, r5}	@ 000b3ea6 30bc
