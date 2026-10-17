@ FUN_080a3b0c  entry 0x080a3b0c  size 208
.thumb
.org 0xa3b0c
FUN_080a3b0c:
	push {r4, r5, r6, r7, lr}	@ 000a3b0c f0b5
.org 0xa3b0e
	mov r7, r8	@ 000a3b0e 4746
.org 0xa3b10
	push {r7}	@ 000a3b10 80b4
.org 0xa3b12
	adds r7, r0, #0	@ 000a3b12 071c
.org 0xa3b14
	ldr r6, [r7, #40]	@ 000a3b14 be6a
.org 0xa3b16
	bl 0x1cc9c	@ 000a3b16 79f7c1f8
.org 0xa3b1a
	ldrb r1, [r7, #10]	@ 000a3b1a b97a
.org 0xa3b1c
	movs r0, #1	@ 000a3b1c 0120
.org 0xa3b1e
	orrs r0, r1	@ 000a3b1e 0843
.org 0xa3b20
	movs r1, #2	@ 000a3b20 0221
.org 0xa3b22
	orrs r0, r1	@ 000a3b22 0843
.org 0xa3b24
	strb r0, [r7, #10]	@ 000a3b24 b872
.org 0xa3b26
	ldr r1, [pc, #180]	@ 000a3b26 2d49
.org 0xa3b28
	adds r0, r7, #0	@ 000a3b28 381c
.org 0xa3b2a
	bl 0x1cf00	@ 000a3b2a 79f7e9f9
.org 0xa3b2e
	adds r0, r7, #0	@ 000a3b2e 381c
.org 0xa3b30
	bl 0x1cff0	@ 000a3b30 79f75efa
.org 0xa3b34
	movs r5, #0	@ 000a3b34 0025
.org 0xa3b36
	ldrb r1, [r7, #10]	@ 000a3b36 b97a
.org 0xa3b38
	movs r0, #239	@ 000a3b38 ef20
.org 0xa3b3a
	ands r0, r1	@ 000a3b3a 0840
.org 0xa3b3c
	strb r0, [r7, #10]	@ 000a3b3c b872
.org 0xa3b3e
	movs r0, #1	@ 000a3b3e 0120
.org 0xa3b40
	mov r8, r0	@ 000a3b40 8046
.org 0xa3b42
	adds r0, r7, #0	@ 000a3b42 381c
.org 0xa3b44
	adds r0, #76	@ 000a3b44 4c30
.org 0xa3b46
	strb r5, [r0, #0]	@ 000a3b46 0570
.org 0xa3b48
	adds r2, r7, #0	@ 000a3b48 3a1c
.org 0xa3b4a
	adds r2, #74	@ 000a3b4a 4a32
.org 0xa3b4c
	ldrb r1, [r2, #0]	@ 000a3b4c 1178
.org 0xa3b4e
	movs r0, #17	@ 000a3b4e 1120
.org 0xa3b50
	negs r0, r0	@ 000a3b50 4042
.org 0xa3b52
	ands r0, r1	@ 000a3b52 0840
.org 0xa3b54
	strb r0, [r2, #0]	@ 000a3b54 1070
.org 0xa3b56
	ldrb r0, [r7, #18]	@ 000a3b56 b87c
.org 0xa3b58
	adds r0, #26	@ 000a3b58 1a30
.org 0xa3b5a
	adds r1, r7, #0	@ 000a3b5a 391c
.org 0xa3b5c
	adds r1, #37	@ 000a3b5c 2531
.org 0xa3b5e
	strb r0, [r1, #0]	@ 000a3b5e 0870
.org 0xa3b60
	ldrb r1, [r7, #10]	@ 000a3b60 b97a
.org 0xa3b62
	movs r0, #4	@ 000a3b62 0420
.org 0xa3b64
	orrs r0, r1	@ 000a3b64 0843
.org 0xa3b66
	strb r0, [r7, #10]	@ 000a3b66 b872
.org 0xa3b68
	adds r4, r7, #0	@ 000a3b68 3c1c
.org 0xa3b6a
	adds r4, #116	@ 000a3b6a 7434
.org 0xa3b6c
	ldr r1, [pc, #112]	@ 000a3b6c 1c49
.org 0xa3b6e
	adds r2, #10	@ 000a3b6e 0a32
.org 0xa3b70
	adds r0, r4, #0	@ 000a3b70 201c
.org 0xa3b72
	movs r3, #8	@ 000a3b72 0823
.org 0xa3b74
	bl 0x5760	@ 000a3b74 61f7f4fd
.org 0xa3b78
	str r7, [r4, #44]	@ 000a3b78 e762
.org 0xa3b7a
	ldr r0, [pc, #104]	@ 000a3b7a 1a48
.org 0xa3b7c
	str r0, [r4, #36]	@ 000a3b7c 6062
.org 0xa3b7e
	adds r0, r7, #0	@ 000a3b7e 381c
.org 0xa3b80
	adds r0, #189	@ 000a3b80 bd30
.org 0xa3b82
	strb r5, [r0, #0]	@ 000a3b82 0570
.org 0xa3b84
	adds r1, r7, #0	@ 000a3b84 391c
.org 0xa3b86
	adds r1, #180	@ 000a3b86 b431
.org 0xa3b88
	ldr r0, [r6, #84]	@ 000a3b88 706d
.org 0xa3b8a
	str r0, [r1, #0]	@ 000a3b8a 0860
.org 0xa3b8c
	adds r1, #4	@ 000a3b8c 0431
.org 0xa3b8e
	ldr r0, [r6, #88]	@ 000a3b8e b06d
.org 0xa3b90
	str r0, [r1, #0]	@ 000a3b90 0860
.org 0xa3b92
	adds r0, r7, #0	@ 000a3b92 381c
.org 0xa3b94
	adds r0, #192	@ 000a3b94 c030
.org 0xa3b96
	str r5, [r0, #0]	@ 000a3b96 0560
.org 0xa3b98
	ldrb r0, [r7, #17]	@ 000a3b98 787c
.org 0xa3b9a
	lsls r0, r0, #6	@ 000a3b9a 8001
.org 0xa3b9c
	movs r1, #160	@ 000a3b9c a021
.org 0xa3b9e
	lsls r1, r1, #1	@ 000a3b9e 4900
.org 0xa3ba0
	adds r0, r0, r1	@ 000a3ba0 4018
.org 0xa3ba2
	str r0, [r7, #92]	@ 000a3ba2 f865
.org 0xa3ba4
	movs r1, #192	@ 000a3ba4 c021
.org 0xa3ba6
	lsls r1, r1, #2	@ 000a3ba6 8900
.org 0xa3ba8
	cmp r0, r1	@ 000a3ba8 8842
.org 0xa3baa
	ble.n 0xa3bae	@ 000a3baa 00dd
.org 0xa3bac
	str r1, [r7, #92]	@ 000a3bac f965
.org 0xa3bae
	ldr r0, [r7, #92]	@ 000a3bae f86d
.org 0xa3bb0
	str r0, [r7, #96]	@ 000a3bb0 3866
.org 0xa3bb2
	ldrb r1, [r7, #16]	@ 000a3bb2 397c
.org 0xa3bb4
	mov r0, r8	@ 000a3bb4 4046
.org 0xa3bb6
	ands r0, r1	@ 000a3bb6 0840
.org 0xa3bb8
	strb r0, [r7, #18]	@ 000a3bb8 b874
.org 0xa3bba
	ldr r1, [pc, #44]	@ 000a3bba 0b49
.org 0xa3bbc
	ldrb r0, [r7, #9]	@ 000a3bbc 787a
.org 0xa3bbe
	lsls r0, r0, #2	@ 000a3bbe 8000
.org 0xa3bc0
	adds r0, r0, r1	@ 000a3bc0 4018
.org 0xa3bc2
	mov r1, r8	@ 000a3bc2 4146
.org 0xa3bc4
	str r1, [r7, #12]	@ 000a3bc4 f960
.org 0xa3bc6
	ldr r0, [r0, #0]	@ 000a3bc6 0068
.org 0xa3bc8
	ldr r0, [r0, #4]	@ 000a3bc8 4068
.org 0xa3bca
	str r0, [r7, #20]	@ 000a3bca 7861
.org 0xa3bcc
	adds r0, r7, #0	@ 000a3bcc 381c
.org 0xa3bce
	bl 0xa3bec	@ 000a3bce 00f00df8
.org 0xa3bd2
	pop {r3}	@ 000a3bd2 08bc
.org 0xa3bd4
	mov r8, r3	@ 000a3bd4 9846
.org 0xa3bd6
	pop {r4, r5, r6, r7}	@ 000a3bd6 f0bc
.org 0xa3bd8
	pop {r0}	@ 000a3bd8 01bc
.org 0xa3bda
	bx r0	@ 000a3bda 0047
