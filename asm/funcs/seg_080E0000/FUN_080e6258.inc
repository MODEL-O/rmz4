@ FUN_080e6258  entry 0x080e6258  size 24
.thumb
.org 0xe6258
FUN_080e6258:
	push {lr}	@ 000e6258 00b5
.org 0xe625a
	adds r1, r0, #0	@ 000e625a 011c
.org 0xe625c
	ldrb r0, [r1, #18]	@ 000e625c 887c
.org 0xe625e
	cmp r0, #0	@ 000e625e 0028
.org 0xe6260
	beq.n 0xe626a	@ 000e6260 03d0
.org 0xe6262
	subs r0, #1	@ 000e6262 0138
.org 0xe6264
	strb r0, [r1, #18]	@ 000e6264 8874
.org 0xe6266
	movs r0, #0	@ 000e6266 0020
.org 0xe6268
	b.n 0xe626c	@ 000e6268 00e0
.org 0xe626a
	movs r0, #1	@ 000e626a 0120
.org 0xe626c
	pop {r1}	@ 000e626c 02bc
.org 0xe626e
	bx r1	@ 000e626e 0847
