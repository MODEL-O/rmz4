@ FUN_08049d3c  entry 0x08049d3c  size 118
.thumb
.org 0x49d3c
FUN_08049d3c:
	push {r4, r5, lr}	@ 00049d3c 30b5
.org 0x49d3e
	adds r5, r0, #0	@ 00049d3e 051c
.org 0x49d40
	ldrb r1, [r5, #13]	@ 00049d40 697b
.org 0x49d42
	cmp r1, #0	@ 00049d42 0029
.org 0x49d44
	bne.n 0x49d94	@ 00049d44 26d1
.org 0x49d46
	adds r0, #140	@ 00049d46 8c30
.org 0x49d48
	str r1, [r0, #0]	@ 00049d48 0160
.org 0x49d4a
	adds r0, #4	@ 00049d4a 0430
.org 0x49d4c
	str r1, [r0, #0]	@ 00049d4c 0160
.org 0x49d4e
	adds r0, #4	@ 00049d4e 0430
.org 0x49d50
	strb r1, [r0, #0]	@ 00049d50 0170
.org 0x49d52
	ldrb r1, [r5, #10]	@ 00049d52 a97a
.org 0x49d54
	movs r0, #251	@ 00049d54 fb20
.org 0x49d56
	ands r0, r1	@ 00049d56 0840
.org 0x49d58
	movs r1, #254	@ 00049d58 fe21
.org 0x49d5a
	ands r0, r1	@ 00049d5a 0840
.org 0x49d5c
	strb r0, [r5, #10]	@ 00049d5c a872
.org 0x49d5e
	adds r4, r5, #0	@ 00049d5e 2c1c
.org 0x49d60
	adds r4, #84	@ 00049d60 5434
.org 0x49d62
	movs r0, #1	@ 00049d62 0120
.org 0x49d64
	adds r1, r4, #0	@ 00049d64 211c
.org 0x49d66
	bl 0xd0c88	@ 00049d66 86f08fff
.org 0x49d6a
	movs r0, #53	@ 00049d6a 3520
.org 0x49d6c
	bl 0x2b10	@ 00049d6c b8f7d0fe
.org 0x49d70
	ldr r0, [r5, #40]	@ 00049d70 a86a
.org 0x49d72
	adds r1, r4, #0	@ 00049d72 211c
.org 0x49d74
	movs r2, #0	@ 00049d74 0022
.org 0x49d76
	bl 0x49738	@ 00049d76 fff7dffc
.org 0x49d7a
	ldr r0, [r5, #40]	@ 00049d7a a86a
.org 0x49d7c
	adds r1, r4, #0	@ 00049d7c 211c
.org 0x49d7e
	movs r2, #1	@ 00049d7e 0122
.org 0x49d80
	bl 0x49738	@ 00049d80 fff7dafc
.org 0x49d84
	ldr r0, [r5, #40]	@ 00049d84 a86a
.org 0x49d86
	adds r1, r4, #0	@ 00049d86 211c
.org 0x49d88
	movs r2, #2	@ 00049d88 0222
.org 0x49d8a
	bl 0x49738	@ 00049d8a fff7d5fc
.org 0x49d8e
	ldrb r0, [r5, #13]	@ 00049d8e 687b
.org 0x49d90
	adds r0, #1	@ 00049d90 0130
.org 0x49d92
	strb r0, [r5, #13]	@ 00049d92 6873
.org 0x49d94
	adds r0, r5, #0	@ 00049d94 281c
.org 0x49d96
	bl 0x1cff0	@ 00049d96 d3f72bf9
.org 0x49d9a
	ldr r1, [pc, #24]	@ 00049d9a 0649
.org 0x49d9c
	ldrb r0, [r5, #9]	@ 00049d9c 687a
.org 0x49d9e
	lsls r0, r0, #2	@ 00049d9e 8000
.org 0x49da0
	adds r0, r0, r1	@ 00049da0 4018
.org 0x49da2
	movs r1, #4	@ 00049da2 0421
.org 0x49da4
	str r1, [r5, #12]	@ 00049da4 e960
.org 0x49da6
	ldr r0, [r0, #0]	@ 00049da6 0068
.org 0x49da8
	ldr r0, [r0, #16]	@ 00049da8 0069
.org 0x49daa
	str r0, [r5, #20]	@ 00049daa 6861
.org 0x49dac
	pop {r4, r5}	@ 00049dac 30bc
.org 0x49dae
	pop {r0}	@ 00049dae 01bc
.org 0x49db0
	bx r0	@ 00049db0 0047
