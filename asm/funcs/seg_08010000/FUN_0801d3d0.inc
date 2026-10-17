@ FUN_0801d3d0  entry 0x0801d3d0  size 44
.thumb
.org 0x1d3d0
FUN_0801d3d0:
	push {r4, lr}	@ 0001d3d0 10b5
.org 0x1d3d2
	lsls r1, r1, #24	@ 0001d3d2 0906
.org 0x1d3d4
	lsrs r1, r1, #24	@ 0001d3d4 090e
.org 0x1d3d6
	ldrb r3, [r0, #11]	@ 0001d3d6 c37a
.org 0x1d3d8
	movs r2, #32	@ 0001d3d8 2022
.org 0x1d3da
	orrs r2, r3	@ 0001d3da 1a43
.org 0x1d3dc
	strb r2, [r0, #11]	@ 0001d3dc c272
.org 0x1d3de
	movs r2, #73	@ 0001d3de 4922
.org 0x1d3e0
	adds r2, r2, r0	@ 0001d3e0 1218
.org 0x1d3e2
	mov ip, r2	@ 0001d3e2 9446
.org 0x1d3e4
	lsls r4, r1, #4	@ 0001d3e4 0c01
.org 0x1d3e6
	ldrb r3, [r2, #0]	@ 0001d3e6 1378
.org 0x1d3e8
	movs r2, #15	@ 0001d3e8 0f22
.org 0x1d3ea
	ands r2, r3	@ 0001d3ea 1a40
.org 0x1d3ec
	orrs r2, r4	@ 0001d3ec 2243
.org 0x1d3ee
	mov r3, ip	@ 0001d3ee 6346
.org 0x1d3f0
	strb r2, [r3, #0]	@ 0001d3f0 1a70
.org 0x1d3f2
	adds r0, #35	@ 0001d3f2 2330
.org 0x1d3f4
	strb r1, [r0, #0]	@ 0001d3f4 0170
.org 0x1d3f6
	pop {r4}	@ 0001d3f6 10bc
.org 0x1d3f8
	pop {r0}	@ 0001d3f8 01bc
.org 0x1d3fa
	bx r0	@ 0001d3fa 0047
