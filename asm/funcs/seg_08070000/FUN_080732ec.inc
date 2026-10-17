@ FUN_080732ec  entry 0x080732ec  size 42
.thumb
.org 0x732ec
FUN_080732ec:
	push {r4, r5, lr}	@ 000732ec 30b5
.org 0x732ee
	sub sp, #16	@ 000732ee 84b0
.org 0x732f0
	adds r4, r0, #0	@ 000732f0 041c
.org 0x732f2
	ldr r0, [pc, #28]	@ 000732f2 0748
.org 0x732f4
	ldr r1, [r0, #4]	@ 000732f4 4168
.org 0x732f6
	ldr r0, [r0, #0]	@ 000732f6 0068
.org 0x732f8
	str r0, [sp, #0]	@ 000732f8 0090
.org 0x732fa
	str r1, [sp, #4]	@ 000732fa 0191
.org 0x732fc
	ldrb r0, [r4, #15]	@ 000732fc e07b
.org 0x732fe
	cmp r0, #7	@ 000732fe 0728
.org 0x73300
	bls.n 0x73304	@ 00073300 00d9
.org 0x73302
	b.n 0x73462	@ 00073302 aee0
.org 0x73304
	lsls r0, r0, #2	@ 00073304 8000
.org 0x73306
	ldr r1, [pc, #12]	@ 00073306 0349
.org 0x73308
	adds r0, r0, r1	@ 00073308 4018
.org 0x7330a
	ldr r0, [r0, #0]	@ 0007330a 0068
.org 0x7330c
	mov pc, r0	@ 0007330c 8746
.org 0x7330e
	.byte 0x00	@ 0007330e data
.org 0x7330f
	.byte 0x00	@ 0007330f data
.org 0x73310
	.byte 0x74,0x99,0x12,0x08	@ 00073310 data
.org 0x73314
	.byte 0x18,0x33,0x07,0x08	@ 00073314 data
