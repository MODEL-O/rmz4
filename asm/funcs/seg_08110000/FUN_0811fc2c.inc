@ FUN_0811fc2c  entry 0x0811fc2c  size 470
.thumb
.org 0x11fc2c
FUN_0811fc2c:
	push {r4, r5, r6, r7, lr}	@ 0011fc2c f0b5
.org 0x11fc2e
	sub sp, #4	@ 0011fc2e 81b0
.org 0x11fc30
	adds r5, r0, #0	@ 0011fc30 051c
.org 0x11fc32
	ldrb r6, [r5, #3]	@ 0011fc32 ee78
.org 0x11fc34
	cmp r6, #0	@ 0011fc34 002e
.org 0x11fc36
	bne.n 0x11fc6c	@ 0011fc36 19d1
.org 0x11fc38
	ldr r0, [pc, #92]	@ 0011fc38 1748
.org 0x11fc3a
	adds r4, r5, r0	@ 0011fc3a 2c18
.org 0x11fc3c
	ldr r1, [pc, #92]	@ 0011fc3c 1749
.org 0x11fc3e
	str r6, [sp, #0]	@ 0011fc3e 0096
.org 0x11fc40
	adds r0, r4, #0	@ 0011fc40 201c
.org 0x11fc42
	movs r2, #128	@ 0011fc42 8022
.org 0x11fc44
	movs r3, #0	@ 0011fc44 0023
.org 0x11fc46
	bl 0x27b8	@ 0011fc46 e2f6b7fd
.org 0x11fc4a
	ldr r0, [pc, #84]	@ 0011fc4a 1548
.org 0x11fc4c
	ldrh r0, [r0, #0]	@ 0011fc4c 0088
.org 0x11fc4e
	movs r1, #248	@ 0011fc4e f821
.org 0x11fc50
	lsls r1, r1, #5	@ 0011fc50 4901
.org 0x11fc52
	ands r1, r0	@ 0011fc52 0140
.org 0x11fc54
	lsls r1, r1, #3	@ 0011fc54 c900
.org 0x11fc56
	movs r2, #128	@ 0011fc56 8022
.org 0x11fc58
	lsls r2, r2, #5	@ 0011fc58 5201
.org 0x11fc5a
	adds r0, r4, #0	@ 0011fc5a 201c
.org 0x11fc5c
	bl 0x1f1c	@ 0011fc5c e2f65ef9
.org 0x11fc60
	ldr r1, [pc, #64]	@ 0011fc60 1049
.org 0x11fc62
	adds r0, r5, r1	@ 0011fc62 6818
.org 0x11fc64
	strb r6, [r0, #13]	@ 0011fc64 4673
.org 0x11fc66
	ldrb r0, [r5, #3]	@ 0011fc66 e878
.org 0x11fc68
	adds r0, #1	@ 0011fc68 0130
.org 0x11fc6a
	strb r0, [r5, #3]	@ 0011fc6a e870
.org 0x11fc6c
	adds r0, r5, #0	@ 0011fc6c 281c
.org 0x11fc6e
	bl 0x120aa8	@ 0011fc6e 00f01bff
.org 0x11fc72
	ldrb r4, [r5, #3]	@ 0011fc72 ec78
.org 0x11fc74
	cmp r4, #1	@ 0011fc74 012c
.org 0x11fc76
	bne.n 0x11fd20	@ 0011fc76 53d1
.org 0x11fc78
	ldr r2, [pc, #44]	@ 0011fc78 0b4a
.org 0x11fc7a
	ldrh r1, [r2, #6]	@ 0011fc7a d188
.org 0x11fc7c
	movs r0, #16	@ 0011fc7c 1020
.org 0x11fc7e
	ands r0, r1	@ 0011fc7e 0840
.org 0x11fc80
	lsls r0, r0, #16	@ 0011fc80 0004
.org 0x11fc82
	lsrs r6, r0, #16	@ 0011fc82 060c
.org 0x11fc84
	cmp r6, #0	@ 0011fc84 002e
.org 0x11fc86
	beq.n 0x11fcac	@ 0011fc86 11d0
.org 0x11fc88
	movs r0, #1	@ 0011fc88 0120
.org 0x11fc8a
	bl 0x2b10	@ 0011fc8a e2f641ff
.org 0x11fc8e
	movs r0, #0	@ 0011fc8e 0020
.org 0x11fc90
	strb r4, [r5, #2]	@ 0011fc90 ac70
.org 0x11fc92
	strb r0, [r5, #3]	@ 0011fc92 e870
.org 0x11fc94
	b.n 0x11fe4a	@ 0011fc94 d9e0
.org 0x11fc96
	.byte 0x00	@ 0011fc96 data
.org 0x11fc97
	.byte 0x00	@ 0011fc97 data
.org 0x11fc98
	.byte 0xd8,0x0e,0x00,0x00	@ 0011fc98 data
.org 0x11fc9c
	.byte 0x00,0xc0,0xb2,0x08	@ 0011fc9c data
.org 0x11fca0
	.byte 0x06,0x0a,0x00,0x02	@ 0011fca0 data
.org 0x11fca4
	.byte 0xcc,0x0d,0x00,0x00	@ 0011fca4 data
.org 0x11fca8
	.byte 0x60,0x07,0x00,0x02	@ 0011fca8 data
.org 0x11fcac
	ldrh r1, [r2, #4]	@ 0011fcac 9188
.org 0x11fcae
	ands r4, r1	@ 0011fcae 0c40
.org 0x11fcb0
	cmp r4, #0	@ 0011fcb0 002c
.org 0x11fcb2
	bne.n 0x11fcbc	@ 0011fcb2 03d1
.org 0x11fcb4
	movs r0, #128	@ 0011fcb4 8020
.org 0x11fcb6
	ands r0, r1	@ 0011fcb6 0840
.org 0x11fcb8
	cmp r0, #0	@ 0011fcb8 0028
.org 0x11fcba
	beq.n 0x11fd08	@ 0011fcba 25d0
.org 0x11fcbc
	ldr r0, [pc, #56]	@ 0011fcbc 0e48
.org 0x11fcbe
	adds r7, r5, r0	@ 0011fcbe 2f18
.org 0x11fcc0
	ldrb r0, [r7, #3]	@ 0011fcc0 f878
.org 0x11fcc2
	cmp r0, #0	@ 0011fcc2 0028
.org 0x11fcc4
	beq.n 0x11fda8	@ 0011fcc4 70d0
.org 0x11fcc6
	ldr r1, [pc, #52]	@ 0011fcc6 0d49
.org 0x11fcc8
	adds r4, r5, r1	@ 0011fcc8 6c18
.org 0x11fcca
	ldr r1, [pc, #52]	@ 0011fcca 0d49
.org 0x11fccc
	str r6, [sp, #0]	@ 0011fccc 0096
.org 0x11fcce
	adds r0, r4, #0	@ 0011fcce 201c
.org 0x11fcd0
	movs r2, #174	@ 0011fcd0 ae22
.org 0x11fcd2
	movs r3, #0	@ 0011fcd2 0023
.org 0x11fcd4
	bl 0x27b8	@ 0011fcd4 e2f670fd
.org 0x11fcd8
	ldr r0, [pc, #40]	@ 0011fcd8 0a48
.org 0x11fcda
	ldrh r0, [r0, #0]	@ 0011fcda 0088
.org 0x11fcdc
	movs r1, #248	@ 0011fcdc f821
.org 0x11fcde
	lsls r1, r1, #5	@ 0011fcde 4901
.org 0x11fce0
	ands r1, r0	@ 0011fce0 0140
.org 0x11fce2
	lsls r1, r1, #3	@ 0011fce2 c900
.org 0x11fce4
	movs r2, #128	@ 0011fce4 8022
.org 0x11fce6
	lsls r2, r2, #5	@ 0011fce6 5201
.org 0x11fce8
	adds r0, r4, #0	@ 0011fce8 201c
.org 0x11fcea
	bl 0x1f1c	@ 0011fcea e2f617f9
.org 0x11fcee
	movs r0, #2	@ 0011fcee 0220
.org 0x11fcf0
	bl 0x2b10	@ 0011fcf0 e2f60eff
.org 0x11fcf4
	strb r6, [r7, #2]	@ 0011fcf4 be70
.org 0x11fcf6
	b.n 0x11fe44	@ 0011fcf6 a5e0
.org 0x11fcf8
	.byte 0xcc,0x0d,0x00,0x00	@ 0011fcf8 data
.org 0x11fcfc
	.byte 0xd8,0x0e,0x00,0x00	@ 0011fcfc data
.org 0x11fd00
	.byte 0x00,0xc0,0xb2,0x08	@ 0011fd00 data
.org 0x11fd04
	.byte 0x06,0x0a,0x00,0x02	@ 0011fd04 data
.org 0x11fd08
	movs r0, #2	@ 0011fd08 0220
.org 0x11fd0a
	ands r0, r1	@ 0011fd0a 0840
.org 0x11fd0c
	cmp r0, #0	@ 0011fd0c 0028
.org 0x11fd0e
	bne.n 0x11fd12	@ 0011fd0e 00d1
.org 0x11fd10
	b.n 0x11fe48	@ 0011fd10 9ae0
.org 0x11fd12
	ldr r0, [pc, #8]	@ 0011fd12 0248
.org 0x11fd14
	adds r1, r5, r0	@ 0011fd14 2918
.org 0x11fd16
	movs r0, #1	@ 0011fd16 0120
.org 0x11fd18
	strb r0, [r1, #17]	@ 0011fd18 4874
.org 0x11fd1a
	b.n 0x11fe48	@ 0011fd1a 95e0
.org 0x11fd1c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011fd1c data
.org 0x11fd20
	cmp r4, #2	@ 0011fd20 022c
.org 0x11fd22
	beq.n 0x11fd26	@ 0011fd22 00d0
.org 0x11fd24
	b.n 0x11fe34	@ 0011fd24 86e0
.org 0x11fd26
	ldr r2, [pc, #64]	@ 0011fd26 104a
.org 0x11fd28
	ldrh r1, [r2, #4]	@ 0011fd28 9188
.org 0x11fd2a
	adds r6, r1, #0	@ 0011fd2a 0e1c
.org 0x11fd2c
	ands r6, r4	@ 0011fd2c 2640
.org 0x11fd2e
	cmp r6, #0	@ 0011fd2e 002e
.org 0x11fd30
	beq.n 0x11fd78	@ 0011fd30 22d0
.org 0x11fd32
	ldr r1, [pc, #56]	@ 0011fd32 0e49
.org 0x11fd34
	adds r4, r5, r1	@ 0011fd34 6c18
.org 0x11fd36
	ldr r1, [pc, #56]	@ 0011fd36 0e49
.org 0x11fd38
	movs r0, #0	@ 0011fd38 0020
.org 0x11fd3a
	str r0, [sp, #0]	@ 0011fd3a 0090
.org 0x11fd3c
	adds r0, r4, #0	@ 0011fd3c 201c
.org 0x11fd3e
	movs r2, #128	@ 0011fd3e 8022
.org 0x11fd40
	movs r3, #0	@ 0011fd40 0023
.org 0x11fd42
	bl 0x27b8	@ 0011fd42 e2f639fd
.org 0x11fd46
	ldr r0, [pc, #44]	@ 0011fd46 0b48
.org 0x11fd48
	ldrh r0, [r0, #0]	@ 0011fd48 0088
.org 0x11fd4a
	movs r1, #248	@ 0011fd4a f821
.org 0x11fd4c
	lsls r1, r1, #5	@ 0011fd4c 4901
.org 0x11fd4e
	ands r1, r0	@ 0011fd4e 0140
.org 0x11fd50
	lsls r1, r1, #3	@ 0011fd50 c900
.org 0x11fd52
	movs r2, #128	@ 0011fd52 8022
.org 0x11fd54
	lsls r2, r2, #5	@ 0011fd54 5201
.org 0x11fd56
	adds r0, r4, #0	@ 0011fd56 201c
.org 0x11fd58
	bl 0x1f1c	@ 0011fd58 e2f6e0f8
.org 0x11fd5c
	movs r0, #3	@ 0011fd5c 0320
.org 0x11fd5e
	bl 0x2b10	@ 0011fd5e e2f6d7fe
.org 0x11fd62
	movs r0, #1	@ 0011fd62 0120
.org 0x11fd64
	b.n 0x11fe46	@ 0011fd64 6fe0
.org 0x11fd66
	.byte 0x00	@ 0011fd66 data
.org 0x11fd67
	.byte 0x00	@ 0011fd67 data
.org 0x11fd68
	.byte 0x60,0x07,0x00,0x02	@ 0011fd68 data
.org 0x11fd6c
	.byte 0xd8,0x0e,0x00,0x00	@ 0011fd6c data
.org 0x11fd70
	.byte 0x00,0xc0,0xb2,0x08	@ 0011fd70 data
.org 0x11fd74
	.byte 0x06,0x0a,0x00,0x02	@ 0011fd74 data
.org 0x11fd78
	movs r0, #1	@ 0011fd78 0120
.org 0x11fd7a
	ands r0, r1	@ 0011fd7a 0840
.org 0x11fd7c
	cmp r0, #0	@ 0011fd7c 0028
.org 0x11fd7e
	beq.n 0x11fdb0	@ 0011fd7e 17d0
.org 0x11fd80
	ldr r0, [pc, #28]	@ 0011fd80 0748
.org 0x11fd82
	adds r4, r5, r0	@ 0011fd82 2c18
.org 0x11fd84
	ldr r1, [pc, #28]	@ 0011fd84 0749
.org 0x11fd86
	adds r0, r5, r1	@ 0011fd86 6818
.org 0x11fd88
	ldrb r1, [r4, #2]	@ 0011fd88 a178
.org 0x11fd8a
	adds r0, r0, r1	@ 0011fd8a 4018
.org 0x11fd8c
	ldrb r0, [r0, #0]	@ 0011fd8c 0078
.org 0x11fd8e
	cmp r0, #255	@ 0011fd8e ff28
.org 0x11fd90
	beq.n 0x11fda8	@ 0011fd90 0ad0
.org 0x11fd92
	movs r0, #2	@ 0011fd92 0220
.org 0x11fd94
	bl 0x2b10	@ 0011fd94 e2f6bcfe
.org 0x11fd98
	movs r0, #3	@ 0011fd98 0320
.org 0x11fd9a
	strb r0, [r5, #3]	@ 0011fd9a e870
.org 0x11fd9c
	strb r6, [r4, #18]	@ 0011fd9c a674
.org 0x11fd9e
	b.n 0x11fe48	@ 0011fd9e 53e0
.org 0x11fda0
	.byte 0xcc,0x0d,0x00,0x00	@ 0011fda0 data
.org 0x11fda4
	.byte 0xd2,0x0d,0x00,0x00	@ 0011fda4 data
.org 0x11fda8
	movs r0, #4	@ 0011fda8 0420
.org 0x11fdaa
	bl 0x2b10	@ 0011fdaa e2f6b1fe
.org 0x11fdae
	b.n 0x11fe48	@ 0011fdae 4be0
.org 0x11fdb0
	ldrh r1, [r2, #6]	@ 0011fdb0 d188
.org 0x11fdb2
	movs r0, #64	@ 0011fdb2 4020
.org 0x11fdb4
	ands r0, r1	@ 0011fdb4 0840
.org 0x11fdb6
	cmp r0, #0	@ 0011fdb6 0028
.org 0x11fdb8
	beq.n 0x11fdf6	@ 0011fdb8 1dd0
.org 0x11fdba
	ldr r0, [pc, #24]	@ 0011fdba 0648
.org 0x11fdbc
	adds r4, r5, r0	@ 0011fdbc 2c18
.org 0x11fdbe
	ldrb r0, [r4, #2]	@ 0011fdbe a078
.org 0x11fdc0
	cmp r0, #0	@ 0011fdc0 0028
.org 0x11fdc2
	beq.n 0x11fdd8	@ 0011fdc2 09d0
.org 0x11fdc4
	movs r0, #1	@ 0011fdc4 0120
.org 0x11fdc6
	bl 0x2b10	@ 0011fdc6 e2f6a3fe
.org 0x11fdca
	ldrb r0, [r4, #2]	@ 0011fdca a078
.org 0x11fdcc
	subs r0, #1	@ 0011fdcc 0138
.org 0x11fdce
	strb r0, [r4, #2]	@ 0011fdce a070
.org 0x11fdd0
	b.n 0x11fe48	@ 0011fdd0 3ae0
.org 0x11fdd2
	.byte 0x00	@ 0011fdd2 data
.org 0x11fdd3
	.byte 0x00	@ 0011fdd3 data
.org 0x11fdd4
	.byte 0xcc,0x0d,0x00,0x00	@ 0011fdd4 data
.org 0x11fdd8
	ldrb r0, [r4, #14]	@ 0011fdd8 a07b
.org 0x11fdda
	cmp r0, #0	@ 0011fdda 0028
.org 0x11fddc
	beq.n 0x11fdec	@ 0011fddc 06d0
.org 0x11fdde
	movs r0, #1	@ 0011fdde 0120
.org 0x11fde0
	bl 0x2b10	@ 0011fde0 e2f696fe
.org 0x11fde4
	ldrb r0, [r4, #13]	@ 0011fde4 607b
.org 0x11fde6
	subs r0, #1	@ 0011fde6 0138
.org 0x11fde8
	strb r0, [r4, #13]	@ 0011fde8 6073
.org 0x11fdea
	b.n 0x11fe48	@ 0011fdea 2de0
.org 0x11fdec
	movs r0, #3	@ 0011fdec 0320
.org 0x11fdee
	bl 0x2b10	@ 0011fdee e2f68ffe
.org 0x11fdf2
	movs r0, #1	@ 0011fdf2 0120
.org 0x11fdf4
	b.n 0x11fe46	@ 0011fdf4 27e0
.org 0x11fdf6
	movs r0, #128	@ 0011fdf6 8020
.org 0x11fdf8
	ands r0, r1	@ 0011fdf8 0840
.org 0x11fdfa
	cmp r0, #0	@ 0011fdfa 0028
.org 0x11fdfc
	beq.n 0x11fe48	@ 0011fdfc 24d0
.org 0x11fdfe
	ldr r1, [pc, #28]	@ 0011fdfe 0749
.org 0x11fe00
	adds r4, r5, r1	@ 0011fe00 6c18
