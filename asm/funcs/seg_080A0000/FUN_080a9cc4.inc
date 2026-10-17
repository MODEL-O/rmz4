@ FUN_080a9cc4  entry 0x080a9cc4  size 174
.thumb
.org 0xa9cc4
FUN_080a9cc4:
	push {r4, r5, lr}	@ 000a9cc4 30b5
.org 0xa9cc6
	adds r5, r0, #0	@ 000a9cc6 051c
.org 0xa9cc8
	ldrb r0, [r5, #14]	@ 000a9cc8 a87b
.org 0xa9cca
	cmp r0, #0	@ 000a9cca 0028
.org 0xa9ccc
	bne.n 0xa9cf0	@ 000a9ccc 10d1
.org 0xa9cce
	adds r0, r5, #0	@ 000a9cce 281c
.org 0xa9cd0
	adds r0, #188	@ 000a9cd0 bc30
.org 0xa9cd2
	ldr r2, [pc, #160]	@ 000a9cd2 284a
.org 0xa9cd4
	adds r1, r2, #0	@ 000a9cd4 111c
.org 0xa9cd6
	ldrb r0, [r0, #0]	@ 000a9cd6 0078
.org 0xa9cd8
	adds r1, r1, r0	@ 000a9cd8 0918
.org 0xa9cda
	lsls r1, r1, #16	@ 000a9cda 0904
.org 0xa9cdc
	lsrs r1, r1, #16	@ 000a9cdc 090c
.org 0xa9cde
	adds r0, r5, #0	@ 000a9cde 281c
.org 0xa9ce0
	bl 0x1cf00	@ 000a9ce0 73f70ef9
.org 0xa9ce4
	adds r0, r5, #0	@ 000a9ce4 281c
.org 0xa9ce6
	bl 0xa9a98	@ 000a9ce6 fff7d7fe
.org 0xa9cea
	ldrb r0, [r5, #14]	@ 000a9cea a87b
.org 0xa9cec
	adds r0, #1	@ 000a9cec 0130
.org 0xa9cee
	strb r0, [r5, #14]	@ 000a9cee a873
.org 0xa9cf0
	adds r0, r5, #0	@ 000a9cf0 281c
.org 0xa9cf2
	adds r0, #113	@ 000a9cf2 7130
.org 0xa9cf4
	ldrb r0, [r0, #0]	@ 000a9cf4 0078
.org 0xa9cf6
	lsls r0, r0, #24	@ 000a9cf6 0006
.org 0xa9cf8
	asrs r0, r0, #24	@ 000a9cf8 0016
.org 0xa9cfa
	cmp r0, #2	@ 000a9cfa 0228
.org 0xa9cfc
	ble.n 0xa9d4e	@ 000a9cfc 27dd
.org 0xa9cfe
	ldr r0, [r5, #112]	@ 000a9cfe 286f
.org 0xa9d00
	ldr r1, [pc, #116]	@ 000a9d00 1d49
.org 0xa9d02
	ands r0, r1	@ 000a9d02 0840
.org 0xa9d04
	ldr r1, [pc, #116]	@ 000a9d04 1d49
.org 0xa9d06
	cmp r0, r1	@ 000a9d06 8842
.org 0xa9d08
	bne.n 0xa9d20	@ 000a9d08 0ad1
.org 0xa9d0a
	adds r4, r5, #0	@ 000a9d0a 2c1c
.org 0xa9d0c
	adds r4, #116	@ 000a9d0c 7434
.org 0xa9d0e
	ldr r1, [pc, #112]	@ 000a9d0e 1c49
.org 0xa9d10
	adds r0, r4, #0	@ 000a9d10 201c
.org 0xa9d12
	bl 0x5784	@ 000a9d12 5bf737fd
.org 0xa9d16
	ldr r0, [pc, #108]	@ 000a9d16 1b48
.org 0xa9d18
	str r0, [r4, #36]	@ 000a9d18 6062
.org 0xa9d1a
	ldr r0, [pc, #108]	@ 000a9d1a 1b48
.org 0xa9d1c
	bl 0x2b10	@ 000a9d1c 58f7f8fe
.org 0xa9d20
	adds r0, r5, #0	@ 000a9d20 281c
.org 0xa9d22
	bl 0xa9b2c	@ 000a9d22 fff703ff
.org 0xa9d26
	lsls r0, r0, #24	@ 000a9d26 0006
.org 0xa9d28
	cmp r0, #0	@ 000a9d28 0028
.org 0xa9d2a
	bne.n 0xa9d34	@ 000a9d2a 03d1
.org 0xa9d2c
	ldr r0, [r5, #84]	@ 000a9d2c 686d
.org 0xa9d2e
	ldr r1, [r5, #92]	@ 000a9d2e e96d
.org 0xa9d30
	adds r0, r0, r1	@ 000a9d30 4018
.org 0xa9d32
	str r0, [r5, #84]	@ 000a9d32 6865
.org 0xa9d34
	adds r0, r5, #0	@ 000a9d34 281c
.org 0xa9d36
	bl 0xa9b7c	@ 000a9d36 fff721ff
.org 0xa9d3a
	lsls r0, r0, #24	@ 000a9d3a 0006
.org 0xa9d3c
	lsrs r0, r0, #24	@ 000a9d3c 000e
.org 0xa9d3e
	cmp r0, #1	@ 000a9d3e 0128
.org 0xa9d40
	bne.n 0xa9d46	@ 000a9d40 01d1
.org 0xa9d42
	movs r0, #0	@ 000a9d42 0020
.org 0xa9d44
	str r0, [r5, #96]	@ 000a9d44 2866
.org 0xa9d46
	ldr r0, [r5, #88]	@ 000a9d46 a86d
.org 0xa9d48
	ldr r1, [r5, #96]	@ 000a9d48 296e
.org 0xa9d4a
	adds r0, r0, r1	@ 000a9d4a 4018
.org 0xa9d4c
	str r0, [r5, #88]	@ 000a9d4c a865
.org 0xa9d4e
	ldr r0, [r5, #112]	@ 000a9d4e 286f
.org 0xa9d50
	ldr r1, [pc, #36]	@ 000a9d50 0949
.org 0xa9d52
	ands r0, r1	@ 000a9d52 0840
.org 0xa9d54
	ldr r1, [pc, #52]	@ 000a9d54 0d49
.org 0xa9d56
	cmp r0, r1	@ 000a9d56 8842
.org 0xa9d58
	bne.n 0xa9d6c	@ 000a9d58 08d1
.org 0xa9d5a
	movs r1, #0	@ 000a9d5a 0021
.org 0xa9d5c
	movs r0, #1	@ 000a9d5c 0120
.org 0xa9d5e
	strb r0, [r5, #13]	@ 000a9d5e 6873
.org 0xa9d60
	strb r1, [r5, #14]	@ 000a9d60 a973
.org 0xa9d62
	adds r0, r5, #0	@ 000a9d62 281c
.org 0xa9d64
	adds r0, #116	@ 000a9d64 7430
.org 0xa9d66
	ldr r1, [pc, #40]	@ 000a9d66 0a49
.org 0xa9d68
	bl 0x5784	@ 000a9d68 5bf70cfd
.org 0xa9d6c
	pop {r4, r5}	@ 000a9d6c 30bc
.org 0xa9d6e
	pop {r0}	@ 000a9d6e 01bc
.org 0xa9d70
	bx r0	@ 000a9d70 0047
