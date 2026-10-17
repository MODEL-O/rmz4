@ FUN_081004a4  entry 0x081004a4  size 70
.thumb
.org 0x1004a4
FUN_081004a4:
	push {r4, lr}	@ 001004a4 10b5
.org 0x1004a6
	adds r4, r0, #0	@ 001004a6 041c
.org 0x1004a8
	ldr r0, [pc, #64]	@ 001004a8 1048
.org 0x1004aa
	ldrb r1, [r0, #7]	@ 001004aa c179
.org 0x1004ac
	movs r0, #8	@ 001004ac 0820
.org 0x1004ae
	ands r0, r1	@ 001004ae 0840
.org 0x1004b0
	cmp r0, #0	@ 001004b0 0028
.org 0x1004b2
	bne.n 0x1004c8	@ 001004b2 09d1
.org 0x1004b4
	ldr r0, [pc, #56]	@ 001004b4 0e48
.org 0x1004b6
	adds r1, r4, #0	@ 001004b6 211c
.org 0x1004b8
	adds r1, #84	@ 001004b8 5431
.org 0x1004ba
	bl 0x1fb14	@ 001004ba 1ff72bfb
.org 0x1004be
	cmp r0, #0	@ 001004be 0028
.org 0x1004c0
	bne.n 0x1004c8	@ 001004c0 02d1
.org 0x1004c2
	movs r0, #59	@ 001004c2 3b20
.org 0x1004c4
	bl 0x6984	@ 001004c4 06f75efa
.org 0x1004c8
	ldr r1, [pc, #40]	@ 001004c8 0a49
.org 0x1004ca
	ldrb r0, [r4, #13]	@ 001004ca 607b
.org 0x1004cc
	lsls r0, r0, #2	@ 001004cc 8000
.org 0x1004ce
	adds r0, r0, r1	@ 001004ce 4018
.org 0x1004d0
	ldr r1, [r0, #0]	@ 001004d0 0168
.org 0x1004d2
	adds r0, r4, #0	@ 001004d2 201c
.org 0x1004d4
	bl 0x128f80	@ 001004d4 28f054fd
.org 0x1004d8
	adds r0, r4, #0	@ 001004d8 201c
.org 0x1004da
	bl 0x1cff0	@ 001004da 1cf789fd
.org 0x1004de
	ldrb r0, [r4, #19]	@ 001004de e07c
.org 0x1004e0
	adds r0, #1	@ 001004e0 0130
.org 0x1004e2
	strb r0, [r4, #19]	@ 001004e2 e074
.org 0x1004e4
	pop {r4}	@ 001004e4 10bc
.org 0x1004e6
	pop {r0}	@ 001004e6 01bc
.org 0x1004e8
	bx r0	@ 001004e8 0047
