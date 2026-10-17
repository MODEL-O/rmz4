@ FUN_08007c7c  entry 0x08007c7c  size 146
.thumb
.org 0x7c7c
FUN_08007c7c:
	push {r4, r5, r6, r7, lr}	@ 00007c7c f0b5
.org 0x7c7e
	adds r5, r0, #0	@ 00007c7e 051c
.org 0x7c80
	adds r7, r1, #0	@ 00007c80 0f1c
.org 0x7c82
	ldr r6, [pc, #52]	@ 00007c82 0d4e
.org 0x7c84
	movs r1, #232	@ 00007c84 e821
.org 0x7c86
	lsls r1, r1, #1	@ 00007c86 4900
.org 0x7c88
	adds r0, r6, r1	@ 00007c88 7018
.org 0x7c8a
	ldrh r0, [r0, #0]	@ 00007c8a 0088
.org 0x7c8c
	cmp r0, #4	@ 00007c8c 0428
.org 0x7c8e
	bne.n 0x7ca2	@ 00007c8e 08d1
.org 0x7c90
	ldr r1, [pc, #40]	@ 00007c90 0a49
.org 0x7c92
	adds r0, r5, r1	@ 00007c92 6818
.org 0x7c94
	movs r1, #240	@ 00007c94 f021
.org 0x7c96
	lsls r1, r1, #10	@ 00007c96 8902
.org 0x7c98
	bl 0x129050	@ 00007c98 21f1daf9
.org 0x7c9c
	movs r1, #240	@ 00007c9c f021
.org 0x7c9e
	lsls r1, r1, #8	@ 00007c9e 0902
.org 0x7ca0
	adds r5, r0, r1	@ 00007ca0 4518
.org 0x7ca2
	asrs r4, r5, #12	@ 00007ca2 2c13
.org 0x7ca4
	asrs r3, r7, #12	@ 00007ca4 3b13
.org 0x7ca6
	movs r0, #238	@ 00007ca6 ee20
.org 0x7ca8
	lsls r0, r0, #3	@ 00007ca8 c000
.org 0x7caa
	cmp r4, r0	@ 00007caa 8442
.org 0x7cac
	bhi.n 0x7cb4	@ 00007cac 02d8
.org 0x7cae
	ldr r0, [pc, #16]	@ 00007cae 0448
.org 0x7cb0
	cmp r3, r0	@ 00007cb0 8342
.org 0x7cb2
	bls.n 0x7cc8	@ 00007cb2 09d9
.org 0x7cb4
	ldr r0, [pc, #12]	@ 00007cb4 0348
.org 0x7cb6
	b.n 0x7d22	@ 00007cb6 34e0
.org 0x7cb8
	.byte 0xb0,0x0a,0x00,0x02	@ 00007cb8 data
.org 0x7cbc
	.byte 0x00,0x10,0xff,0xff	@ 00007cbc data
.org 0x7cc0
	.byte 0xf5,0x04,0x00,0x00	@ 00007cc0 data
.org 0x7cc4
	.byte 0x01,0x0a,0x00,0x00	@ 00007cc4 data
.org 0x7cc8
	movs r0, #220	@ 00007cc8 dc20
.org 0x7cca
	lsls r0, r0, #1	@ 00007cca 4000
.org 0x7ccc
	adds r2, r6, r0	@ 00007ccc 3218
.org 0x7cce
	movs r0, #252	@ 00007cce fc20
.org 0x7cd0
	lsls r0, r0, #3	@ 00007cd0 c000
.org 0x7cd2
	adds r1, r6, r0	@ 00007cd2 3118
.org 0x7cd4
	ldrh r0, [r1, #0]	@ 00007cd4 0888
.org 0x7cd6
	muls r0, r3	@ 00007cd6 5843
.org 0x7cd8
	adds r0, r0, r4	@ 00007cd8 0019
.org 0x7cda
	adds r0, #2	@ 00007cda 0230
.org 0x7cdc
	lsls r0, r0, #1	@ 00007cdc 4000
.org 0x7cde
	adds r0, r0, r1	@ 00007cde 4018
.org 0x7ce0
	ldrh r0, [r0, #0]	@ 00007ce0 0088
.org 0x7ce2
	ldr r1, [r2, #0]	@ 00007ce2 1168
.org 0x7ce4
	lsls r0, r0, #1	@ 00007ce4 4000
.org 0x7ce6
	adds r0, r0, r1	@ 00007ce6 4018
.org 0x7ce8
	ldrh r4, [r0, #0]	@ 00007ce8 0488
.org 0x7cea
	ldr r0, [pc, #44]	@ 00007cea 0b48
.org 0x7cec
	movs r2, #15	@ 00007cec 0f22
.org 0x7cee
	ands r2, r4	@ 00007cee 2240
.org 0x7cf0
	lsls r2, r2, #2	@ 00007cf0 9200
.org 0x7cf2
	adds r2, r2, r0	@ 00007cf2 1218
.org 0x7cf4
	ldr r3, [pc, #36]	@ 00007cf4 094b
.org 0x7cf6
	adds r0, r5, #0	@ 00007cf6 281c
.org 0x7cf8
	ands r0, r3	@ 00007cf8 1840
.org 0x7cfa
	adds r1, r7, #0	@ 00007cfa 391c
.org 0x7cfc
	ands r1, r3	@ 00007cfc 1940
.org 0x7cfe
	ldr r2, [r2, #0]	@ 00007cfe 1268
.org 0x7d00
	bl 0x128f84	@ 00007d00 21f140f9
.org 0x7d04
	cmp r0, #0	@ 00007d04 0028
.org 0x7d06
	bne.n 0x7d20	@ 00007d06 0bd1
.org 0x7d08
	adds r0, r5, #0	@ 00007d08 281c
.org 0x7d0a
	adds r1, r7, #0	@ 00007d0a 391c
.org 0x7d0c
	bl 0x9370	@ 00007d0c 01f030fb
