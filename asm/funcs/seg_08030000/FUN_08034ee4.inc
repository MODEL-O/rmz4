@ FUN_08034ee4  entry 0x08034ee4  size 130
.thumb
.org 0x34ee4
FUN_08034ee4:
	push {r4, r5, lr}	@ 00034ee4 30b5
.org 0x34ee6
	adds r4, r0, #0	@ 00034ee6 041c
.org 0x34ee8
	movs r0, #129	@ 00034ee8 8120
.org 0x34eea
	lsls r0, r0, #1	@ 00034eea 4000
.org 0x34eec
	adds r5, r4, r0	@ 00034eec 2518
.org 0x34eee
	ldrb r0, [r5, #0]	@ 00034eee 2878
.org 0x34ef0
	cmp r0, #0	@ 00034ef0 0028
.org 0x34ef2
	bne.n 0x34f30	@ 00034ef2 1dd1
.org 0x34ef4
	movs r1, #168	@ 00034ef4 a821
.org 0x34ef6
	lsls r1, r1, #5	@ 00034ef6 4901
.org 0x34ef8
	adds r0, r4, #0	@ 00034ef8 201c
.org 0x34efa
	adds r0, #113	@ 00034efa 7130
.org 0x34efc
	movs r2, #0	@ 00034efc 0022
.org 0x34efe
	ldrsb r2, [r0, r2]	@ 00034efe 8256
.org 0x34f00
	lsls r2, r2, #16	@ 00034f00 1204
.org 0x34f02
	lsrs r2, r2, #16	@ 00034f02 120c
.org 0x34f04
	adds r0, #1	@ 00034f04 0130
.org 0x34f06
	movs r3, #0	@ 00034f06 0023
.org 0x34f08
	ldrsb r3, [r0, r3]	@ 00034f08 c356
.org 0x34f0a
	lsls r3, r3, #16	@ 00034f0a 1b04
.org 0x34f0c
	lsrs r3, r3, #16	@ 00034f0c 1b0c
.org 0x34f0e
	adds r0, r4, #0	@ 00034f0e 201c
.org 0x34f10
	bl 0x1cfc8	@ 00034f10 e8f75af8
.org 0x34f14
	adds r0, r4, #0	@ 00034f14 201c
.org 0x34f16
	movs r1, #3	@ 00034f16 0321
.org 0x34f18
	bl 0x3c464	@ 00034f18 07f0a4fa
.org 0x34f1c
	ldr r0, [pc, #12]	@ 00034f1c 0348
.org 0x34f1e
	adds r1, r4, r0	@ 00034f1e 2118
.org 0x34f20
	movs r0, #2	@ 00034f20 0220
.org 0x34f22
	strb r0, [r1, #0]	@ 00034f22 0870
.org 0x34f24
	ldrb r0, [r5, #0]	@ 00034f24 2878
.org 0x34f26
	adds r0, #1	@ 00034f26 0130
.org 0x34f28
	strb r0, [r5, #0]	@ 00034f28 2870
.org 0x34f2a
	b.n 0x34f3e	@ 00034f2a 08e0
.org 0x34f2c
	.byte 0x45,0x01,0x00,0x00	@ 00034f2c data
.org 0x34f30
	movs r1, #168	@ 00034f30 a821
.org 0x34f32
	lsls r1, r1, #5	@ 00034f32 4901
.org 0x34f34
	adds r0, r4, #0	@ 00034f34 201c
.org 0x34f36
	bl 0x3a3b0	@ 00034f36 05f03bfa
.org 0x34f3a
	ldr r0, [pc, #48]	@ 00034f3a 0c48
.org 0x34f3c
	adds r1, r4, r0	@ 00034f3c 2118
.org 0x34f3e
	ldrb r0, [r1, #0]	@ 00034f3e 0878
.org 0x34f40
	subs r0, #1	@ 00034f40 0138
.org 0x34f42
	strb r0, [r1, #0]	@ 00034f42 0870
.org 0x34f44
	lsls r0, r0, #24	@ 00034f44 0006
.org 0x34f46
	lsrs r0, r0, #24	@ 00034f46 000e
.org 0x34f48
	cmp r0, #255	@ 00034f48 ff28
.org 0x34f4a
	bne.n 0x34f64	@ 00034f4a 0bd1
.org 0x34f4c
	ldr r0, [pc, #32]	@ 00034f4c 0848
.org 0x34f4e
	adds r1, r4, r0	@ 00034f4e 2118
.org 0x34f50
	movs r0, #2	@ 00034f50 0220
.org 0x34f52
	strb r0, [r1, #0]	@ 00034f52 0870
.org 0x34f54
	movs r0, #129	@ 00034f54 8120
.org 0x34f56
	lsls r0, r0, #1	@ 00034f56 4000
.org 0x34f58
	adds r1, r4, r0	@ 00034f58 2118
.org 0x34f5a
	movs r0, #0	@ 00034f5a 0020
.org 0x34f5c
	strb r0, [r1, #0]	@ 00034f5c 0870
.org 0x34f5e
	adds r0, r4, #0	@ 00034f5e 201c
.org 0x34f60
	bl 0x34f74	@ 00034f60 00f008f8
.org 0x34f64
	pop {r4, r5}	@ 00034f64 30bc
