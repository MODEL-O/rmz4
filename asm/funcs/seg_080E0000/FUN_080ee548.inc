@ FUN_080ee548  entry 0x080ee548  size 32
.thumb
.org 0xee548
FUN_080ee548:
	push {r4, r5, r6, r7, lr}	@ 000ee548 f0b5
.org 0xee54a
	mov r7, r9	@ 000ee54a 4f46
.org 0xee54c
	mov r6, r8	@ 000ee54c 4646
.org 0xee54e
	push {r6, r7}	@ 000ee54e c0b4
.org 0xee550
	sub sp, #56	@ 000ee550 8eb0
.org 0xee552
	adds r7, r0, #0	@ 000ee552 071c
.org 0xee554
	ldrb r0, [r7, #13]	@ 000ee554 787b
.org 0xee556
	cmp r0, #211	@ 000ee556 d328
.org 0xee558
	bls.n 0xee55e	@ 000ee558 01d9
.org 0xee55a
	bl 0xef0ac	@ 000ee55a 00f0a7fd
.org 0xee55e
	lsls r0, r0, #2	@ 000ee55e 8000
.org 0xee560
	ldr r1, [pc, #4]	@ 000ee560 0149
.org 0xee562
	adds r0, r0, r1	@ 000ee562 4018
.org 0xee564
	ldr r0, [r0, #0]	@ 000ee564 0068
.org 0xee566
	mov pc, r0	@ 000ee566 8746
