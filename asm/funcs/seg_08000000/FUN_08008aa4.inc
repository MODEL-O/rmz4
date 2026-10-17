@ FUN_08008aa4  entry 0x08008aa4  size 184
.thumb
.org 0x8aa4
FUN_08008aa4:
	push {r4, r5, r6, r7, lr}	@ 00008aa4 f0b5
.org 0x8aa6
	adds r5, r0, #0	@ 00008aa6 051c
.org 0x8aa8
	adds r6, r1, #0	@ 00008aa8 0e1c
.org 0x8aaa
	ldr r7, [pc, #128]	@ 00008aaa 204f
.org 0x8aac
	movs r1, #232	@ 00008aac e821
.org 0x8aae
	lsls r1, r1, #1	@ 00008aae 4900
.org 0x8ab0
	adds r0, r7, r1	@ 00008ab0 7818
.org 0x8ab2
	ldrh r0, [r0, #0]	@ 00008ab2 0088
.org 0x8ab4
	cmp r0, #4	@ 00008ab4 0428
.org 0x8ab6
	bne.n 0x8aca	@ 00008ab6 08d1
.org 0x8ab8
	ldr r1, [pc, #116]	@ 00008ab8 1d49
.org 0x8aba
	adds r0, r5, r1	@ 00008aba 6818
.org 0x8abc
	movs r1, #240	@ 00008abc f021
.org 0x8abe
	lsls r1, r1, #10	@ 00008abe 8902
.org 0x8ac0
	bl 0x129050	@ 00008ac0 20f1c6fa
.org 0x8ac4
	movs r1, #240	@ 00008ac4 f021
.org 0x8ac6
	lsls r1, r1, #8	@ 00008ac6 0902
.org 0x8ac8
	adds r5, r0, r1	@ 00008ac8 4518
.org 0x8aca
	asrs r4, r5, #12	@ 00008aca 2c13
.org 0x8acc
	asrs r3, r6, #12	@ 00008acc 3313
.org 0x8ace
	movs r0, #238	@ 00008ace ee20
.org 0x8ad0
	lsls r0, r0, #3	@ 00008ad0 c000
.org 0x8ad2
	cmp r4, r0	@ 00008ad2 8442
.org 0x8ad4
	bhi.n 0x8b6a	@ 00008ad4 49d8
.org 0x8ad6
	ldr r0, [pc, #92]	@ 00008ad6 1748
.org 0x8ad8
	cmp r3, r0	@ 00008ad8 8342
.org 0x8ada
	bhi.n 0x8b6a	@ 00008ada 46d8
.org 0x8adc
	movs r0, #220	@ 00008adc dc20
.org 0x8ade
	lsls r0, r0, #1	@ 00008ade 4000
.org 0x8ae0
	adds r2, r7, r0	@ 00008ae0 3a18
.org 0x8ae2
	movs r0, #252	@ 00008ae2 fc20
.org 0x8ae4
	lsls r0, r0, #3	@ 00008ae4 c000
.org 0x8ae6
	adds r1, r7, r0	@ 00008ae6 3918
.org 0x8ae8
	ldrh r0, [r1, #0]	@ 00008ae8 0888
.org 0x8aea
	muls r0, r3	@ 00008aea 5843
.org 0x8aec
	adds r0, r0, r4	@ 00008aec 0019
.org 0x8aee
	adds r0, #2	@ 00008aee 0230
.org 0x8af0
	lsls r0, r0, #1	@ 00008af0 4000
.org 0x8af2
	adds r0, r0, r1	@ 00008af2 4018
.org 0x8af4
	ldrh r0, [r0, #0]	@ 00008af4 0088
.org 0x8af6
	ldr r1, [r2, #0]	@ 00008af6 1168
.org 0x8af8
	lsls r0, r0, #1	@ 00008af8 4000
.org 0x8afa
	adds r0, r0, r1	@ 00008afa 4018
.org 0x8afc
	ldrh r4, [r0, #0]	@ 00008afc 0488
.org 0x8afe
	ldr r0, [pc, #56]	@ 00008afe 0e48
.org 0x8b00
	movs r2, #15	@ 00008b00 0f22
.org 0x8b02
	ands r2, r4	@ 00008b02 2240
.org 0x8b04
	lsls r2, r2, #2	@ 00008b04 9200
.org 0x8b06
	adds r2, r2, r0	@ 00008b06 1218
.org 0x8b08
	ldr r3, [pc, #48]	@ 00008b08 0c4b
.org 0x8b0a
	adds r0, r5, #0	@ 00008b0a 281c
.org 0x8b0c
	ands r0, r3	@ 00008b0c 1840
.org 0x8b0e
	adds r1, r6, #0	@ 00008b0e 311c
.org 0x8b10
	ands r1, r3	@ 00008b10 1940
.org 0x8b12
	ldr r2, [r2, #0]	@ 00008b12 1268
.org 0x8b14
	bl 0x128f84	@ 00008b14 20f136fa
.org 0x8b18
	cmp r0, #0	@ 00008b18 0028
.org 0x8b1a
	beq.n 0x8b58	@ 00008b1a 1dd0
.org 0x8b1c
	movs r0, #128	@ 00008b1c 8020
.org 0x8b1e
	lsls r0, r0, #6	@ 00008b1e 8001
.org 0x8b20
	ands r0, r4	@ 00008b20 2040
.org 0x8b22
	cmp r0, #0	@ 00008b22 0028
.org 0x8b24
	beq.n 0x8b44	@ 00008b24 0ed0
.org 0x8b26
	ldr r1, [pc, #24]	@ 00008b26 0649
.org 0x8b28
	adds r0, r7, r1	@ 00008b28 7818
.org 0x8b2a
	b.n 0x8b70	@ 00008b2a 21e0
.org 0x8b2c
	.byte 0xb0,0x0a,0x00,0x02	@ 00008b2c data
.org 0x8b30
	.byte 0x00,0x10,0xff,0xff	@ 00008b30 data
.org 0x8b34
	.byte 0xf5,0x04,0x00,0x00	@ 00008b34 data
.org 0x8b38
	.byte 0xd4,0xb0,0x82,0x08	@ 00008b38 data
.org 0x8b3c
	.byte 0xff,0x0f,0x00,0x00	@ 00008b3c data
.org 0x8b40
	.byte 0x08,0xc0,0x02,0x00	@ 00008b40 data
.org 0x8b44
	movs r0, #128	@ 00008b44 8020
.org 0x8b46
	lsls r0, r0, #7	@ 00008b46 c001
.org 0x8b48
	ands r4, r0	@ 00008b48 0440
.org 0x8b4a
	cmp r4, #0	@ 00008b4a 002c
.org 0x8b4c
	beq.n 0x8b58	@ 00008b4c 04d0
.org 0x8b4e
	ldr r1, [pc, #4]	@ 00008b4e 0149
.org 0x8b50
	adds r0, r7, r1	@ 00008b50 7818
.org 0x8b52
	b.n 0x8b70	@ 00008b52 0de0
.org 0x8b54
	.byte 0x04,0xc0,0x02,0x00	@ 00008b54 data
.org 0x8b58
	adds r0, r5, #0	@ 00008b58 281c
.org 0x8b5a
	adds r1, r6, #0	@ 00008b5a 311c
