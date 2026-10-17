@ FUN_080d7a78  entry 0x080d7a78  size 78
.thumb
.org 0xd7a78
FUN_080d7a78:
	push {lr}	@ 000d7a78 00b5
.org 0xd7a7a
	adds r2, r0, #0	@ 000d7a7a 021c
.org 0xd7a7c
	ldr r0, [pc, #52]	@ 000d7a7c 0d48
.org 0xd7a7e
	ldrb r1, [r0, #9]	@ 000d7a7e 417a
.org 0xd7a80
	movs r0, #4	@ 000d7a80 0420
.org 0xd7a82
	ands r0, r1	@ 000d7a82 0840
.org 0xd7a84
	cmp r0, #0	@ 000d7a84 0028
.org 0xd7a86
	beq.n 0xd7abc	@ 000d7a86 19d0
.org 0xd7a88
	adds r0, r2, #0	@ 000d7a88 101c
.org 0xd7a8a
	adds r0, #120	@ 000d7a8a 7830
.org 0xd7a8c
	ldrb r0, [r0, #0]	@ 000d7a8c 0078
.org 0xd7a8e
	cmp r0, #0	@ 000d7a8e 0028
.org 0xd7a90
	beq.n 0xd7abc	@ 000d7a90 14d0
.org 0xd7a92
	ldrb r1, [r2, #10]	@ 000d7a92 917a
.org 0xd7a94
	movs r0, #254	@ 000d7a94 fe20
.org 0xd7a96
	ands r0, r1	@ 000d7a96 0840
.org 0xd7a98
	movs r1, #253	@ 000d7a98 fd21
.org 0xd7a9a
	ands r0, r1	@ 000d7a9a 0840
.org 0xd7a9c
	strb r0, [r2, #10]	@ 000d7a9c 9072
.org 0xd7a9e
	ldr r1, [pc, #24]	@ 000d7a9e 0649
.org 0xd7aa0
	ldrb r0, [r2, #9]	@ 000d7aa0 507a
.org 0xd7aa2
	lsls r0, r0, #2	@ 000d7aa2 8000
.org 0xd7aa4
	adds r0, r0, r1	@ 000d7aa4 4018
.org 0xd7aa6
	movs r1, #3	@ 000d7aa6 0321
.org 0xd7aa8
	str r1, [r2, #12]	@ 000d7aa8 d160
.org 0xd7aaa
	ldr r0, [r0, #0]	@ 000d7aaa 0068
.org 0xd7aac
	ldr r0, [r0, #12]	@ 000d7aac c068
.org 0xd7aae
	str r0, [r2, #20]	@ 000d7aae 5061
.org 0xd7ab0
	b.n 0xd7acc	@ 000d7ab0 0ce0
.org 0xd7ab2
	.byte 0x00	@ 000d7ab2 data
.org 0xd7ab3
	.byte 0x00	@ 000d7ab3 data
.org 0xd7ab4
	.byte 0xb0,0xe8,0x02,0x02	@ 000d7ab4 data
.org 0xd7ab8
	.byte 0x64,0x6f,0x86,0x08	@ 000d7ab8 data
.org 0xd7abc
	ldr r0, [pc, #16]	@ 000d7abc 0448
.org 0xd7abe
	ldrb r1, [r2, #13]	@ 000d7abe 517b
.org 0xd7ac0
	lsls r1, r1, #2	@ 000d7ac0 8900
.org 0xd7ac2
	adds r1, r1, r0	@ 000d7ac2 0918
.org 0xd7ac4
	ldr r1, [r1, #0]	@ 000d7ac4 0968
