@ FUN_080f8f20  entry 0x080f8f20  size 104
.thumb
.org 0xf8f20
FUN_080f8f20:
	push {r4, r5, lr}	@ 000f8f20 30b5
.org 0xf8f22
	adds r4, r0, #0	@ 000f8f22 041c
.org 0xf8f24
	movs r5, #0	@ 000f8f24 0025
.org 0xf8f26
	bl 0xf872c	@ 000f8f26 fff701fc
.org 0xf8f2a
	lsls r0, r0, #24	@ 000f8f2a 0006
.org 0xf8f2c
	lsrs r0, r0, #24	@ 000f8f2c 000e
.org 0xf8f2e
	movs r1, #3	@ 000f8f2e 0321
.org 0xf8f30
	bl 0x129120	@ 000f8f30 30f0f6f8
.org 0xf8f34
	lsls r0, r0, #24	@ 000f8f34 0006
.org 0xf8f36
	lsrs r0, r0, #24	@ 000f8f36 000e
.org 0xf8f38
	cmp r0, #1	@ 000f8f38 0128
.org 0xf8f3a
	beq.n 0xf8f60	@ 000f8f3a 11d0
.org 0xf8f3c
	cmp r0, #1	@ 000f8f3c 0128
.org 0xf8f3e
	bgt.n 0xf8f46	@ 000f8f3e 02dc
.org 0xf8f40
	cmp r0, #0	@ 000f8f40 0028
.org 0xf8f42
	beq.n 0xf8f50	@ 000f8f42 05d0
.org 0xf8f44
	b.n 0xf8f8c	@ 000f8f44 22e0
.org 0xf8f46
	cmp r0, #2	@ 000f8f46 0228
.org 0xf8f48
	beq.n 0xf8f6c	@ 000f8f48 10d0
.org 0xf8f4a
	cmp r0, #3	@ 000f8f4a 0328
.org 0xf8f4c
	beq.n 0xf8f78	@ 000f8f4c 14d0
.org 0xf8f4e
	b.n 0xf8f8c	@ 000f8f4e 1de0
.org 0xf8f50
	ldr r0, [r4, #4]	@ 000f8f50 6068
.org 0xf8f52
	ldr r1, [pc, #8]	@ 000f8f52 0249
.org 0xf8f54
	adds r0, r0, r1	@ 000f8f54 4018
.org 0xf8f56
	str r0, [r4, #4]	@ 000f8f56 6060
.org 0xf8f58
	b.n 0xf8f82	@ 000f8f58 13e0
.org 0xf8f5a
	.byte 0x00	@ 000f8f5a data
.org 0xf8f5b
	.byte 0x00	@ 000f8f5b data
.org 0xf8f5c
	.byte 0x00,0xf0,0xff,0xff	@ 000f8f5c data
.org 0xf8f60
	ldr r0, [r4, #4]	@ 000f8f60 6068
.org 0xf8f62
	movs r1, #128	@ 000f8f62 8021
.org 0xf8f64
	lsls r1, r1, #5	@ 000f8f64 4901
.org 0xf8f66
	adds r0, r0, r1	@ 000f8f66 4018
.org 0xf8f68
	str r0, [r4, #4]	@ 000f8f68 6060
.org 0xf8f6a
	b.n 0xf8f82	@ 000f8f6a 0ae0
.org 0xf8f6c
	ldr r0, [r4, #0]	@ 000f8f6c 2068
.org 0xf8f6e
	ldr r1, [pc, #4]	@ 000f8f6e 0149
.org 0xf8f70
	b.n 0xf8f7e	@ 000f8f70 05e0
.org 0xf8f72
	.byte 0x00	@ 000f8f72 data
.org 0xf8f73
	.byte 0x00	@ 000f8f73 data
.org 0xf8f74
	.byte 0x00,0xf0,0xff,0xff	@ 000f8f74 data
.org 0xf8f78
	ldr r0, [r4, #0]	@ 000f8f78 2068
.org 0xf8f7a
	movs r1, #128	@ 000f8f7a 8021
.org 0xf8f7c
	lsls r1, r1, #5	@ 000f8f7c 4901
.org 0xf8f7e
	adds r0, r0, r1	@ 000f8f7e 4018
.org 0xf8f80
	str r0, [r4, #0]	@ 000f8f80 2060
.org 0xf8f82
	adds r0, r4, #0	@ 000f8f82 201c
.org 0xf8f84
	bl 0xf872c	@ 000f8f84 fff7d2fb
