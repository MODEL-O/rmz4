@ FUN_080fa2f0  entry 0x080fa2f0  size 28
.thumb
.org 0xfa2f0
FUN_080fa2f0:
	ldrb r2, [r0, #10]	@ 000fa2f0 827a
.org 0xfa2f2
	movs r1, #254	@ 000fa2f2 fe21
.org 0xfa2f4
	ands r1, r2	@ 000fa2f4 1140
.org 0xfa2f6
	strb r1, [r0, #10]	@ 000fa2f6 8172
.org 0xfa2f8
	ldr r2, [pc, #16]	@ 000fa2f8 044a
.org 0xfa2fa
	ldrb r1, [r0, #9]	@ 000fa2fa 417a
.org 0xfa2fc
	lsls r1, r1, #2	@ 000fa2fc 8900
.org 0xfa2fe
	adds r1, r1, r2	@ 000fa2fe 8918
.org 0xfa300
	movs r2, #4	@ 000fa300 0422
.org 0xfa302
	str r2, [r0, #12]	@ 000fa302 c260
.org 0xfa304
	ldr r1, [r1, #0]	@ 000fa304 0968
.org 0xfa306
	ldr r1, [r1, #16]	@ 000fa306 0969
.org 0xfa308
	str r1, [r0, #20]	@ 000fa308 4161
.org 0xfa30a
	bx lr	@ 000fa30a 7047
