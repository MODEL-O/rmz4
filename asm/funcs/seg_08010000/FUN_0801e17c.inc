@ FUN_0801e17c  entry 0x0801e17c  size 58
.thumb
.org 0x1e17c
FUN_0801e17c:
	push {r4, lr}	@ 0001e17c 10b5
.org 0x1e17e
	ldr r0, [pc, #56]	@ 0001e17e 0e48
.org 0x1e180
	movs r1, #137	@ 0001e180 8921
.org 0x1e182
	lsls r1, r1, #3	@ 0001e182 c900
.org 0x1e184
	adds r2, r0, r1	@ 0001e184 4218
.org 0x1e186
	movs r1, #0	@ 0001e186 0021
.org 0x1e188
	str r1, [r2, #0]	@ 0001e188 1160
.org 0x1e18a
	adds r4, r0, #0	@ 0001e18a 041c
.org 0x1e18c
	adds r1, r4, #0	@ 0001e18c 211c
.org 0x1e18e
	adds r1, #132	@ 0001e18e 8431
.org 0x1e190
	movs r3, #47	@ 0001e190 2f23
.org 0x1e192
	ldr r0, [r2, #0]	@ 0001e192 1068
.org 0x1e194
	str r0, [r1, #0]	@ 0001e194 0860
.org 0x1e196
	str r1, [r2, #0]	@ 0001e196 1160
.org 0x1e198
	adds r1, #20	@ 0001e198 1431
.org 0x1e19a
	subs r3, #1	@ 0001e19a 013b
.org 0x1e19c
	cmp r3, #0	@ 0001e19c 002b
.org 0x1e19e
	bge.n 0x1e192	@ 0001e19e f8da
.org 0x1e1a0
	movs r1, #0	@ 0001e1a0 0021
.org 0x1e1a2
	ldr r2, [pc, #24]	@ 0001e1a2 064a
.org 0x1e1a4
	adds r0, r4, r2	@ 0001e1a4 a018
.org 0x1e1a6
	str r1, [r0, #0]	@ 0001e1a6 0160
.org 0x1e1a8
	ldr r0, [pc, #20]	@ 0001e1a8 0548
.org 0x1e1aa
	adds r1, r4, r0	@ 0001e1aa 2118
.org 0x1e1ac
	movs r0, #48	@ 0001e1ac 3020
.org 0x1e1ae
	strh r0, [r1, #0]	@ 0001e1ae 0880
.org 0x1e1b0
	pop {r4}	@ 0001e1b0 10bc
.org 0x1e1b2
	pop {r0}	@ 0001e1b2 01bc
.org 0x1e1b4
	bx r0	@ 0001e1b4 0047
