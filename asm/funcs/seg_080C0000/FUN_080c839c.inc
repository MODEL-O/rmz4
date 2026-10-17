@ FUN_080c839c  entry 0x080c839c  size 28
.thumb
.org 0xc839c
FUN_080c839c:
	push {lr}	@ 000c839c 00b5
.org 0xc839e
	adds r2, r0, #0	@ 000c839e 021c
.org 0xc83a0
	ldr r1, [r2, #40]	@ 000c83a0 916a
.org 0xc83a2
	cmp r1, #0	@ 000c83a2 0029
.org 0xc83a4
	beq.n 0xc83ae	@ 000c83a4 03d0
.org 0xc83a6
	adds r1, #180	@ 000c83a6 b431
.org 0xc83a8
	ldrb r0, [r1, #0]	@ 000c83a8 0878
.org 0xc83aa
	subs r0, #1	@ 000c83aa 0138
.org 0xc83ac
	strb r0, [r1, #0]	@ 000c83ac 0870
.org 0xc83ae
	adds r0, r2, #0	@ 000c83ae 101c
.org 0xc83b0
	bl 0xbd3f8	@ 000c83b0 f5f722f8
.org 0xc83b4
	pop {r0}	@ 000c83b4 01bc
.org 0xc83b6
	bx r0	@ 000c83b6 0047
