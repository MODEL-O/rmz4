@ FUN_080875dc  entry 0x080875dc  size 96
.thumb
.org 0x875dc
FUN_080875dc:
	push {r4, r5, lr}	@ 000875dc 30b5
.org 0x875de
	sub sp, #8	@ 000875de 82b0
.org 0x875e0
	adds r4, r0, #0	@ 000875e0 041c
.org 0x875e2
	ldrb r5, [r4, #15]	@ 000875e2 e57b
.org 0x875e4
	cmp r5, #0	@ 000875e4 002d
.org 0x875e6
	bne.n 0x8761c	@ 000875e6 19d1
.org 0x875e8
	movs r0, #128	@ 000875e8 8020
.org 0x875ea
	lsls r0, r0, #4	@ 000875ea 0001
.org 0x875ec
	str r0, [sp, #0]	@ 000875ec 0090
.org 0x875ee
	str r5, [sp, #4]	@ 000875ee 0195
.org 0x875f0
	adds r0, r4, #0	@ 000875f0 201c
.org 0x875f2
	adds r0, #84	@ 000875f2 5430
.org 0x875f4
	mov r1, sp	@ 000875f4 6946
.org 0x875f6
	movs r2, #3	@ 000875f6 0322
.org 0x875f8
	movs r3, #4	@ 000875f8 0423
.org 0x875fa
	bl 0x88ff0	@ 000875fa 01f0f9fc
.org 0x875fe
	adds r0, r4, #0	@ 000875fe 201c
.org 0x87600
	adds r0, #116	@ 00087600 7430
.org 0x87602
	ldr r1, [pc, #56]	@ 00087602 0e49
.org 0x87604
	bl 0x5784	@ 00087604 7ef7bef8
.org 0x87608
	movs r1, #232	@ 00087608 e821
.org 0x8760a
	lsls r1, r1, #5	@ 0008760a 4901
.org 0x8760c
	adds r0, r4, #0	@ 0008760c 201c
.org 0x8760e
	bl 0x1cf00	@ 0008760e 95f777fc
.org 0x87612
	str r5, [r4, #92]	@ 00087612 e565
.org 0x87614
	str r5, [r4, #96]	@ 00087614 2566
.org 0x87616
	ldrb r0, [r4, #15]	@ 00087616 e07b
.org 0x87618
	adds r0, #1	@ 00087618 0130
.org 0x8761a
	strb r0, [r4, #15]	@ 0008761a e073
.org 0x8761c
	adds r0, r4, #0	@ 0008761c 201c
.org 0x8761e
	bl 0x1cff0	@ 0008761e 95f7e7fc
.org 0x87622
	adds r0, r4, #0	@ 00087622 201c
.org 0x87624
	bl 0x88c9c	@ 00087624 01f03afb
.org 0x87628
	cmp r0, #0	@ 00087628 0028
.org 0x8762a
	beq.n 0x87634	@ 0008762a 03d0
.org 0x8762c
	movs r1, #0	@ 0008762c 0021
.org 0x8762e
	movs r0, #2	@ 0008762e 0220
.org 0x87630
	strb r0, [r4, #14]	@ 00087630 a073
.org 0x87632
	strb r1, [r4, #15]	@ 00087632 e173
.org 0x87634
	add sp, #8	@ 00087634 02b0
.org 0x87636
	pop {r4, r5}	@ 00087636 30bc
.org 0x87638
	pop {r0}	@ 00087638 01bc
.org 0x8763a
	bx r0	@ 0008763a 0047
