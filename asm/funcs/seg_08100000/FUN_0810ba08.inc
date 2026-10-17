@ FUN_0810ba08  entry 0x0810ba08  size 142
.thumb
.org 0x10ba08
FUN_0810ba08:
	push {r4, r5, lr}	@ 0010ba08 30b5
.org 0x10ba0a
	adds r5, r0, #0	@ 0010ba0a 051c
.org 0x10ba0c
	ldr r0, [r5, #40]	@ 0010ba0c a86a
.org 0x10ba0e
	ldr r1, [pc, #28]	@ 0010ba0e 0749
.org 0x10ba10
	adds r0, r0, r1	@ 0010ba10 4018
.org 0x10ba12
	ldr r3, [r0, #0]	@ 0010ba12 0368
.org 0x10ba14
	ldrb r2, [r5, #17]	@ 0010ba14 6a7c
.org 0x10ba16
	cmp r2, #0	@ 0010ba16 002a
.org 0x10ba18
	bne.n 0x10ba30	@ 0010ba18 0ad1
.org 0x10ba1a
	adds r1, r3, #0	@ 0010ba1a 191c
.org 0x10ba1c
	adds r1, #241	@ 0010ba1c f131
.org 0x10ba1e
	ldrb r0, [r5, #18]	@ 0010ba1e a87c
.org 0x10ba20
	ldrb r1, [r1, #0]	@ 0010ba20 0978
.org 0x10ba22
	cmp r0, r1	@ 0010ba22 8842
.org 0x10ba24
	beq.n 0x10ba4a	@ 0010ba24 11d0
.org 0x10ba26
	strb r2, [r5, #14]	@ 0010ba26 aa73
.org 0x10ba28
	b.n 0x10ba4a	@ 0010ba28 0fe0
.org 0x10ba2a
	.byte 0x00	@ 0010ba2a data
.org 0x10ba2b
	.byte 0x00	@ 0010ba2b data
.org 0x10ba2c
	.byte 0xa8,0x63,0x00,0x00	@ 0010ba2c data
.org 0x10ba30
	cmp r2, #1	@ 0010ba30 012a
.org 0x10ba32
	bne.n 0x10ba3a	@ 0010ba32 02d1
.org 0x10ba34
	adds r1, r3, #0	@ 0010ba34 191c
.org 0x10ba36
	adds r1, #242	@ 0010ba36 f231
.org 0x10ba38
	b.n 0x10ba3e	@ 0010ba38 01e0
.org 0x10ba3a
	adds r1, r3, #0	@ 0010ba3a 191c
.org 0x10ba3c
	adds r1, #243	@ 0010ba3c f331
.org 0x10ba3e
	ldrb r0, [r5, #18]	@ 0010ba3e a87c
.org 0x10ba40
	ldrb r1, [r1, #0]	@ 0010ba40 0978
.org 0x10ba42
	cmp r0, r1	@ 0010ba42 8842
.org 0x10ba44
	beq.n 0x10ba4a	@ 0010ba44 01d0
.org 0x10ba46
	movs r0, #0	@ 0010ba46 0020
.org 0x10ba48
	strb r0, [r5, #14]	@ 0010ba48 a873
.org 0x10ba4a
	ldrb r0, [r5, #14]	@ 0010ba4a a87b
.org 0x10ba4c
	cmp r0, #0	@ 0010ba4c 0028
.org 0x10ba4e
	bne.n 0x10ba90	@ 0010ba4e 1fd1
.org 0x10ba50
	ldrb r0, [r5, #17]	@ 0010ba50 687c
.org 0x10ba52
	cmp r0, #0	@ 0010ba52 0028
.org 0x10ba54
	bne.n 0x10ba62	@ 0010ba54 05d1
.org 0x10ba56
	adds r4, r3, #0	@ 0010ba56 1c1c
.org 0x10ba58
	adds r4, #241	@ 0010ba58 f134
.org 0x10ba5a
	ldrb r1, [r4, #0]	@ 0010ba5a 2178
.org 0x10ba5c
	movs r2, #144	@ 0010ba5c 9022
.org 0x10ba5e
	lsls r2, r2, #8	@ 0010ba5e 1202
.org 0x10ba60
	b.n 0x10ba7c	@ 0010ba60 0ce0
.org 0x10ba62
	cmp r0, #1	@ 0010ba62 0128
.org 0x10ba64
	bne.n 0x10ba72	@ 0010ba64 05d1
.org 0x10ba66
	adds r4, r3, #0	@ 0010ba66 1c1c
.org 0x10ba68
	adds r4, #242	@ 0010ba68 f234
.org 0x10ba6a
	ldrb r1, [r4, #0]	@ 0010ba6a 2178
.org 0x10ba6c
	movs r2, #145	@ 0010ba6c 9122
.org 0x10ba6e
	lsls r2, r2, #8	@ 0010ba6e 1202
.org 0x10ba70
	b.n 0x10ba7c	@ 0010ba70 04e0
.org 0x10ba72
	adds r4, r3, #0	@ 0010ba72 1c1c
.org 0x10ba74
	adds r4, #243	@ 0010ba74 f334
.org 0x10ba76
	ldrb r1, [r4, #0]	@ 0010ba76 2178
.org 0x10ba78
	movs r2, #146	@ 0010ba78 9222
.org 0x10ba7a
	lsls r2, r2, #8	@ 0010ba7a 1202
.org 0x10ba7c
	adds r0, r2, #0	@ 0010ba7c 101c
.org 0x10ba7e
	orrs r1, r0	@ 0010ba7e 0143
.org 0x10ba80
	adds r0, r5, #0	@ 0010ba80 281c
.org 0x10ba82
	bl 0x1cf00	@ 0010ba82 11f73dfa
.org 0x10ba86
	ldrb r0, [r4, #0]	@ 0010ba86 2078
.org 0x10ba88
	strb r0, [r5, #18]	@ 0010ba88 a874
.org 0x10ba8a
	ldrb r0, [r5, #14]	@ 0010ba8a a87b
.org 0x10ba8c
	adds r0, #1	@ 0010ba8c 0130
.org 0x10ba8e
	strb r0, [r5, #14]	@ 0010ba8e a873
.org 0x10ba90
	adds r0, r5, #0	@ 0010ba90 281c
.org 0x10ba92
	bl 0x1cff0	@ 0010ba92 11f7adfa
