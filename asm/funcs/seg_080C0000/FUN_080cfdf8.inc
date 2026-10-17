@ FUN_080cfdf8  entry 0x080cfdf8  size 216
.thumb
.org 0xcfdf8
FUN_080cfdf8:
	push {r4, r5, r6, lr}	@ 000cfdf8 70b5
.org 0xcfdfa
	adds r4, r0, #0	@ 000cfdfa 041c
.org 0xcfdfc
	ldrb r5, [r4, #16]	@ 000cfdfc 257c
.org 0xcfdfe
	adds r6, r5, #0	@ 000cfdfe 2e1c
.org 0xcfe00
	adds r3, r4, #0	@ 000cfe00 231c
.org 0xcfe02
	adds r3, #180	@ 000cfe02 b433
.org 0xcfe04
	ldr r2, [r3, #0]	@ 000cfe04 1a68
.org 0xcfe06
	negs r1, r2	@ 000cfe06 5142
.org 0xcfe08
	lsls r0, r1, #2	@ 000cfe08 8800
.org 0xcfe0a
	adds r0, r0, r1	@ 000cfe0a 4018
.org 0xcfe0c
	lsls r0, r0, #1	@ 000cfe0c 4000
.org 0xcfe0e
	cmp r0, #0	@ 000cfe0e 0028
.org 0xcfe10
	bge.n 0xcfe14	@ 000cfe10 00da
.org 0xcfe12
	adds r0, #255	@ 000cfe12 ff30
.org 0xcfe14
	asrs r0, r0, #8	@ 000cfe14 0012
.org 0xcfe16
	adds r0, r2, r0	@ 000cfe16 1018
.org 0xcfe18
	str r0, [r3, #0]	@ 000cfe18 1860
.org 0xcfe1a
	ldr r2, [pc, #96]	@ 000cfe1a 184a
.org 0xcfe1c
	adds r1, r5, #0	@ 000cfe1c 291c
.org 0xcfe1e
	adds r1, #64	@ 000cfe1e 4031
.org 0xcfe20
	lsls r1, r1, #24	@ 000cfe20 0906
.org 0xcfe22
	lsrs r1, r1, #23	@ 000cfe22 c90d
.org 0xcfe24
	adds r1, r1, r2	@ 000cfe24 8918
.org 0xcfe26
	movs r5, #0	@ 000cfe26 0025
.org 0xcfe28
	ldrsh r1, [r1, r5]	@ 000cfe28 495f
.org 0xcfe2a
	muls r0, r1	@ 000cfe2a 4843
.org 0xcfe2c
	cmp r0, #0	@ 000cfe2c 0028
.org 0xcfe2e
	bge.n 0xcfe32	@ 000cfe2e 00da
.org 0xcfe30
	adds r0, #255	@ 000cfe30 ff30
.org 0xcfe32
	asrs r1, r0, #8	@ 000cfe32 0112
.org 0xcfe34
	ldr r0, [r4, #84]	@ 000cfe34 606d
.org 0xcfe36
	adds r0, r0, r1	@ 000cfe36 4018
.org 0xcfe38
	str r0, [r4, #84]	@ 000cfe38 6065
.org 0xcfe3a
	lsls r0, r6, #1	@ 000cfe3a 7000
.org 0xcfe3c
	adds r0, r0, r2	@ 000cfe3c 8018
.org 0xcfe3e
	movs r2, #0	@ 000cfe3e 0022
.org 0xcfe40
	ldrsh r1, [r0, r2]	@ 000cfe40 815e
.org 0xcfe42
	ldr r0, [r3, #0]	@ 000cfe42 1868
.org 0xcfe44
	muls r0, r1	@ 000cfe44 4843
.org 0xcfe46
	cmp r0, #0	@ 000cfe46 0028
.org 0xcfe48
	bge.n 0xcfe4c	@ 000cfe48 00da
.org 0xcfe4a
	adds r0, #255	@ 000cfe4a ff30
.org 0xcfe4c
	asrs r0, r0, #8	@ 000cfe4c 0012
.org 0xcfe4e
	ldr r1, [r4, #88]	@ 000cfe4e a16d
.org 0xcfe50
	adds r1, r1, r0	@ 000cfe50 0918
.org 0xcfe52
	str r1, [r4, #88]	@ 000cfe52 a165
.org 0xcfe54
	ldrb r0, [r4, #18]	@ 000cfe54 a07c
.org 0xcfe56
	subs r0, #1	@ 000cfe56 0138
.org 0xcfe58
	strb r0, [r4, #18]	@ 000cfe58 a074
.org 0xcfe5a
	lsls r0, r0, #24	@ 000cfe5a 0006
.org 0xcfe5c
	cmp r0, #0	@ 000cfe5c 0028
.org 0xcfe5e
	bne.n 0xcfe84	@ 000cfe5e 11d1
.org 0xcfe60
	ldr r1, [pc, #28]	@ 000cfe60 0749
.org 0xcfe62
	ldrb r0, [r4, #9]	@ 000cfe62 607a
.org 0xcfe64
	lsls r0, r0, #2	@ 000cfe64 8000
.org 0xcfe66
	adds r0, r0, r1	@ 000cfe66 4018
.org 0xcfe68
	movs r1, #2	@ 000cfe68 0221
.org 0xcfe6a
	str r1, [r4, #12]	@ 000cfe6a e160
.org 0xcfe6c
	ldr r0, [r0, #0]	@ 000cfe6c 0068
.org 0xcfe6e
	ldr r0, [r0, #8]	@ 000cfe6e 8068
.org 0xcfe70
	str r0, [r4, #20]	@ 000cfe70 6061
.org 0xcfe72
	adds r0, r4, #0	@ 000cfe72 201c
.org 0xcfe74
	bl 0xcfee0	@ 000cfe74 00f034f8
.org 0xcfe78
	b.n 0xcfed4	@ 000cfe78 2ce0
.org 0xcfe7a
	.byte 0x00	@ 000cfe7a data
.org 0xcfe7b
	.byte 0x00	@ 000cfe7b data
.org 0xcfe7c
	.byte 0x0c,0x93,0x12,0x08	@ 000cfe7c data
.org 0xcfe80
	.byte 0xf4,0x49,0x86,0x08	@ 000cfe80 data
.org 0xcfe84
	adds r2, r4, #0	@ 000cfe84 221c
.org 0xcfe86
	adds r2, #184	@ 000cfe86 b832
.org 0xcfe88
	ldrh r3, [r2, #0]	@ 000cfe88 1388
.org 0xcfe8a
	movs r1, #224	@ 000cfe8a e021
.org 0xcfe8c
	lsls r1, r1, #1	@ 000cfe8c 4900
.org 0xcfe8e
	subs r1, r1, r3	@ 000cfe8e c91a
.org 0xcfe90
	lsls r0, r1, #2	@ 000cfe90 8800
.org 0xcfe92
	adds r0, r0, r1	@ 000cfe92 4018
.org 0xcfe94
	lsls r0, r0, #2	@ 000cfe94 8000
.org 0xcfe96
	cmp r0, #0	@ 000cfe96 0028
.org 0xcfe98
	bge.n 0xcfe9c	@ 000cfe98 00da
.org 0xcfe9a
	adds r0, #255	@ 000cfe9a ff30
.org 0xcfe9c
	asrs r0, r0, #8	@ 000cfe9c 0012
.org 0xcfe9e
	adds r0, r3, r0	@ 000cfe9e 1818
.org 0xcfea0
	strh r0, [r2, #0]	@ 000cfea0 1080
.org 0xcfea2
	adds r1, r4, #0	@ 000cfea2 211c
.org 0xcfea4
	adds r1, #80	@ 000cfea4 5031
.org 0xcfea6
	strh r0, [r1, #0]	@ 000cfea6 0880
.org 0xcfea8
	ldrh r0, [r2, #0]	@ 000cfea8 1088
.org 0xcfeaa
	adds r1, #2	@ 000cfeaa 0231
.org 0xcfeac
	strh r0, [r1, #0]	@ 000cfeac 0880
.org 0xcfeae
	ldrb r0, [r4, #13]	@ 000cfeae 607b
.org 0xcfeb0
	cmp r0, #0	@ 000cfeb0 0028
.org 0xcfeb2
	bne.n 0xcfece	@ 000cfeb2 0cd1
.org 0xcfeb4
	ldrh r1, [r2, #0]	@ 000cfeb4 1188
.org 0xcfeb6
	movs r0, #208	@ 000cfeb6 d020
.org 0xcfeb8
	lsls r0, r0, #1	@ 000cfeb8 4000
.org 0xcfeba
	cmp r1, r0	@ 000cfeba 8142
.org 0xcfebc
	bls.n 0xcfece	@ 000cfebc 07d9
.org 0xcfebe
	adds r0, r4, #0	@ 000cfebe 201c
.org 0xcfec0
	adds r0, #116	@ 000cfec0 7430
.org 0xcfec2
	ldr r1, [pc, #24]	@ 000cfec2 0649
.org 0xcfec4
	bl 0x5784	@ 000cfec4 35f75efc
.org 0xcfec8
	ldrb r0, [r4, #13]	@ 000cfec8 607b
.org 0xcfeca
	adds r0, #1	@ 000cfeca 0130
.org 0xcfecc
	strb r0, [r4, #13]	@ 000cfecc 6073
.org 0xcfece
	adds r0, r4, #0	@ 000cfece 201c
