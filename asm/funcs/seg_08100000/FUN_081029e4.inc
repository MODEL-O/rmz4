@ FUN_081029e4  entry 0x081029e4  size 74
.thumb
.org 0x1029e4
FUN_081029e4:
	push {r4, r5, r6, r7, lr}	@ 001029e4 f0b5
.org 0x1029e6
	adds r7, r0, #0	@ 001029e6 071c
.org 0x1029e8
	adds r0, #190	@ 001029e8 be30
.org 0x1029ea
	movs r6, #0	@ 001029ea 0026
.org 0x1029ec
	movs r5, #0	@ 001029ec 0025
.org 0x1029ee
	movs r1, #240	@ 001029ee f021
.org 0x1029f0
	lsls r1, r1, #7	@ 001029f0 c901
.org 0x1029f2
	strh r1, [r0, #0]	@ 001029f2 0180
.org 0x1029f4
	adds r0, #2	@ 001029f4 0230
.org 0x1029f6
	strh r1, [r0, #0]	@ 001029f6 0180
.org 0x1029f8
	adds r0, #2	@ 001029f8 0230
.org 0x1029fa
	strh r1, [r0, #0]	@ 001029fa 0180
.org 0x1029fc
	ldrb r1, [r7, #10]	@ 001029fc b97a
.org 0x1029fe
	movs r0, #4	@ 001029fe 0420
.org 0x102a00
	orrs r0, r1	@ 00102a00 0843
.org 0x102a02
	strb r0, [r7, #10]	@ 00102a02 b872
.org 0x102a04
	adds r4, r7, #0	@ 00102a04 3c1c
.org 0x102a06
	adds r4, #116	@ 00102a06 7434
.org 0x102a08
	ldr r1, [pc, #36]	@ 00102a08 0949
.org 0x102a0a
	adds r2, r7, #0	@ 00102a0a 3a1c
.org 0x102a0c
	adds r2, #84	@ 00102a0c 5432
.org 0x102a0e
	adds r0, r4, #0	@ 00102a0e 201c
.org 0x102a10
	movs r3, #1	@ 00102a10 0123
.org 0x102a12
	bl 0x5760	@ 00102a12 02f7a5fe
.org 0x102a16
	str r7, [r4, #44]	@ 00102a16 e762
.org 0x102a18
	str r5, [r4, #36]	@ 00102a18 6562
.org 0x102a1a
	adds r1, r7, #0	@ 00102a1a 391c
.org 0x102a1c
	adds r1, #185	@ 00102a1c b931
.org 0x102a1e
	movs r0, #1	@ 00102a1e 0120
.org 0x102a20
	strb r0, [r1, #0]	@ 00102a20 0870
.org 0x102a22
	str r5, [r7, #92]	@ 00102a22 fd65
.org 0x102a24
	strb r6, [r7, #13]	@ 00102a24 7e73
.org 0x102a26
	strb r6, [r7, #14]	@ 00102a26 be73
.org 0x102a28
	pop {r4, r5, r6, r7}	@ 00102a28 f0bc
.org 0x102a2a
	pop {r0}	@ 00102a2a 01bc
.org 0x102a2c
	bx r0	@ 00102a2c 0047
