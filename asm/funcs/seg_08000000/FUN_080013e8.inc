@ FUN_080013e8  entry 0x080013e8  size 28
.thumb
.org 0x13e8
FUN_080013e8:
	push {lr}	@ 000013e8 00b5
.org 0x13ea
	lsls r1, r0, #1	@ 000013ea 4100
.org 0x13ec
	adds r1, r1, r0	@ 000013ec 0918
.org 0x13ee
	lsls r1, r1, #3	@ 000013ee c900
.org 0x13f0
	ldr r0, [pc, #16]	@ 000013f0 0448
.org 0x13f2
	adds r1, r1, r0	@ 000013f2 0918
.org 0x13f4
	ldrb r2, [r1, #0]	@ 000013f4 0a78
.org 0x13f6
	cmp r2, #1	@ 000013f6 012a
.org 0x13f8
	beq.n 0x1400	@ 000013f8 02d0
.org 0x13fa
	movs r0, #8	@ 000013fa 0820
.org 0x13fc
	orrs r0, r2	@ 000013fc 1043
.org 0x13fe
	strb r0, [r1, #0]	@ 000013fe 0870
.org 0x1400
	pop {r0}	@ 00001400 01bc
.org 0x1402
	bx r0	@ 00001402 0047
