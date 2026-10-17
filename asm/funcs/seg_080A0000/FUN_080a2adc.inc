@ FUN_080a2adc  entry 0x080a2adc  size 160
.thumb
.org 0xa2adc
FUN_080a2adc:
	push {r4, r5, r6, r7, lr}	@ 000a2adc f0b5
.org 0xa2ade
	adds r5, r0, #0	@ 000a2ade 051c
.org 0xa2ae0
	ldrb r7, [r5, #16]	@ 000a2ae0 2f7c
.org 0xa2ae2
	ldrb r6, [r5, #15]	@ 000a2ae2 ee7b
.org 0xa2ae4
	cmp r6, #0	@ 000a2ae4 002e
.org 0xa2ae6
	bne.n 0xa2b2c	@ 000a2ae6 21d1
.org 0xa2ae8
	movs r0, #42	@ 000a2ae8 2a20
.org 0xa2aea
	bl 0x2b10	@ 000a2aea 60f711f8
.org 0xa2aee
	adds r4, r5, #0	@ 000a2aee 2c1c
.org 0xa2af0
	adds r4, #84	@ 000a2af0 5434
.org 0xa2af2
	movs r0, #2	@ 000a2af2 0220
.org 0xa2af4
	adds r1, r4, #0	@ 000a2af4 211c
.org 0xa2af6
	bl 0xd0c88	@ 000a2af6 2ef0c7f8
.org 0xa2afa
	movs r0, #4	@ 000a2afa 0420
.org 0xa2afc
	movs r1, #33	@ 000a2afc 2121
.org 0xa2afe
	adds r2, r4, #0	@ 000a2afe 221c
.org 0xa2b00
	bl 0x2ab88	@ 000a2b00 88f742f8
.org 0xa2b04
	ldrb r1, [r5, #10]	@ 000a2b04 a97a
.org 0xa2b06
	movs r0, #254	@ 000a2b06 fe20
.org 0xa2b08
	ands r0, r1	@ 000a2b08 0840
.org 0xa2b0a
	strb r0, [r5, #10]	@ 000a2b0a a872
.org 0xa2b0c
	adds r0, r5, #0	@ 000a2b0c 281c
.org 0xa2b0e
	adds r0, #140	@ 000a2b0e 8c30
.org 0xa2b10
	str r6, [r0, #0]	@ 000a2b10 0660
.org 0xa2b12
	adds r0, #4	@ 000a2b12 0430
.org 0xa2b14
	str r6, [r0, #0]	@ 000a2b14 0660
.org 0xa2b16
	adds r0, #4	@ 000a2b16 0430
.org 0xa2b18
	strb r6, [r0, #0]	@ 000a2b18 0670
.org 0xa2b1a
	ldrb r1, [r5, #10]	@ 000a2b1a a97a
.org 0xa2b1c
	movs r0, #251	@ 000a2b1c fb20
.org 0xa2b1e
	ands r0, r1	@ 000a2b1e 0840
.org 0xa2b20
	strb r0, [r5, #10]	@ 000a2b20 a872
.org 0xa2b22
	movs r0, #2	@ 000a2b22 0220
.org 0xa2b24
	strb r0, [r5, #18]	@ 000a2b24 a874
.org 0xa2b26
	ldrb r0, [r5, #15]	@ 000a2b26 e87b
.org 0xa2b28
	adds r0, #1	@ 000a2b28 0130
.org 0xa2b2a
	strb r0, [r5, #15]	@ 000a2b2a e873
.org 0xa2b2c
	ldrb r0, [r5, #18]	@ 000a2b2c a87c
.org 0xa2b2e
	subs r0, #1	@ 000a2b2e 0138
.org 0xa2b30
	strb r0, [r5, #18]	@ 000a2b30 a874
.org 0xa2b32
	lsls r0, r0, #24	@ 000a2b32 0006
.org 0xa2b34
	cmp r0, #0	@ 000a2b34 0028
.org 0xa2b36
	bne.n 0xa2b76	@ 000a2b36 1ed1
.org 0xa2b38
	cmp r7, #1	@ 000a2b38 012f
.org 0xa2b3a
	bne.n 0xa2b4c	@ 000a2b3a 07d1
.org 0xa2b3c
	ldr r0, [pc, #60]	@ 000a2b3c 0f48
.org 0xa2b3e
	adds r1, r0, #0	@ 000a2b3e 011c
.org 0xa2b40
	adds r1, #38	@ 000a2b40 2631
.org 0xa2b42
	ldrb r0, [r1, #0]	@ 000a2b42 0878
.org 0xa2b44
	cmp r0, #0	@ 000a2b44 0028
.org 0xa2b46
	beq.n 0xa2b4c	@ 000a2b46 01d0
.org 0xa2b48
	adds r0, #255	@ 000a2b48 ff30
.org 0xa2b4a
	strb r0, [r1, #0]	@ 000a2b4a 0870
.org 0xa2b4c
	ldr r2, [pc, #48]	@ 000a2b4c 0c4a
.org 0xa2b4e
	ldrh r1, [r2, #12]	@ 000a2b4e 9189
.org 0xa2b50
	ldr r0, [pc, #48]	@ 000a2b50 0c48
.org 0xa2b52
	cmp r1, r0	@ 000a2b52 8142
.org 0xa2b54
	bhi.n 0xa2b5a	@ 000a2b54 01d8
.org 0xa2b56
	adds r0, r1, #1	@ 000a2b56 481c
.org 0xa2b58
	strh r0, [r2, #12]	@ 000a2b58 9081
.org 0xa2b5a
	adds r1, r5, #0	@ 000a2b5a 291c
.org 0xa2b5c
	adds r1, #84	@ 000a2b5c 5431
.org 0xa2b5e
	adds r0, r5, #0	@ 000a2b5e 281c
.org 0xa2b60
	bl 0x2abe0	@ 000a2b60 88f73ef8
.org 0xa2b64
	ldr r1, [pc, #32]	@ 000a2b64 0849
.org 0xa2b66
	ldrb r0, [r5, #9]	@ 000a2b66 687a
.org 0xa2b68
	lsls r0, r0, #2	@ 000a2b68 8000
.org 0xa2b6a
	adds r0, r0, r1	@ 000a2b6a 4018
.org 0xa2b6c
	movs r1, #4	@ 000a2b6c 0421
.org 0xa2b6e
	str r1, [r5, #12]	@ 000a2b6e e960
.org 0xa2b70
	ldr r0, [r0, #0]	@ 000a2b70 0068
.org 0xa2b72
	ldr r0, [r0, #16]	@ 000a2b72 0069
.org 0xa2b74
	str r0, [r5, #20]	@ 000a2b74 6861
.org 0xa2b76
	pop {r4, r5, r6, r7}	@ 000a2b76 f0bc
.org 0xa2b78
	pop {r0}	@ 000a2b78 01bc
.org 0xa2b7a
	bx r0	@ 000a2b7a 0047
