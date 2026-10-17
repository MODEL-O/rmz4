@ FUN_080464bc  entry 0x080464bc  size 82
.thumb
.org 0x464bc
FUN_080464bc:
	push {r4, lr}	@ 000464bc 10b5
.org 0x464be
	sub sp, #8	@ 000464be 82b0
.org 0x464c0
	adds r4, r0, #0	@ 000464c0 041c
.org 0x464c2
	ldr r1, [pc, #76]	@ 000464c2 1349
.org 0x464c4
	mov r0, sp	@ 000464c4 6846
.org 0x464c6
	movs r2, #5	@ 000464c6 0522
.org 0x464c8
	bl 0x129258	@ 000464c8 e2f0c6fe
.org 0x464cc
	adds r0, r4, #0	@ 000464cc 201c
.org 0x464ce
	bl 0x1cc9c	@ 000464ce d6f7e5fb
.org 0x464d2
	adds r0, r4, #0	@ 000464d2 201c
.org 0x464d4
	bl 0x1ceec	@ 000464d4 d6f70afd
.org 0x464d8
	ldrb r1, [r4, #10]	@ 000464d8 a17a
.org 0x464da
	movs r0, #1	@ 000464da 0120
.org 0x464dc
	orrs r0, r1	@ 000464dc 0843
.org 0x464de
	movs r1, #2	@ 000464de 0221
.org 0x464e0
	orrs r0, r1	@ 000464e0 0843
.org 0x464e2
	strb r0, [r4, #10]	@ 000464e2 a072
.org 0x464e4
	ldrb r0, [r4, #17]	@ 000464e4 607c
.org 0x464e6
	add r0, sp	@ 000464e6 6844
.org 0x464e8
	ldr r2, [pc, #40]	@ 000464e8 0a4a
.org 0x464ea
	adds r1, r2, #0	@ 000464ea 111c
.org 0x464ec
	ldrb r0, [r0, #0]	@ 000464ec 0078
.org 0x464ee
	adds r1, r1, r0	@ 000464ee 0918
.org 0x464f0
	lsls r1, r1, #16	@ 000464f0 0904
.org 0x464f2
	lsrs r1, r1, #16	@ 000464f2 090c
.org 0x464f4
	adds r0, r4, #0	@ 000464f4 201c
.org 0x464f6
	bl 0x1cf00	@ 000464f6 d6f703fd
.org 0x464fa
	adds r0, r4, #0	@ 000464fa 201c
.org 0x464fc
	bl 0x1d134	@ 000464fc d6f71afe
.org 0x46500
	adds r0, r4, #0	@ 00046500 201c
.org 0x46502
	bl 0x46330	@ 00046502 fff715ff
.org 0x46506
	add sp, #8	@ 00046506 02b0
.org 0x46508
	pop {r4}	@ 00046508 10bc
.org 0x4650a
	pop {r0}	@ 0004650a 01bc
.org 0x4650c
	bx r0	@ 0004650c 0047
