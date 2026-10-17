@ FUN_080b1a8c  entry 0x080b1a8c  size 24
.thumb
.org 0xb1a8c
FUN_080b1a8c:
	push {lr}	@ 000b1a8c 00b5
.org 0xb1a8e
	adds r1, r0, #0	@ 000b1a8e 011c
.org 0xb1a90
	ldrb r0, [r1, #18]	@ 000b1a90 887c
.org 0xb1a92
	cmp r0, #0	@ 000b1a92 0028
.org 0xb1a94
	beq.n 0xb1a9e	@ 000b1a94 03d0
.org 0xb1a96
	subs r0, #1	@ 000b1a96 0138
.org 0xb1a98
	strb r0, [r1, #18]	@ 000b1a98 8874
.org 0xb1a9a
	movs r0, #0	@ 000b1a9a 0020
.org 0xb1a9c
	b.n 0xb1aa0	@ 000b1a9c 00e0
.org 0xb1a9e
	movs r0, #1	@ 000b1a9e 0120
.org 0xb1aa0
	pop {r1}	@ 000b1aa0 02bc
.org 0xb1aa2
	bx r1	@ 000b1aa2 0847
