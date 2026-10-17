@ FUN_080d83a0  entry 0x080d83a0  size 48
.thumb
.org 0xd83a0
FUN_080d83a0:
	push {lr}	@ 000d83a0 00b5
.org 0xd83a2
	adds r2, r0, #0	@ 000d83a2 021c
.org 0xd83a4
	adds r0, #115	@ 000d83a4 7330
.org 0xd83a6
	ldrb r0, [r0, #0]	@ 000d83a6 0078
.org 0xd83a8
	cmp r0, #3	@ 000d83a8 0328
.org 0xd83aa
	bne.n 0xd83cc	@ 000d83aa 0fd1
.org 0xd83ac
	ldr r1, [pc, #24]	@ 000d83ac 0649
.org 0xd83ae
	ldrb r0, [r2, #9]	@ 000d83ae 507a
.org 0xd83b0
	lsls r0, r0, #2	@ 000d83b0 8000
.org 0xd83b2
	adds r0, r0, r1	@ 000d83b2 4018
.org 0xd83b4
	movs r1, #2	@ 000d83b4 0221
.org 0xd83b6
	str r1, [r2, #12]	@ 000d83b6 d160
.org 0xd83b8
	ldr r0, [r0, #0]	@ 000d83b8 0068
.org 0xd83ba
	ldr r0, [r0, #8]	@ 000d83ba 8068
.org 0xd83bc
	str r0, [r2, #20]	@ 000d83bc 5061
.org 0xd83be
	adds r0, r2, #0	@ 000d83be 101c
.org 0xd83c0
	bl 0xd83d8	@ 000d83c0 00f00af8
.org 0xd83c4
	b.n 0xd83d2	@ 000d83c4 05e0
.org 0xd83c6
	.byte 0x00	@ 000d83c6 data
.org 0xd83c7
	.byte 0x00	@ 000d83c7 data
.org 0xd83c8
	.byte 0x64,0x6f,0x86,0x08	@ 000d83c8 data
.org 0xd83cc
	adds r0, r2, #0	@ 000d83cc 101c
.org 0xd83ce
	bl 0x1cff0	@ 000d83ce 44f70ffe
