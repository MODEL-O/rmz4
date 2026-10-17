@ FUN_080cf9c4  entry 0x080cf9c4  size 66
.thumb
.org 0xcf9c4
FUN_080cf9c4:
	push {r4, lr}	@ 000cf9c4 10b5
.org 0xcf9c6
	adds r4, r0, #0	@ 000cf9c6 041c
.org 0xcf9c8
	ldr r0, [r4, #84]	@ 000cf9c8 606d
.org 0xcf9ca
	ldr r1, [r4, #92]	@ 000cf9ca e16d
.org 0xcf9cc
	adds r0, r0, r1	@ 000cf9cc 4018
.org 0xcf9ce
	str r0, [r4, #84]	@ 000cf9ce 6065
.org 0xcf9d0
	ldr r1, [r4, #88]	@ 000cf9d0 a16d
.org 0xcf9d2
	ldr r2, [r4, #96]	@ 000cf9d2 226e
.org 0xcf9d4
	adds r1, r1, r2	@ 000cf9d4 8918
.org 0xcf9d6
	str r1, [r4, #88]	@ 000cf9d6 a165
.org 0xcf9d8
	ldr r3, [r4, #104]	@ 000cf9d8 a36e
.org 0xcf9da
	adds r2, r2, r3	@ 000cf9da d218
.org 0xcf9dc
	str r2, [r4, #96]	@ 000cf9dc 2266
.org 0xcf9de
	bl 0x7c7c	@ 000cf9de 38f74df9
.org 0xcf9e2
	lsls r0, r0, #16	@ 000cf9e2 0004
.org 0xcf9e4
	cmp r0, #0	@ 000cf9e4 0028
.org 0xcf9e6
	beq.n 0xcf9fa	@ 000cf9e6 08d0
.org 0xcf9e8
	ldr r1, [pc, #28]	@ 000cf9e8 0749
.org 0xcf9ea
	ldrb r0, [r4, #9]	@ 000cf9ea 607a
.org 0xcf9ec
	lsls r0, r0, #2	@ 000cf9ec 8000
.org 0xcf9ee
	adds r0, r0, r1	@ 000cf9ee 4018
.org 0xcf9f0
	movs r1, #2	@ 000cf9f0 0221
.org 0xcf9f2
	str r1, [r4, #12]	@ 000cf9f2 e160
.org 0xcf9f4
	ldr r0, [r0, #0]	@ 000cf9f4 0068
.org 0xcf9f6
	ldr r0, [r0, #8]	@ 000cf9f6 8068
.org 0xcf9f8
	str r0, [r4, #20]	@ 000cf9f8 6061
.org 0xcf9fa
	adds r0, r4, #0	@ 000cf9fa 201c
.org 0xcf9fc
	bl 0x1cff0	@ 000cf9fc 4df7f8fa
.org 0xcfa00
	pop {r4}	@ 000cfa00 10bc
.org 0xcfa02
	pop {r0}	@ 000cfa02 01bc
.org 0xcfa04
	bx r0	@ 000cfa04 0047
