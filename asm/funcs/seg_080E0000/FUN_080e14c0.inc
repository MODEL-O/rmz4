@ FUN_080e14c0  entry 0x080e14c0  size 66
.thumb
.org 0xe14c0
FUN_080e14c0:
	push {r4, lr}	@ 000e14c0 10b5
.org 0xe14c2
	adds r4, r0, #0	@ 000e14c2 041c
.org 0xe14c4
	ldr r0, [r4, #84]	@ 000e14c4 606d
.org 0xe14c6
	ldr r1, [r4, #92]	@ 000e14c6 e16d
.org 0xe14c8
	adds r0, r0, r1	@ 000e14c8 4018
.org 0xe14ca
	str r0, [r4, #84]	@ 000e14ca 6065
.org 0xe14cc
	ldr r1, [r4, #88]	@ 000e14cc a16d
.org 0xe14ce
	ldr r2, [r4, #96]	@ 000e14ce 226e
.org 0xe14d0
	adds r1, r1, r2	@ 000e14d0 8918
.org 0xe14d2
	str r1, [r4, #88]	@ 000e14d2 a165
.org 0xe14d4
	ldr r3, [r4, #104]	@ 000e14d4 a36e
.org 0xe14d6
	adds r2, r2, r3	@ 000e14d6 d218
.org 0xe14d8
	str r2, [r4, #96]	@ 000e14d8 2266
.org 0xe14da
	bl 0x7c7c	@ 000e14da 26f7cffb
.org 0xe14de
	lsls r0, r0, #16	@ 000e14de 0004
.org 0xe14e0
	cmp r0, #0	@ 000e14e0 0028
.org 0xe14e2
	beq.n 0xe14f6	@ 000e14e2 08d0
.org 0xe14e4
	ldr r1, [pc, #28]	@ 000e14e4 0749
.org 0xe14e6
	ldrb r0, [r4, #9]	@ 000e14e6 607a
.org 0xe14e8
	lsls r0, r0, #2	@ 000e14e8 8000
.org 0xe14ea
	adds r0, r0, r1	@ 000e14ea 4018
.org 0xe14ec
	movs r1, #2	@ 000e14ec 0221
.org 0xe14ee
	str r1, [r4, #12]	@ 000e14ee e160
.org 0xe14f0
	ldr r0, [r0, #0]	@ 000e14f0 0068
.org 0xe14f2
	ldr r0, [r0, #8]	@ 000e14f2 8068
.org 0xe14f4
	str r0, [r4, #20]	@ 000e14f4 6061
.org 0xe14f6
	ldrb r0, [r4, #18]	@ 000e14f6 a07c
.org 0xe14f8
	subs r0, #1	@ 000e14f8 0138
.org 0xe14fa
	strb r0, [r4, #18]	@ 000e14fa a074
.org 0xe14fc
	pop {r4}	@ 000e14fc 10bc
.org 0xe14fe
	pop {r0}	@ 000e14fe 01bc
.org 0xe1500
	bx r0	@ 000e1500 0047
