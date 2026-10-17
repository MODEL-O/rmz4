@ FUN_080c10c0  entry 0x080c10c0  size 96
.thumb
.org 0xc10c0
FUN_080c10c0:
	push {r4, r5, lr}	@ 000c10c0 30b5
.org 0xc10c2
	adds r4, r0, #0	@ 000c10c2 041c
.org 0xc10c4
	ldr r5, [r4, #40]	@ 000c10c4 a56a
.org 0xc10c6
	ldrb r0, [r4, #15]	@ 000c10c6 e07b
.org 0xc10c8
	cmp r0, #0	@ 000c10c8 0028
.org 0xc10ca
	bne.n 0xc10ec	@ 000c10ca 0fd1
.org 0xc10cc
	adds r0, r4, #0	@ 000c10cc 201c
.org 0xc10ce
	adds r0, #116	@ 000c10ce 7430
.org 0xc10d0
	ldr r1, [pc, #52]	@ 000c10d0 0d49
.org 0xc10d2
	bl 0x5784	@ 000c10d2 44f757fb
.org 0xc10d6
	adds r1, r4, #0	@ 000c10d6 211c
.org 0xc10d8
	adds r1, #180	@ 000c10d8 b431
.org 0xc10da
	movs r0, #1	@ 000c10da 0120
.org 0xc10dc
	strb r0, [r1, #0]	@ 000c10dc 0870
.org 0xc10de
	ldr r1, [pc, #44]	@ 000c10de 0b49
.org 0xc10e0
	adds r0, r4, #0	@ 000c10e0 201c
.org 0xc10e2
	bl 0x1cf00	@ 000c10e2 5bf70dff
.org 0xc10e6
	ldrb r0, [r4, #15]	@ 000c10e6 e07b
.org 0xc10e8
	adds r0, #1	@ 000c10e8 0130
.org 0xc10ea
	strb r0, [r4, #15]	@ 000c10ea e073
.org 0xc10ec
	adds r0, r4, #0	@ 000c10ec 201c
.org 0xc10ee
	bl 0x1cff0	@ 000c10ee 5bf77fff
.org 0xc10f2
	adds r0, r4, #0	@ 000c10f2 201c
.org 0xc10f4
	adds r0, #182	@ 000c10f4 b630
.org 0xc10f6
	ldrb r1, [r0, #0]	@ 000c10f6 0178
.org 0xc10f8
	cmp r1, #0	@ 000c10f8 0029
.org 0xc10fa
	bne.n 0xc1102	@ 000c10fa 02d1
.org 0xc10fc
	ldrb r0, [r5, #12]	@ 000c10fc 287b
.org 0xc10fe
	cmp r0, #1	@ 000c10fe 0128
.org 0xc1100
	bls.n 0xc1110	@ 000c1100 06d9
.org 0xc1102
	movs r1, #0	@ 000c1102 0021
.org 0xc1104
	movs r0, #4	@ 000c1104 0420
.org 0xc1106
	b.n 0xc111c	@ 000c1106 09e0
.org 0xc1108
	.byte 0x14,0x52,0x86,0x08	@ 000c1108 data
.org 0xc110c
	.byte 0x02,0x3a,0x00,0x00	@ 000c110c data
.org 0xc1110
	adds r0, r4, #0	@ 000c1110 201c
.org 0xc1112
	adds r0, #181	@ 000c1112 b530
.org 0xc1114
	ldrb r0, [r0, #0]	@ 000c1114 0078
.org 0xc1116
	cmp r0, #0	@ 000c1116 0028
.org 0xc1118
	beq.n 0xc1122	@ 000c1118 03d0
.org 0xc111a
	movs r0, #3	@ 000c111a 0320
.org 0xc111c
	strb r0, [r4, #13]	@ 000c111c 6073
.org 0xc111e
	strb r1, [r4, #14]	@ 000c111e a173
