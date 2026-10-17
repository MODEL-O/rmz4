@ FUN_08095acc  entry 0x08095acc  size 280
.thumb
.org 0x95acc
FUN_08095acc:
	push {r4, r5, r6, r7, lr}	@ 00095acc f0b5
.org 0x95ace
	mov r7, r9	@ 00095ace 4f46
.org 0x95ad0
	mov r6, r8	@ 00095ad0 4646
.org 0x95ad2
	push {r6, r7}	@ 00095ad2 c0b4
.org 0x95ad4
	adds r4, r0, #0	@ 00095ad4 041c
.org 0x95ad6
	ldr r0, [r4, #40]	@ 00095ad6 a06a
.org 0x95ad8
	ldr r0, [r0, #40]	@ 00095ad8 806a
.org 0x95ada
	mov r8, r0	@ 00095ada 8046
.org 0x95adc
	ldrb r0, [r4, #10]	@ 00095adc a07a
.org 0x95ade
	lsrs r5, r0, #4	@ 00095ade 0509
.org 0x95ae0
	movs r7, #1	@ 00095ae0 0127
.org 0x95ae2
	ands r5, r7	@ 00095ae2 3d40
.org 0x95ae4
	mov r9, r5	@ 00095ae4 a946
.org 0x95ae6
	ldrb r6, [r4, #15]	@ 00095ae6 e67b
.org 0x95ae8
	cmp r6, #0	@ 00095ae8 002e
.org 0x95aea
	bne.n 0x95b0e	@ 00095aea 10d1
.org 0x95aec
	movs r0, #187	@ 00095aec bb20
.org 0x95aee
	bl 0x2b10	@ 00095aee 6df70ff8
.org 0x95af2
	str r6, [r4, #92]	@ 00095af2 e665
.org 0x95af4
	movs r0, #32	@ 00095af4 2020
.org 0x95af6
	str r0, [r4, #100]	@ 00095af6 6066
.org 0x95af8
	lsls r0, r5, #1	@ 00095af8 6800
.org 0x95afa
	adds r0, r0, r5	@ 00095afa 4019
.org 0x95afc
	lsls r1, r0, #4	@ 00095afc 0101
.org 0x95afe
	adds r0, r0, r1	@ 00095afe 4018
.org 0x95b00
	lsls r0, r0, #3	@ 00095b00 c000
.org 0x95b02
	adds r0, #116	@ 00095b02 7430
.org 0x95b04
	strb r0, [r4, #18]	@ 00095b04 a074
.org 0x95b06
	strb r7, [r4, #19]	@ 00095b06 e774
.org 0x95b08
	ldrb r0, [r4, #15]	@ 00095b08 e07b
.org 0x95b0a
	adds r0, #1	@ 00095b0a 0130
.org 0x95b0c
	strb r0, [r4, #15]	@ 00095b0c e073
.org 0x95b0e
	adds r0, r4, #0	@ 00095b0e 201c
.org 0x95b10
	bl 0x1cff0	@ 00095b10 87f76efa
.org 0x95b14
	ldrb r3, [r4, #18]	@ 00095b14 a37c
.org 0x95b16
	ldr r5, [pc, #204]	@ 00095b16 334d
.org 0x95b18
	adds r0, r3, #0	@ 00095b18 181c
.org 0x95b1a
	adds r0, #64	@ 00095b1a 4030
.org 0x95b1c
	lsls r0, r0, #24	@ 00095b1c 0006
.org 0x95b1e
	lsrs r0, r0, #23	@ 00095b1e c00d
.org 0x95b20
	adds r0, r0, r5	@ 00095b20 4019
.org 0x95b22
	movs r1, #0	@ 00095b22 0021
.org 0x95b24
	ldrsh r0, [r0, r1]	@ 00095b24 405e
.org 0x95b26
	ldr r2, [r4, #92]	@ 00095b26 e26d
.org 0x95b28
	adds r1, r2, #0	@ 00095b28 111c
.org 0x95b2a
	muls r1, r0	@ 00095b2a 4143
.org 0x95b2c
	cmp r1, #0	@ 00095b2c 0029
.org 0x95b2e
	bge.n 0x95b32	@ 00095b2e 00da
.org 0x95b30
	adds r1, #255	@ 00095b30 ff31
.org 0x95b32
	asrs r1, r1, #8	@ 00095b32 0912
.org 0x95b34
	ldr r0, [r4, #84]	@ 00095b34 606d
.org 0x95b36
	adds r0, r0, r1	@ 00095b36 4018
.org 0x95b38
	str r0, [r4, #84]	@ 00095b38 6065
.org 0x95b3a
	lsls r0, r3, #1	@ 00095b3a 5800
.org 0x95b3c
	adds r0, r0, r5	@ 00095b3c 4019
.org 0x95b3e
	movs r1, #0	@ 00095b3e 0021
.org 0x95b40
	ldrsh r0, [r0, r1]	@ 00095b40 405e
.org 0x95b42
	muls r0, r2	@ 00095b42 5043
.org 0x95b44
	cmp r0, #0	@ 00095b44 0028
.org 0x95b46
	bge.n 0x95b4a	@ 00095b46 00da
.org 0x95b48
	adds r0, #255	@ 00095b48 ff30
.org 0x95b4a
	asrs r0, r0, #8	@ 00095b4a 0012
.org 0x95b4c
	ldr r1, [r4, #88]	@ 00095b4c a16d
.org 0x95b4e
	adds r1, r1, r0	@ 00095b4e 0918
.org 0x95b50
	str r1, [r4, #88]	@ 00095b50 a165
.org 0x95b52
	ldr r0, [r4, #100]	@ 00095b52 606e
.org 0x95b54
	adds r0, r2, r0	@ 00095b54 1018
.org 0x95b56
	str r0, [r4, #92]	@ 00095b56 e065
.org 0x95b58
	movs r1, #224	@ 00095b58 e021
.org 0x95b5a
	lsls r1, r1, #2	@ 00095b5a 8900
.org 0x95b5c
	cmp r0, r1	@ 00095b5c 8842
.org 0x95b5e
	ble.n 0x95b62	@ 00095b5e 00dd
.org 0x95b60
	str r1, [r4, #92]	@ 00095b60 e165
.org 0x95b62
	ldrb r0, [r4, #19]	@ 00095b62 e07c
.org 0x95b64
	cmp r0, #0	@ 00095b64 0028
.org 0x95b66
	beq.n 0x95b8a	@ 00095b66 10d0
.org 0x95b68
	mov r0, r8	@ 00095b68 4046
.org 0x95b6a
	bl 0x5c3a8	@ 00095b6a c6f71dfc
.org 0x95b6e
	ldr r1, [r4, #84]	@ 00095b6e 616d
.org 0x95b70
	subs r0, r0, r1	@ 00095b70 401a
.org 0x95b72
	movs r1, #216	@ 00095b72 d821
.org 0x95b74
	lsls r1, r1, #8	@ 00095b74 0902
.org 0x95b76
	adds r0, r0, r1	@ 00095b76 4018
.org 0x95b78
	movs r1, #192	@ 00095b78 c021
.org 0x95b7a
	lsls r1, r1, #8	@ 00095b7a 0902
.org 0x95b7c
	cmp r0, r1	@ 00095b7c 8842
.org 0x95b7e
	bls.n 0x95b8a	@ 00095b7e 04d9
.org 0x95b80
	mov r1, r9	@ 00095b80 4946
.org 0x95b82
	lsls r0, r1, #7	@ 00095b82 c801
.org 0x95b84
	movs r1, #0	@ 00095b84 0021
.org 0x95b86
	strb r0, [r4, #18]	@ 00095b86 a074
.org 0x95b88
	strb r1, [r4, #19]	@ 00095b88 e174
.org 0x95b8a
	adds r0, r4, #0	@ 00095b8a 201c
.org 0x95b8c
	bl 0x95cd8	@ 00095b8c 00f0a4f8
.org 0x95b90
	ldr r0, [pc, #84]	@ 00095b90 1548
.org 0x95b92
	adds r1, r4, #0	@ 00095b92 211c
.org 0x95b94
	adds r1, #84	@ 00095b94 5431
.org 0x95b96
	bl 0x1fb14	@ 00095b96 89f7bdff
.org 0x95b9a
	movs r1, #192	@ 00095b9a c021
.org 0x95b9c
	lsls r1, r1, #6	@ 00095b9c 8901
.org 0x95b9e
	cmp r0, r1	@ 00095b9e 8842
.org 0x95ba0
	bls.n 0x95bd8	@ 00095ba0 1ad9
.org 0x95ba2
	ldrb r1, [r4, #10]	@ 00095ba2 a17a
.org 0x95ba4
	movs r0, #254	@ 00095ba4 fe20
.org 0x95ba6
	ands r0, r1	@ 00095ba6 0840
.org 0x95ba8
	movs r2, #0	@ 00095ba8 0022
.org 0x95baa
	movs r1, #253	@ 00095baa fd21
.org 0x95bac
	ands r0, r1	@ 00095bac 0840
.org 0x95bae
	strb r0, [r4, #10]	@ 00095bae a072
.org 0x95bb0
	adds r0, r4, #0	@ 00095bb0 201c
.org 0x95bb2
	adds r0, #140	@ 00095bb2 8c30
.org 0x95bb4
	str r2, [r0, #0]	@ 00095bb4 0260
.org 0x95bb6
	adds r0, #4	@ 00095bb6 0430
.org 0x95bb8
	str r2, [r0, #0]	@ 00095bb8 0260
.org 0x95bba
	adds r0, #4	@ 00095bba 0430
.org 0x95bbc
	strb r2, [r0, #0]	@ 00095bbc 0270
.org 0x95bbe
	ldrb r1, [r4, #10]	@ 00095bbe a17a
.org 0x95bc0
	movs r0, #251	@ 00095bc0 fb20
.org 0x95bc2
	ands r0, r1	@ 00095bc2 0840
.org 0x95bc4
	strb r0, [r4, #10]	@ 00095bc4 a072
.org 0x95bc6
	ldr r1, [pc, #36]	@ 00095bc6 0949
.org 0x95bc8
	ldrb r0, [r4, #9]	@ 00095bc8 607a
.org 0x95bca
	lsls r0, r0, #2	@ 00095bca 8000
.org 0x95bcc
	adds r0, r0, r1	@ 00095bcc 4018
.org 0x95bce
	movs r1, #3	@ 00095bce 0321
.org 0x95bd0
	str r1, [r4, #12]	@ 00095bd0 e160
.org 0x95bd2
	ldr r0, [r0, #0]	@ 00095bd2 0068
.org 0x95bd4
	ldr r0, [r0, #12]	@ 00095bd4 c068
.org 0x95bd6
	str r0, [r4, #20]	@ 00095bd6 6061
.org 0x95bd8
	pop {r3, r4}	@ 00095bd8 18bc
.org 0x95bda
	mov r8, r3	@ 00095bda 9846
.org 0x95bdc
	mov r9, r4	@ 00095bdc a146
.org 0x95bde
	pop {r4, r5, r6, r7}	@ 00095bde f0bc
.org 0x95be0
	pop {r0}	@ 00095be0 01bc
.org 0x95be2
	bx r0	@ 00095be2 0047
