@ FUN_080ace70  entry 0x080ace70  size 138
.thumb
.org 0xace70
FUN_080ace70:
	push {r4, r5, lr}	@ 000ace70 30b5
.org 0xace72
	sub sp, #8	@ 000ace72 82b0
.org 0xace74
	adds r4, r0, #0	@ 000ace74 041c
.org 0xace76
	ldr r0, [pc, #72]	@ 000ace76 1248
.org 0xace78
	ldr r1, [r0, #4]	@ 000ace78 4168
.org 0xace7a
	ldr r0, [r0, #0]	@ 000ace7a 0068
.org 0xace7c
	str r0, [sp, #0]	@ 000ace7c 0090
.org 0xace7e
	str r1, [sp, #4]	@ 000ace7e 0191
.org 0xace80
	ldr r5, [r4, #40]	@ 000ace80 a56a
.org 0xace82
	adds r0, r5, #0	@ 000ace82 281c
.org 0xace84
	adds r0, #186	@ 000ace84 ba30
.org 0xace86
	ldrb r2, [r0, #0]	@ 000ace86 0278
.org 0xace88
	ldrb r0, [r4, #17]	@ 000ace88 607c
.org 0xace8a
	asrs r2, r0	@ 000ace8a 0241
.org 0xace8c
	movs r0, #1	@ 000ace8c 0120
.org 0xace8e
	ands r2, r0	@ 000ace8e 0240
.org 0xace90
	ldrb r0, [r5, #12]	@ 000ace90 287b
.org 0xace92
	cmp r0, #1	@ 000ace92 0128
.org 0xace94
	bhi.n 0xacea6	@ 000ace94 07d8
.org 0xace96
	adds r0, r4, #0	@ 000ace96 201c
.org 0xace98
	adds r0, #140	@ 000ace98 8c30
.org 0xace9a
	ldr r1, [r0, #0]	@ 000ace9a 0168
.org 0xace9c
	movs r0, #128	@ 000ace9c 8020
.org 0xace9e
	lsls r0, r0, #2	@ 000ace9e 8000
.org 0xacea0
	ands r1, r0	@ 000acea0 0140
.org 0xacea2
	cmp r1, #0	@ 000acea2 0029
.org 0xacea4
	beq.n 0xacec8	@ 000acea4 10d0
.org 0xacea6
	ldr r1, [pc, #28]	@ 000acea6 0749
.org 0xacea8
	ldrb r0, [r4, #9]	@ 000acea8 607a
.org 0xaceaa
	lsls r0, r0, #2	@ 000aceaa 8000
.org 0xaceac
	adds r0, r0, r1	@ 000aceac 4018
.org 0xaceae
	movs r1, #2	@ 000aceae 0221
.org 0xaceb0
	str r1, [r4, #12]	@ 000aceb0 e160
.org 0xaceb2
	ldr r0, [r0, #0]	@ 000aceb2 0068
.org 0xaceb4
	ldr r0, [r0, #8]	@ 000aceb4 8068
.org 0xaceb6
	str r0, [r4, #20]	@ 000aceb6 6061
.org 0xaceb8
	adds r0, r4, #0	@ 000aceb8 201c
.org 0xaceba
	bl 0xad364	@ 000aceba 00f053fa
.org 0xacebe
	b.n 0xacefa	@ 000acebe 1ce0
.org 0xacec0
	.byte 0xa4,0x9d,0x12,0x08	@ 000acec0 data
.org 0xacec4
	.byte 0x40,0xdb,0x85,0x08	@ 000acec4 data
.org 0xacec8
	ldrb r3, [r4, #13]	@ 000acec8 637b
.org 0xaceca
	cmp r3, #0	@ 000aceca 002b
.org 0xacecc
	beq.n 0xacede	@ 000acecc 07d0
.org 0xacece
	adds r0, r5, #0	@ 000acece 281c
.org 0xaced0
	adds r0, #183	@ 000aced0 b730
.org 0xaced2
	ldrb r0, [r0, #0]	@ 000aced2 0078
.org 0xaced4
	cmp r3, r0	@ 000aced4 8342
.org 0xaced6
	beq.n 0xacede	@ 000aced6 02d0
.org 0xaced8
	strb r0, [r4, #13]	@ 000aced8 6073
.org 0xaceda
	strb r1, [r4, #14]	@ 000aceda a173
.org 0xacedc
	strb r1, [r4, #15]	@ 000acedc e173
.org 0xacede
	lsls r0, r2, #2	@ 000acede 9000
.org 0xacee0
	add r0, sp	@ 000acee0 6844
.org 0xacee2
	ldrb r1, [r0, #0]	@ 000acee2 0178
.org 0xacee4
	adds r0, r4, #0	@ 000acee4 201c
.org 0xacee6
	bl 0x1d3d0	@ 000acee6 70f773fa
.org 0xaceea
	ldr r1, [pc, #24]	@ 000aceea 0649
.org 0xaceec
	ldrb r0, [r4, #13]	@ 000aceec 607b
.org 0xaceee
	lsls r0, r0, #2	@ 000aceee 8000
.org 0xacef0
	adds r0, r0, r1	@ 000acef0 4018
.org 0xacef2
	ldr r1, [r0, #0]	@ 000acef2 0168
.org 0xacef4
	adds r0, r4, #0	@ 000acef4 201c
.org 0xacef6
	bl 0x128f80	@ 000acef6 7cf043f8
