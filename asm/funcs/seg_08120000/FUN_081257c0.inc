@ FUN_081257c0  entry 0x081257c0  size 86
.thumb
.org 0x1257c0
FUN_081257c0:
	push {r4, lr}	@ 001257c0 10b5
.org 0x1257c2
	adds r4, r0, #0	@ 001257c2 041c
.org 0x1257c4
	movs r1, #6	@ 001257c4 0621
.org 0x1257c6
	ldrsh r0, [r4, r1]	@ 001257c6 605e
.org 0x1257c8
	cmp r0, #0	@ 001257c8 0028
.org 0x1257ca
	beq.n 0x125802	@ 001257ca 1ad0
.org 0x1257cc
	ldr r0, [pc, #72]	@ 001257cc 1248
.org 0x1257ce
	adds r2, r4, r0	@ 001257ce 2218
.org 0x1257d0
	ldr r0, [r2, #36]	@ 001257d0 506a
.org 0x1257d2
	movs r1, #2	@ 001257d2 0221
.org 0x1257d4
	ands r0, r1	@ 001257d4 0840
.org 0x1257d6
	cmp r0, #0	@ 001257d6 0028
.org 0x1257d8
	beq.n 0x125802	@ 001257d8 13d0
.org 0x1257da
	ldr r0, [r2, #16]	@ 001257da 1069
.org 0x1257dc
	ldr r1, [r2, #8]	@ 001257dc 9168
.org 0x1257de
	cmp r0, r1	@ 001257de 8842
.org 0x1257e0
	bgt.n 0x1257e6	@ 001257e0 01dc
.org 0x1257e2
	cmp r0, #0	@ 001257e2 0028
.org 0x1257e4
	bne.n 0x1257e8	@ 001257e4 00d1
.org 0x1257e6
	str r1, [r2, #16]	@ 001257e6 1161
.org 0x1257e8
	ldr r1, [pc, #44]	@ 001257e8 0b49
.org 0x1257ea
	adds r2, r4, r1	@ 001257ea 6218
.org 0x1257ec
	ldr r0, [pc, #44]	@ 001257ec 0b48
.org 0x1257ee
	ldr r1, [r2, #8]	@ 001257ee 9168
.org 0x1257f0
	ldr r0, [r0, #44]	@ 001257f0 c06a
.org 0x1257f2
	cmp r1, r0	@ 001257f2 8142
.org 0x1257f4
	bcc.n 0x1257fa	@ 001257f4 01d3
.org 0x1257f6
	cmp r0, #0	@ 001257f6 0028
.org 0x1257f8
	bne.n 0x125802	@ 001257f8 03d1
.org 0x1257fa
	ldr r1, [r2, #16]	@ 001257fa 1169
.org 0x1257fc
	movs r0, #4	@ 001257fc 0420
.org 0x1257fe
	bl 0x6a6c	@ 001257fe e1f635f9
.org 0x125802
	ldr r1, [pc, #20]	@ 00125802 0549
.org 0x125804
	adds r0, r4, r1	@ 00125804 6018
.org 0x125806
	ldr r1, [r0, #36]	@ 00125806 416a
.org 0x125808
	movs r2, #4	@ 00125808 0422
.org 0x12580a
	orrs r1, r2	@ 0012580a 1143
.org 0x12580c
	str r1, [r0, #36]	@ 0012580c 4162
.org 0x12580e
	movs r0, #0	@ 0012580e 0020
.org 0x125810
	pop {r4}	@ 00125810 10bc
.org 0x125812
	pop {r1}	@ 00125812 02bc
.org 0x125814
	bx r1	@ 00125814 0847
