@ FUN_080d50d8  entry 0x080d50d8  size 70
.thumb
.org 0xd50d8
FUN_080d50d8:
	push {r4, lr}	@ 000d50d8 10b5
.org 0xd50da
	adds r4, r0, #0	@ 000d50da 041c
.org 0xd50dc
	adds r0, #52	@ 000d50dc 3430
.org 0xd50de
	ldr r1, [pc, #64]	@ 000d50de 1049
.org 0xd50e0
	bl 0x2c94	@ 000d50e0 2df7d8fd
.org 0xd50e4
	str r4, [r4, #60]	@ 000d50e4 e463
.org 0xd50e6
	ldrb r1, [r4, #10]	@ 000d50e6 a17a
.org 0xd50e8
	movs r0, #247	@ 000d50e8 f720
.org 0xd50ea
	ands r0, r1	@ 000d50ea 0840
.org 0xd50ec
	movs r2, #0	@ 000d50ec 0022
.org 0xd50ee
	movs r1, #1	@ 000d50ee 0121
.org 0xd50f0
	orrs r0, r1	@ 000d50f0 0843
.org 0xd50f2
	movs r1, #2	@ 000d50f2 0221
.org 0xd50f4
	orrs r0, r1	@ 000d50f4 0843
.org 0xd50f6
	strb r0, [r4, #10]	@ 000d50f6 a072
.org 0xd50f8
	adds r0, r4, #0	@ 000d50f8 201c
.org 0xd50fa
	adds r0, #119	@ 000d50fa 7730
.org 0xd50fc
	strb r2, [r0, #0]	@ 000d50fc 0270
.org 0xd50fe
	str r2, [r4, #96]	@ 000d50fe 2266
.org 0xd5100
	ldr r1, [pc, #32]	@ 000d5100 0849
.org 0xd5102
	ldrb r0, [r4, #9]	@ 000d5102 607a
.org 0xd5104
	lsls r0, r0, #2	@ 000d5104 8000
.org 0xd5106
	adds r0, r0, r1	@ 000d5106 4018
.org 0xd5108
	movs r1, #1	@ 000d5108 0121
.org 0xd510a
	str r1, [r4, #12]	@ 000d510a e160
.org 0xd510c
	ldr r0, [r0, #0]	@ 000d510c 0068
.org 0xd510e
	ldr r0, [r0, #4]	@ 000d510e 4068
.org 0xd5110
	str r0, [r4, #20]	@ 000d5110 6061
.org 0xd5112
	adds r0, r4, #0	@ 000d5112 201c
.org 0xd5114
	bl 0xd5128	@ 000d5114 00f008f8
.org 0xd5118
	pop {r4}	@ 000d5118 10bc
.org 0xd511a
	pop {r0}	@ 000d511a 01bc
.org 0xd511c
	bx r0	@ 000d511c 0047
