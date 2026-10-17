@ FUN_080db758  entry 0x080db758  size 44
.thumb
.org 0xdb758
FUN_080db758:
	push {r4, lr}	@ 000db758 10b5
.org 0xdb75a
	adds r4, r0, #0	@ 000db75a 041c
.org 0xdb75c
	adds r1, r4, #0	@ 000db75c 211c
.org 0xdb75e
	adds r1, #84	@ 000db75e 5431
.org 0xdb760
	movs r0, #1	@ 000db760 0120
.org 0xdb762
	bl 0xd0c88	@ 000db762 f5f791fa
.org 0xdb766
	movs r0, #42	@ 000db766 2a20
.org 0xdb768
	bl 0x2b10	@ 000db768 27f7d2f9
.org 0xdb76c
	ldr r1, [pc, #20]	@ 000db76c 0549
.org 0xdb76e
	ldrb r0, [r4, #9]	@ 000db76e 607a
.org 0xdb770
	lsls r0, r0, #2	@ 000db770 8000
.org 0xdb772
	adds r0, r0, r1	@ 000db772 4018
.org 0xdb774
	movs r1, #4	@ 000db774 0421
.org 0xdb776
	str r1, [r4, #12]	@ 000db776 e160
.org 0xdb778
	ldr r0, [r0, #0]	@ 000db778 0068
.org 0xdb77a
	ldr r0, [r0, #16]	@ 000db77a 0069
.org 0xdb77c
	str r0, [r4, #20]	@ 000db77c 6061
.org 0xdb77e
	pop {r4}	@ 000db77e 10bc
.org 0xdb780
	pop {r0}	@ 000db780 01bc
.org 0xdb782
	bx r0	@ 000db782 0047
