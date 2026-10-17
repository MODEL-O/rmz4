@ FUN_08060f68  entry 0x08060f68  size 212
.thumb
.org 0x60f68
FUN_08060f68:
	push {r4, r5, r6, lr}	@ 00060f68 70b5
.org 0x60f6a
	adds r5, r0, #0	@ 00060f6a 051c
.org 0x60f6c
	ldrb r6, [r5, #14]	@ 00060f6c ae7b
.org 0x60f6e
	cmp r6, #0	@ 00060f6e 002e
.org 0x60f70
	bne.n 0x6100a	@ 00060f70 4bd1
.org 0x60f72
	adds r4, r5, #0	@ 00060f72 2c1c
.org 0x60f74
	adds r4, #180	@ 00060f74 b434
.org 0x60f76
	movs r0, #27	@ 00060f76 1b20
.org 0x60f78
	strb r0, [r4, #28]	@ 00060f78 2077
.org 0x60f7a
	ldr r1, [pc, #60]	@ 00060f7a 0f49
.org 0x60f7c
	adds r0, r5, #0	@ 00060f7c 281c
.org 0x60f7e
	bl 0x1cf00	@ 00060f7e bbf7bfff
.org 0x60f82
	ldr r0, [pc, #56]	@ 00060f82 0e48
.org 0x60f84
	str r0, [r5, #96]	@ 00060f84 2866
.org 0x60f86
	ldr r0, [pc, #56]	@ 00060f86 0e48
.org 0x60f88
	ldr r0, [r0, #0]	@ 00060f88 0068
.org 0x60f8a
	ldr r1, [pc, #56]	@ 00060f8a 0e49
.org 0x60f8c
	ldr r0, [r0, #84]	@ 00060f8c 406d
.org 0x60f8e
	ldr r1, [r1, #56]	@ 00060f8e 896b
.org 0x60f90
	cmp r0, r1	@ 00060f90 8842
.org 0x60f92
	bge.n 0x60fcc	@ 00060f92 1bda
.org 0x60f94
	ldr r0, [r5, #84]	@ 00060f94 686d
.org 0x60f96
	ldr r2, [pc, #48]	@ 00060f96 0c4a
.org 0x60f98
	adds r0, r0, r2	@ 00060f98 8018
.org 0x60f9a
	subs r3, r1, r0	@ 00060f9a 0b1a
.org 0x60f9c
	adds r0, r5, #0	@ 00060f9c 281c
.org 0x60f9e
	adds r0, #76	@ 00060f9e 4c30
.org 0x60fa0
	strb r6, [r0, #0]	@ 00060fa0 0670
.org 0x60fa2
	adds r2, r5, #0	@ 00060fa2 2a1c
.org 0x60fa4
	adds r2, #74	@ 00060fa4 4a32
.org 0x60fa6
	ldrb r1, [r2, #0]	@ 00060fa6 1178
.org 0x60fa8
	movs r0, #17	@ 00060fa8 1120
.org 0x60faa
	negs r0, r0	@ 00060faa 4042
.org 0x60fac
	ands r0, r1	@ 00060fac 0840
.org 0x60fae
	strb r0, [r2, #0]	@ 00060fae 1070
.org 0x60fb0
	ldrb r1, [r5, #10]	@ 00060fb0 a97a
.org 0x60fb2
	movs r0, #239	@ 00060fb2 ef20
.org 0x60fb4
	ands r0, r1	@ 00060fb4 0840
.org 0x60fb6
	b.n 0x60fee	@ 00060fb6 1ae0
.org 0x60fb8
	.byte 0x02,0xa5,0x00,0x00	@ 00060fb8 data
.org 0x60fbc
	.byte 0x80,0xf9,0xff,0xff	@ 00060fbc data
.org 0x60fc0
	.byte 0xf0,0xdb,0x02,0x02	@ 00060fc0 data
.org 0x60fc4
	.byte 0xf8,0xe9,0x02,0x02	@ 00060fc4 data
.org 0x60fc8
	.byte 0x01,0x98,0xff,0xff	@ 00060fc8 data
.org 0x60fcc
	ldr r0, [r5, #84]	@ 00060fcc 686d
.org 0x60fce
	movs r2, #208	@ 00060fce d022
.org 0x60fd0
	lsls r2, r2, #7	@ 00060fd0 d201
.org 0x60fd2
	adds r0, r0, r2	@ 00060fd2 8018
.org 0x60fd4
	subs r3, r1, r0	@ 00060fd4 0b1a
.org 0x60fd6
	adds r1, r5, #0	@ 00060fd6 291c
.org 0x60fd8
	adds r1, #76	@ 00060fd8 4c31
.org 0x60fda
	movs r0, #1	@ 00060fda 0120
.org 0x60fdc
	strb r0, [r1, #0]	@ 00060fdc 0870
.org 0x60fde
	adds r2, r5, #0	@ 00060fde 2a1c
.org 0x60fe0
	adds r2, #74	@ 00060fe0 4a32
.org 0x60fe2
	ldrb r0, [r2, #0]	@ 00060fe2 1078
.org 0x60fe4
	movs r1, #16	@ 00060fe4 1021
.org 0x60fe6
	orrs r0, r1	@ 00060fe6 0843
.org 0x60fe8
	strb r0, [r2, #0]	@ 00060fe8 1070
.org 0x60fea
	ldrb r0, [r5, #10]	@ 00060fea a87a
.org 0x60fec
	orrs r0, r1	@ 00060fec 0843
.org 0x60fee
	strb r0, [r5, #10]	@ 00060fee a872
.org 0x60ff0
	adds r0, r3, #0	@ 00060ff0 181c
.org 0x60ff2
	movs r1, #40	@ 00060ff2 2821
.org 0x60ff4
	bl 0x128fb8	@ 00060ff4 c7f0e0ff
.org 0x60ff8
	str r0, [r5, #92]	@ 00060ff8 e865
.org 0x60ffa
	ldrb r0, [r4, #26]	@ 00060ffa a07e
.org 0x60ffc
	adds r0, #1	@ 00060ffc 0130
.org 0x60ffe
	movs r1, #0	@ 00060ffe 0021
.org 0x61000
	strb r0, [r4, #26]	@ 00061000 a076
.org 0x61002
	strb r1, [r5, #15]	@ 00061002 e973
.org 0x61004
	ldrb r0, [r5, #14]	@ 00061004 a87b
.org 0x61006
	adds r0, #1	@ 00061006 0130
.org 0x61008
	strb r0, [r5, #14]	@ 00061008 a873
.org 0x6100a
	adds r0, r5, #0	@ 0006100a 281c
.org 0x6100c
	bl 0x1cff0	@ 0006100c bbf7f0ff
.org 0x61010
	ldrb r1, [r5, #15]	@ 00061010 e97b
.org 0x61012
	cmp r1, #0	@ 00061012 0029
.org 0x61014
	bne.n 0x6102a	@ 00061014 09d1
.org 0x61016
	adds r0, r5, #0	@ 00061016 281c
.org 0x61018
	adds r0, #113	@ 00061018 7130
.org 0x6101a
	ldrb r0, [r0, #0]	@ 0006101a 0078
.org 0x6101c
	lsls r0, r0, #24	@ 0006101c 0006
.org 0x6101e
	asrs r0, r0, #24	@ 0006101e 0016
.org 0x61020
	cmp r0, #0	@ 00061020 0028
.org 0x61022
	beq.n 0x6104a	@ 00061022 12d0
.org 0x61024
	adds r0, r1, #1	@ 00061024 481c
.org 0x61026
	strb r0, [r5, #15]	@ 00061026 e873
.org 0x61028
	b.n 0x6104a	@ 00061028 0fe0
.org 0x6102a
	ldr r0, [r5, #84]	@ 0006102a 686d
.org 0x6102c
	ldr r1, [r5, #92]	@ 0006102c e96d
.org 0x6102e
	adds r0, r0, r1	@ 0006102e 4018
.org 0x61030
	str r0, [r5, #84]	@ 00061030 6865
.org 0x61032
	ldr r0, [r5, #88]	@ 00061032 a86d
.org 0x61034
	ldr r1, [r5, #96]	@ 00061034 296e
.org 0x61036
	adds r0, r0, r1	@ 00061036 4018
.org 0x61038
	str r0, [r5, #88]	@ 00061038 a865
.org 0x6103a
	adds r1, #64	@ 0006103a 4031
