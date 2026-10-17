@ FUN_080e2e00  entry 0x080e2e00  size 96
.thumb
.org 0xe2e00
FUN_080e2e00:
	push {r4, lr}	@ 000e2e00 10b5
.org 0xe2e02
	adds r4, r0, #0	@ 000e2e02 041c
.org 0xe2e04
	ldr r0, [r4, #84]	@ 000e2e04 606d
.org 0xe2e06
	ldr r1, [r4, #92]	@ 000e2e06 e16d
.org 0xe2e08
	adds r0, r0, r1	@ 000e2e08 4018
.org 0xe2e0a
	str r0, [r4, #84]	@ 000e2e0a 6065
.org 0xe2e0c
	ldr r1, [r4, #88]	@ 000e2e0c a16d
.org 0xe2e0e
	ldr r2, [r4, #96]	@ 000e2e0e 226e
.org 0xe2e10
	adds r1, r1, r2	@ 000e2e10 8918
.org 0xe2e12
	str r1, [r4, #88]	@ 000e2e12 a165
.org 0xe2e14
	adds r2, #64	@ 000e2e14 4032
.org 0xe2e16
	str r2, [r4, #96]	@ 000e2e16 2266
.org 0xe2e18
	bl 0x7c7c	@ 000e2e18 24f730ff
.org 0xe2e1c
	lsls r0, r0, #16	@ 000e2e1c 0004
.org 0xe2e1e
	lsrs r3, r0, #16	@ 000e2e1e 030c
.org 0xe2e20
	cmp r3, #0	@ 000e2e20 002b
.org 0xe2e22
	beq.n 0xe2e3c	@ 000e2e22 0bd0
.org 0xe2e24
	ldr r1, [pc, #16]	@ 000e2e24 0449
.org 0xe2e26
	ldrb r0, [r4, #9]	@ 000e2e26 607a
.org 0xe2e28
	lsls r0, r0, #2	@ 000e2e28 8000
.org 0xe2e2a
	adds r0, r0, r1	@ 000e2e2a 4018
.org 0xe2e2c
	movs r1, #2	@ 000e2e2c 0221
.org 0xe2e2e
	str r1, [r4, #12]	@ 000e2e2e e160
.org 0xe2e30
	ldr r0, [r0, #0]	@ 000e2e30 0068
.org 0xe2e32
	ldr r0, [r0, #8]	@ 000e2e32 8068
.org 0xe2e34
	str r0, [r4, #20]	@ 000e2e34 6061
.org 0xe2e36
	b.n 0xe2e5e	@ 000e2e36 12e0
.org 0xe2e38
	.byte 0x64,0x6f,0x86,0x08	@ 000e2e38 data
.org 0xe2e3c
	adds r2, r4, #0	@ 000e2e3c 221c
.org 0xe2e3e
	adds r2, #116	@ 000e2e3e 7432
.org 0xe2e40
	ldrb r0, [r2, #0]	@ 000e2e40 1078
.org 0xe2e42
	cmp r0, #0	@ 000e2e42 0028
.org 0xe2e44
	bne.n 0xe2e54	@ 000e2e44 06d1
.org 0xe2e46
	ldrb r0, [r4, #10]	@ 000e2e46 a07a
.org 0xe2e48
	movs r1, #1	@ 000e2e48 0121
.org 0xe2e4a
	orrs r1, r0	@ 000e2e4a 0143
.org 0xe2e4c
	strb r1, [r4, #10]	@ 000e2e4c a172
.org 0xe2e4e
	movs r0, #1	@ 000e2e4e 0120
.org 0xe2e50
	strb r0, [r2, #0]	@ 000e2e50 1070
.org 0xe2e52
	b.n 0xe2e5e	@ 000e2e52 04e0
.org 0xe2e54
	ldrb r1, [r4, #10]	@ 000e2e54 a17a
.org 0xe2e56
	movs r0, #254	@ 000e2e56 fe20
.org 0xe2e58
	ands r0, r1	@ 000e2e58 0840
.org 0xe2e5a
	strb r0, [r4, #10]	@ 000e2e5a a072
.org 0xe2e5c
	strb r3, [r2, #0]	@ 000e2e5c 1370
.org 0xe2e5e
	pop {r4}	@ 000e2e5e 10bc
