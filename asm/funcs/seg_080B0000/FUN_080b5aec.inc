@ FUN_080b5aec  entry 0x080b5aec  size 176
.thumb
.org 0xb5aec
FUN_080b5aec:
	push {r4, r5, r6, lr}	@ 000b5aec 70b5
.org 0xb5aee
	adds r5, r0, #0	@ 000b5aee 051c
.org 0xb5af0
	ldr r6, [r5, #40]	@ 000b5af0 ae6a
.org 0xb5af2
	ldrb r4, [r5, #15]	@ 000b5af2 ec7b
.org 0xb5af4
	cmp r4, #0	@ 000b5af4 002c
.org 0xb5af6
	bne.n 0xb5b26	@ 000b5af6 16d1
.org 0xb5af8
	ldr r0, [pc, #160]	@ 000b5af8 2848
.org 0xb5afa
	bl 0x2b10	@ 000b5afa 4df709f8
.org 0xb5afe
	adds r0, r5, #0	@ 000b5afe 281c
.org 0xb5b00
	adds r0, #140	@ 000b5b00 8c30
.org 0xb5b02
	str r4, [r0, #0]	@ 000b5b02 0460
.org 0xb5b04
	adds r0, #4	@ 000b5b04 0430
.org 0xb5b06
	str r4, [r0, #0]	@ 000b5b06 0460
.org 0xb5b08
	adds r0, #4	@ 000b5b08 0430
.org 0xb5b0a
	strb r4, [r0, #0]	@ 000b5b0a 0470
.org 0xb5b0c
	ldrb r1, [r5, #10]	@ 000b5b0c a97a
.org 0xb5b0e
	movs r0, #251	@ 000b5b0e fb20
.org 0xb5b10
	ands r0, r1	@ 000b5b10 0840
.org 0xb5b12
	strb r0, [r5, #10]	@ 000b5b12 a872
.org 0xb5b14
	ldr r1, [pc, #136]	@ 000b5b14 2249
.org 0xb5b16
	adds r0, r5, #0	@ 000b5b16 281c
.org 0xb5b18
	bl 0x1cf00	@ 000b5b18 67f7f2f9
.org 0xb5b1c
	movs r0, #1	@ 000b5b1c 0120
.org 0xb5b1e
	strb r0, [r5, #18]	@ 000b5b1e a874
.org 0xb5b20
	ldrb r0, [r5, #15]	@ 000b5b20 e87b
.org 0xb5b22
	adds r0, #1	@ 000b5b22 0130
.org 0xb5b24
	strb r0, [r5, #15]	@ 000b5b24 e873
.org 0xb5b26
	adds r0, r5, #0	@ 000b5b26 281c
.org 0xb5b28
	bl 0x1cff0	@ 000b5b28 67f762fa
.org 0xb5b2c
	ldrb r1, [r5, #18]	@ 000b5b2c a97c
.org 0xb5b2e
	adds r0, r1, #1	@ 000b5b2e 481c
.org 0xb5b30
	strb r0, [r5, #18]	@ 000b5b30 a874
.org 0xb5b32
	movs r0, #1	@ 000b5b32 0120
.org 0xb5b34
	ands r0, r1	@ 000b5b34 0840
.org 0xb5b36
	cmp r0, #0	@ 000b5b36 0028
.org 0xb5b38
	bne.n 0xb5b60	@ 000b5b38 12d1
.org 0xb5b3a
	adds r0, r5, #0	@ 000b5b3a 281c
.org 0xb5b3c
	adds r0, #84	@ 000b5b3c 5430
.org 0xb5b3e
	ldr r1, [pc, #100]	@ 000b5b3e 1949
.org 0xb5b40
	ldr r4, [pc, #100]	@ 000b5b40 194c
.org 0xb5b42
	ldr r3, [r4, #0]	@ 000b5b42 2368
.org 0xb5b44
	ldr r2, [pc, #100]	@ 000b5b44 194a
.org 0xb5b46
	muls r3, r2	@ 000b5b46 5343
.org 0xb5b48
	ldr r2, [pc, #100]	@ 000b5b48 194a
.org 0xb5b4a
	adds r3, r3, r2	@ 000b5b4a 9b18
.org 0xb5b4c
	lsls r3, r3, #1	@ 000b5b4c 5b00
.org 0xb5b4e
	lsrs r2, r3, #1	@ 000b5b4e 5a08
.org 0xb5b50
	str r2, [r4, #0]	@ 000b5b50 2260
.org 0xb5b52
	lsrs r3, r3, #17	@ 000b5b52 5b0c
.org 0xb5b54
	movs r2, #1	@ 000b5b54 0122
.org 0xb5b56
	ands r3, r2	@ 000b5b56 1340
.org 0xb5b58
	lsls r3, r3, #4	@ 000b5b58 1b01
.org 0xb5b5a
	movs r2, #0	@ 000b5b5a 0022
.org 0xb5b5c
	bl 0xd4c8c	@ 000b5b5c 1ff096f8
.org 0xb5b60
	adds r0, r5, #0	@ 000b5b60 281c
.org 0xb5b62
	adds r0, #115	@ 000b5b62 7330
.org 0xb5b64
	ldrb r0, [r0, #0]	@ 000b5b64 0078
.org 0xb5b66
	cmp r0, #3	@ 000b5b66 0328
.org 0xb5b68
	bne.n 0xb5b96	@ 000b5b68 15d1
.org 0xb5b6a
	adds r1, r6, #0	@ 000b5b6a 311c
.org 0xb5b6c
	adds r1, #204	@ 000b5b6c cc31
.org 0xb5b6e
	ldrh r2, [r1, #0]	@ 000b5b6e 0a88
.org 0xb5b70
	movs r3, #0	@ 000b5b70 0023
.org 0xb5b72
	ldrsh r0, [r1, r3]	@ 000b5b72 c85e
.org 0xb5b74
	cmp r0, #0	@ 000b5b74 0028
.org 0xb5b76
	beq.n 0xb5b7c	@ 000b5b76 01d0
.org 0xb5b78
	subs r0, r2, #1	@ 000b5b78 501e
.org 0xb5b7a
	strh r0, [r1, #0]	@ 000b5b7a 0880
.org 0xb5b7c
	ldrb r1, [r5, #10]	@ 000b5b7c a97a
.org 0xb5b7e
	movs r0, #254	@ 000b5b7e fe20
.org 0xb5b80
	ands r0, r1	@ 000b5b80 0840
.org 0xb5b82
	strb r0, [r5, #10]	@ 000b5b82 a872
.org 0xb5b84
	ldr r1, [pc, #44]	@ 000b5b84 0b49
.org 0xb5b86
	ldrb r0, [r5, #9]	@ 000b5b86 687a
.org 0xb5b88
	lsls r0, r0, #2	@ 000b5b88 8000
.org 0xb5b8a
	adds r0, r0, r1	@ 000b5b8a 4018
.org 0xb5b8c
	movs r1, #4	@ 000b5b8c 0421
.org 0xb5b8e
	str r1, [r5, #12]	@ 000b5b8e e960
.org 0xb5b90
	ldr r0, [r0, #0]	@ 000b5b90 0068
.org 0xb5b92
	ldr r0, [r0, #16]	@ 000b5b92 0069
.org 0xb5b94
	str r0, [r5, #20]	@ 000b5b94 6861
.org 0xb5b96
	pop {r4, r5, r6}	@ 000b5b96 70bc
.org 0xb5b98
	pop {r0}	@ 000b5b98 01bc
.org 0xb5b9a
	bx r0	@ 000b5b9a 0047
