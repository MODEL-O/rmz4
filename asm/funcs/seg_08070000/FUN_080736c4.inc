@ FUN_080736c4  entry 0x080736c4  size 76
.thumb
.org 0x736c4
FUN_080736c4:
	push {r4, r5, lr}	@ 000736c4 30b5
.org 0x736c6
	adds r4, r0, #0	@ 000736c6 041c
.org 0x736c8
	lsls r1, r1, #24	@ 000736c8 0906
.org 0x736ca
	lsrs r5, r1, #24	@ 000736ca 0d0e
.org 0x736cc
	ldr r3, [pc, #44]	@ 000736cc 0b4b
.org 0x736ce
	lsls r0, r5, #2	@ 000736ce a800
.org 0x736d0
	adds r0, r0, r3	@ 000736d0 c018
.org 0x736d2
	ldr r1, [r0, #0]	@ 000736d2 0168
.org 0x736d4
	adds r2, r4, #0	@ 000736d4 221c
.org 0x736d6
	adds r2, #184	@ 000736d6 b832
.org 0x736d8
	ldrb r0, [r2, #0]	@ 000736d8 1078
.org 0x736da
	cmp r0, #255	@ 000736da ff28
.org 0x736dc
	beq.n 0x73704	@ 000736dc 12d0
.org 0x736de
	lsls r0, r0, #2	@ 000736de 8000
.org 0x736e0
	adds r0, r0, r3	@ 000736e0 c018
.org 0x736e2
	ldr r2, [r0, #0]	@ 000736e2 0268
.org 0x736e4
	ldr r0, [pc, #24]	@ 000736e4 0648
.org 0x736e6
	cmp r1, r0	@ 000736e6 8142
.org 0x736e8
	bne.n 0x736ee	@ 000736e8 01d1
.org 0x736ea
	cmp r1, r2	@ 000736ea 9142
.org 0x736ec
	beq.n 0x7370e	@ 000736ec 0fd0
.org 0x736ee
	lsls r1, r1, #16	@ 000736ee 0904
.org 0x736f0
	lsrs r1, r1, #16	@ 000736f0 090c
.org 0x736f2
	adds r0, r4, #0	@ 000736f2 201c
.org 0x736f4
	bl 0x1cf00	@ 000736f4 a9f704fc
.org 0x736f8
	b.n 0x7370e	@ 000736f8 09e0
.org 0x736fa
	.byte 0x00	@ 000736fa data
.org 0x736fb
	.byte 0x00	@ 000736fb data
.org 0x736fc
	.byte 0xa4,0xc9,0x85,0x08	@ 000736fc data
.org 0x73700
	.byte 0x01,0xae,0x00,0x00	@ 00073700 data
.org 0x73704
	lsls r1, r1, #16	@ 00073704 0904
.org 0x73706
	lsrs r1, r1, #16	@ 00073706 090c
.org 0x73708
	adds r0, r4, #0	@ 00073708 201c
.org 0x7370a
	bl 0x1cf00	@ 0007370a a9f7f9fb
.org 0x7370e
	adds r0, r4, #0	@ 0007370e 201c
