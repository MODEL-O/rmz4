@ FUN_081279a4  entry 0x081279a4  size 72
.thumb
.org 0x1279a4
FUN_081279a4:
	push {r4, r5, r6, r7, lr}	@ 001279a4 f0b5
.org 0x1279a6
	ldrb r5, [r0, #8]	@ 001279a6 057a
.org 0x1279a8
	ldr r4, [r0, #44]	@ 001279a8 c46a
.org 0x1279aa
	cmp r5, #0	@ 001279aa 002d
.org 0x1279ac
	ble.n 0x1279e6	@ 001279ac 1bdd
.org 0x1279ae
	movs r7, #128	@ 001279ae 8027
.org 0x1279b0
	ldrb r1, [r4, #0]	@ 001279b0 2178
.org 0x1279b2
	adds r0, r7, #0	@ 001279b2 381c
.org 0x1279b4
	ands r0, r1	@ 001279b4 0840
.org 0x1279b6
	cmp r0, #0	@ 001279b6 0028
.org 0x1279b8
	beq.n 0x1279de	@ 001279b8 11d0
.org 0x1279ba
	movs r6, #64	@ 001279ba 4026
.org 0x1279bc
	adds r0, r6, #0	@ 001279bc 301c
.org 0x1279be
	ands r0, r1	@ 001279be 0840
.org 0x1279c0
	cmp r0, #0	@ 001279c0 0028
.org 0x1279c2
	beq.n 0x1279de	@ 001279c2 0cd0
.org 0x1279c4
	adds r0, r4, #0	@ 001279c4 201c
.org 0x1279c6
	bl 0x127b1c	@ 001279c6 00f0a9f8
.org 0x1279ca
	strb r7, [r4, #0]	@ 001279ca 2770
.org 0x1279cc
	movs r0, #2	@ 001279cc 0220
.org 0x1279ce
	strb r0, [r4, #15]	@ 001279ce e073
.org 0x1279d0
	strb r6, [r4, #19]	@ 001279d0 e674
.org 0x1279d2
	movs r0, #22	@ 001279d2 1620
.org 0x1279d4
	strb r0, [r4, #25]	@ 001279d4 6076
.org 0x1279d6
	adds r1, r4, #0	@ 001279d6 211c
.org 0x1279d8
	adds r1, #36	@ 001279d8 2431
.org 0x1279da
	movs r0, #1	@ 001279da 0120
.org 0x1279dc
	strb r0, [r1, #0]	@ 001279dc 0870
.org 0x1279de
	subs r5, #1	@ 001279de 013d
.org 0x1279e0
	adds r4, #80	@ 001279e0 5034
.org 0x1279e2
	cmp r5, #0	@ 001279e2 002d
.org 0x1279e4
	bgt.n 0x1279b0	@ 001279e4 e4dc
.org 0x1279e6
	pop {r4, r5, r6, r7}	@ 001279e6 f0bc
.org 0x1279e8
	pop {r0}	@ 001279e8 01bc
.org 0x1279ea
	bx r0	@ 001279ea 0047
