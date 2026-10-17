@ FUN_081104cc  entry 0x081104cc  size 90
.thumb
.org 0x1104cc
FUN_081104cc:
	push {r4, r5, r6, r7, lr}	@ 001104cc f0b5
.org 0x1104ce
	mov r7, sl	@ 001104ce 5746
.org 0x1104d0
	mov r6, r9	@ 001104d0 4e46
.org 0x1104d2
	mov r5, r8	@ 001104d2 4546
.org 0x1104d4
	push {r5, r6, r7}	@ 001104d4 e0b4
.org 0x1104d6
	sub sp, #92	@ 001104d6 97b0
.org 0x1104d8
	adds r7, r0, #0	@ 001104d8 071c
.org 0x1104da
	add r1, sp, #4	@ 001104da 01a9
.org 0x1104dc
	ldr r0, [pc, #72]	@ 001104dc 1248
.org 0x1104de
	ldmia r0!, {r2, r3, r4}	@ 001104de 1cc8
.org 0x1104e0
	stmia r1!, {r2, r3, r4}	@ 001104e0 1cc1
.org 0x1104e2
	ldr r0, [r0, #0]	@ 001104e2 0068
.org 0x1104e4
	str r0, [r1, #0]	@ 001104e4 0860
.org 0x1104e6
	add r5, sp, #20	@ 001104e6 05ad
.org 0x1104e8
	mov r8, r5	@ 001104e8 a846
.org 0x1104ea
	mov r1, r8	@ 001104ea 4146
.org 0x1104ec
	ldr r0, [pc, #60]	@ 001104ec 0f48
.org 0x1104ee
	ldmia r0!, {r2, r3, r6}	@ 001104ee 4cc8
.org 0x1104f0
	stmia r1!, {r2, r3, r6}	@ 001104f0 4cc1
.org 0x1104f2
	ldr r0, [r0, #0]	@ 001104f2 0068
.org 0x1104f4
	str r0, [r1, #0]	@ 001104f4 0860
.org 0x1104f6
	add r3, sp, #36	@ 001104f6 09ab
.org 0x1104f8
	adds r1, r3, #0	@ 001104f8 191c
.org 0x1104fa
	ldr r0, [pc, #52]	@ 001104fa 0d48
.org 0x1104fc
	ldmia r0!, {r4, r5, r6}	@ 001104fc 70c8
.org 0x1104fe
	stmia r1!, {r4, r5, r6}	@ 001104fe 70c1
.org 0x110500
	add r2, sp, #48	@ 00110500 0caa
.org 0x110502
	adds r1, r2, #0	@ 00110502 111c
.org 0x110504
	ldr r0, [pc, #44]	@ 00110504 0b48
.org 0x110506
	ldmia r0!, {r4, r5, r6}	@ 00110506 70c8
.org 0x110508
	stmia r1!, {r4, r5, r6}	@ 00110508 70c1
.org 0x11050a
	ldr r0, [r0, #0]	@ 0011050a 0068
.org 0x11050c
	str r0, [r1, #0]	@ 0011050c 0860
.org 0x11050e
	ldrb r0, [r7, #7]	@ 0011050e f879
.org 0x110510
	mov r5, r8	@ 00110510 4546
.org 0x110512
	adds r6, r3, #0	@ 00110512 1e1c
.org 0x110514
	cmp r0, #23	@ 00110514 1728
.org 0x110516
	bls.n 0x11051c	@ 00110516 01d9
.org 0x110518
	bl 0x110f4a	@ 00110518 00f017fd
.org 0x11051c
	lsls r0, r0, #2	@ 0011051c 8000
.org 0x11051e
	ldr r1, [pc, #24]	@ 0011051e 0649
.org 0x110520
	adds r0, r0, r1	@ 00110520 4018
.org 0x110522
	ldr r0, [r0, #0]	@ 00110522 0068
.org 0x110524
	mov pc, r0	@ 00110524 8746
