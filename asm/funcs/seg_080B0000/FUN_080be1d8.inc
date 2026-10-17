@ FUN_080be1d8  entry 0x080be1d8  size 92
.thumb
.org 0xbe1d8
FUN_080be1d8:
	push {lr}	@ 000be1d8 00b5
.org 0xbe1da
	adds r3, r0, #0	@ 000be1da 031c
.org 0xbe1dc
	ldr r0, [pc, #64]	@ 000be1dc 1048
.org 0xbe1de
	ldrb r1, [r0, #9]	@ 000be1de 417a
.org 0xbe1e0
	movs r2, #4	@ 000be1e0 0422
.org 0xbe1e2
	adds r0, r2, #0	@ 000be1e2 101c
.org 0xbe1e4
	ands r0, r1	@ 000be1e4 0840
.org 0xbe1e6
	cmp r0, #0	@ 000be1e6 0028
.org 0xbe1e8
	beq.n 0xbe228	@ 000be1e8 1ed0
.org 0xbe1ea
	ldrb r1, [r3, #10]	@ 000be1ea 997a
.org 0xbe1ec
	movs r0, #254	@ 000be1ec fe20
.org 0xbe1ee
	ands r0, r1	@ 000be1ee 0840
.org 0xbe1f0
	movs r2, #0	@ 000be1f0 0022
.org 0xbe1f2
	movs r1, #253	@ 000be1f2 fd21
.org 0xbe1f4
	ands r0, r1	@ 000be1f4 0840
.org 0xbe1f6
	strb r0, [r3, #10]	@ 000be1f6 9872
.org 0xbe1f8
	adds r0, r3, #0	@ 000be1f8 181c
.org 0xbe1fa
	adds r0, #140	@ 000be1fa 8c30
.org 0xbe1fc
	str r2, [r0, #0]	@ 000be1fc 0260
.org 0xbe1fe
	adds r0, #4	@ 000be1fe 0430
.org 0xbe200
	str r2, [r0, #0]	@ 000be200 0260
.org 0xbe202
	adds r0, #4	@ 000be202 0430
.org 0xbe204
	strb r2, [r0, #0]	@ 000be204 0270
.org 0xbe206
	ldrb r1, [r3, #10]	@ 000be206 997a
.org 0xbe208
	movs r0, #251	@ 000be208 fb20
.org 0xbe20a
	ands r0, r1	@ 000be20a 0840
.org 0xbe20c
	strb r0, [r3, #10]	@ 000be20c 9872
.org 0xbe20e
	ldr r1, [pc, #20]	@ 000be20e 0549
.org 0xbe210
	ldrb r0, [r3, #9]	@ 000be210 587a
.org 0xbe212
	lsls r0, r0, #2	@ 000be212 8000
.org 0xbe214
	adds r0, r0, r1	@ 000be214 4018
.org 0xbe216
	movs r1, #3	@ 000be216 0321
.org 0xbe218
	str r1, [r3, #12]	@ 000be218 d960
.org 0xbe21a
	ldr r0, [r0, #0]	@ 000be21a 0068
.org 0xbe21c
	ldr r0, [r0, #12]	@ 000be21c c068
.org 0xbe21e
	b.n 0xbe236	@ 000be21e 0ae0
.org 0xbe220
	.byte 0xb0,0xe8,0x02,0x02	@ 000be220 data
.org 0xbe224
	.byte 0xf4,0x49,0x86,0x08	@ 000be224 data
.org 0xbe228
	ldr r1, [pc, #16]	@ 000be228 0449
.org 0xbe22a
	ldrb r0, [r3, #9]	@ 000be22a 587a
.org 0xbe22c
	lsls r0, r0, #2	@ 000be22c 8000
.org 0xbe22e
	adds r0, r0, r1	@ 000be22e 4018
.org 0xbe230
	str r2, [r3, #12]	@ 000be230 da60
.org 0xbe232
	ldr r0, [r0, #0]	@ 000be232 0068
