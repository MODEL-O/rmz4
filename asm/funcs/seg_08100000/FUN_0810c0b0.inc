@ FUN_0810c0b0  entry 0x0810c0b0  size 50
.thumb
.org 0x10c0b0
FUN_0810c0b0:
	push {lr}	@ 0010c0b0 00b5
.org 0x10c0b2
	adds r2, r0, #0	@ 0010c0b2 021c
.org 0x10c0b4
	ldr r0, [r2, #40]	@ 0010c0b4 906a
.org 0x10c0b6
	ldr r1, [pc, #32]	@ 0010c0b6 0849
.org 0x10c0b8
	adds r0, r0, r1	@ 0010c0b8 4018
.org 0x10c0ba
	ldrb r3, [r0, #5]	@ 0010c0ba 4379
.org 0x10c0bc
	cmp r3, #2	@ 0010c0bc 022b
.org 0x10c0be
	bne.n 0x10c0e0	@ 0010c0be 0fd1
.org 0x10c0c0
	ldr r1, [pc, #24]	@ 0010c0c0 0649
.org 0x10c0c2
	ldrb r0, [r2, #9]	@ 0010c0c2 507a
.org 0x10c0c4
	lsls r0, r0, #2	@ 0010c0c4 8000
.org 0x10c0c6
	adds r0, r0, r1	@ 0010c0c6 4018
.org 0x10c0c8
	str r3, [r2, #12]	@ 0010c0c8 d360
.org 0x10c0ca
	ldr r0, [r0, #0]	@ 0010c0ca 0068
.org 0x10c0cc
	ldr r0, [r0, #8]	@ 0010c0cc 8068
.org 0x10c0ce
	str r0, [r2, #20]	@ 0010c0ce 5061
.org 0x10c0d0
	adds r0, r2, #0	@ 0010c0d0 101c
.org 0x10c0d2
	bl 0x10bd20	@ 0010c0d2 fff725fe
.org 0x10c0d6
	b.n 0x10c0e6	@ 0010c0d6 06e0
.org 0x10c0d8
	.byte 0xcc,0x0d,0x00,0x00	@ 0010c0d8 data
.org 0x10c0dc
	.byte 0xf8,0xca,0x86,0x08	@ 0010c0dc data
.org 0x10c0e0
	adds r0, r2, #0	@ 0010c0e0 101c
