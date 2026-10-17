@ FUN_080128e8  entry 0x080128e8  size 26
.thumb
.org 0x128e8
FUN_080128e8:
	push {lr}	@ 000128e8 00b5
.org 0x128ea
	adds r3, r0, #0	@ 000128ea 031c
.org 0x128ec
	ldrb r2, [r3, #14]	@ 000128ec 9a7b
.org 0x128ee
	cmp r2, #0	@ 000128ee 002a
.org 0x128f0
	bne.n 0x128fe	@ 000128f0 05d1
.org 0x128f2
	ldr r0, [pc, #16]	@ 000128f2 0448
.org 0x128f4
	movs r1, #240	@ 000128f4 f021
.org 0x128f6
	lsls r1, r1, #13	@ 000128f6 4903
.org 0x128f8
	str r1, [r0, #0]	@ 000128f8 0160
.org 0x128fa
	adds r0, r2, #1	@ 000128fa 501c
.org 0x128fc
	strb r0, [r3, #14]	@ 000128fc 9873
.org 0x128fe
	pop {r0}	@ 000128fe 01bc
.org 0x12900
	bx r0	@ 00012900 0047
