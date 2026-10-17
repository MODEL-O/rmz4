@ FUN_080c2ac0  entry 0x080c2ac0  size 230
.thumb
.org 0xc2ac0
FUN_080c2ac0:
	push {r4, r5, r6, r7, lr}	@ 000c2ac0 f0b5
.org 0xc2ac2
	mov r7, r8	@ 000c2ac2 4746
.org 0xc2ac4
	push {r7}	@ 000c2ac4 80b4
.org 0xc2ac6
	sub sp, #8	@ 000c2ac6 82b0
.org 0xc2ac8
	adds r6, r0, #0	@ 000c2ac8 061c
.org 0xc2aca
	ldr r0, [pc, #220]	@ 000c2aca 3748
.org 0xc2acc
	ldr r1, [r0, #4]	@ 000c2acc 4168
.org 0xc2ace
	ldr r0, [r0, #0]	@ 000c2ace 0068
.org 0xc2ad0
	str r0, [sp, #0]	@ 000c2ad0 0090
.org 0xc2ad2
	str r1, [sp, #4]	@ 000c2ad2 0191
.org 0xc2ad4
	ldrb r0, [r6, #17]	@ 000c2ad4 707c
.org 0xc2ad6
	mov r8, r0	@ 000c2ad6 8046
.org 0xc2ad8
	adds r0, r6, #0	@ 000c2ad8 301c
.org 0xc2ada
	adds r0, #180	@ 000c2ada b430
.org 0xc2adc
	ldrb r2, [r0, #0]	@ 000c2adc 0278
.org 0xc2ade
	ldr r1, [pc, #204]	@ 000c2ade 3349
.org 0xc2ae0
	ldrb r0, [r6, #9]	@ 000c2ae0 707a
.org 0xc2ae2
	lsls r0, r0, #2	@ 000c2ae2 8000
.org 0xc2ae4
	adds r0, r0, r1	@ 000c2ae4 4018
.org 0xc2ae6
	movs r1, #1	@ 000c2ae6 0121
.org 0xc2ae8
	str r1, [r6, #12]	@ 000c2ae8 f160
.org 0xc2aea
	ldr r0, [r0, #0]	@ 000c2aea 0068
.org 0xc2aec
	ldr r0, [r0, #4]	@ 000c2aec 4068
.org 0xc2aee
	str r0, [r6, #20]	@ 000c2aee 7061
.org 0xc2af0
	ldrb r1, [r6, #10]	@ 000c2af0 b17a
.org 0xc2af2
	movs r0, #1	@ 000c2af2 0120
.org 0xc2af4
	movs r5, #0	@ 000c2af4 0025
.org 0xc2af6
	orrs r0, r1	@ 000c2af6 0843
.org 0xc2af8
	movs r1, #2	@ 000c2af8 0221
.org 0xc2afa
	orrs r0, r1	@ 000c2afa 0843
.org 0xc2afc
	strb r0, [r6, #10]	@ 000c2afc b072
.org 0xc2afe
	ldr r3, [pc, #176]	@ 000c2afe 2c4b
.org 0xc2b00
	adds r4, r2, #0	@ 000c2b00 141c
.org 0xc2b02
	adds r4, #64	@ 000c2b02 4034
.org 0xc2b04
	lsls r0, r4, #24	@ 000c2b04 2006
.org 0xc2b06
	lsrs r0, r0, #23	@ 000c2b06 c00d
.org 0xc2b08
	adds r0, r0, r3	@ 000c2b08 c018
.org 0xc2b0a
	movs r7, #0	@ 000c2b0a 0027
.org 0xc2b0c
	ldrsh r1, [r0, r7]	@ 000c2b0c c15f
.org 0xc2b0e
	lsls r0, r1, #1	@ 000c2b0e 4800
.org 0xc2b10
	adds r0, r0, r1	@ 000c2b10 4018
.org 0xc2b12
	lsls r0, r0, #2	@ 000c2b12 8000
.org 0xc2b14
	subs r0, r0, r1	@ 000c2b14 401a
.org 0xc2b16
	lsls r0, r0, #6	@ 000c2b16 8001
.org 0xc2b18
	cmp r0, #0	@ 000c2b18 0028
.org 0xc2b1a
	bge.n 0xc2b1e	@ 000c2b1a 00da
.org 0xc2b1c
	adds r0, #255	@ 000c2b1c ff30
.org 0xc2b1e
	asrs r0, r0, #8	@ 000c2b1e 0012
.org 0xc2b20
	str r0, [r6, #92]	@ 000c2b20 f065
.org 0xc2b22
	lsls r0, r2, #1	@ 000c2b22 5000
.org 0xc2b24
	adds r0, r0, r3	@ 000c2b24 c018
.org 0xc2b26
	movs r2, #0	@ 000c2b26 0022
.org 0xc2b28
	ldrsh r1, [r0, r2]	@ 000c2b28 815e
.org 0xc2b2a
	lsls r0, r1, #1	@ 000c2b2a 4800
.org 0xc2b2c
	adds r0, r0, r1	@ 000c2b2c 4018
.org 0xc2b2e
	lsls r0, r0, #2	@ 000c2b2e 8000
.org 0xc2b30
	subs r0, r0, r1	@ 000c2b30 401a
.org 0xc2b32
	lsls r0, r0, #6	@ 000c2b32 8001
.org 0xc2b34
	cmp r0, #0	@ 000c2b34 0028
.org 0xc2b36
	bge.n 0xc2b3a	@ 000c2b36 00da
.org 0xc2b38
	adds r0, #255	@ 000c2b38 ff30
.org 0xc2b3a
	asrs r0, r0, #8	@ 000c2b3a 0012
.org 0xc2b3c
	str r0, [r6, #96]	@ 000c2b3c 3066
.org 0xc2b3e
	adds r0, r6, #0	@ 000c2b3e 301c
.org 0xc2b40
	bl 0x1cd28	@ 000c2b40 5af7f2f8
.org 0xc2b44
	movs r5, #0	@ 000c2b44 0025
.org 0xc2b46
	ldrb r1, [r6, #10]	@ 000c2b46 b17a
.org 0xc2b48
	movs r0, #239	@ 000c2b48 ef20
.org 0xc2b4a
	ands r0, r1	@ 000c2b4a 0840
.org 0xc2b4c
	strb r0, [r6, #10]	@ 000c2b4c b072
.org 0xc2b4e
	adds r0, r6, #0	@ 000c2b4e 301c
.org 0xc2b50
	adds r0, #76	@ 000c2b50 4c30
.org 0xc2b52
	strb r5, [r0, #0]	@ 000c2b52 0570
.org 0xc2b54
	adds r2, r6, #0	@ 000c2b54 321c
.org 0xc2b56
	adds r2, #74	@ 000c2b56 4a32
.org 0xc2b58
	ldrb r1, [r2, #0]	@ 000c2b58 1178
.org 0xc2b5a
	movs r0, #17	@ 000c2b5a 1120
.org 0xc2b5c
	negs r0, r0	@ 000c2b5c 4042
.org 0xc2b5e
	ands r0, r1	@ 000c2b5e 0840
.org 0xc2b60
	strb r0, [r2, #0]	@ 000c2b60 1070
.org 0xc2b62
	mov r7, r8	@ 000c2b62 4746
.org 0xc2b64
	lsls r0, r7, #2	@ 000c2b64 b800
.org 0xc2b66
	add r0, sp	@ 000c2b66 6844
.org 0xc2b68
	ldrh r1, [r0, #0]	@ 000c2b68 0188
.org 0xc2b6a
	adds r0, r6, #0	@ 000c2b6a 301c
.org 0xc2b6c
	bl 0x1cf00	@ 000c2b6c 5af7c8f9
.org 0xc2b70
	adds r0, r6, #0	@ 000c2b70 301c
.org 0xc2b72
	adds r0, #36	@ 000c2b72 2430
.org 0xc2b74
	strb r4, [r0, #0]	@ 000c2b74 0470
.org 0xc2b76
	ldrb r0, [r6, #10]	@ 000c2b76 b07a
.org 0xc2b78
	movs r1, #4	@ 000c2b78 0421
.org 0xc2b7a
	orrs r0, r1	@ 000c2b7a 0843
.org 0xc2b7c
	strb r0, [r6, #10]	@ 000c2b7c b072
.org 0xc2b7e
	adds r4, r6, #0	@ 000c2b7e 341c
.org 0xc2b80
	adds r4, #116	@ 000c2b80 7434
.org 0xc2b82
	ldr r1, [pc, #48]	@ 000c2b82 0c49
.org 0xc2b84
	adds r2, r6, #0	@ 000c2b84 321c
.org 0xc2b86
	adds r2, #84	@ 000c2b86 5432
.org 0xc2b88
	adds r0, r4, #0	@ 000c2b88 201c
.org 0xc2b8a
	movs r3, #64	@ 000c2b8a 4023
.org 0xc2b8c
	bl 0x5760	@ 000c2b8c 42f7e8fd
.org 0xc2b90
	str r6, [r4, #44]	@ 000c2b90 e662
.org 0xc2b92
	str r5, [r4, #36]	@ 000c2b92 6562
.org 0xc2b94
	adds r0, r6, #0	@ 000c2b94 301c
.org 0xc2b96
	bl 0xc2bb8	@ 000c2b96 00f00ff8
.org 0xc2b9a
	add sp, #8	@ 000c2b9a 02b0
.org 0xc2b9c
	pop {r3}	@ 000c2b9c 08bc
.org 0xc2b9e
	mov r8, r3	@ 000c2b9e 9846
.org 0xc2ba0
	pop {r4, r5, r6, r7}	@ 000c2ba0 f0bc
.org 0xc2ba2
	pop {r0}	@ 000c2ba2 01bc
.org 0xc2ba4
	bx r0	@ 000c2ba4 0047
