@ FUN_0801fce4  entry 0x0801fce4  size 282
.thumb
.org 0x1fce4
FUN_0801fce4:
	push {r4, r5, r6, r7, lr}	@ 0001fce4 f0b5
.org 0x1fce6
	sub sp, #16	@ 0001fce6 84b0
.org 0x1fce8
	adds r7, r0, #0	@ 0001fce8 071c
.org 0x1fcea
	ldrb r0, [r7, #28]	@ 0001fcea 387f
.org 0x1fcec
	adds r1, r0, #0	@ 0001fcec 011c
.org 0x1fcee
	cmp r1, #0	@ 0001fcee 0029
.org 0x1fcf0
	bne.n 0x1fcf8	@ 0001fcf0 02d1
.org 0x1fcf2
	strh r1, [r7, #34]	@ 0001fcf2 7984
.org 0x1fcf4
	adds r0, #1	@ 0001fcf4 0130
.org 0x1fcf6
	strb r0, [r7, #28]	@ 0001fcf6 3877
.org 0x1fcf8
	ldr r2, [r7, #72]	@ 0001fcf8 ba6c
.org 0x1fcfa
	ldr r1, [r2, #0]	@ 0001fcfa 1168
.org 0x1fcfc
	ldr r0, [r7, #76]	@ 0001fcfc f86c
.org 0x1fcfe
	adds r5, r1, r0	@ 0001fcfe 0d18
.org 0x1fd00
	ldr r1, [r2, #4]	@ 0001fd00 5168
.org 0x1fd02
	ldr r0, [r7, #84]	@ 0001fd02 786d
.org 0x1fd04
	adds r6, r1, r0	@ 0001fd04 0e18
.org 0x1fd06
	ldr r0, [r7, #48]	@ 0001fd06 386b
.org 0x1fd08
	str r0, [sp, #0]	@ 0001fd08 0090
.org 0x1fd0a
	ldr r1, [r7, #52]	@ 0001fd0a 796b
.org 0x1fd0c
	str r1, [sp, #4]	@ 0001fd0c 0191
.org 0x1fd0e
	subs r2, r0, r5	@ 0001fd0e 421b
.org 0x1fd10
	cmp r2, #0	@ 0001fd10 002a
.org 0x1fd12
	ble.n 0x1fd18	@ 0001fd12 01dd
.org 0x1fd14
	subs r0, r0, r2	@ 0001fd14 801a
.org 0x1fd16
	str r0, [sp, #0]	@ 0001fd16 0090
.org 0x1fd18
	cmp r2, #0	@ 0001fd18 002a
.org 0x1fd1a
	bge.n 0x1fd22	@ 0001fd1a 02da
.org 0x1fd1c
	ldr r0, [sp, #0]	@ 0001fd1c 0098
.org 0x1fd1e
	subs r0, r0, r2	@ 0001fd1e 801a
.org 0x1fd20
	str r0, [sp, #0]	@ 0001fd20 0090
.org 0x1fd22
	subs r1, r1, r6	@ 0001fd22 891b
.org 0x1fd24
	ldr r0, [pc, #52]	@ 0001fd24 0d48
.org 0x1fd26
	cmp r1, r0	@ 0001fd26 8142
.org 0x1fd28
	ble.n 0x1fd34	@ 0001fd28 04dd
.org 0x1fd2a
	ldr r0, [sp, #4]	@ 0001fd2a 0198
.org 0x1fd2c
	ldr r2, [pc, #44]	@ 0001fd2c 0b4a
.org 0x1fd2e
	adds r0, r0, r2	@ 0001fd2e 8018
.org 0x1fd30
	subs r0, r0, r1	@ 0001fd30 401a
.org 0x1fd32
	str r0, [sp, #4]	@ 0001fd32 0190
.org 0x1fd34
	ldr r0, [pc, #40]	@ 0001fd34 0a48
.org 0x1fd36
	cmp r1, r0	@ 0001fd36 8142
.org 0x1fd38
	bge.n 0x1fd44	@ 0001fd38 04da
.org 0x1fd3a
	ldr r0, [sp, #4]	@ 0001fd3a 0198
.org 0x1fd3c
	ldr r2, [pc, #32]	@ 0001fd3c 084a
.org 0x1fd3e
	adds r0, r0, r2	@ 0001fd3e 8018
.org 0x1fd40
	subs r0, r0, r1	@ 0001fd40 401a
.org 0x1fd42
	str r0, [sp, #4]	@ 0001fd42 0190
.org 0x1fd44
	add r4, sp, #8	@ 0001fd44 02ac
.org 0x1fd46
	mov r0, sp	@ 0001fd46 6846
.org 0x1fd48
	adds r1, r4, #0	@ 0001fd48 211c
.org 0x1fd4a
	bl 0x70c8	@ 0001fd4a e7f7bdf9
.org 0x1fd4e
	ldrb r1, [r7, #25]	@ 0001fd4e 797e
.org 0x1fd50
	movs r0, #16	@ 0001fd50 1020
.org 0x1fd52
	ands r0, r1	@ 0001fd52 0840
.org 0x1fd54
	cmp r0, #0	@ 0001fd54 0028
.org 0x1fd56
	beq.n 0x1fd64	@ 0001fd56 05d0
.org 0x1fd58
	ldr r5, [sp, #0]	@ 0001fd58 009d
.org 0x1fd5a
	b.n 0x1fd6a	@ 0001fd5a 06e0
.org 0x1fd5c
	.byte 0x00,0xf0,0xff,0xff	@ 0001fd5c data
.org 0x1fd60
	.byte 0x00,0xe8,0xff,0xff	@ 0001fd60 data
.org 0x1fd64
	ldr r1, [sp, #0]	@ 0001fd64 0099
.org 0x1fd66
	ldr r0, [sp, #8]	@ 0001fd66 0298
.org 0x1fd68
	adds r5, r1, r0	@ 0001fd68 0d18
.org 0x1fd6a
	ldr r0, [sp, #4]	@ 0001fd6a 0198
.org 0x1fd6c
	ldr r1, [r4, #4]	@ 0001fd6c 6168
.org 0x1fd6e
	adds r6, r0, r1	@ 0001fd6e 4618
.org 0x1fd70
	ldr r1, [pc, #76]	@ 0001fd70 1349
.org 0x1fd72
	adds r0, r5, r1	@ 0001fd72 6818
.org 0x1fd74
	ldr r1, [r7, #92]	@ 0001fd74 f96d
.org 0x1fd76
	cmp r0, r1	@ 0001fd76 8842
.org 0x1fd78
	bge.n 0x1fd80	@ 0001fd78 02da
.org 0x1fd7a
	movs r2, #240	@ 0001fd7a f022
.org 0x1fd7c
	lsls r2, r2, #7	@ 0001fd7c d201
.org 0x1fd7e
	adds r5, r1, r2	@ 0001fd7e 8d18
.org 0x1fd80
	movs r1, #240	@ 0001fd80 f021
.org 0x1fd82
	lsls r1, r1, #7	@ 0001fd82 c901
.org 0x1fd84
	adds r0, r5, r1	@ 0001fd84 6818
.org 0x1fd86
	ldr r1, [r7, #96]	@ 0001fd86 396e
.org 0x1fd88
	cmp r0, r1	@ 0001fd88 8842
.org 0x1fd8a
	ble.n 0x1fd90	@ 0001fd8a 01dd
.org 0x1fd8c
	ldr r2, [pc, #48]	@ 0001fd8c 0c4a
.org 0x1fd8e
	adds r5, r1, r2	@ 0001fd8e 8d18
.org 0x1fd90
	ldr r1, [pc, #48]	@ 0001fd90 0c49
.org 0x1fd92
	adds r0, r6, r1	@ 0001fd92 7018
.org 0x1fd94
	ldr r1, [r7, #100]	@ 0001fd94 796e
.org 0x1fd96
	cmp r0, r1	@ 0001fd96 8842
.org 0x1fd98
	bge.n 0x1fda0	@ 0001fd98 02da
.org 0x1fd9a
	movs r2, #160	@ 0001fd9a a022
.org 0x1fd9c
	lsls r2, r2, #7	@ 0001fd9c d201
.org 0x1fd9e
	adds r6, r1, r2	@ 0001fd9e 8e18
.org 0x1fda0
	movs r1, #160	@ 0001fda0 a021
.org 0x1fda2
	lsls r1, r1, #7	@ 0001fda2 c901
.org 0x1fda4
	adds r0, r6, r1	@ 0001fda4 7018
.org 0x1fda6
	ldr r1, [r7, #104]	@ 0001fda6 b96e
.org 0x1fda8
	cmp r0, r1	@ 0001fda8 8842
.org 0x1fdaa
	ble.n 0x1fdb0	@ 0001fdaa 01dd
.org 0x1fdac
	ldr r2, [pc, #20]	@ 0001fdac 054a
.org 0x1fdae
	adds r6, r1, r2	@ 0001fdae 8e18
.org 0x1fdb0
	ldrb r1, [r7, #25]	@ 0001fdb0 797e
.org 0x1fdb2
	movs r0, #8	@ 0001fdb2 0820
.org 0x1fdb4
	ands r0, r1	@ 0001fdb4 0840
.org 0x1fdb6
	cmp r0, #0	@ 0001fdb6 0028
.org 0x1fdb8
	beq.n 0x1fdc8	@ 0001fdb8 06d0
.org 0x1fdba
	str r6, [r7, #52]	@ 0001fdba 7e63
.org 0x1fdbc
	str r5, [r7, #48]	@ 0001fdbc 3d63
.org 0x1fdbe
	b.n 0x1fe02	@ 0001fdbe 20e0
.org 0x1fdc0
	.byte 0x00,0x88,0xff,0xff	@ 0001fdc0 data
.org 0x1fdc4
	.byte 0x00,0xb0,0xff,0xff	@ 0001fdc4 data
.org 0x1fdc8
	ldr r1, [r7, #48]	@ 0001fdc8 396b
.org 0x1fdca
	movs r2, #128	@ 0001fdca 8022
.org 0x1fdcc
	lsls r2, r2, #3	@ 0001fdcc d200
.org 0x1fdce
	adds r0, r1, r2	@ 0001fdce 8818
.org 0x1fdd0
	cmp r0, r5	@ 0001fdd0 a842
.org 0x1fdd2
	blt.n 0x1fddc	@ 0001fdd2 03db
.org 0x1fdd4
	ldr r2, [pc, #8]	@ 0001fdd4 024a
.org 0x1fdd6
	adds r0, r1, r2	@ 0001fdd6 8818
.org 0x1fdd8
	cmp r0, r5	@ 0001fdd8 a842
.org 0x1fdda
	ble.n 0x1fde4	@ 0001fdda 03dd
.org 0x1fddc
	str r0, [r7, #48]	@ 0001fddc 3863
.org 0x1fdde
	b.n 0x1fde6	@ 0001fdde 02e0
.org 0x1fde0
	.byte 0x00,0xfc,0xff,0xff	@ 0001fde0 data
.org 0x1fde4
	str r5, [r7, #48]	@ 0001fde4 3d63
.org 0x1fde6
	ldr r1, [r7, #52]	@ 0001fde6 796b
.org 0x1fde8
	subs r0, r1, r6	@ 0001fde8 881b
.org 0x1fdea
	cmp r0, #0	@ 0001fdea 0028
.org 0x1fdec
	blt.n 0x1fdf6	@ 0001fdec 03db
.org 0x1fdee
	lsls r0, r1, #3	@ 0001fdee c800
.org 0x1fdf0
	subs r0, r0, r1	@ 0001fdf0 401a
.org 0x1fdf2
	adds r0, r0, r6	@ 0001fdf2 8019
.org 0x1fdf4
	b.n 0x1fdfe	@ 0001fdf4 03e0
.org 0x1fdf6
	lsls r0, r1, #3	@ 0001fdf6 c800
.org 0x1fdf8
	subs r0, r0, r1	@ 0001fdf8 401a
.org 0x1fdfa
	adds r0, r0, r6	@ 0001fdfa 8019
.org 0x1fdfc
	adds r0, #7	@ 0001fdfc 0730
