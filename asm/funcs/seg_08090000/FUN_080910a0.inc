@ FUN_080910a0  entry 0x080910a0  size 92
.thumb
.org 0x910a0
FUN_080910a0:
	push {r4, r5, lr}	@ 000910a0 30b5
.org 0x910a2
	adds r5, r0, #0	@ 000910a2 051c
.org 0x910a4
	ldr r4, [r5, #40]	@ 000910a4 ac6a
.org 0x910a6
	bl 0x1cc9c	@ 000910a6 8bf7f9fd
.org 0x910aa
	ldrb r1, [r5, #10]	@ 000910aa a97a
.org 0x910ac
	movs r0, #1	@ 000910ac 0120
.org 0x910ae
	movs r3, #0	@ 000910ae 0023
.org 0x910b0
	orrs r0, r1	@ 000910b0 0843
.org 0x910b2
	movs r1, #2	@ 000910b2 0221
.org 0x910b4
	orrs r0, r1	@ 000910b4 0843
.org 0x910b6
	strb r0, [r5, #10]	@ 000910b6 a872
.org 0x910b8
	adds r1, r5, #0	@ 000910b8 291c
.org 0x910ba
	adds r1, #37	@ 000910ba 2531
.org 0x910bc
	movs r0, #17	@ 000910bc 1120
.org 0x910be
	strb r0, [r1, #0]	@ 000910be 0870
.org 0x910c0
	ldrb r0, [r4, #10]	@ 000910c0 a07a
.org 0x910c2
	lsrs r2, r0, #4	@ 000910c2 0209
.org 0x910c4
	movs r0, #1	@ 000910c4 0120
.org 0x910c6
	ands r2, r0	@ 000910c6 0240
.org 0x910c8
	cmp r2, #0	@ 000910c8 002a
.org 0x910ca
	beq.n 0x910d4	@ 000910ca 03d0
.org 0x910cc
	ldrb r0, [r5, #10]	@ 000910cc a87a
.org 0x910ce
	movs r1, #16	@ 000910ce 1021
.org 0x910d0
	orrs r0, r1	@ 000910d0 0843
.org 0x910d2
	b.n 0x910da	@ 000910d2 02e0
.org 0x910d4
	ldrb r1, [r5, #10]	@ 000910d4 a97a
.org 0x910d6
	movs r0, #239	@ 000910d6 ef20
.org 0x910d8
	ands r0, r1	@ 000910d8 0840
.org 0x910da
	strb r0, [r5, #10]	@ 000910da a872
.org 0x910dc
	adds r1, r2, #0	@ 000910dc 111c
.org 0x910de
	adds r0, r5, #0	@ 000910de 281c
.org 0x910e0
	adds r0, #76	@ 000910e0 4c30
.org 0x910e2
	strb r1, [r0, #0]	@ 000910e2 0170
.org 0x910e4
	adds r3, r5, #0	@ 000910e4 2b1c
.org 0x910e6
	adds r3, #74	@ 000910e6 4a33
.org 0x910e8
	lsls r1, r1, #4	@ 000910e8 0901
.org 0x910ea
	ldrb r2, [r3, #0]	@ 000910ea 1a78
.org 0x910ec
	movs r0, #17	@ 000910ec 1120
.org 0x910ee
	negs r0, r0	@ 000910ee 4042
.org 0x910f0
	ands r0, r2	@ 000910f0 1040
.org 0x910f2
	orrs r0, r1	@ 000910f2 0843
.org 0x910f4
	strb r0, [r3, #0]	@ 000910f4 1870
.org 0x910f6
	pop {r4, r5}	@ 000910f6 30bc
.org 0x910f8
	pop {r0}	@ 000910f8 01bc
.org 0x910fa
	bx r0	@ 000910fa 0047
