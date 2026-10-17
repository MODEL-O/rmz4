@ FUN_080a2b8c  entry 0x080a2b8c  size 134
.thumb
.org 0xa2b8c
FUN_080a2b8c:
	push {r4, r5, r6, lr}	@ 000a2b8c 70b5
.org 0xa2b8e
	adds r6, r0, #0	@ 000a2b8e 061c
.org 0xa2b90
	ldrb r5, [r6, #16]	@ 000a2b90 357c
.org 0xa2b92
	movs r0, #42	@ 000a2b92 2a20
.org 0xa2b94
	bl 0x2b10	@ 000a2b94 5ff7bcff
.org 0xa2b98
	adds r4, r6, #0	@ 000a2b98 341c
.org 0xa2b9a
	adds r4, #84	@ 000a2b9a 5434
.org 0xa2b9c
	movs r0, #2	@ 000a2b9c 0220
.org 0xa2b9e
	adds r1, r4, #0	@ 000a2b9e 211c
.org 0xa2ba0
	bl 0xd0c88	@ 000a2ba0 2ef072f8
.org 0xa2ba4
	movs r0, #4	@ 000a2ba4 0420
.org 0xa2ba6
	movs r1, #33	@ 000a2ba6 2121
.org 0xa2ba8
	adds r2, r4, #0	@ 000a2ba8 221c
.org 0xa2baa
	bl 0x2ab88	@ 000a2baa 87f7edff
.org 0xa2bae
	cmp r5, #1	@ 000a2bae 012d
.org 0xa2bb0
	bne.n 0xa2bc2	@ 000a2bb0 07d1
.org 0xa2bb2
	ldr r0, [pc, #96]	@ 000a2bb2 1848
.org 0xa2bb4
	adds r1, r0, #0	@ 000a2bb4 011c
.org 0xa2bb6
	adds r1, #38	@ 000a2bb6 2631
.org 0xa2bb8
	ldrb r0, [r1, #0]	@ 000a2bb8 0878
.org 0xa2bba
	cmp r0, #0	@ 000a2bba 0028
.org 0xa2bbc
	beq.n 0xa2bc2	@ 000a2bbc 01d0
.org 0xa2bbe
	adds r0, #255	@ 000a2bbe ff30
.org 0xa2bc0
	strb r0, [r1, #0]	@ 000a2bc0 0870
.org 0xa2bc2
	ldrb r1, [r6, #10]	@ 000a2bc2 b17a
.org 0xa2bc4
	movs r0, #254	@ 000a2bc4 fe20
.org 0xa2bc6
	ands r0, r1	@ 000a2bc6 0840
.org 0xa2bc8
	movs r1, #0	@ 000a2bc8 0021
.org 0xa2bca
	strb r0, [r6, #10]	@ 000a2bca b072
.org 0xa2bcc
	adds r0, r6, #0	@ 000a2bcc 301c
.org 0xa2bce
	adds r0, #140	@ 000a2bce 8c30
.org 0xa2bd0
	str r1, [r0, #0]	@ 000a2bd0 0160
.org 0xa2bd2
	adds r0, #4	@ 000a2bd2 0430
.org 0xa2bd4
	str r1, [r0, #0]	@ 000a2bd4 0160
.org 0xa2bd6
	adds r0, #4	@ 000a2bd6 0430
.org 0xa2bd8
	strb r1, [r0, #0]	@ 000a2bd8 0170
.org 0xa2bda
	ldrb r1, [r6, #10]	@ 000a2bda b17a
.org 0xa2bdc
	movs r0, #251	@ 000a2bdc fb20
.org 0xa2bde
	ands r0, r1	@ 000a2bde 0840
.org 0xa2be0
	strb r0, [r6, #10]	@ 000a2be0 b072
.org 0xa2be2
	ldr r2, [pc, #52]	@ 000a2be2 0d4a
.org 0xa2be4
	ldrh r1, [r2, #12]	@ 000a2be4 9189
.org 0xa2be6
	ldr r0, [pc, #52]	@ 000a2be6 0d48
.org 0xa2be8
	cmp r1, r0	@ 000a2be8 8142
.org 0xa2bea
	bhi.n 0xa2bf0	@ 000a2bea 01d8
.org 0xa2bec
	adds r0, r1, #1	@ 000a2bec 481c
.org 0xa2bee
	strh r0, [r2, #12]	@ 000a2bee 9081
.org 0xa2bf0
	adds r1, r6, #0	@ 000a2bf0 311c
.org 0xa2bf2
	adds r1, #84	@ 000a2bf2 5431
.org 0xa2bf4
	adds r0, r6, #0	@ 000a2bf4 301c
.org 0xa2bf6
	bl 0x2abe0	@ 000a2bf6 87f7f3ff
.org 0xa2bfa
	ldr r1, [pc, #36]	@ 000a2bfa 0949
.org 0xa2bfc
	ldrb r0, [r6, #9]	@ 000a2bfc 707a
.org 0xa2bfe
	lsls r0, r0, #2	@ 000a2bfe 8000
.org 0xa2c00
	adds r0, r0, r1	@ 000a2c00 4018
.org 0xa2c02
	movs r1, #4	@ 000a2c02 0421
.org 0xa2c04
	str r1, [r6, #12]	@ 000a2c04 f160
.org 0xa2c06
	ldr r0, [r0, #0]	@ 000a2c06 0068
.org 0xa2c08
	ldr r0, [r0, #16]	@ 000a2c08 0069
.org 0xa2c0a
	str r0, [r6, #20]	@ 000a2c0a 7061
.org 0xa2c0c
	pop {r4, r5, r6}	@ 000a2c0c 70bc
.org 0xa2c0e
	pop {r0}	@ 000a2c0e 01bc
.org 0xa2c10
	bx r0	@ 000a2c10 0047
