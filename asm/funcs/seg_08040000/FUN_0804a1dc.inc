@ FUN_0804a1dc  entry 0x0804a1dc  size 48
.thumb
.org 0x4a1dc
FUN_0804a1dc:
	adds r2, r0, #0	@ 0004a1dc 021c
.org 0x4a1de
	adds r0, #140	@ 0004a1de 8c30
.org 0x4a1e0
	movs r1, #0	@ 0004a1e0 0021
.org 0x4a1e2
	str r1, [r0, #0]	@ 0004a1e2 0160
.org 0x4a1e4
	adds r0, #4	@ 0004a1e4 0430
.org 0x4a1e6
	str r1, [r0, #0]	@ 0004a1e6 0160
.org 0x4a1e8
	adds r0, #4	@ 0004a1e8 0430
.org 0x4a1ea
	strb r1, [r0, #0]	@ 0004a1ea 0170
.org 0x4a1ec
	ldrb r1, [r2, #10]	@ 0004a1ec 917a
.org 0x4a1ee
	movs r0, #251	@ 0004a1ee fb20
.org 0x4a1f0
	ands r0, r1	@ 0004a1f0 0840
.org 0x4a1f2
	movs r1, #254	@ 0004a1f2 fe21
.org 0x4a1f4
	ands r0, r1	@ 0004a1f4 0840
.org 0x4a1f6
	strb r0, [r2, #10]	@ 0004a1f6 9072
.org 0x4a1f8
	ldr r1, [pc, #16]	@ 0004a1f8 0449
.org 0x4a1fa
	ldrb r0, [r2, #9]	@ 0004a1fa 507a
.org 0x4a1fc
	lsls r0, r0, #2	@ 0004a1fc 8000
.org 0x4a1fe
	adds r0, r0, r1	@ 0004a1fe 4018
.org 0x4a200
	movs r1, #4	@ 0004a200 0421
.org 0x4a202
	str r1, [r2, #12]	@ 0004a202 d160
.org 0x4a204
	ldr r0, [r0, #0]	@ 0004a204 0068
.org 0x4a206
	ldr r0, [r0, #16]	@ 0004a206 0069
.org 0x4a208
	str r0, [r2, #20]	@ 0004a208 5061
.org 0x4a20a
	bx lr	@ 0004a20a 7047
