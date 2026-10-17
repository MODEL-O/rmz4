@ FUN_080715b8  entry 0x080715b8  size 58
.thumb
.org 0x715b8
FUN_080715b8:
	push {r4, r5, lr}	@ 000715b8 30b5
.org 0x715ba
	adds r4, r0, #0	@ 000715ba 041c
.org 0x715bc
	adds r0, #180	@ 000715bc b430
.org 0x715be
	ldr r0, [r0, #0]	@ 000715be 0068
.org 0x715c0
	adds r0, #180	@ 000715c0 b430
.org 0x715c2
	movs r5, #0	@ 000715c2 0025
.org 0x715c4
	movs r1, #1	@ 000715c4 0121
.org 0x715c6
	strb r1, [r0, #0]	@ 000715c6 0170
.org 0x715c8
	adds r0, r4, #0	@ 000715c8 201c
.org 0x715ca
	bl 0x73e00	@ 000715ca 02f019fc
.org 0x715ce
	adds r1, r4, #0	@ 000715ce 211c
.org 0x715d0
	adds r1, #195	@ 000715d0 c331
.org 0x715d2
	strb r0, [r1, #0]	@ 000715d2 0870
.org 0x715d4
	ldrb r0, [r4, #14]	@ 000715d4 a07b
.org 0x715d6
	adds r0, #1	@ 000715d6 0130
.org 0x715d8
	strb r0, [r4, #14]	@ 000715d8 a073
.org 0x715da
	strb r5, [r4, #15]	@ 000715da e573
.org 0x715dc
	ldr r1, [pc, #20]	@ 000715dc 0549
.org 0x715de
	ldrb r0, [r4, #13]	@ 000715de 607b
.org 0x715e0
	lsls r0, r0, #2	@ 000715e0 8000
.org 0x715e2
	adds r0, r0, r1	@ 000715e2 4018
.org 0x715e4
	ldr r1, [r0, #0]	@ 000715e4 0168
.org 0x715e6
	adds r0, r4, #0	@ 000715e6 201c
.org 0x715e8
	bl 0x128f80	@ 000715e8 b7f0cafc
.org 0x715ec
	pop {r4, r5}	@ 000715ec 30bc
.org 0x715ee
	pop {r0}	@ 000715ee 01bc
.org 0x715f0
	bx r0	@ 000715f0 0047
