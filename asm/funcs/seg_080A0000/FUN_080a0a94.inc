@ FUN_080a0a94  entry 0x080a0a94  size 308
.thumb
.org 0xa0a94
FUN_080a0a94:
	push {r4, r5, r6, r7, lr}	@ 000a0a94 f0b5
.org 0xa0a96
	mov r7, sl	@ 000a0a96 5746
.org 0xa0a98
	mov r6, r9	@ 000a0a98 4e46
.org 0xa0a9a
	mov r5, r8	@ 000a0a9a 4546
.org 0xa0a9c
	push {r5, r6, r7}	@ 000a0a9c e0b4
.org 0xa0a9e
	sub sp, #20	@ 000a0a9e 85b0
.org 0xa0aa0
	str r0, [sp, #0]	@ 000a0aa0 0090
.org 0xa0aa2
	mov ip, r1	@ 000a0aa2 8c46
.org 0xa0aa4
	movs r0, #192	@ 000a0aa4 c020
.org 0xa0aa6
	lsls r0, r0, #4	@ 000a0aa6 0001
.org 0xa0aa8
	mov r9, r0	@ 000a0aa8 8146
.org 0xa0aaa
	movs r1, #128	@ 000a0aaa 8021
.org 0xa0aac
	lsls r1, r1, #4	@ 000a0aac 0901
.org 0xa0aae
	mov sl, r1	@ 000a0aae 8a46
.org 0xa0ab0
	ldr r4, [sp, #0]	@ 000a0ab0 009c
.org 0xa0ab2
	ldr r1, [r4, #84]	@ 000a0ab2 616d
.org 0xa0ab4
	adds r2, r1, #0	@ 000a0ab4 0a1c
.org 0xa0ab6
	ldr r0, [r4, #88]	@ 000a0ab6 a06d
.org 0xa0ab8
	ldr r4, [pc, #124]	@ 000a0ab8 1f4c
.org 0xa0aba
	adds r3, r0, r4	@ 000a0aba 0319
.org 0xa0abc
	subs r1, r1, r2	@ 000a0abc 891a
.org 0xa0abe
	str r1, [sp, #4]	@ 000a0abe 0191
.org 0xa0ac0
	subs r0, r0, r3	@ 000a0ac0 c01a
.org 0xa0ac2
	str r0, [sp, #8]	@ 000a0ac2 0290
.org 0xa0ac4
	adds r5, r3, #0	@ 000a0ac4 1d1c
.org 0xa0ac6
	adds r4, r2, #0	@ 000a0ac6 141c
.org 0xa0ac8
	add r5, ip	@ 000a0ac8 6544
.org 0xa0aca
	mov r0, ip	@ 000a0aca 6046
.org 0xa0acc
	cmp r0, #0	@ 000a0acc 0028
.org 0xa0ace
	bge.n 0xa0b3c	@ 000a0ace 35da
.org 0xa0ad0
	ldr r1, [pc, #100]	@ 000a0ad0 1949
.org 0xa0ad2
	adds r7, r5, r1	@ 000a0ad2 6f18
.org 0xa0ad4
	movs r0, #0	@ 000a0ad4 0020
.org 0xa0ad6
	mov r8, r0	@ 000a0ad6 8046
.org 0xa0ad8
	mov r1, ip	@ 000a0ad8 6146
.org 0xa0ada
	adds r1, r1, r3	@ 000a0ada c918
.org 0xa0adc
	str r1, [sp, #12]	@ 000a0adc 0391
.org 0xa0ade
	mov r2, r9	@ 000a0ade 4a46
.org 0xa0ae0
	subs r1, r4, r2	@ 000a0ae0 a11a
.org 0xa0ae2
	mov r2, r8	@ 000a0ae2 4246
.org 0xa0ae4
	lsls r0, r2, #12	@ 000a0ae4 1003
.org 0xa0ae6
	adds r2, r1, r0	@ 000a0ae6 0a18
.org 0xa0ae8
	adds r0, r2, #0	@ 000a0ae8 101c
.org 0xa0aea
	adds r1, r7, #0	@ 000a0aea 391c
.org 0xa0aec
	str r2, [sp, #16]	@ 000a0aec 0492
.org 0xa0aee
	bl 0x7c7c	@ 000a0aee 67f7c5f8
.org 0xa0af2
	lsls r0, r0, #16	@ 000a0af2 0004
.org 0xa0af4
	ldr r2, [sp, #16]	@ 000a0af4 049a
.org 0xa0af6
	cmp r0, #0	@ 000a0af6 0028
.org 0xa0af8
	beq.n 0xa0b0a	@ 000a0af8 07d0
.org 0xa0afa
	adds r0, r2, #0	@ 000a0afa 101c
.org 0xa0afc
	adds r1, r7, #0	@ 000a0afc 391c
.org 0xa0afe
	bl 0x8748	@ 000a0afe 67f723fe
.org 0xa0b02
	add r0, sl	@ 000a0b02 5044
.org 0xa0b04
	cmp r0, r5	@ 000a0b04 a842
.org 0xa0b06
	ble.n 0xa0b0a	@ 000a0b06 00dd
.org 0xa0b08
	adds r5, r0, #0	@ 000a0b08 051c
.org 0xa0b0a
	movs r0, #1	@ 000a0b0a 0120
.org 0xa0b0c
	add r8, r0	@ 000a0b0c 8044
.org 0xa0b0e
	mov r1, r8	@ 000a0b0e 4146
.org 0xa0b10
	cmp r1, #1	@ 000a0b10 0129
.org 0xa0b12
	ble.n 0xa0ade	@ 000a0b12 e4dd
.org 0xa0b14
	mov r2, r9	@ 000a0b14 4a46
.org 0xa0b16
	adds r2, r2, r4	@ 000a0b16 1219
.org 0xa0b18
	mov r8, r2	@ 000a0b18 9046
.org 0xa0b1a
	mov r0, r8	@ 000a0b1a 4046
.org 0xa0b1c
	adds r1, r7, #0	@ 000a0b1c 391c
.org 0xa0b1e
	bl 0x7c7c	@ 000a0b1e 67f7adf8
.org 0xa0b22
	lsls r0, r0, #16	@ 000a0b22 0004
.org 0xa0b24
	cmp r0, #0	@ 000a0b24 0028
.org 0xa0b26
	beq.n 0xa0baa	@ 000a0b26 40d0
.org 0xa0b28
	mov r0, r8	@ 000a0b28 4046
.org 0xa0b2a
	adds r1, r7, #0	@ 000a0b2a 391c
.org 0xa0b2c
	bl 0x8748	@ 000a0b2c 67f70cfe
.org 0xa0b30
	add r0, sl	@ 000a0b30 5044
.org 0xa0b32
	cmp r0, r5	@ 000a0b32 a842
.org 0xa0b34
	ble.n 0xa0baa	@ 000a0b34 39dd
.org 0xa0b36
	b.n 0xa0ba8	@ 000a0b36 37e0
.org 0xa0b38
	.byte 0x00,0xf8,0xff,0xff	@ 000a0b38 data
.org 0xa0b3c
	movs r0, #128	@ 000a0b3c 8020
.org 0xa0b3e
	lsls r0, r0, #4	@ 000a0b3e 0001
.org 0xa0b40
	adds r7, r5, r0	@ 000a0b40 2f18
.org 0xa0b42
	movs r1, #0	@ 000a0b42 0021
.org 0xa0b44
	mov r8, r1	@ 000a0b44 8846
.org 0xa0b46
	mov r0, ip	@ 000a0b46 6046
.org 0xa0b48
	adds r0, r0, r3	@ 000a0b48 c018
.org 0xa0b4a
	str r0, [sp, #12]	@ 000a0b4a 0390
.org 0xa0b4c
	mov r2, r9	@ 000a0b4c 4a46
.org 0xa0b4e
	subs r1, r4, r2	@ 000a0b4e a11a
.org 0xa0b50
	mov r2, r8	@ 000a0b50 4246
.org 0xa0b52
	lsls r0, r2, #12	@ 000a0b52 1003
.org 0xa0b54
	adds r2, r1, r0	@ 000a0b54 0a18
.org 0xa0b56
	adds r0, r2, #0	@ 000a0b56 101c
.org 0xa0b58
	adds r1, r7, #0	@ 000a0b58 391c
.org 0xa0b5a
	str r2, [sp, #16]	@ 000a0b5a 0492
.org 0xa0b5c
	bl 0x7c7c	@ 000a0b5c 67f78ef8
.org 0xa0b60
	lsls r0, r0, #16	@ 000a0b60 0004
.org 0xa0b62
	ldr r2, [sp, #16]	@ 000a0b62 049a
.org 0xa0b64
	cmp r0, #0	@ 000a0b64 0028
.org 0xa0b66
	beq.n 0xa0b7a	@ 000a0b66 08d0
.org 0xa0b68
	adds r0, r2, #0	@ 000a0b68 101c
.org 0xa0b6a
	adds r1, r7, #0	@ 000a0b6a 391c
.org 0xa0b6c
	bl 0x8534	@ 000a0b6c 67f7e2fc
.org 0xa0b70
	mov r1, sl	@ 000a0b70 5146
.org 0xa0b72
	subs r0, r0, r1	@ 000a0b72 401a
.org 0xa0b74
	cmp r0, r5	@ 000a0b74 a842
.org 0xa0b76
	bge.n 0xa0b7a	@ 000a0b76 00da
.org 0xa0b78
	adds r5, r0, #0	@ 000a0b78 051c
.org 0xa0b7a
	movs r2, #1	@ 000a0b7a 0122
.org 0xa0b7c
	add r8, r2	@ 000a0b7c 9044
.org 0xa0b7e
	mov r0, r8	@ 000a0b7e 4046
.org 0xa0b80
	cmp r0, #1	@ 000a0b80 0128
.org 0xa0b82
	ble.n 0xa0b4c	@ 000a0b82 e3dd
.org 0xa0b84
	mov r1, r9	@ 000a0b84 4946
.org 0xa0b86
	adds r1, r1, r4	@ 000a0b86 0919
.org 0xa0b88
	mov r8, r1	@ 000a0b88 8846
.org 0xa0b8a
	mov r0, r8	@ 000a0b8a 4046
.org 0xa0b8c
	adds r1, r7, #0	@ 000a0b8c 391c
.org 0xa0b8e
	bl 0x7c7c	@ 000a0b8e 67f775f8
.org 0xa0b92
	lsls r0, r0, #16	@ 000a0b92 0004
.org 0xa0b94
	cmp r0, #0	@ 000a0b94 0028
.org 0xa0b96
	beq.n 0xa0baa	@ 000a0b96 08d0
.org 0xa0b98
	mov r0, r8	@ 000a0b98 4046
.org 0xa0b9a
	adds r1, r7, #0	@ 000a0b9a 391c
.org 0xa0b9c
	bl 0x8534	@ 000a0b9c 67f7cafc
.org 0xa0ba0
	mov r2, sl	@ 000a0ba0 5246
.org 0xa0ba2
	subs r0, r0, r2	@ 000a0ba2 801a
.org 0xa0ba4
	cmp r0, r5	@ 000a0ba4 a842
.org 0xa0ba6
	bge.n 0xa0baa	@ 000a0ba6 00da
.org 0xa0ba8
	adds r5, r0, #0	@ 000a0ba8 051c
.org 0xa0baa
	ldr r1, [sp, #12]	@ 000a0baa 0399
.org 0xa0bac
	eors r1, r5	@ 000a0bac 6940
.org 0xa0bae
	negs r0, r1	@ 000a0bae 4842
.org 0xa0bb0
	orrs r0, r1	@ 000a0bb0 0843
.org 0xa0bb2
	lsrs r0, r0, #31	@ 000a0bb2 c00f
.org 0xa0bb4
	ldr r2, [sp, #8]	@ 000a0bb4 029a
.org 0xa0bb6
	adds r1, r5, r2	@ 000a0bb6 a918
.org 0xa0bb8
	ldr r4, [sp, #0]	@ 000a0bb8 009c
.org 0xa0bba
	str r1, [r4, #88]	@ 000a0bba a165
.org 0xa0bbc
	add sp, #20	@ 000a0bbc 05b0
.org 0xa0bbe
	pop {r3, r4, r5}	@ 000a0bbe 38bc
.org 0xa0bc0
	mov r8, r3	@ 000a0bc0 9846
.org 0xa0bc2
	mov r9, r4	@ 000a0bc2 a146
.org 0xa0bc4
	mov sl, r5	@ 000a0bc4 aa46
.org 0xa0bc6
	pop {r4, r5, r6, r7}	@ 000a0bc6 f0bc
