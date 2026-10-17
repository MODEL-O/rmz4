@ FUN_08097af8  entry 0x08097af8  size 184
.thumb
.org 0x97af8
FUN_08097af8:
	push {r4, r5, r6, lr}	@ 00097af8 70b5
.org 0x97afa
	sub sp, #8	@ 00097afa 82b0
.org 0x97afc
	adds r6, r0, #0	@ 00097afc 061c
.org 0x97afe
	ldr r0, [r6, #84]	@ 00097afe 706d
.org 0x97b00
	str r0, [sp, #0]	@ 00097b00 0090
.org 0x97b02
	ldr r0, [r6, #88]	@ 00097b02 b06d
.org 0x97b04
	ldr r1, [pc, #168]	@ 00097b04 2a49
.org 0x97b06
	adds r0, r0, r1	@ 00097b06 4018
.org 0x97b08
	str r0, [sp, #4]	@ 00097b08 0190
.org 0x97b0a
	ldr r5, [pc, #168]	@ 00097b0a 2a4d
.org 0x97b0c
	ldrb r0, [r6, #10]	@ 00097b0c b07a
.org 0x97b0e
	movs r4, #16	@ 00097b0e 1024
.org 0x97b10
	adds r3, r4, #0	@ 00097b10 231c
.org 0x97b12
	ands r3, r0	@ 00097b12 0340
.org 0x97b14
	lsls r3, r3, #24	@ 00097b14 1b06
.org 0x97b16
	lsrs r3, r3, #24	@ 00097b16 1b0e
.org 0x97b18
	mov r0, sp	@ 00097b18 6846
.org 0x97b1a
	adds r1, r5, #0	@ 00097b1a 291c
.org 0x97b1c
	movs r2, #0	@ 00097b1c 0022
.org 0x97b1e
	bl 0xd4c8c	@ 00097b1e 3df0b5f8
.org 0x97b22
	adds r1, r5, #0	@ 00097b22 291c
.org 0x97b24
	adds r1, #28	@ 00097b24 1c31
.org 0x97b26
	ldrb r0, [r6, #10]	@ 00097b26 b07a
.org 0x97b28
	adds r3, r4, #0	@ 00097b28 231c
.org 0x97b2a
	ands r3, r0	@ 00097b2a 0340
.org 0x97b2c
	lsls r3, r3, #24	@ 00097b2c 1b06
.org 0x97b2e
	lsrs r3, r3, #24	@ 00097b2e 1b0e
.org 0x97b30
	mov r0, sp	@ 00097b30 6846
.org 0x97b32
	movs r2, #0	@ 00097b32 0022
.org 0x97b34
	bl 0xd4c8c	@ 00097b34 3df0aaf8
.org 0x97b38
	adds r1, r5, #0	@ 00097b38 291c
.org 0x97b3a
	adds r1, #56	@ 00097b3a 3831
.org 0x97b3c
	ldrb r0, [r6, #10]	@ 00097b3c b07a
.org 0x97b3e
	adds r3, r4, #0	@ 00097b3e 231c
.org 0x97b40
	ands r3, r0	@ 00097b40 0340
.org 0x97b42
	lsls r3, r3, #24	@ 00097b42 1b06
.org 0x97b44
	lsrs r3, r3, #24	@ 00097b44 1b0e
.org 0x97b46
	mov r0, sp	@ 00097b46 6846
.org 0x97b48
	movs r2, #0	@ 00097b48 0022
.org 0x97b4a
	bl 0xd4c8c	@ 00097b4a 3df09ff8
.org 0x97b4e
	adds r5, #84	@ 00097b4e 5435
.org 0x97b50
	ldrb r0, [r6, #10]	@ 00097b50 b07a
.org 0x97b52
	ands r4, r0	@ 00097b52 0440
.org 0x97b54
	lsls r4, r4, #24	@ 00097b54 2406
.org 0x97b56
	lsrs r4, r4, #24	@ 00097b56 240e
.org 0x97b58
	mov r0, sp	@ 00097b58 6846
.org 0x97b5a
	adds r1, r5, #0	@ 00097b5a 291c
.org 0x97b5c
	movs r2, #0	@ 00097b5c 0022
.org 0x97b5e
	adds r3, r4, #0	@ 00097b5e 231c
.org 0x97b60
	bl 0xd4c8c	@ 00097b60 3df094f8
.org 0x97b64
	movs r0, #1	@ 00097b64 0120
.org 0x97b66
	mov r1, sp	@ 00097b66 6946
.org 0x97b68
	bl 0xd0c88	@ 00097b68 39f08ef8
.org 0x97b6c
	movs r0, #42	@ 00097b6c 2a20
.org 0x97b6e
	bl 0x2b10	@ 00097b6e 6af7cfff
.org 0x97b72
	adds r4, r6, #0	@ 00097b72 341c
.org 0x97b74
	adds r4, #84	@ 00097b74 5434
.org 0x97b76
	movs r0, #4	@ 00097b76 0420
.org 0x97b78
	movs r1, #2	@ 00097b78 0221
.org 0x97b7a
	adds r2, r4, #0	@ 00097b7a 221c
.org 0x97b7c
	bl 0x2ab88	@ 00097b7c 93f704f8
.org 0x97b80
	ldr r2, [pc, #52]	@ 00097b80 0d4a
.org 0x97b82
	ldrh r1, [r2, #12]	@ 00097b82 9189
.org 0x97b84
	ldr r0, [pc, #52]	@ 00097b84 0d48
.org 0x97b86
	cmp r1, r0	@ 00097b86 8142
.org 0x97b88
	bhi.n 0x97b8e	@ 00097b88 01d8
.org 0x97b8a
	adds r0, r1, #1	@ 00097b8a 481c
.org 0x97b8c
	strh r0, [r2, #12]	@ 00097b8c 9081
.org 0x97b8e
	adds r0, r6, #0	@ 00097b8e 301c
.org 0x97b90
	adds r1, r4, #0	@ 00097b90 211c
.org 0x97b92
	bl 0x2abe0	@ 00097b92 93f725f8
.org 0x97b96
	ldr r1, [pc, #40]	@ 00097b96 0a49
.org 0x97b98
	ldrb r0, [r6, #9]	@ 00097b98 707a
.org 0x97b9a
	lsls r0, r0, #2	@ 00097b9a 8000
.org 0x97b9c
	adds r0, r0, r1	@ 00097b9c 4018
.org 0x97b9e
	movs r1, #4	@ 00097b9e 0421
.org 0x97ba0
	str r1, [r6, #12]	@ 00097ba0 f160
.org 0x97ba2
	ldr r0, [r0, #0]	@ 00097ba2 0068
.org 0x97ba4
	ldr r0, [r0, #16]	@ 00097ba4 0069
.org 0x97ba6
	str r0, [r6, #20]	@ 00097ba6 7061
.org 0x97ba8
	add sp, #8	@ 00097ba8 02b0
.org 0x97baa
	pop {r4, r5, r6}	@ 00097baa 70bc
.org 0x97bac
	pop {r0}	@ 00097bac 01bc
.org 0x97bae
	bx r0	@ 00097bae 0047
