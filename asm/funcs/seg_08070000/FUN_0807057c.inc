@ FUN_0807057c  entry 0x0807057c  size 134
.thumb
.org 0x7057c
FUN_0807057c:
	push {r4, r5, r6, lr}	@ 0007057c 70b5
.org 0x7057e
	adds r6, r0, #0	@ 0007057e 061c
.org 0x70580
	ldrb r0, [r6, #15]	@ 00070580 f07b
.org 0x70582
	cmp r0, #0	@ 00070582 0028
.org 0x70584
	bne.n 0x70594	@ 00070584 06d1
.org 0x70586
	adds r0, r6, #0	@ 00070586 301c
.org 0x70588
	movs r1, #0	@ 00070588 0021
.org 0x7058a
	bl 0x736c4	@ 0007058a 03f09bf8
.org 0x7058e
	ldrb r0, [r6, #15]	@ 0007058e f07b
.org 0x70590
	adds r0, #1	@ 00070590 0130
.org 0x70592
	strb r0, [r6, #15]	@ 00070592 f073
.org 0x70594
	adds r0, r6, #0	@ 00070594 301c
.org 0x70596
	bl 0x1cff0	@ 00070596 acf72bfd
.org 0x7059a
	adds r0, r6, #0	@ 0007059a 301c
.org 0x7059c
	adds r0, #116	@ 0007059c 7430
.org 0x7059e
	ldr r4, [pc, #100]	@ 0007059e 194c
.org 0x705a0
	ldr r3, [pc, #100]	@ 000705a0 194b
.org 0x705a2
	adds r1, r6, #0	@ 000705a2 311c
.org 0x705a4
	adds r1, #184	@ 000705a4 b831
.org 0x705a6
	ldrb r2, [r1, #0]	@ 000705a6 0a78
.org 0x705a8
	lsls r1, r2, #1	@ 000705a8 5100
.org 0x705aa
	adds r1, r1, r3	@ 000705aa c918
.org 0x705ac
	ldrh r1, [r1, #0]	@ 000705ac 0988
.org 0x705ae
	lsls r1, r1, #2	@ 000705ae 8900
.org 0x705b0
	adds r1, r1, r4	@ 000705b0 0919
.org 0x705b2
	adds r3, r6, #0	@ 000705b2 331c
.org 0x705b4
	adds r3, #113	@ 000705b4 7133
.org 0x705b6
	movs r5, #0	@ 000705b6 0025
.org 0x705b8
	ldrsb r5, [r3, r5]	@ 000705b8 5d57
.org 0x705ba
	ldr r1, [r1, #0]	@ 000705ba 0968
.org 0x705bc
	lsls r3, r5, #2	@ 000705bc ab00
.org 0x705be
	adds r3, r3, r1	@ 000705be 5b18
.org 0x705c0
	ldr r4, [pc, #72]	@ 000705c0 124c
.org 0x705c2
	adds r1, r6, #0	@ 000705c2 311c
.org 0x705c4
	adds r1, #185	@ 000705c4 b931
.org 0x705c6
	ldrb r1, [r1, #0]	@ 000705c6 0978
.org 0x705c8
	lsls r1, r1, #2	@ 000705c8 8900
.org 0x705ca
	adds r1, r1, r4	@ 000705ca 0919
.org 0x705cc
	ldr r1, [r1, #0]	@ 000705cc 0968
.org 0x705ce
	lsls r2, r2, #2	@ 000705ce 9200
.org 0x705d0
	adds r2, r2, r1	@ 000705d0 5218
.org 0x705d2
	ldr r1, [r2, #0]	@ 000705d2 1168
.org 0x705d4
	adds r1, r1, r5	@ 000705d4 4919
.org 0x705d6
	ldrb r1, [r1, #0]	@ 000705d6 0978
.org 0x705d8
	lsls r2, r1, #1	@ 000705d8 4a00
.org 0x705da
	adds r2, r2, r1	@ 000705da 5218
.org 0x705dc
	lsls r2, r2, #3	@ 000705dc d200
.org 0x705de
	ldr r1, [r3, #0]	@ 000705de 1968
.org 0x705e0
	adds r1, r1, r2	@ 000705e0 8918
.org 0x705e2
	bl 0x5784	@ 000705e2 95f7cff8
.org 0x705e6
	ldr r0, [r6, #24]	@ 000705e6 b069
.org 0x705e8
	ldrb r1, [r0, #9]	@ 000705e8 417a
.org 0x705ea
	movs r0, #1	@ 000705ea 0120
.org 0x705ec
	ands r0, r1	@ 000705ec 0840
.org 0x705ee
	cmp r0, #0	@ 000705ee 0028
.org 0x705f0
	beq.n 0x705fc	@ 000705f0 04d0
.org 0x705f2
	ldrb r0, [r6, #14]	@ 000705f2 b07b
.org 0x705f4
	adds r0, #1	@ 000705f4 0130
.org 0x705f6
	movs r1, #0	@ 000705f6 0021
.org 0x705f8
	strb r0, [r6, #14]	@ 000705f8 b073
.org 0x705fa
	strb r1, [r6, #15]	@ 000705fa f173
.org 0x705fc
	pop {r4, r5, r6}	@ 000705fc 70bc
.org 0x705fe
	pop {r0}	@ 000705fe 01bc
.org 0x70600
	bx r0	@ 00070600 0047
