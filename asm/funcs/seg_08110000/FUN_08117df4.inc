@ FUN_08117df4  entry 0x08117df4  size 86
.thumb
.org 0x117df4
FUN_08117df4:
	push {r4, lr}	@ 00117df4 10b5
.org 0x117df6
	adds r2, r0, #0	@ 00117df6 021c
.org 0x117df8
	ldrh r0, [r2, #4]	@ 00117df8 9088
.org 0x117dfa
	subs r0, #1	@ 00117dfa 0138
.org 0x117dfc
	movs r3, #0	@ 00117dfc 0023
.org 0x117dfe
	adds r1, r0, #0	@ 00117dfe 011c
.org 0x117e00
	strh r0, [r2, #4]	@ 00117e00 9080
.org 0x117e02
	lsls r0, r0, #16	@ 00117e02 0004
.org 0x117e04
	cmp r0, #0	@ 00117e04 0028
.org 0x117e06
	bne.n 0x117e34	@ 00117e06 15d1
.org 0x117e08
	ldr r0, [pc, #32]	@ 00117e08 0848
.org 0x117e0a
	ldr r4, [pc, #36]	@ 00117e0a 094c
.org 0x117e0c
	adds r1, r0, r4	@ 00117e0c 0119
.org 0x117e0e
	strb r3, [r1, #0]	@ 00117e0e 0b70
.org 0x117e10
	subs r4, #1	@ 00117e10 013c
.org 0x117e12
	adds r1, r0, r4	@ 00117e12 0119
.org 0x117e14
	strb r3, [r1, #0]	@ 00117e14 0b70
.org 0x117e16
	movs r1, #128	@ 00117e16 8021
.org 0x117e18
	lsls r1, r1, #3	@ 00117e18 c900
.org 0x117e1a
	adds r0, r0, r1	@ 00117e1a 4018
.org 0x117e1c
	strb r3, [r0, #0]	@ 00117e1c 0370
.org 0x117e1e
	movs r0, #4	@ 00117e1e 0420
.org 0x117e20
	strb r0, [r2, #1]	@ 00117e20 5070
.org 0x117e22
	adds r0, r2, #0	@ 00117e22 101c
.org 0x117e24
	bl 0x117e60	@ 00117e24 00f01cf8
.org 0x117e28
	b.n 0x117e4e	@ 00117e28 11e0
.org 0x117e2a
	.byte 0x00	@ 00117e2a data
.org 0x117e2b
	.byte 0x00	@ 00117e2b data
.org 0x117e2c
	.byte 0xc0,0x2a,0x00,0x03	@ 00117e2c data
.org 0x117e30
	.byte 0x02,0x04,0x00,0x00	@ 00117e30 data
.org 0x117e34
	ldr r2, [pc, #28]	@ 00117e34 074a
.org 0x117e36
	ldr r3, [pc, #32]	@ 00117e36 084b
.org 0x117e38
	adds r0, r2, r3	@ 00117e38 d018
.org 0x117e3a
	strb r1, [r0, #0]	@ 00117e3a 0170
.org 0x117e3c
	movs r0, #255	@ 00117e3c ff20
.org 0x117e3e
	ands r0, r1	@ 00117e3e 0840
.org 0x117e40
	ldr r4, [pc, #24]	@ 00117e40 064c
.org 0x117e42
	adds r1, r2, r4	@ 00117e42 1119
.org 0x117e44
	strb r0, [r1, #0]	@ 00117e44 0870
.org 0x117e46
	movs r1, #128	@ 00117e46 8021
.org 0x117e48
	lsls r1, r1, #3	@ 00117e48 c900
