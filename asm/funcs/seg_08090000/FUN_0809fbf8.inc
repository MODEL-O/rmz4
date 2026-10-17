@ FUN_0809fbf8  entry 0x0809fbf8  size 214
.thumb
.org 0x9fbf8
FUN_0809fbf8:
	push {r4, r5, r6, r7, lr}	@ 0009fbf8 f0b5
.org 0x9fbfa
	adds r6, r0, #0	@ 0009fbfa 061c
.org 0x9fbfc
	ldr r7, [r6, #40]	@ 0009fbfc b76a
.org 0x9fbfe
	ldrb r0, [r6, #13]	@ 0009fbfe 707b
.org 0x9fc00
	cmp r0, #0	@ 0009fc00 0028
.org 0x9fc02
	bne.n 0x9fc88	@ 0009fc02 41d1
.org 0x9fc04
	adds r5, r6, #0	@ 0009fc04 351c
.org 0x9fc06
	adds r5, #84	@ 0009fc06 5435
.org 0x9fc08
	ldrb r1, [r6, #17]	@ 0009fc08 717c
.org 0x9fc0a
	lsls r1, r1, #24	@ 0009fc0a 0906
.org 0x9fc0c
	ldr r0, [pc, #192]	@ 0009fc0c 3048
.org 0x9fc0e
	adds r1, r1, r0	@ 0009fc0e 0918
.org 0x9fc10
	lsrs r1, r1, #16	@ 0009fc10 090c
.org 0x9fc12
	adds r0, r5, #0	@ 0009fc12 281c
.org 0x9fc14
	movs r2, #0	@ 0009fc14 0022
.org 0x9fc16
	bl 0xdfef0	@ 0009fc16 40f06bf9
.org 0x9fc1a
	ldrb r1, [r6, #17]	@ 0009fc1a 717c
.org 0x9fc1c
	lsls r1, r1, #24	@ 0009fc1c 0906
.org 0x9fc1e
	ldr r0, [pc, #180]	@ 0009fc1e 2d48
.org 0x9fc20
	adds r1, r1, r0	@ 0009fc20 0918
.org 0x9fc22
	lsrs r1, r1, #16	@ 0009fc22 090c
.org 0x9fc24
	adds r0, r5, #0	@ 0009fc24 281c
.org 0x9fc26
	movs r2, #1	@ 0009fc26 0122
.org 0x9fc28
	bl 0xdfef0	@ 0009fc28 40f062f9
.org 0x9fc2c
	ldrb r1, [r6, #17]	@ 0009fc2c 717c
.org 0x9fc2e
	lsls r1, r1, #8	@ 0009fc2e 0902
.org 0x9fc30
	ldr r0, [pc, #164]	@ 0009fc30 2948
.org 0x9fc32
	adds r4, r0, #0	@ 0009fc32 041c
.org 0x9fc34
	adds r1, r1, r4	@ 0009fc34 0919
.org 0x9fc36
	lsls r1, r1, #16	@ 0009fc36 0904
.org 0x9fc38
	lsrs r1, r1, #16	@ 0009fc38 090c
.org 0x9fc3a
	adds r0, r5, #0	@ 0009fc3a 281c
.org 0x9fc3c
	movs r2, #2	@ 0009fc3c 0222
.org 0x9fc3e
	bl 0xdfef0	@ 0009fc3e 40f057f9
.org 0x9fc42
	ldrb r1, [r6, #17]	@ 0009fc42 717c
.org 0x9fc44
	lsls r1, r1, #8	@ 0009fc44 0902
.org 0x9fc46
	adds r1, r1, r4	@ 0009fc46 0919
.org 0x9fc48
	lsls r1, r1, #16	@ 0009fc48 0904
.org 0x9fc4a
	lsrs r1, r1, #16	@ 0009fc4a 090c
.org 0x9fc4c
	adds r0, r5, #0	@ 0009fc4c 281c
.org 0x9fc4e
	movs r2, #2	@ 0009fc4e 0222
.org 0x9fc50
	bl 0xdfef0	@ 0009fc50 40f04ef9
.org 0x9fc54
	ldrb r1, [r6, #17]	@ 0009fc54 717c
.org 0x9fc56
	lsls r1, r1, #8	@ 0009fc56 0902
.org 0x9fc58
	ldr r0, [pc, #128]	@ 0009fc58 2048
.org 0x9fc5a
	adds r4, r0, #0	@ 0009fc5a 041c
.org 0x9fc5c
	adds r1, r1, r4	@ 0009fc5c 0919
.org 0x9fc5e
	lsls r1, r1, #16	@ 0009fc5e 0904
.org 0x9fc60
	lsrs r1, r1, #16	@ 0009fc60 090c
.org 0x9fc62
	adds r0, r5, #0	@ 0009fc62 281c
.org 0x9fc64
	movs r2, #3	@ 0009fc64 0322
.org 0x9fc66
	bl 0xdfef0	@ 0009fc66 40f043f9
.org 0x9fc6a
	ldrb r1, [r6, #17]	@ 0009fc6a 717c
.org 0x9fc6c
	lsls r1, r1, #8	@ 0009fc6c 0902
.org 0x9fc6e
	adds r1, r1, r4	@ 0009fc6e 0919
.org 0x9fc70
	lsls r1, r1, #16	@ 0009fc70 0904
.org 0x9fc72
	lsrs r1, r1, #16	@ 0009fc72 090c
.org 0x9fc74
	adds r0, r5, #0	@ 0009fc74 281c
.org 0x9fc76
	movs r2, #3	@ 0009fc76 0322
.org 0x9fc78
	bl 0xdfef0	@ 0009fc78 40f03af9
.org 0x9fc7c
	movs r0, #63	@ 0009fc7c 3f20
.org 0x9fc7e
	bl 0x2b10	@ 0009fc7e 62f747ff
.org 0x9fc82
	ldrb r0, [r6, #13]	@ 0009fc82 707b
.org 0x9fc84
	adds r0, #1	@ 0009fc84 0130
.org 0x9fc86
	strb r0, [r6, #13]	@ 0009fc86 7073
.org 0x9fc88
	adds r0, r7, #0	@ 0009fc88 381c
.org 0x9fc8a
	adds r0, #217	@ 0009fc8a d930
.org 0x9fc8c
	ldrb r1, [r6, #17]	@ 0009fc8c 717c
.org 0x9fc8e
	adds r0, r0, r1	@ 0009fc8e 4018
.org 0x9fc90
	movs r2, #0	@ 0009fc90 0022
.org 0x9fc92
	movs r1, #1	@ 0009fc92 0121
.org 0x9fc94
	strb r1, [r0, #0]	@ 0009fc94 0170
.org 0x9fc96
	adds r0, r6, #0	@ 0009fc96 301c
.org 0x9fc98
	adds r0, #140	@ 0009fc98 8c30
.org 0x9fc9a
	str r2, [r0, #0]	@ 0009fc9a 0260
.org 0x9fc9c
	adds r0, #4	@ 0009fc9c 0430
.org 0x9fc9e
	str r2, [r0, #0]	@ 0009fc9e 0260
.org 0x9fca0
	adds r0, #4	@ 0009fca0 0430
.org 0x9fca2
	strb r2, [r0, #0]	@ 0009fca2 0270
.org 0x9fca4
	ldrb r1, [r6, #10]	@ 0009fca4 b17a
.org 0x9fca6
	movs r0, #251	@ 0009fca6 fb20
.org 0x9fca8
	ands r0, r1	@ 0009fca8 0840
.org 0x9fcaa
	movs r1, #254	@ 0009fcaa fe21
.org 0x9fcac
	ands r0, r1	@ 0009fcac 0840
.org 0x9fcae
	strb r0, [r6, #10]	@ 0009fcae b072
.org 0x9fcb0
	ldrb r0, [r7, #13]	@ 0009fcb0 787b
.org 0x9fcb2
	cmp r0, #12	@ 0009fcb2 0c28
.org 0x9fcb4
	bhi.n 0x9fcc8	@ 0009fcb4 08d8
.org 0x9fcb6
	ldr r1, [pc, #40]	@ 0009fcb6 0a49
.org 0x9fcb8
	ldrb r0, [r6, #9]	@ 0009fcb8 707a
.org 0x9fcba
	lsls r0, r0, #2	@ 0009fcba 8000
.org 0x9fcbc
	adds r0, r0, r1	@ 0009fcbc 4018
.org 0x9fcbe
	movs r1, #4	@ 0009fcbe 0421
.org 0x9fcc0
	str r1, [r6, #12]	@ 0009fcc0 f160
.org 0x9fcc2
	ldr r0, [r0, #0]	@ 0009fcc2 0068
.org 0x9fcc4
	ldr r0, [r0, #16]	@ 0009fcc4 0069
.org 0x9fcc6
	str r0, [r6, #20]	@ 0009fcc6 7061
.org 0x9fcc8
	pop {r4, r5, r6, r7}	@ 0009fcc8 f0bc
.org 0x9fcca
	pop {r0}	@ 0009fcca 01bc
.org 0x9fccc
	bx r0	@ 0009fccc 0047
