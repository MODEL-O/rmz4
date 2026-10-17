@ FUN_08044634  entry 0x08044634  size 42
.thumb
.org 0x44634
FUN_08044634:
	push {lr}	@ 00044634 00b5
.org 0x44636
	adds r2, r0, #0	@ 00044636 021c
.org 0x44638
	ldr r0, [r2, #20]	@ 00044638 5069
.org 0x4463a
	movs r1, #1	@ 0004463a 0121
.org 0x4463c
	ands r0, r1	@ 0004463c 0840
.org 0x4463e
	cmp r0, #0	@ 0004463e 0028
.org 0x44640
	beq.n 0x4465a	@ 00044640 0bd0
.org 0x44642
	ldr r0, [r2, #12]	@ 00044642 d068
.org 0x44644
	ldr r0, [r0, #44]	@ 00044644 c06a
.org 0x44646
	ldr r2, [r2, #44]	@ 00044646 d26a
.org 0x44648
	movs r3, #0	@ 00044648 0023
.org 0x4464a
	ldr r1, [r0, #84]	@ 0004464a 416d
.org 0x4464c
	ldr r0, [r2, #84]	@ 0004464c 506d
.org 0x4464e
	cmp r1, r0	@ 0004464e 8142
.org 0x44650
	ble.n 0x44654	@ 00044650 00dd
.org 0x44652
	movs r3, #1	@ 00044652 0123
.org 0x44654
	adds r0, r2, #0	@ 00044654 101c
.org 0x44656
	adds r0, #188	@ 00044656 bc30
.org 0x44658
	strb r3, [r0, #0]	@ 00044658 0370
.org 0x4465a
	pop {r0}	@ 0004465a 01bc
.org 0x4465c
	bx r0	@ 0004465c 0047
