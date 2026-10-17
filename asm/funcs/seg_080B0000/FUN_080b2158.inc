@ FUN_080b2158  entry 0x080b2158  size 24
.thumb
.org 0xb2158
FUN_080b2158:
	push {lr}	@ 000b2158 00b5
.org 0xb215a
	adds r1, r0, #0	@ 000b215a 011c
.org 0xb215c
	ldrb r0, [r1, #18]	@ 000b215c 887c
.org 0xb215e
	cmp r0, #0	@ 000b215e 0028
.org 0xb2160
	beq.n 0xb216a	@ 000b2160 03d0
.org 0xb2162
	subs r0, #1	@ 000b2162 0138
.org 0xb2164
	strb r0, [r1, #18]	@ 000b2164 8874
.org 0xb2166
	movs r0, #0	@ 000b2166 0020
.org 0xb2168
	b.n 0xb216c	@ 000b2168 00e0
.org 0xb216a
	movs r0, #1	@ 000b216a 0120
.org 0xb216c
	pop {r1}	@ 000b216c 02bc
.org 0xb216e
	bx r1	@ 000b216e 0847
