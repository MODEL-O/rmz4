@ FUN_0804c58c  entry 0x0804c58c  size 42
.thumb
.org 0x4c58c
FUN_0804c58c:
	push {lr}	@ 0004c58c 00b5
.org 0x4c58e
	adds r2, r0, #0	@ 0004c58e 021c
.org 0x4c590
	ldr r0, [r2, #20]	@ 0004c590 5069
.org 0x4c592
	movs r1, #1	@ 0004c592 0121
.org 0x4c594
	ands r0, r1	@ 0004c594 0840
.org 0x4c596
	cmp r0, #0	@ 0004c596 0028
.org 0x4c598
	beq.n 0x4c5b2	@ 0004c598 0bd0
.org 0x4c59a
	ldr r0, [r2, #12]	@ 0004c59a d068
.org 0x4c59c
	ldr r0, [r0, #44]	@ 0004c59c c06a
.org 0x4c59e
	ldr r2, [r2, #44]	@ 0004c59e d26a
.org 0x4c5a0
	movs r3, #0	@ 0004c5a0 0023
.org 0x4c5a2
	ldr r1, [r0, #84]	@ 0004c5a2 416d
.org 0x4c5a4
	ldr r0, [r2, #84]	@ 0004c5a4 506d
.org 0x4c5a6
	cmp r1, r0	@ 0004c5a6 8142
.org 0x4c5a8
	ble.n 0x4c5ac	@ 0004c5a8 00dd
.org 0x4c5aa
	movs r3, #1	@ 0004c5aa 0123
.org 0x4c5ac
	adds r0, r2, #0	@ 0004c5ac 101c
.org 0x4c5ae
	adds r0, #188	@ 0004c5ae bc30
.org 0x4c5b0
	strb r3, [r0, #0]	@ 0004c5b0 0370
.org 0x4c5b2
	pop {r0}	@ 0004c5b2 01bc
.org 0x4c5b4
	bx r0	@ 0004c5b4 0047
