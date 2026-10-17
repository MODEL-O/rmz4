@ FUN_080029dc  entry 0x080029dc  size 44
.thumb
.org 0x29dc
FUN_080029dc:
	push {r4, r5, r6, lr}	@ 000029dc 70b5
.org 0x29de
	ldr r6, [pc, #12]	@ 000029de 034e
.org 0x29e0
	ldrh r0, [r6, #0]	@ 000029e0 3088
.org 0x29e2
	adds r5, r0, #0	@ 000029e2 051c
.org 0x29e4
	cmp r5, #0	@ 000029e4 002d
.org 0x29e6
	beq.n 0x29f0	@ 000029e6 03d0
.org 0x29e8
	subs r0, #1	@ 000029e8 0138
.org 0x29ea
	b.n 0x2a00	@ 000029ea 09e0
.org 0x29ec
	.byte 0x20,0x00,0x00,0x02	@ 000029ec data
.org 0x29f0
	ldr r4, [pc, #24]	@ 000029f0 064c
.org 0x29f2
	ldrh r0, [r4, #0]	@ 000029f2 2088
.org 0x29f4
	cmp r0, #0	@ 000029f4 0028
.org 0x29f6
	beq.n 0x2a02	@ 000029f6 04d0
.org 0x29f8
	bl 0x1277b4	@ 000029f8 24f1dcfe
.org 0x29fc
	strh r5, [r4, #0]	@ 000029fc 2580
.org 0x29fe
	movs r0, #8	@ 000029fe 0820
.org 0x2a00
	strh r0, [r6, #0]	@ 00002a00 3080
.org 0x2a02
	bl 0x1277a8	@ 00002a02 24f1d1fe
.org 0x2a06
	pop {r4, r5, r6}	@ 00002a06 70bc
