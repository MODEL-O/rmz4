@ FUN_0801e540  entry 0x0801e540  size 22
.thumb
.org 0x1e540
FUN_0801e540:
	push {lr}	@ 0001e540 00b5
.org 0x1e542
	ldr r1, [r0, #4]	@ 0001e542 4168
.org 0x1e544
	movs r0, #200	@ 0001e544 c820
.org 0x1e546
	lsls r0, r0, #12	@ 0001e546 0003
.org 0x1e548
	cmp r1, r0	@ 0001e548 8142
.org 0x1e54a
	bgt.n 0x1e550	@ 0001e54a 01dc
.org 0x1e54c
	movs r0, #0	@ 0001e54c 0020
.org 0x1e54e
	b.n 0x1e552	@ 0001e54e 00e0
.org 0x1e550
	movs r0, #1	@ 0001e550 0120
.org 0x1e552
	pop {r1}	@ 0001e552 02bc
.org 0x1e554
	bx r1	@ 0001e554 0847
