@ FUN_080e9af8  entry 0x080e9af8  size 126
.thumb
.org 0xe9af8
FUN_080e9af8:
	push {r4, r5, lr}	@ 000e9af8 30b5
.org 0xe9afa
	adds r4, r0, #0	@ 000e9afa 041c
.org 0xe9afc
	ldrb r0, [r4, #17]	@ 000e9afc 607c
.org 0xe9afe
	cmp r0, #0	@ 000e9afe 0028
.org 0xe9b00
	beq.n 0xe9b64	@ 000e9b00 30d0
.org 0xe9b02
	ldr r5, [r4, #40]	@ 000e9b02 a56a
.org 0xe9b04
	ldrb r0, [r5, #12]	@ 000e9b04 287b
.org 0xe9b06
	cmp r0, #1	@ 000e9b06 0128
.org 0xe9b08
	bls.n 0xe9b28	@ 000e9b08 0ed9
.org 0xe9b0a
	ldr r1, [pc, #24]	@ 000e9b0a 0649
.org 0xe9b0c
	ldrb r0, [r4, #9]	@ 000e9b0c 607a
.org 0xe9b0e
	lsls r0, r0, #2	@ 000e9b0e 8000
.org 0xe9b10
	adds r0, r0, r1	@ 000e9b10 4018
.org 0xe9b12
	movs r1, #2	@ 000e9b12 0221
.org 0xe9b14
	str r1, [r4, #12]	@ 000e9b14 e160
.org 0xe9b16
	ldr r0, [r0, #0]	@ 000e9b16 0068
.org 0xe9b18
	ldr r0, [r0, #8]	@ 000e9b18 8068
.org 0xe9b1a
	str r0, [r4, #20]	@ 000e9b1a 6061
.org 0xe9b1c
	adds r0, r4, #0	@ 000e9b1c 201c
.org 0xe9b1e
	bl 0xe9b80	@ 000e9b1e 00f02ff8
.org 0xe9b22
	b.n 0xe9b74	@ 000e9b22 27e0
.org 0xe9b24
	.byte 0xfc,0x92,0x86,0x08	@ 000e9b24 data
.org 0xe9b28
	adds r2, r4, #0	@ 000e9b28 221c
.org 0xe9b2a
	adds r2, #184	@ 000e9b2a b832
.org 0xe9b2c
	adds r0, r5, #0	@ 000e9b2c 281c
.org 0xe9b2e
	adds r0, #184	@ 000e9b2e b830
.org 0xe9b30
	ldrb r1, [r0, #0]	@ 000e9b30 0178
.org 0xe9b32
	ldrb r0, [r2, #0]	@ 000e9b32 1078
.org 0xe9b34
	cmp r0, r1	@ 000e9b34 8842
.org 0xe9b36
	beq.n 0xe9b52	@ 000e9b36 0cd0
.org 0xe9b38
	strb r1, [r2, #0]	@ 000e9b38 1170
.org 0xe9b3a
	ldrb r0, [r5, #30]	@ 000e9b3a a87f
.org 0xe9b3c
	lsls r0, r0, #8	@ 000e9b3c 0002
.org 0xe9b3e
	adds r1, r5, #0	@ 000e9b3e 291c
.org 0xe9b40
	adds r1, #112	@ 000e9b40 7031
.org 0xe9b42
	ldrb r1, [r1, #0]	@ 000e9b42 0978
.org 0xe9b44
	orrs r1, r0	@ 000e9b44 0143
.org 0xe9b46
	adds r0, r4, #0	@ 000e9b46 201c
.org 0xe9b48
	bl 0x1cf00	@ 000e9b48 33f7daf9
.org 0xe9b4c
	adds r0, r4, #0	@ 000e9b4c 201c
.org 0xe9b4e
	bl 0x1cff0	@ 000e9b4e 33f74ffa
.org 0xe9b52
	ldr r0, [r5, #60]	@ 000e9b52 e86b
.org 0xe9b54
	str r0, [r4, #60]	@ 000e9b54 e063
.org 0xe9b56
	adds r0, r5, #0	@ 000e9b56 281c
.org 0xe9b58
	adds r0, #78	@ 000e9b58 4e30
.org 0xe9b5a
	ldrb r1, [r0, #0]	@ 000e9b5a 0178
.org 0xe9b5c
	adds r0, r4, #0	@ 000e9b5c 201c
.org 0xe9b5e
	adds r0, #78	@ 000e9b5e 4e30
.org 0xe9b60
	strb r1, [r0, #0]	@ 000e9b60 0170
.org 0xe9b62
	b.n 0xe9b74	@ 000e9b62 07e0
.org 0xe9b64
	ldr r0, [pc, #20]	@ 000e9b64 0548
.org 0xe9b66
	ldrb r1, [r4, #13]	@ 000e9b66 617b
.org 0xe9b68
	lsls r1, r1, #2	@ 000e9b68 8900
.org 0xe9b6a
	adds r1, r1, r0	@ 000e9b6a 0918
.org 0xe9b6c
	ldr r1, [r1, #0]	@ 000e9b6c 0968
.org 0xe9b6e
	adds r0, r4, #0	@ 000e9b6e 201c
.org 0xe9b70
	bl 0x128f80	@ 000e9b70 3ff006fa
.org 0xe9b74
	pop {r4, r5}	@ 000e9b74 30bc
