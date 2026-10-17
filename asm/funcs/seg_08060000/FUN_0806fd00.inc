@ FUN_0806fd00  entry 0x0806fd00  size 276
.thumb
.org 0x6fd00
FUN_0806fd00:
	push {r4, r5, r6, lr}	@ 0006fd00 70b5
.org 0x6fd02
	adds r5, r0, #0	@ 0006fd02 051c
.org 0x6fd04
	ldrb r2, [r5, #14]	@ 0006fd04 aa7b
.org 0x6fd06
	cmp r2, #0	@ 0006fd06 002a
.org 0x6fd08
	bne.n 0x6fd90	@ 0006fd08 42d1
.org 0x6fd0a
	ldr r0, [pc, #16]	@ 0006fd0a 0448
.org 0x6fd0c
	ldr r0, [r0, #0]	@ 0006fd0c 0068
.org 0x6fd0e
	ldr r1, [r5, #84]	@ 0006fd0e 696d
.org 0x6fd10
	ldr r0, [r0, #84]	@ 0006fd10 406d
.org 0x6fd12
	cmp r1, r0	@ 0006fd12 8142
.org 0x6fd14
	ble.n 0x6fd20	@ 0006fd14 04dd
.org 0x6fd16
	strb r2, [r5, #18]	@ 0006fd16 aa74
.org 0x6fd18
	b.n 0x6fd24	@ 0006fd18 04e0
.org 0x6fd1a
	.byte 0x00	@ 0006fd1a data
.org 0x6fd1b
	.byte 0x00	@ 0006fd1b data
.org 0x6fd1c
	.byte 0xf0,0xdb,0x02,0x02	@ 0006fd1c data
.org 0x6fd20
	movs r0, #1	@ 0006fd20 0120
.org 0x6fd22
	strb r0, [r5, #18]	@ 0006fd22 a874
.org 0x6fd24
	ldrb r0, [r5, #18]	@ 0006fd24 a87c
.org 0x6fd26
	lsls r0, r0, #2	@ 0006fd26 8000
.org 0x6fd28
	adds r1, r5, #0	@ 0006fd28 291c
.org 0x6fd2a
	adds r1, #188	@ 0006fd2a bc31
.org 0x6fd2c
	adds r0, r1, r0	@ 0006fd2c 0818
.org 0x6fd2e
	ldr r0, [r0, #0]	@ 0006fd2e 0068
.org 0x6fd30
	ldrb r0, [r0, #13]	@ 0006fd30 407b
.org 0x6fd32
	adds r6, r1, #0	@ 0006fd32 0e1c
.org 0x6fd34
	cmp r0, #0	@ 0006fd34 0028
.org 0x6fd36
	beq.n 0x6fd40	@ 0006fd36 03d0
.org 0x6fd38
	adds r0, r5, #0	@ 0006fd38 281c
.org 0x6fd3a
	bl 0x1cff0	@ 0006fd3a adf759f9
.org 0x6fd3e
	b.n 0x6fe24	@ 0006fd3e 71e0
.org 0x6fd40
	ldr r1, [pc, #28]	@ 0006fd40 0749
.org 0x6fd42
	adds r0, r5, #0	@ 0006fd42 281c
.org 0x6fd44
	bl 0x1cf00	@ 0006fd44 adf7dcf8
.org 0x6fd48
	ldrb r0, [r5, #18]	@ 0006fd48 a87c
.org 0x6fd4a
	lsls r0, r0, #2	@ 0006fd4a 8000
.org 0x6fd4c
	adds r0, r6, r0	@ 0006fd4c 3018
.org 0x6fd4e
	ldr r0, [r0, #0]	@ 0006fd4e 0068
.org 0x6fd50
	adds r0, #190	@ 0006fd50 be30
.org 0x6fd52
	movs r1, #1	@ 0006fd52 0121
.org 0x6fd54
	strb r1, [r0, #0]	@ 0006fd54 0170
.org 0x6fd56
	ldrb r0, [r5, #18]	@ 0006fd56 a87c
.org 0x6fd58
	cmp r0, #0	@ 0006fd58 0028
.org 0x6fd5a
	bne.n 0x6fd64	@ 0006fd5a 03d1
.org 0x6fd5c
	movs r0, #2	@ 0006fd5c 0220
.org 0x6fd5e
	b.n 0x6fd68	@ 0006fd5e 03e0
.org 0x6fd60
	.byte 0x02,0x8d,0x00,0x00	@ 0006fd60 data
.org 0x6fd64
	movs r0, #2	@ 0006fd64 0220
.org 0x6fd66
	negs r0, r0	@ 0006fd66 4042
.org 0x6fd68
	str r0, [r5, #100]	@ 0006fd68 6866
.org 0x6fd6a
	movs r0, #4	@ 0006fd6a 0420
.org 0x6fd6c
	str r0, [r5, #104]	@ 0006fd6c a866
.org 0x6fd6e
	ldr r0, [r5, #100]	@ 0006fd6e 686e
.org 0x6fd70
	lsls r0, r0, #5	@ 0006fd70 4001
.org 0x6fd72
	negs r0, r0	@ 0006fd72 4042
.org 0x6fd74
	str r0, [r5, #92]	@ 0006fd74 e865
.org 0x6fd76
	movs r0, #128	@ 0006fd76 8020
.org 0x6fd78
	negs r0, r0	@ 0006fd78 4042
.org 0x6fd7a
	str r0, [r5, #96]	@ 0006fd7a 2866
.org 0x6fd7c
	movs r4, #0	@ 0006fd7c 0024
.org 0x6fd7e
	strb r4, [r5, #19]	@ 0006fd7e ec74
.org 0x6fd80
	ldr r0, [pc, #8]	@ 0006fd80 0248
.org 0x6fd82
	bl 0x2b10	@ 0006fd82 92f7c5fe
.org 0x6fd86
	strb r4, [r5, #15]	@ 0006fd86 ec73
.org 0x6fd88
	b.n 0x6fdaa	@ 0006fd88 0fe0
.org 0x6fd8a
	.byte 0x00	@ 0006fd8a data
.org 0x6fd8b
	.byte 0x00	@ 0006fd8b data
.org 0x6fd8c
	.byte 0x5f,0x01,0x00,0x00	@ 0006fd8c data
.org 0x6fd90
	adds r6, r5, #0	@ 0006fd90 2e1c
.org 0x6fd92
	adds r6, #188	@ 0006fd92 bc36
.org 0x6fd94
	cmp r2, #1	@ 0006fd94 012a
.org 0x6fd96
	bne.n 0x6fdb0	@ 0006fd96 0bd1
.org 0x6fd98
	adds r0, r5, #0	@ 0006fd98 281c
.org 0x6fd9a
	adds r0, #115	@ 0006fd9a 7330
.org 0x6fd9c
	ldrb r0, [r0, #0]	@ 0006fd9c 0078
.org 0x6fd9e
	cmp r0, #3	@ 0006fd9e 0328
.org 0x6fda0
	bne.n 0x6fdb0	@ 0006fda0 06d1
.org 0x6fda2
	ldr r1, [pc, #52]	@ 0006fda2 0d49
.org 0x6fda4
	adds r0, r5, #0	@ 0006fda4 281c
.org 0x6fda6
	bl 0x1cf00	@ 0006fda6 adf7abf8
.org 0x6fdaa
	ldrb r0, [r5, #14]	@ 0006fdaa a87b
.org 0x6fdac
	adds r0, #1	@ 0006fdac 0130
.org 0x6fdae
	strb r0, [r5, #14]	@ 0006fdae a873
.org 0x6fdb0
	adds r0, r5, #0	@ 0006fdb0 281c
.org 0x6fdb2
	bl 0x1cff0	@ 0006fdb2 adf71df9
.org 0x6fdb6
	ldr r0, [r5, #84]	@ 0006fdb6 686d
.org 0x6fdb8
	ldr r1, [r5, #92]	@ 0006fdb8 e96d
.org 0x6fdba
	adds r2, r0, r1	@ 0006fdba 4218
.org 0x6fdbc
	str r2, [r5, #84]	@ 0006fdbc 6a65
.org 0x6fdbe
	ldr r0, [r5, #100]	@ 0006fdbe 686e
.org 0x6fdc0
	adds r1, r1, r0	@ 0006fdc0 0918
.org 0x6fdc2
	str r1, [r5, #92]	@ 0006fdc2 e965
.org 0x6fdc4
	cmp r0, #0	@ 0006fdc4 0028
.org 0x6fdc6
	ble.n 0x6fddc	@ 0006fdc6 09dd
.org 0x6fdc8
	adds r0, r5, #0	@ 0006fdc8 281c
.org 0x6fdca
	adds r0, #180	@ 0006fdca b430
.org 0x6fdcc
	ldr r1, [r0, #0]	@ 0006fdcc 0168
.org 0x6fdce
	adds r3, r0, #0	@ 0006fdce 031c
.org 0x6fdd0
	cmp r2, r1	@ 0006fdd0 8a42
.org 0x6fdd2
	ble.n 0x6fdea	@ 0006fdd2 0add
.org 0x6fdd4
	b.n 0x6fde8	@ 0006fdd4 08e0
.org 0x6fdd6
	.byte 0x00	@ 0006fdd6 data
.org 0x6fdd7
	.byte 0x00	@ 0006fdd7 data
.org 0x6fdd8
	.byte 0x03,0x8d,0x00,0x00	@ 0006fdd8 data
.org 0x6fddc
	adds r0, r5, #0	@ 0006fddc 281c
.org 0x6fdde
	adds r0, #180	@ 0006fdde b430
.org 0x6fde0
	ldr r1, [r0, #0]	@ 0006fde0 0168
.org 0x6fde2
	adds r3, r0, #0	@ 0006fde2 031c
.org 0x6fde4
	cmp r2, r1	@ 0006fde4 8a42
.org 0x6fde6
	bge.n 0x6fdea	@ 0006fde6 00da
.org 0x6fde8
	str r1, [r5, #84]	@ 0006fde8 6965
.org 0x6fdea
	ldr r0, [r5, #88]	@ 0006fdea a86d
.org 0x6fdec
	ldr r1, [r5, #96]	@ 0006fdec 296e
.org 0x6fdee
	adds r2, r0, r1	@ 0006fdee 4218
.org 0x6fdf0
	str r2, [r5, #88]	@ 0006fdf0 aa65
.org 0x6fdf2
	cmp r1, #0	@ 0006fdf2 0029
.org 0x6fdf4
	bge.n 0x6fdfe	@ 0006fdf4 03da
.org 0x6fdf6
	ldr r0, [r5, #104]	@ 0006fdf6 a86e
.org 0x6fdf8
	adds r0, r1, r0	@ 0006fdf8 0818
.org 0x6fdfa
	str r0, [r5, #96]	@ 0006fdfa 2866
.org 0x6fdfc
	b.n 0x6fe0e	@ 0006fdfc 07e0
.org 0x6fdfe
	ldr r0, [r5, #104]	@ 0006fdfe a86e
.org 0x6fe00
	lsls r0, r0, #1	@ 0006fe00 4000
.org 0x6fe02
	adds r0, r1, r0	@ 0006fe02 0818
.org 0x6fe04
	str r0, [r5, #96]	@ 0006fe04 2866
.org 0x6fe06
	ldr r0, [r3, #4]	@ 0006fe06 5868
.org 0x6fe08
	cmp r2, r0	@ 0006fe08 8242
.org 0x6fe0a
	ble.n 0x6fe0e	@ 0006fe0a 00dd
.org 0x6fe0c
	str r0, [r5, #88]	@ 0006fe0c a865
.org 0x6fe0e
	ldrb r0, [r5, #18]	@ 0006fe0e a87c
.org 0x6fe10
	lsls r0, r0, #2	@ 0006fe10 8000
.org 0x6fe12
	adds r0, r6, r0	@ 0006fe12 3018
