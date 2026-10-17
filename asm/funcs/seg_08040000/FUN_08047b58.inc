@ FUN_08047b58  entry 0x08047b58  size 134
.thumb
.org 0x47b58
FUN_08047b58:
	push {r4, lr}	@ 00047b58 10b5
.org 0x47b5a
	adds r4, r0, #0	@ 00047b5a 041c
.org 0x47b5c
	ldr r0, [r4, #40]	@ 00047b5c a06a
.org 0x47b5e
	adds r0, #250	@ 00047b5e fa30
.org 0x47b60
	ldrb r0, [r0, #0]	@ 00047b60 0078
.org 0x47b62
	cmp r0, #2	@ 00047b62 0228
.org 0x47b64
	bne.n 0x47ba4	@ 00047b64 1ed1
.org 0x47b66
	ldrb r1, [r4, #10]	@ 00047b66 a17a
.org 0x47b68
	movs r0, #254	@ 00047b68 fe20
.org 0x47b6a
	ands r0, r1	@ 00047b6a 0840
.org 0x47b6c
	movs r2, #0	@ 00047b6c 0022
.org 0x47b6e
	movs r1, #253	@ 00047b6e fd21
.org 0x47b70
	ands r0, r1	@ 00047b70 0840
.org 0x47b72
	strb r0, [r4, #10]	@ 00047b72 a072
.org 0x47b74
	adds r0, r4, #0	@ 00047b74 201c
.org 0x47b76
	adds r0, #140	@ 00047b76 8c30
.org 0x47b78
	str r2, [r0, #0]	@ 00047b78 0260
.org 0x47b7a
	adds r0, #4	@ 00047b7a 0430
.org 0x47b7c
	str r2, [r0, #0]	@ 00047b7c 0260
.org 0x47b7e
	adds r0, #4	@ 00047b7e 0430
.org 0x47b80
	strb r2, [r0, #0]	@ 00047b80 0270
.org 0x47b82
	ldrb r1, [r4, #10]	@ 00047b82 a17a
.org 0x47b84
	movs r0, #251	@ 00047b84 fb20
.org 0x47b86
	ands r0, r1	@ 00047b86 0840
.org 0x47b88
	strb r0, [r4, #10]	@ 00047b88 a072
.org 0x47b8a
	ldr r1, [pc, #20]	@ 00047b8a 0549
.org 0x47b8c
	ldrb r0, [r4, #9]	@ 00047b8c 607a
.org 0x47b8e
	lsls r0, r0, #2	@ 00047b8e 8000
.org 0x47b90
	adds r0, r0, r1	@ 00047b90 4018
.org 0x47b92
	movs r1, #3	@ 00047b92 0321
.org 0x47b94
	str r1, [r4, #12]	@ 00047b94 e160
.org 0x47b96
	ldr r0, [r0, #0]	@ 00047b96 0068
.org 0x47b98
	ldr r0, [r0, #12]	@ 00047b98 c068
.org 0x47b9a
	str r0, [r4, #20]	@ 00047b9a 6061
.org 0x47b9c
	b.n 0x47bde	@ 00047b9c 1fe0
.org 0x47b9e
	.byte 0x00	@ 00047b9e data
.org 0x47b9f
	.byte 0x00	@ 00047b9f data
.org 0x47ba0
	.byte 0xf8,0x39,0x85,0x08	@ 00047ba0 data
.org 0x47ba4
	adds r0, r4, #0	@ 00047ba4 201c
.org 0x47ba6
	bl 0x1cff0	@ 00047ba6 d5f723fa
.org 0x47baa
	ldrb r0, [r4, #18]	@ 00047baa a07c
.org 0x47bac
	subs r0, #1	@ 00047bac 0138
.org 0x47bae
	strb r0, [r4, #18]	@ 00047bae a074
.org 0x47bb0
	lsls r0, r0, #24	@ 00047bb0 0006
.org 0x47bb2
	lsrs r0, r0, #24	@ 00047bb2 000e
.org 0x47bb4
	cmp r0, #255	@ 00047bb4 ff28
.org 0x47bb6
	beq.n 0x47bc6	@ 00047bb6 06d0
.org 0x47bb8
	adds r0, r4, #0	@ 00047bb8 201c
.org 0x47bba
	adds r0, #140	@ 00047bba 8c30
.org 0x47bbc
	ldr r0, [r0, #0]	@ 00047bbc 0068
.org 0x47bbe
	movs r1, #4	@ 00047bbe 0421
.org 0x47bc0
	ands r0, r1	@ 00047bc0 0840
.org 0x47bc2
	cmp r0, #0	@ 00047bc2 0028
.org 0x47bc4
	beq.n 0x47bde	@ 00047bc4 0bd0
.org 0x47bc6
	ldr r1, [pc, #28]	@ 00047bc6 0749
.org 0x47bc8
	ldrb r0, [r4, #9]	@ 00047bc8 607a
.org 0x47bca
	lsls r0, r0, #2	@ 00047bca 8000
.org 0x47bcc
	adds r0, r0, r1	@ 00047bcc 4018
.org 0x47bce
	movs r1, #2	@ 00047bce 0221
.org 0x47bd0
	str r1, [r4, #12]	@ 00047bd0 e160
.org 0x47bd2
	ldr r0, [r0, #0]	@ 00047bd2 0068
.org 0x47bd4
	ldr r0, [r0, #8]	@ 00047bd4 8068
.org 0x47bd6
	str r0, [r4, #20]	@ 00047bd6 6061
.org 0x47bd8
	adds r0, r4, #0	@ 00047bd8 201c
.org 0x47bda
	bl 0x478b8	@ 00047bda fff76dfe
