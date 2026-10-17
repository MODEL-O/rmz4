@ FUN_0801cfc8  entry 0x0801cfc8  size 40
.thumb
.org 0x1cfc8
FUN_0801cfc8:
	push {r4, r5, r6, lr}	@ 0001cfc8 70b5
.org 0x1cfca
	adds r6, r0, #0	@ 0001cfca 061c
.org 0x1cfcc
	adds r4, r2, #0	@ 0001cfcc 141c
.org 0x1cfce
	adds r5, r3, #0	@ 0001cfce 1d1c
.org 0x1cfd0
	lsls r1, r1, #16	@ 0001cfd0 0904
.org 0x1cfd2
	lsrs r1, r1, #16	@ 0001cfd2 090c
.org 0x1cfd4
	lsls r4, r4, #16	@ 0001cfd4 2404
.org 0x1cfd6
	lsrs r4, r4, #16	@ 0001cfd6 240c
.org 0x1cfd8
	lsls r5, r5, #16	@ 0001cfd8 2d04
.org 0x1cfda
	lsrs r5, r5, #16	@ 0001cfda 2d0c
.org 0x1cfdc
	bl 0x1cf00	@ 0001cfdc fff790ff
.org 0x1cfe0
	adds r0, r6, #0	@ 0001cfe0 301c
.org 0x1cfe2
	adds r0, #113	@ 0001cfe2 7130
.org 0x1cfe4
	strb r4, [r0, #0]	@ 0001cfe4 0470
.org 0x1cfe6
	adds r6, #114	@ 0001cfe6 7236
.org 0x1cfe8
	strb r5, [r6, #0]	@ 0001cfe8 3570
.org 0x1cfea
	pop {r4, r5, r6}	@ 0001cfea 70bc
.org 0x1cfec
	pop {r0}	@ 0001cfec 01bc
.org 0x1cfee
	bx r0	@ 0001cfee 0047
