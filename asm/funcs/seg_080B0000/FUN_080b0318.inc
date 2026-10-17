@ FUN_080b0318  entry 0x080b0318  size 24
.thumb
.org 0xb0318
FUN_080b0318:
	push {lr}	@ 000b0318 00b5
.org 0xb031a
	adds r1, r0, #0	@ 000b031a 011c
.org 0xb031c
	ldrb r0, [r1, #18]	@ 000b031c 887c
.org 0xb031e
	cmp r0, #0	@ 000b031e 0028
.org 0xb0320
	beq.n 0xb032a	@ 000b0320 03d0
.org 0xb0322
	subs r0, #1	@ 000b0322 0138
.org 0xb0324
	strb r0, [r1, #18]	@ 000b0324 8874
.org 0xb0326
	movs r0, #0	@ 000b0326 0020
.org 0xb0328
	b.n 0xb032c	@ 000b0328 00e0
.org 0xb032a
	movs r0, #1	@ 000b032a 0120
.org 0xb032c
	pop {r1}	@ 000b032c 02bc
.org 0xb032e
	bx r1	@ 000b032e 0847
