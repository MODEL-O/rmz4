@ FUN_08114b28  entry 0x08114b28  size 210
.thumb
.org 0x114b28
FUN_08114b28:
	push {r4, r5, r6, r7, lr}	@ 00114b28 f0b5
.org 0x114b2a
	adds r7, r0, #0	@ 00114b2a 071c
.org 0x114b2c
	ldr r4, [pc, #44]	@ 00114b2c 0b4c
.org 0x114b2e
	ldr r0, [r4, #0]	@ 00114b2e 2068
.org 0x114b30
	cmp r0, #0	@ 00114b30 0028
.org 0x114b32
	beq.n 0x114b66	@ 00114b32 18d0
.org 0x114b34
	subs r0, #1	@ 00114b34 0138
.org 0x114b36
	str r0, [r4, #0]	@ 00114b36 2060
.org 0x114b38
	movs r1, #3	@ 00114b38 0321
.org 0x114b3a
	ands r0, r1	@ 00114b3a 0840
.org 0x114b3c
	cmp r0, #3	@ 00114b3c 0328
.org 0x114b3e
	bne.n 0x114b66	@ 00114b3e 12d1
.org 0x114b40
	ldr r1, [pc, #28]	@ 00114b40 0749
.org 0x114b42
	adds r0, r7, r1	@ 00114b42 7818
.org 0x114b44
	ldr r0, [r0, #0]	@ 00114b44 0068
.org 0x114b46
	movs r1, #4	@ 00114b46 0421
.org 0x114b48
	bl 0x2b63c	@ 00114b48 16f778fd
.org 0x114b4c
	lsls r0, r0, #24	@ 00114b4c 0006
.org 0x114b4e
	lsrs r0, r0, #24	@ 00114b4e 000e
.org 0x114b50
	cmp r0, #0	@ 00114b50 0028
.org 0x114b52
	beq.n 0x114b64	@ 00114b52 07d0
.org 0x114b54
	movs r0, #34	@ 00114b54 2220
.org 0x114b56
	bl 0x2b10	@ 00114b56 edf6dbff
.org 0x114b5a
	b.n 0x114b66	@ 00114b5a 04e0
.org 0x114b5c
	.byte 0x0c,0xdc,0x02,0x02	@ 00114b5c data
.org 0x114b60
	.byte 0xa8,0x63,0x00,0x00	@ 00114b60 data
.org 0x114b64
	str r0, [r4, #0]	@ 00114b64 2060
.org 0x114b66
	ldr r0, [pc, #144]	@ 00114b66 2448
.org 0x114b68
	ldrh r1, [r0, #8]	@ 00114b68 0189
.org 0x114b6a
	movs r0, #8	@ 00114b6a 0820
.org 0x114b6c
	ands r0, r1	@ 00114b6c 0840
.org 0x114b6e
	lsls r0, r0, #16	@ 00114b6e 0004
.org 0x114b70
	lsrs r6, r0, #16	@ 00114b70 060c
.org 0x114b72
	cmp r6, #0	@ 00114b72 002e
.org 0x114b74
	bne.n 0x114c08	@ 00114b74 48d1
.org 0x114b76
	ldr r5, [pc, #132]	@ 00114b76 214d
.org 0x114b78
	ldr r0, [r5, #0]	@ 00114b78 2868
.org 0x114b7a
	cmp r0, #0	@ 00114b7a 0028
.org 0x114b7c
	beq.n 0x114ba4	@ 00114b7c 12d0
.org 0x114b7e
	ldr r2, [pc, #128]	@ 00114b7e 204a
.org 0x114b80
	adds r0, r7, r2	@ 00114b80 b818
.org 0x114b82
	ldr r0, [r0, #0]	@ 00114b82 0068
.org 0x114b84
	adds r1, r0, #0	@ 00114b84 011c
.org 0x114b86
	adds r1, #164	@ 00114b86 a431
.org 0x114b88
	movs r2, #0	@ 00114b88 0022
.org 0x114b8a
	ldrsh r4, [r1, r2]	@ 00114b8a 8c5e
.org 0x114b8c
	bl 0x2b61c	@ 00114b8c 16f746fd
.org 0x114b90
	lsls r0, r0, #24	@ 00114b90 0006
.org 0x114b92
	lsrs r0, r0, #24	@ 00114b92 000e
.org 0x114b94
	cmp r4, r0	@ 00114b94 8442
.org 0x114b96
	blt.n 0x114ba4	@ 00114b96 05db
.org 0x114b98
	ldr r0, [pc, #104]	@ 00114b98 1a48
.org 0x114b9a
	ldr r1, [r0, #0]	@ 00114b9a 0168
.org 0x114b9c
	ldr r2, [r5, #0]	@ 00114b9c 2a68
.org 0x114b9e
	adds r1, r1, r2	@ 00114b9e 8918
.org 0x114ba0
	str r1, [r0, #0]	@ 00114ba0 0160
.org 0x114ba2
	str r6, [r5, #0]	@ 00114ba2 2e60
.org 0x114ba4
	ldr r4, [pc, #92]	@ 00114ba4 174c
.org 0x114ba6
	ldr r0, [r4, #0]	@ 00114ba6 2068
.org 0x114ba8
	cmp r0, #0	@ 00114ba8 0028
.org 0x114baa
	beq.n 0x114bcc	@ 00114baa 0fd0
.org 0x114bac
	subs r0, #1	@ 00114bac 0138
.org 0x114bae
	str r0, [r4, #0]	@ 00114bae 2060
.org 0x114bb0
	movs r1, #3	@ 00114bb0 0321
.org 0x114bb2
	ands r0, r1	@ 00114bb2 0840
.org 0x114bb4
	cmp r0, #3	@ 00114bb4 0328
.org 0x114bb6
	bne.n 0x114bcc	@ 00114bb6 09d1
.org 0x114bb8
	ldr r1, [pc, #68]	@ 00114bb8 1149
.org 0x114bba
	adds r0, r7, r1	@ 00114bba 7818
.org 0x114bbc
	ldr r0, [r0, #0]	@ 00114bbc 0068
.org 0x114bbe
	bl 0x2b674	@ 00114bbe 16f759fd
.org 0x114bc2
	lsls r0, r0, #24	@ 00114bc2 0006
.org 0x114bc4
	lsrs r0, r0, #24	@ 00114bc4 000e
.org 0x114bc6
	cmp r0, #0	@ 00114bc6 0028
.org 0x114bc8
	bne.n 0x114bcc	@ 00114bc8 00d1
.org 0x114bca
	str r0, [r4, #0]	@ 00114bca 2060
.org 0x114bcc
	ldr r4, [pc, #44]	@ 00114bcc 0b4c
.org 0x114bce
	ldr r0, [r4, #0]	@ 00114bce 2068
.org 0x114bd0
	cmp r0, #0	@ 00114bd0 0028
.org 0x114bd2
	beq.n 0x114c0e	@ 00114bd2 1cd0
.org 0x114bd4
	subs r0, #1	@ 00114bd4 0138
.org 0x114bd6
	str r0, [r4, #0]	@ 00114bd6 2060
.org 0x114bd8
	movs r1, #3	@ 00114bd8 0321
.org 0x114bda
	ands r0, r1	@ 00114bda 0840
.org 0x114bdc
	cmp r0, #3	@ 00114bdc 0328
.org 0x114bde
	bne.n 0x114c0e	@ 00114bde 16d1
.org 0x114be0
	ldr r2, [pc, #28]	@ 00114be0 074a
.org 0x114be2
	adds r0, r7, r2	@ 00114be2 b818
.org 0x114be4
	ldr r0, [r0, #0]	@ 00114be4 0068
.org 0x114be6
	bl 0x2b5c4	@ 00114be6 16f7edfc
.org 0x114bea
	lsls r0, r0, #24	@ 00114bea 0006
.org 0x114bec
	lsrs r0, r0, #24	@ 00114bec 000e
.org 0x114bee
	cmp r0, #0	@ 00114bee 0028
.org 0x114bf0
	bne.n 0x114c0e	@ 00114bf0 0dd1
.org 0x114bf2
	str r0, [r4, #0]	@ 00114bf2 2060
.org 0x114bf4
	b.n 0x114c0e	@ 00114bf4 0be0
.org 0x114bf6
	.byte 0x00	@ 00114bf6 data
.org 0x114bf7
	.byte 0x00	@ 00114bf7 data
.org 0x114bf8
	.byte 0x10,0xe9,0x02,0x02	@ 00114bf8 data
