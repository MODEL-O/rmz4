@ FUN_080d6f44  entry 0x080d6f44  size 68
.thumb
.org 0xd6f44
FUN_080d6f44:
	push {lr}	@ 000d6f44 00b5
.org 0xd6f46
	adds r2, r0, #0	@ 000d6f46 021c
.org 0xd6f48
	ldr r0, [pc, #40]	@ 000d6f48 0a48
.org 0xd6f4a
	ldrb r1, [r0, #9]	@ 000d6f4a 417a
.org 0xd6f4c
	movs r0, #4	@ 000d6f4c 0420
.org 0xd6f4e
	ands r0, r1	@ 000d6f4e 0840
.org 0xd6f50
	cmp r0, #0	@ 000d6f50 0028
.org 0xd6f52
	beq.n 0xd6f7c	@ 000d6f52 13d0
.org 0xd6f54
	ldrb r1, [r2, #10]	@ 000d6f54 917a
.org 0xd6f56
	movs r0, #254	@ 000d6f56 fe20
.org 0xd6f58
	ands r0, r1	@ 000d6f58 0840
.org 0xd6f5a
	movs r1, #253	@ 000d6f5a fd21
.org 0xd6f5c
	ands r0, r1	@ 000d6f5c 0840
.org 0xd6f5e
	strb r0, [r2, #10]	@ 000d6f5e 9072
.org 0xd6f60
	ldr r1, [pc, #20]	@ 000d6f60 0549
.org 0xd6f62
	ldrb r0, [r2, #9]	@ 000d6f62 507a
.org 0xd6f64
	lsls r0, r0, #2	@ 000d6f64 8000
.org 0xd6f66
	adds r0, r0, r1	@ 000d6f66 4018
.org 0xd6f68
	movs r1, #3	@ 000d6f68 0321
.org 0xd6f6a
	str r1, [r2, #12]	@ 000d6f6a d160
.org 0xd6f6c
	ldr r0, [r0, #0]	@ 000d6f6c 0068
.org 0xd6f6e
	ldr r0, [r0, #12]	@ 000d6f6e c068
.org 0xd6f70
	str r0, [r2, #20]	@ 000d6f70 5061
.org 0xd6f72
	b.n 0xd6f8c	@ 000d6f72 0be0
.org 0xd6f74
	.byte 0xb0,0xe8,0x02,0x02	@ 000d6f74 data
.org 0xd6f78
	.byte 0x64,0x6f,0x86,0x08	@ 000d6f78 data
.org 0xd6f7c
	ldr r0, [pc, #16]	@ 000d6f7c 0448
.org 0xd6f7e
	ldrb r1, [r2, #16]	@ 000d6f7e 117c
.org 0xd6f80
	lsls r1, r1, #2	@ 000d6f80 8900
.org 0xd6f82
	adds r1, r1, r0	@ 000d6f82 0918
.org 0xd6f84
	ldr r1, [r1, #0]	@ 000d6f84 0968
.org 0xd6f86
	adds r0, r2, #0	@ 000d6f86 101c
