@ FUN_080382b0  entry 0x080382b0  size 46
.thumb
.org 0x382b0
FUN_080382b0:
	push {r4, r5, r6, lr}	@ 000382b0 70b5
.org 0x382b2
	adds r6, r0, #0	@ 000382b2 061c
.org 0x382b4
	adds r4, r1, #0	@ 000382b4 0c1c
.org 0x382b6
	adds r1, r6, #0	@ 000382b6 311c
.org 0x382b8
	adds r1, #180	@ 000382b8 b431
.org 0x382ba
	movs r5, #64	@ 000382ba 4025
.org 0x382bc
	adds r0, r4, #0	@ 000382bc 201c
.org 0x382be
	movs r2, #16	@ 000382be 1022
.org 0x382c0
	bl 0x128be0	@ 000382c0 f0f08efc
.org 0x382c4
	adds r4, #64	@ 000382c4 4034
.org 0x382c6
	adds r1, r6, #0	@ 000382c6 311c
.org 0x382c8
	adds r1, #244	@ 000382c8 f431
.org 0x382ca
	ldr r2, [pc, #20]	@ 000382ca 054a
.org 0x382cc
	adds r0, r4, #0	@ 000382cc 201c
.org 0x382ce
	bl 0x128be4	@ 000382ce f0f089fc
.org 0x382d2
	adds r0, r6, #0	@ 000382d2 301c
.org 0x382d4
	adds r0, #164	@ 000382d4 a430
.org 0x382d6
	strh r5, [r0, #0]	@ 000382d6 0580
.org 0x382d8
	pop {r4, r5, r6}	@ 000382d8 70bc
.org 0x382da
	pop {r0}	@ 000382da 01bc
.org 0x382dc
	bx r0	@ 000382dc 0047
