@ FUN_080da4dc  entry 0x080da4dc  size 50
.thumb
.org 0xda4dc
FUN_080da4dc:
	push {r4, lr}	@ 000da4dc 10b5
.org 0xda4de
	adds r4, r0, #0	@ 000da4de 041c
.org 0xda4e0
	bl 0xebfc8	@ 000da4e0 11f072fd
.org 0xda4e4
	lsls r0, r0, #16	@ 000da4e4 0004
.org 0xda4e6
	cmp r0, #0	@ 000da4e6 0028
.org 0xda4e8
	bne.n 0xda508	@ 000da4e8 0ed1
.org 0xda4ea
	ldrb r1, [r4, #10]	@ 000da4ea a17a
.org 0xda4ec
	movs r0, #254	@ 000da4ec fe20
.org 0xda4ee
	ands r0, r1	@ 000da4ee 0840
.org 0xda4f0
	movs r1, #253	@ 000da4f0 fd21
.org 0xda4f2
	ands r0, r1	@ 000da4f2 0840
.org 0xda4f4
	strb r0, [r4, #10]	@ 000da4f4 a072
.org 0xda4f6
	ldr r1, [pc, #24]	@ 000da4f6 0649
.org 0xda4f8
	ldrb r0, [r4, #9]	@ 000da4f8 607a
.org 0xda4fa
	lsls r0, r0, #2	@ 000da4fa 8000
.org 0xda4fc
	adds r0, r0, r1	@ 000da4fc 4018
.org 0xda4fe
	movs r1, #3	@ 000da4fe 0321
.org 0xda500
	str r1, [r4, #12]	@ 000da500 e160
.org 0xda502
	ldr r0, [r0, #0]	@ 000da502 0068
.org 0xda504
	ldr r0, [r0, #12]	@ 000da504 c068
.org 0xda506
	str r0, [r4, #20]	@ 000da506 6061
.org 0xda508
	pop {r4}	@ 000da508 10bc
.org 0xda50a
	pop {r0}	@ 000da50a 01bc
.org 0xda50c
	bx r0	@ 000da50c 0047
