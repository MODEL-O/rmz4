@ FUN_080d6ef4  entry 0x080d6ef4  size 68
.thumb
.org 0xd6ef4
FUN_080d6ef4:
	push {lr}	@ 000d6ef4 00b5
.org 0xd6ef6
	adds r2, r0, #0	@ 000d6ef6 021c
.org 0xd6ef8
	ldr r0, [pc, #40]	@ 000d6ef8 0a48
.org 0xd6efa
	ldrb r1, [r0, #9]	@ 000d6efa 417a
.org 0xd6efc
	movs r0, #4	@ 000d6efc 0420
.org 0xd6efe
	ands r0, r1	@ 000d6efe 0840
.org 0xd6f00
	cmp r0, #0	@ 000d6f00 0028
.org 0xd6f02
	beq.n 0xd6f2c	@ 000d6f02 13d0
.org 0xd6f04
	ldrb r1, [r2, #10]	@ 000d6f04 917a
.org 0xd6f06
	movs r0, #254	@ 000d6f06 fe20
.org 0xd6f08
	ands r0, r1	@ 000d6f08 0840
.org 0xd6f0a
	movs r1, #253	@ 000d6f0a fd21
.org 0xd6f0c
	ands r0, r1	@ 000d6f0c 0840
.org 0xd6f0e
	strb r0, [r2, #10]	@ 000d6f0e 9072
.org 0xd6f10
	ldr r1, [pc, #20]	@ 000d6f10 0549
.org 0xd6f12
	ldrb r0, [r2, #9]	@ 000d6f12 507a
.org 0xd6f14
	lsls r0, r0, #2	@ 000d6f14 8000
.org 0xd6f16
	adds r0, r0, r1	@ 000d6f16 4018
.org 0xd6f18
	movs r1, #3	@ 000d6f18 0321
.org 0xd6f1a
	str r1, [r2, #12]	@ 000d6f1a d160
.org 0xd6f1c
	ldr r0, [r0, #0]	@ 000d6f1c 0068
.org 0xd6f1e
	ldr r0, [r0, #12]	@ 000d6f1e c068
.org 0xd6f20
	str r0, [r2, #20]	@ 000d6f20 5061
.org 0xd6f22
	b.n 0xd6f3c	@ 000d6f22 0be0
.org 0xd6f24
	.byte 0xb0,0xe8,0x02,0x02	@ 000d6f24 data
.org 0xd6f28
	.byte 0x64,0x6f,0x86,0x08	@ 000d6f28 data
.org 0xd6f2c
	ldr r0, [pc, #16]	@ 000d6f2c 0448
.org 0xd6f2e
	ldrb r1, [r2, #16]	@ 000d6f2e 117c
.org 0xd6f30
	lsls r1, r1, #2	@ 000d6f30 8900
.org 0xd6f32
	adds r1, r1, r0	@ 000d6f32 0918
.org 0xd6f34
	ldr r1, [r1, #0]	@ 000d6f34 0968
.org 0xd6f36
	adds r0, r2, #0	@ 000d6f36 101c
