@ FUN_080663dc  entry 0x080663dc  size 44
.thumb
.org 0x663dc
FUN_080663dc:
	push {lr}	@ 000663dc 00b5
.org 0x663de
	adds r3, r0, #0	@ 000663de 031c
.org 0x663e0
	adds r0, #192	@ 000663e0 c030
.org 0x663e2
	ldr r2, [r0, #0]	@ 000663e2 0268
.org 0x663e4
	str r1, [r0, #0]	@ 000663e4 0160
.org 0x663e6
	adds r0, r1, #0	@ 000663e6 081c
.org 0x663e8
	adds r0, #188	@ 000663e8 bc30
.org 0x663ea
	str r3, [r0, #0]	@ 000663ea 0360
.org 0x663ec
	adds r0, #4	@ 000663ec 0430
.org 0x663ee
	str r2, [r0, #0]	@ 000663ee 0260
.org 0x663f0
	cmp r2, #0	@ 000663f0 002a
.org 0x663f2
	beq.n 0x663fa	@ 000663f2 02d0
.org 0x663f4
	adds r0, r2, #0	@ 000663f4 101c
.org 0x663f6
	adds r0, #188	@ 000663f6 bc30
.org 0x663f8
	str r1, [r0, #0]	@ 000663f8 0160
.org 0x663fa
	adds r1, r3, #0	@ 000663fa 191c
.org 0x663fc
	adds r1, #183	@ 000663fc b731
.org 0x663fe
	ldrb r0, [r1, #0]	@ 000663fe 0878
.org 0x66400
	adds r0, #1	@ 00066400 0130
.org 0x66402
	strb r0, [r1, #0]	@ 00066402 0870
.org 0x66404
	pop {r0}	@ 00066404 01bc
.org 0x66406
	bx r0	@ 00066406 0047
