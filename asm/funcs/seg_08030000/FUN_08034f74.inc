@ FUN_08034f74  entry 0x08034f74  size 140
.thumb
.org 0x34f74
FUN_08034f74:
	push {r4, r5, lr}	@ 00034f74 30b5
.org 0x34f76
	adds r4, r0, #0	@ 00034f76 041c
.org 0x34f78
	movs r0, #129	@ 00034f78 8120
.org 0x34f7a
	lsls r0, r0, #1	@ 00034f7a 4000
.org 0x34f7c
	adds r5, r4, r0	@ 00034f7c 2518
.org 0x34f7e
	ldrb r0, [r5, #0]	@ 00034f7e 2878
.org 0x34f80
	cmp r0, #0	@ 00034f80 0028
.org 0x34f82
	bne.n 0x34fb8	@ 00034f82 19d1
.org 0x34f84
	movs r1, #176	@ 00034f84 b021
.org 0x34f86
	lsls r1, r1, #5	@ 00034f86 4901
.org 0x34f88
	adds r0, r4, #0	@ 00034f88 201c
.org 0x34f8a
	adds r0, #113	@ 00034f8a 7130
.org 0x34f8c
	movs r2, #0	@ 00034f8c 0022
.org 0x34f8e
	ldrsb r2, [r0, r2]	@ 00034f8e 8256
.org 0x34f90
	lsls r2, r2, #16	@ 00034f90 1204
.org 0x34f92
	lsrs r2, r2, #16	@ 00034f92 120c
.org 0x34f94
	adds r0, #1	@ 00034f94 0130
.org 0x34f96
	movs r3, #0	@ 00034f96 0023
.org 0x34f98
	ldrsb r3, [r0, r3]	@ 00034f98 c356
.org 0x34f9a
	lsls r3, r3, #16	@ 00034f9a 1b04
.org 0x34f9c
	lsrs r3, r3, #16	@ 00034f9c 1b0c
.org 0x34f9e
	adds r0, r4, #0	@ 00034f9e 201c
.org 0x34fa0
	bl 0x1cfc8	@ 00034fa0 e8f712f8
.org 0x34fa4
	ldr r0, [pc, #12]	@ 00034fa4 0348
.org 0x34fa6
	adds r1, r4, r0	@ 00034fa6 2118
.org 0x34fa8
	movs r0, #14	@ 00034fa8 0e20
.org 0x34faa
	strb r0, [r1, #0]	@ 00034faa 0870
.org 0x34fac
	ldrb r0, [r5, #0]	@ 00034fac 2878
.org 0x34fae
	adds r0, #1	@ 00034fae 0130
.org 0x34fb0
	strb r0, [r5, #0]	@ 00034fb0 2870
.org 0x34fb2
	b.n 0x34fc6	@ 00034fb2 08e0
.org 0x34fb4
	.byte 0x45,0x01,0x00,0x00	@ 00034fb4 data
.org 0x34fb8
	movs r1, #176	@ 00034fb8 b021
.org 0x34fba
	lsls r1, r1, #5	@ 00034fba 4901
.org 0x34fbc
	adds r0, r4, #0	@ 00034fbc 201c
.org 0x34fbe
	bl 0x3a3b0	@ 00034fbe 05f0f7f9
.org 0x34fc2
	ldr r0, [pc, #64]	@ 00034fc2 1048
.org 0x34fc4
	adds r1, r4, r0	@ 00034fc4 2118
.org 0x34fc6
	ldrb r0, [r1, #0]	@ 00034fc6 0878
.org 0x34fc8
	subs r0, #1	@ 00034fc8 0138
.org 0x34fca
	strb r0, [r1, #0]	@ 00034fca 0870
.org 0x34fcc
	lsls r0, r0, #24	@ 00034fcc 0006
.org 0x34fce
	lsrs r0, r0, #24	@ 00034fce 000e
.org 0x34fd0
	cmp r0, #255	@ 00034fd0 ff28
.org 0x34fd2
	bne.n 0x34ffe	@ 00034fd2 14d1
.org 0x34fd4
	movs r0, #128	@ 00034fd4 8020
.org 0x34fd6
	lsls r0, r0, #1	@ 00034fd6 4000
.org 0x34fd8
	adds r1, r4, r0	@ 00034fd8 2118
.org 0x34fda
	movs r0, #0	@ 00034fda 0020
.org 0x34fdc
	strb r0, [r1, #0]	@ 00034fdc 0870
.org 0x34fde
	movs r1, #128	@ 00034fde 8021
.org 0x34fe0
	lsls r1, r1, #2	@ 00034fe0 8900
.org 0x34fe2
	adds r0, r4, #0	@ 00034fe2 201c
.org 0x34fe4
	adds r0, #113	@ 00034fe4 7130
.org 0x34fe6
	movs r2, #0	@ 00034fe6 0022
.org 0x34fe8
	ldrsb r2, [r0, r2]	@ 00034fe8 8256
.org 0x34fea
	lsls r2, r2, #16	@ 00034fea 1204
.org 0x34fec
	lsrs r2, r2, #16	@ 00034fec 120c
.org 0x34fee
	adds r0, #1	@ 00034fee 0130
.org 0x34ff0
	movs r3, #0	@ 00034ff0 0023
.org 0x34ff2
	ldrsb r3, [r0, r3]	@ 00034ff2 c356
.org 0x34ff4
	lsls r3, r3, #16	@ 00034ff4 1b04
.org 0x34ff6
	lsrs r3, r3, #16	@ 00034ff6 1b0c
.org 0x34ff8
	adds r0, r4, #0	@ 00034ff8 201c
.org 0x34ffa
	bl 0x1cfc8	@ 00034ffa e7f7e5ff
.org 0x34ffe
	pop {r4, r5}	@ 00034ffe 30bc
