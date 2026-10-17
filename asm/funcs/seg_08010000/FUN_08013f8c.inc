@ FUN_08013f8c  entry 0x08013f8c  size 142
.thumb
.org 0x13f8c
FUN_08013f8c:
	push {r4, r5, r6, lr}	@ 00013f8c 70b5
.org 0x13f8e
	adds r5, r0, #0	@ 00013f8e 051c
.org 0x13f90
	ldrb r6, [r5, #14]	@ 00013f90 ae7b
.org 0x13f92
	cmp r6, #0	@ 00013f92 002e
.org 0x13f94
	bne.n 0x14024	@ 00013f94 46d1
.org 0x13f96
	ldr r0, [r5, #92]	@ 00013f96 e86d
.org 0x13f98
	lsls r0, r0, #16	@ 00013f98 0004
.org 0x13f9a
	lsrs r0, r0, #20	@ 00013f9a 000d
.org 0x13f9c
	lsls r2, r0, #1	@ 00013f9c 4200
.org 0x13f9e
	ldr r3, [pc, #72]	@ 00013f9e 124b
.org 0x13fa0
	adds r2, r2, r3	@ 00013fa0 d218
.org 0x13fa2
	ldr r4, [r5, #96]	@ 00013fa2 2c6e
.org 0x13fa4
	ldr r1, [r5, #100]	@ 00013fa4 696e
.org 0x13fa6
	orrs r4, r1	@ 00013fa6 0c43
.org 0x13fa8
	movs r1, #68	@ 00013fa8 4421
.org 0x13faa
	orrs r4, r1	@ 00013faa 0c43
.org 0x13fac
	strh r4, [r2, #0]	@ 00013fac 1480
.org 0x13fae
	lsls r0, r0, #2	@ 00013fae 8000
.org 0x13fb0
	adds r3, #8	@ 00013fb0 0833
.org 0x13fb2
	adds r0, r0, r3	@ 00013fb2 c018
.org 0x13fb4
	str r6, [r0, #0]	@ 00013fb4 0660
.org 0x13fb6
	ldr r0, [pc, #52]	@ 00013fb6 0d48
.org 0x13fb8
	ldr r1, [pc, #52]	@ 00013fb8 0d49
.org 0x13fba
	adds r0, r0, r1	@ 00013fba 4018
.org 0x13fbc
	ldrb r1, [r0, #0]	@ 00013fbc 0178
.org 0x13fbe
	movs r0, #15	@ 00013fbe 0f20
.org 0x13fc0
	ands r0, r1	@ 00013fc0 0840
.org 0x13fc2
	cmp r0, #3	@ 00013fc2 0328
.org 0x13fc4
	bne.n 0x13ffc	@ 00013fc4 1ad1
.org 0x13fc6
	ldr r0, [pc, #44]	@ 00013fc6 0b48
.org 0x13fc8
	ldr r0, [r0, #0]	@ 00013fc8 0068
.org 0x13fca
	ldr r1, [pc, #44]	@ 00013fca 0b49
.org 0x13fcc
	adds r0, r0, r1	@ 00013fcc 4018
.org 0x13fce
	movs r1, #248	@ 00013fce f821
.org 0x13fd0
	lsls r1, r1, #5	@ 00013fd0 4901
.org 0x13fd2
	ands r4, r1	@ 00013fd2 0c40
.org 0x13fd4
	lsls r1, r4, #3	@ 00013fd4 e100
.org 0x13fd6
	movs r2, #192	@ 00013fd6 c022
.org 0x13fd8
	lsls r2, r2, #19	@ 00013fd8 d204
.org 0x13fda
	adds r1, r1, r2	@ 00013fda 8918
.org 0x13fdc
	movs r2, #128	@ 00013fdc 8022
.org 0x13fde
	lsls r2, r2, #2	@ 00013fde 9200
.org 0x13fe0
	bl 0x128be0	@ 00013fe0 14f1fefd
.org 0x13fe4
	b.n 0x1401a	@ 00013fe4 19e0
.org 0x13fe6
	.byte 0x00	@ 00013fe6 data
.org 0x13fe7
	.byte 0x00	@ 00013fe7 data
.org 0x13fe8
	.byte 0x04,0x0a,0x00,0x02	@ 00013fe8 data
.org 0x13fec
	.byte 0xb0,0x0a,0x00,0x02	@ 00013fec data
.org 0x13ff0
	.byte 0x10,0xc0,0x02,0x00	@ 00013ff0 data
.org 0x13ff4
	.byte 0x14,0xc1,0xb2,0x08	@ 00013ff4 data
.org 0x13ff8
	.byte 0x1c,0xc1,0xb2,0x08	@ 00013ff8 data
.org 0x13ffc
	ldr r0, [pc, #48]	@ 00013ffc 0c48
.org 0x13ffe
	ldr r0, [r0, #0]	@ 00013ffe 0068
.org 0x14000
	ldr r1, [pc, #48]	@ 00014000 0c49
.org 0x14002
	adds r0, r0, r1	@ 00014002 4018
.org 0x14004
	movs r1, #248	@ 00014004 f821
.org 0x14006
	lsls r1, r1, #5	@ 00014006 4901
.org 0x14008
	ands r4, r1	@ 00014008 0c40
.org 0x1400a
	lsls r1, r4, #3	@ 0001400a e100
.org 0x1400c
	movs r2, #192	@ 0001400c c022
.org 0x1400e
	lsls r2, r2, #19	@ 0001400e d204
.org 0x14010
	adds r1, r1, r2	@ 00014010 8918
.org 0x14012
	movs r2, #128	@ 00014012 8022
.org 0x14014
	lsls r2, r2, #2	@ 00014014 9200
.org 0x14016
	bl 0x128be0	@ 00014016 14f1e3fd
