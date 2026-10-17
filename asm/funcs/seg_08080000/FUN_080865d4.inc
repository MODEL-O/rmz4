@ FUN_080865d4  entry 0x080865d4  size 114
.thumb
.org 0x865d4
FUN_080865d4:
	push {r4, r5, r6, lr}	@ 000865d4 70b5
.org 0x865d6
	sub sp, #8	@ 000865d6 82b0
.org 0x865d8
	adds r4, r0, #0	@ 000865d8 041c
.org 0x865da
	ldrb r0, [r4, #15]	@ 000865da e07b
.org 0x865dc
	cmp r0, #0	@ 000865dc 0028
.org 0x865de
	bne.n 0x865f8	@ 000865de 0bd1
.org 0x865e0
	adds r0, r4, #0	@ 000865e0 201c
.org 0x865e2
	adds r0, #116	@ 000865e2 7430
.org 0x865e4
	ldr r1, [pc, #80]	@ 000865e4 1449
.org 0x865e6
	bl 0x5784	@ 000865e6 7ff7cdf8
.org 0x865ea
	adds r0, r4, #0	@ 000865ea 201c
.org 0x865ec
	movs r1, #1	@ 000865ec 0121
.org 0x865ee
	bl 0x86a14	@ 000865ee 00f011fa
.org 0x865f2
	ldrb r0, [r4, #15]	@ 000865f2 e07b
.org 0x865f4
	adds r0, #1	@ 000865f4 0130
.org 0x865f6
	strb r0, [r4, #15]	@ 000865f6 e073
.org 0x865f8
	adds r0, r4, #0	@ 000865f8 201c
.org 0x865fa
	bl 0x86a48	@ 000865fa 00f025fa
.org 0x865fe
	ldr r1, [r4, #84]	@ 000865fe 616d
.org 0x86600
	ldr r0, [r4, #92]	@ 00086600 e06d
.org 0x86602
	adds r6, r1, r0	@ 00086602 0e18
.org 0x86604
	str r6, [sp, #0]	@ 00086604 0096
.org 0x86606
	ldr r1, [r4, #88]	@ 00086606 a16d
.org 0x86608
	ldr r0, [r4, #96]	@ 00086608 206e
.org 0x8660a
	adds r5, r1, r0	@ 0008660a 0d18
.org 0x8660c
	str r5, [sp, #4]	@ 0008660c 0195
.org 0x8660e
	adds r0, r6, #0	@ 0008660e 301c
.org 0x86610
	adds r1, r5, #0	@ 00086610 291c
.org 0x86612
	bl 0x7c7c	@ 00086612 81f733fb
.org 0x86616
	lsls r0, r0, #16	@ 00086616 0004
.org 0x86618
	cmp r0, #0	@ 00086618 0028
.org 0x8661a
	beq.n 0x8663c	@ 0008661a 0fd0
.org 0x8661c
	adds r0, r6, #0	@ 0008661c 301c
.org 0x8661e
	adds r1, r5, #0	@ 0008661e 291c
.org 0x86620
	bl 0x7c7c	@ 00086620 81f72cfb
.org 0x86624
	movs r1, #15	@ 00086624 0f21
.org 0x86626
	ands r1, r0	@ 00086626 0140
.org 0x86628
	cmp r1, #15	@ 00086628 0f29
.org 0x8662a
	beq.n 0x8663c	@ 0008662a 07d0
.org 0x8662c
	adds r1, r4, #0	@ 0008662c 211c
.org 0x8662e
	adds r1, #183	@ 0008662e b731
.org 0x86630
	movs r0, #1	@ 00086630 0120
.org 0x86632
	strb r0, [r1, #0]	@ 00086632 0870
.org 0x86634
	b.n 0x86644	@ 00086634 06e0
.org 0x86636
	.byte 0x00	@ 00086636 data
.org 0x86637
	.byte 0x00	@ 00086637 data
.org 0x86638
	.byte 0x64,0xed,0x85,0x08	@ 00086638 data
.org 0x8663c
	ldr r0, [sp, #0]	@ 0008663c 0098
.org 0x8663e
	ldr r1, [sp, #4]	@ 0008663e 0199
.org 0x86640
	str r0, [r4, #84]	@ 00086640 6065
.org 0x86642
	str r1, [r4, #88]	@ 00086642 a165
.org 0x86644
	add sp, #8	@ 00086644 02b0
