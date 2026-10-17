@ FUN_080cd644  entry 0x080cd644  size 112
.thumb
.org 0xcd644
FUN_080cd644:
	push {r4, lr}	@ 000cd644 10b5
.org 0xcd646
	sub sp, #8	@ 000cd646 82b0
.org 0xcd648
	adds r4, r0, #0	@ 000cd648 041c
.org 0xcd64a
	ldr r0, [r4, #84]	@ 000cd64a 606d
.org 0xcd64c
	ldr r1, [r4, #92]	@ 000cd64c e16d
.org 0xcd64e
	adds r0, r0, r1	@ 000cd64e 4018
.org 0xcd650
	str r0, [r4, #84]	@ 000cd650 6065
.org 0xcd652
	ldr r0, [r4, #88]	@ 000cd652 a06d
.org 0xcd654
	ldr r1, [r4, #96]	@ 000cd654 216e
.org 0xcd656
	adds r0, r0, r1	@ 000cd656 4018
.org 0xcd658
	str r0, [r4, #88]	@ 000cd658 a065
.org 0xcd65a
	ldrb r0, [r4, #18]	@ 000cd65a a07c
.org 0xcd65c
	cmp r0, #2	@ 000cd65c 0228
.org 0xcd65e
	bne.n 0xcd684	@ 000cd65e 11d1
.org 0xcd660
	ldrb r2, [r4, #17]	@ 000cd660 627c
.org 0xcd662
	cmp r2, #10	@ 000cd662 0a2a
.org 0xcd664
	bhi.n 0xcd684	@ 000cd664 0ed8
.org 0xcd666
	adds r0, r4, #0	@ 000cd666 201c
.org 0xcd668
	adds r0, #180	@ 000cd668 b430
.org 0xcd66a
	ldr r0, [r0, #0]	@ 000cd66a 0068
.org 0xcd66c
	str r0, [sp, #0]	@ 000cd66c 0090
.org 0xcd66e
	adds r0, r4, #0	@ 000cd66e 201c
.org 0xcd670
	adds r0, #184	@ 000cd670 b830
.org 0xcd672
	ldr r0, [r0, #0]	@ 000cd672 0068
.org 0xcd674
	str r0, [sp, #4]	@ 000cd674 0190
.org 0xcd676
	ldrb r1, [r4, #16]	@ 000cd676 217c
.org 0xcd678
	adds r2, #1	@ 000cd678 0132
.org 0xcd67a
	lsls r2, r2, #24	@ 000cd67a 1206
.org 0xcd67c
	lsrs r2, r2, #24	@ 000cd67c 120e
.org 0xcd67e
	mov r0, sp	@ 000cd67e 6846
.org 0xcd680
	bl 0xcd4f8	@ 000cd680 fff73aff
.org 0xcd684
	adds r0, r4, #0	@ 000cd684 201c
.org 0xcd686
	adds r0, #115	@ 000cd686 7330
.org 0xcd688
	ldrb r0, [r0, #0]	@ 000cd688 0078
.org 0xcd68a
	cmp r0, #3	@ 000cd68a 0328
.org 0xcd68c
	bne.n 0xcd6a0	@ 000cd68c 08d1
.org 0xcd68e
	ldr r1, [pc, #36]	@ 000cd68e 0949
.org 0xcd690
	ldrb r0, [r4, #9]	@ 000cd690 607a
.org 0xcd692
	lsls r0, r0, #2	@ 000cd692 8000
.org 0xcd694
	adds r0, r0, r1	@ 000cd694 4018
.org 0xcd696
	movs r1, #2	@ 000cd696 0221
.org 0xcd698
	str r1, [r4, #12]	@ 000cd698 e160
.org 0xcd69a
	ldr r0, [r0, #0]	@ 000cd69a 0068
.org 0xcd69c
	ldr r0, [r0, #8]	@ 000cd69c 8068
.org 0xcd69e
	str r0, [r4, #20]	@ 000cd69e 6061
.org 0xcd6a0
	ldrb r0, [r4, #18]	@ 000cd6a0 a07c
.org 0xcd6a2
	adds r0, #1	@ 000cd6a2 0130
.org 0xcd6a4
	strb r0, [r4, #18]	@ 000cd6a4 a074
.org 0xcd6a6
	adds r0, r4, #0	@ 000cd6a6 201c
.org 0xcd6a8
	bl 0x1cff0	@ 000cd6a8 4ff7a2fc
.org 0xcd6ac
	add sp, #8	@ 000cd6ac 02b0
.org 0xcd6ae
	pop {r4}	@ 000cd6ae 10bc
.org 0xcd6b0
	pop {r0}	@ 000cd6b0 01bc
.org 0xcd6b2
	bx r0	@ 000cd6b2 0047
