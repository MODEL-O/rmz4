@ FUN_080f5ae4  entry 0x080f5ae4  size 234
.thumb
.org 0xf5ae4
FUN_080f5ae4:
	push {r4, r5, r6, r7, lr}	@ 000f5ae4 f0b5
.org 0xf5ae6
	mov r7, r8	@ 000f5ae6 4746
.org 0xf5ae8
	push {r7}	@ 000f5ae8 80b4
.org 0xf5aea
	adds r7, r0, #0	@ 000f5aea 071c
.org 0xf5aec
	ldr r0, [pc, #224]	@ 000f5aec 3848
.org 0xf5aee
	adds r1, r7, #0	@ 000f5aee 391c
.org 0xf5af0
	adds r1, #84	@ 000f5af0 5431
.org 0xf5af2
	bl 0x1fb14	@ 000f5af2 2af70ff8
.org 0xf5af6
	movs r1, #240	@ 000f5af6 f021
.org 0xf5af8
	lsls r1, r1, #9	@ 000f5af8 4902
.org 0xf5afa
	cmp r0, r1	@ 000f5afa 8842
.org 0xf5afc
	bls.n 0xf5bc4	@ 000f5afc 62d9
.org 0xf5afe
	adds r0, r7, #0	@ 000f5afe 381c
.org 0xf5b00
	adds r0, #180	@ 000f5b00 b430
.org 0xf5b02
	ldr r0, [r0, #0]	@ 000f5b02 0068
.org 0xf5b04
	mov ip, r0	@ 000f5b04 8446
.org 0xf5b06
	ldrb r1, [r0, #10]	@ 000f5b06 817a
.org 0xf5b08
	movs r2, #254	@ 000f5b08 fe22
.org 0xf5b0a
	adds r0, r2, #0	@ 000f5b0a 101c
.org 0xf5b0c
	ands r0, r1	@ 000f5b0c 0840
.org 0xf5b0e
	movs r3, #0	@ 000f5b0e 0023
.org 0xf5b10
	movs r1, #253	@ 000f5b10 fd21
.org 0xf5b12
	mov r8, r1	@ 000f5b12 8846
.org 0xf5b14
	ands r0, r1	@ 000f5b14 0840
.org 0xf5b16
	mov r1, ip	@ 000f5b16 6146
.org 0xf5b18
	strb r0, [r1, #10]	@ 000f5b18 8872
.org 0xf5b1a
	mov r0, ip	@ 000f5b1a 6046
.org 0xf5b1c
	adds r0, #140	@ 000f5b1c 8c30
.org 0xf5b1e
	str r3, [r0, #0]	@ 000f5b1e 0360
.org 0xf5b20
	adds r0, #4	@ 000f5b20 0430
.org 0xf5b22
	str r3, [r0, #0]	@ 000f5b22 0360
.org 0xf5b24
	adds r0, #4	@ 000f5b24 0430
.org 0xf5b26
	strb r3, [r0, #0]	@ 000f5b26 0370
.org 0xf5b28
	ldrb r1, [r1, #10]	@ 000f5b28 897a
.org 0xf5b2a
	movs r4, #251	@ 000f5b2a fb24
.org 0xf5b2c
	adds r0, r4, #0	@ 000f5b2c 201c
.org 0xf5b2e
	ands r0, r1	@ 000f5b2e 0840
.org 0xf5b30
	mov r1, ip	@ 000f5b30 6146
.org 0xf5b32
	strb r0, [r1, #10]	@ 000f5b32 8872
.org 0xf5b34
	ldr r5, [pc, #156]	@ 000f5b34 274d
.org 0xf5b36
	ldrb r0, [r1, #9]	@ 000f5b36 487a
.org 0xf5b38
	lsls r0, r0, #2	@ 000f5b38 8000
.org 0xf5b3a
	adds r0, r0, r5	@ 000f5b3a 4019
.org 0xf5b3c
	movs r6, #3	@ 000f5b3c 0326
.org 0xf5b3e
	str r6, [r1, #12]	@ 000f5b3e ce60
.org 0xf5b40
	ldr r0, [r0, #0]	@ 000f5b40 0068
.org 0xf5b42
	ldr r0, [r0, #12]	@ 000f5b42 c068
.org 0xf5b44
	str r0, [r1, #20]	@ 000f5b44 4861
.org 0xf5b46
	adds r0, r7, #0	@ 000f5b46 381c
.org 0xf5b48
	adds r0, #184	@ 000f5b48 b830
.org 0xf5b4a
	ldr r0, [r0, #0]	@ 000f5b4a 0068
.org 0xf5b4c
	mov ip, r0	@ 000f5b4c 8446
.org 0xf5b4e
	ldrb r1, [r0, #10]	@ 000f5b4e 817a
.org 0xf5b50
	adds r0, r2, #0	@ 000f5b50 101c
.org 0xf5b52
	ands r0, r1	@ 000f5b52 0840
.org 0xf5b54
	mov r1, r8	@ 000f5b54 4146
.org 0xf5b56
	ands r0, r1	@ 000f5b56 0840
.org 0xf5b58
	mov r1, ip	@ 000f5b58 6146
.org 0xf5b5a
	strb r0, [r1, #10]	@ 000f5b5a 8872
.org 0xf5b5c
	mov r0, ip	@ 000f5b5c 6046
.org 0xf5b5e
	adds r0, #140	@ 000f5b5e 8c30
.org 0xf5b60
	str r3, [r0, #0]	@ 000f5b60 0360
.org 0xf5b62
	adds r0, #4	@ 000f5b62 0430
.org 0xf5b64
	str r3, [r0, #0]	@ 000f5b64 0360
.org 0xf5b66
	adds r0, #4	@ 000f5b66 0430
.org 0xf5b68
	strb r3, [r0, #0]	@ 000f5b68 0370
.org 0xf5b6a
	ldrb r1, [r1, #10]	@ 000f5b6a 897a
.org 0xf5b6c
	adds r0, r4, #0	@ 000f5b6c 201c
.org 0xf5b6e
	ands r0, r1	@ 000f5b6e 0840
.org 0xf5b70
	mov r1, ip	@ 000f5b70 6146
.org 0xf5b72
	strb r0, [r1, #10]	@ 000f5b72 8872
.org 0xf5b74
	ldrb r0, [r1, #9]	@ 000f5b74 487a
.org 0xf5b76
	lsls r0, r0, #2	@ 000f5b76 8000
.org 0xf5b78
	adds r0, r0, r5	@ 000f5b78 4019
.org 0xf5b7a
	str r6, [r1, #12]	@ 000f5b7a ce60
.org 0xf5b7c
	ldr r0, [r0, #0]	@ 000f5b7c 0068
.org 0xf5b7e
	ldr r0, [r0, #12]	@ 000f5b7e c068
.org 0xf5b80
	str r0, [r1, #20]	@ 000f5b80 4861
.org 0xf5b82
	adds r0, r7, #0	@ 000f5b82 381c
.org 0xf5b84
	adds r0, #188	@ 000f5b84 bc30
.org 0xf5b86
	ldr r1, [r0, #0]	@ 000f5b86 0168
.org 0xf5b88
	ldrb r0, [r1, #10]	@ 000f5b88 887a
.org 0xf5b8a
	ands r2, r0	@ 000f5b8a 0240
.org 0xf5b8c
	mov r0, r8	@ 000f5b8c 4046
.org 0xf5b8e
	ands r2, r0	@ 000f5b8e 0240
.org 0xf5b90
	strb r2, [r1, #10]	@ 000f5b90 8a72
.org 0xf5b92
	adds r0, r1, #0	@ 000f5b92 081c
.org 0xf5b94
	adds r0, #140	@ 000f5b94 8c30
.org 0xf5b96
	str r3, [r0, #0]	@ 000f5b96 0360
.org 0xf5b98
	adds r0, #4	@ 000f5b98 0430
.org 0xf5b9a
	str r3, [r0, #0]	@ 000f5b9a 0360
.org 0xf5b9c
	adds r0, #4	@ 000f5b9c 0430
.org 0xf5b9e
	strb r3, [r0, #0]	@ 000f5b9e 0370
.org 0xf5ba0
	ldrb r0, [r1, #10]	@ 000f5ba0 887a
.org 0xf5ba2
	ands r4, r0	@ 000f5ba2 0440
.org 0xf5ba4
	strb r4, [r1, #10]	@ 000f5ba4 8c72
.org 0xf5ba6
	ldrb r0, [r1, #9]	@ 000f5ba6 487a
.org 0xf5ba8
	lsls r0, r0, #2	@ 000f5ba8 8000
.org 0xf5baa
	adds r0, r0, r5	@ 000f5baa 4019
.org 0xf5bac
	str r6, [r1, #12]	@ 000f5bac ce60
.org 0xf5bae
	ldr r0, [r0, #0]	@ 000f5bae 0068
.org 0xf5bb0
	ldr r0, [r0, #12]	@ 000f5bb0 c068
.org 0xf5bb2
	str r0, [r1, #20]	@ 000f5bb2 4861
.org 0xf5bb4
	ldrb r0, [r7, #9]	@ 000f5bb4 787a
.org 0xf5bb6
	lsls r0, r0, #2	@ 000f5bb6 8000
.org 0xf5bb8
	adds r0, r0, r5	@ 000f5bb8 4019
.org 0xf5bba
	movs r1, #4	@ 000f5bba 0421
.org 0xf5bbc
	str r1, [r7, #12]	@ 000f5bbc f960
.org 0xf5bbe
	ldr r0, [r0, #0]	@ 000f5bbe 0068
.org 0xf5bc0
	ldr r0, [r0, #16]	@ 000f5bc0 0069
.org 0xf5bc2
	str r0, [r7, #20]	@ 000f5bc2 7861
.org 0xf5bc4
	pop {r3}	@ 000f5bc4 08bc
.org 0xf5bc6
	mov r8, r3	@ 000f5bc6 9846
.org 0xf5bc8
	pop {r4, r5, r6, r7}	@ 000f5bc8 f0bc
.org 0xf5bca
	pop {r0}	@ 000f5bca 01bc
.org 0xf5bcc
	bx r0	@ 000f5bcc 0047
