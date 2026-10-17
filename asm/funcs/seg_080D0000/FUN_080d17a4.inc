@ FUN_080d17a4  entry 0x080d17a4  size 20
.thumb
.org 0xd17a4
FUN_080d17a4:
	ldr r2, [pc, #16]	@ 000d17a4 044a
.org 0xd17a6
	ldrb r1, [r0, #9]	@ 000d17a6 417a
.org 0xd17a8
	lsls r1, r1, #2	@ 000d17a8 8900
.org 0xd17aa
	adds r1, r1, r2	@ 000d17aa 8918
.org 0xd17ac
	movs r2, #4	@ 000d17ac 0422
.org 0xd17ae
	str r2, [r0, #12]	@ 000d17ae c260
.org 0xd17b0
	ldr r1, [r1, #0]	@ 000d17b0 0968
.org 0xd17b2
	ldr r1, [r1, #16]	@ 000d17b2 0969
.org 0xd17b4
	str r1, [r0, #20]	@ 000d17b4 4161
.org 0xd17b6
	bx lr	@ 000d17b6 7047
