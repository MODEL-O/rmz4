@ FUN_080b4d4c  entry 0x080b4d4c  size 192
.thumb
.org 0xb4d4c
FUN_080b4d4c:
	push {r4, r5, lr}	@ 000b4d4c 30b5
.org 0xb4d4e
	adds r5, r0, #0	@ 000b4d4e 051c
.org 0xb4d50
	adds r0, #180	@ 000b4d50 b430
.org 0xb4d52
	ldrb r0, [r0, #0]	@ 000b4d52 0078
.org 0xb4d54
	cmp r0, #0	@ 000b4d54 0028
.org 0xb4d56
	bne.n 0xb4dbe	@ 000b4d56 32d1
.org 0xb4d58
	adds r0, r5, #0	@ 000b4d58 281c
.org 0xb4d5a
	adds r0, #140	@ 000b4d5a 8c30
.org 0xb4d5c
	ldr r0, [r0, #0]	@ 000b4d5c 0068
.org 0xb4d5e
	movs r1, #128	@ 000b4d5e 8021
.org 0xb4d60
	lsls r1, r1, #9	@ 000b4d60 4902
.org 0xb4d62
	ands r0, r1	@ 000b4d62 0840
.org 0xb4d64
	cmp r0, #0	@ 000b4d64 0028
.org 0xb4d66
	beq.n 0xb4da6	@ 000b4d66 1ed0
.org 0xb4d68
	ldr r0, [r5, #84]	@ 000b4d68 686d
.org 0xb4d6a
	ldr r1, [r5, #88]	@ 000b4d6a a96d
.org 0xb4d6c
	movs r2, #128	@ 000b4d6c 8022
.org 0xb4d6e
	lsls r2, r2, #2	@ 000b4d6e 9200
.org 0xb4d70
	adds r1, r1, r2	@ 000b4d70 8918
.org 0xb4d72
	bl 0x7c7c	@ 000b4d72 52f783ff
.org 0xb4d76
	lsls r0, r0, #16	@ 000b4d76 0004
.org 0xb4d78
	cmp r0, #0	@ 000b4d78 0028
.org 0xb4d7a
	bne.n 0xb4d92	@ 000b4d7a 0ad1
.org 0xb4d7c
	adds r4, r5, #0	@ 000b4d7c 2c1c
.org 0xb4d7e
	adds r4, #84	@ 000b4d7e 5434
.org 0xb4d80
	ldrb r2, [r5, #10]	@ 000b4d80 aa7a
.org 0xb4d82
	lsrs r2, r2, #4	@ 000b4d82 1209
.org 0xb4d84
	movs r0, #1	@ 000b4d84 0120
.org 0xb4d86
	ands r2, r0	@ 000b4d86 0240
.org 0xb4d88
	adds r0, r4, #0	@ 000b4d88 201c
.org 0xb4d8a
	movs r1, #0	@ 000b4d8a 0021
.org 0xb4d8c
	bl 0xe70d4	@ 000b4d8c 32f0a2f9
.org 0xb4d90
	b.n 0xb4dd4	@ 000b4d90 20e0
.org 0xb4d92
	ldr r0, [r5, #84]	@ 000b4d92 686d
.org 0xb4d94
	ldr r1, [r5, #88]	@ 000b4d94 a96d
.org 0xb4d96
	bl 0x8534	@ 000b4d96 53f7cdfb
.org 0xb4d9a
	str r0, [r5, #88]	@ 000b4d9a a865
.org 0xb4d9c
	adds r4, r5, #0	@ 000b4d9c 2c1c
.org 0xb4d9e
	adds r4, #84	@ 000b4d9e 5434
.org 0xb4da0
	movs r1, #128	@ 000b4da0 8021
.org 0xb4da2
	lsls r1, r1, #1	@ 000b4da2 4900
.org 0xb4da4
	b.n 0xb4dae	@ 000b4da4 03e0
.org 0xb4da6
	adds r4, r5, #0	@ 000b4da6 2c1c
.org 0xb4da8
	adds r4, #84	@ 000b4da8 5434
.org 0xb4daa
	movs r1, #128	@ 000b4daa 8021
.org 0xb4dac
	lsls r1, r1, #2	@ 000b4dac 8900
.org 0xb4dae
	ldrb r2, [r5, #10]	@ 000b4dae aa7a
.org 0xb4db0
	lsrs r2, r2, #4	@ 000b4db0 1209
.org 0xb4db2
	movs r0, #1	@ 000b4db2 0120
.org 0xb4db4
	ands r2, r0	@ 000b4db4 0240
.org 0xb4db6
	adds r0, r4, #0	@ 000b4db6 201c
.org 0xb4db8
	bl 0xe70d4	@ 000b4db8 32f08cf9
.org 0xb4dbc
	b.n 0xb4dd4	@ 000b4dbc 0ae0
.org 0xb4dbe
	adds r4, r5, #0	@ 000b4dbe 2c1c
.org 0xb4dc0
	adds r4, #84	@ 000b4dc0 5434
.org 0xb4dc2
	movs r1, #192	@ 000b4dc2 c021
.org 0xb4dc4
	lsls r1, r1, #2	@ 000b4dc4 8900
.org 0xb4dc6
	ldrb r2, [r5, #10]	@ 000b4dc6 aa7a
.org 0xb4dc8
	lsrs r2, r2, #4	@ 000b4dc8 1209
.org 0xb4dca
	movs r0, #1	@ 000b4dca 0120
.org 0xb4dcc
	ands r2, r0	@ 000b4dcc 0240
.org 0xb4dce
	adds r0, r4, #0	@ 000b4dce 201c
.org 0xb4dd0
	bl 0xe70d4	@ 000b4dd0 32f080f9
.org 0xb4dd4
	ldr r2, [pc, #52]	@ 000b4dd4 0d4a
.org 0xb4dd6
	ldrh r1, [r2, #12]	@ 000b4dd6 9189
.org 0xb4dd8
	ldr r0, [pc, #52]	@ 000b4dd8 0d48
.org 0xb4dda
	cmp r1, r0	@ 000b4dda 8142
.org 0xb4ddc
	bhi.n 0xb4de2	@ 000b4ddc 01d8
.org 0xb4dde
	adds r0, r1, #1	@ 000b4dde 481c
.org 0xb4de0
	strh r0, [r2, #12]	@ 000b4de0 9081
.org 0xb4de2
	adds r0, r5, #0	@ 000b4de2 281c
.org 0xb4de4
	adds r1, r4, #0	@ 000b4de4 211c
.org 0xb4de6
	bl 0x2abe0	@ 000b4de6 75f7fbfe
.org 0xb4dea
	movs r0, #0	@ 000b4dea 0020
.org 0xb4dec
	movs r1, #23	@ 000b4dec 1721
.org 0xb4dee
	adds r2, r4, #0	@ 000b4dee 221c
.org 0xb4df0
	bl 0x2ab88	@ 000b4df0 75f7cafe
.org 0xb4df4
	ldr r1, [pc, #28]	@ 000b4df4 0749
.org 0xb4df6
	ldrb r0, [r5, #9]	@ 000b4df6 687a
.org 0xb4df8
	lsls r0, r0, #2	@ 000b4df8 8000
.org 0xb4dfa
	adds r0, r0, r1	@ 000b4dfa 4018
.org 0xb4dfc
	movs r1, #4	@ 000b4dfc 0421
.org 0xb4dfe
	str r1, [r5, #12]	@ 000b4dfe e960
.org 0xb4e00
	ldr r0, [r0, #0]	@ 000b4e00 0068
.org 0xb4e02
	ldr r0, [r0, #16]	@ 000b4e02 0069
.org 0xb4e04
	str r0, [r5, #20]	@ 000b4e04 6861
.org 0xb4e06
	pop {r4, r5}	@ 000b4e06 30bc
.org 0xb4e08
	pop {r0}	@ 000b4e08 01bc
.org 0xb4e0a
	bx r0	@ 000b4e0a 0047
