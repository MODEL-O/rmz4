@ FUN_080c8c4c  entry 0x080c8c4c  size 134
.thumb
.org 0xc8c4c
FUN_080c8c4c:
	push {r4, r5, r6, r7, lr}	@ 000c8c4c f0b5
.org 0xc8c4e
	mov r7, r8	@ 000c8c4e 4746
.org 0xc8c50
	push {r7}	@ 000c8c50 80b4
.org 0xc8c52
	sub sp, #12	@ 000c8c52 83b0
.org 0xc8c54
	adds r7, r0, #0	@ 000c8c54 071c
.org 0xc8c56
	ldr r6, [r7, #40]	@ 000c8c56 be6a
.org 0xc8c58
	ldrb r0, [r7, #13]	@ 000c8c58 787b
.org 0xc8c5a
	cmp r0, #2	@ 000c8c5a 0228
.org 0xc8c5c
	bhi.n 0xc8c84	@ 000c8c5c 12d8
.org 0xc8c5e
	ldrb r0, [r6, #12]	@ 000c8c5e 307b
.org 0xc8c60
	cmp r0, #1	@ 000c8c60 0128
.org 0xc8c62
	bls.n 0xc8c84	@ 000c8c62 0fd9
.org 0xc8c64
	ldr r1, [pc, #24]	@ 000c8c64 0649
.org 0xc8c66
	ldrb r0, [r7, #9]	@ 000c8c66 787a
.org 0xc8c68
	lsls r0, r0, #2	@ 000c8c68 8000
.org 0xc8c6a
	adds r0, r0, r1	@ 000c8c6a 4018
.org 0xc8c6c
	movs r1, #2	@ 000c8c6c 0221
.org 0xc8c6e
	str r1, [r7, #12]	@ 000c8c6e f960
.org 0xc8c70
	ldr r0, [r0, #0]	@ 000c8c70 0068
.org 0xc8c72
	ldr r0, [r0, #8]	@ 000c8c72 8068
.org 0xc8c74
	str r0, [r7, #20]	@ 000c8c74 7861
.org 0xc8c76
	adds r0, r7, #0	@ 000c8c76 381c
.org 0xc8c78
	bl 0xc88ec	@ 000c8c78 fff738fe
.org 0xc8c7c
	b.n 0xc8f10	@ 000c8c7c 48e1
.org 0xc8c7e
	.byte 0x00	@ 000c8c7e data
.org 0xc8c7f
	.byte 0x00	@ 000c8c7f data
.org 0xc8c80
	.byte 0xf4,0x49,0x86,0x08	@ 000c8c80 data
.org 0xc8c84
	adds r0, r7, #0	@ 000c8c84 381c
.org 0xc8c86
	bl 0x1cff0	@ 000c8c86 54f7b3f9
.org 0xc8c8a
	ldr r4, [pc, #64]	@ 000c8c8a 104c
.org 0xc8c8c
	ldrb r5, [r7, #17]	@ 000c8c8c 7d7c
.org 0xc8c8e
	adds r0, r5, #0	@ 000c8c8e 281c
.org 0xc8c90
	movs r1, #6	@ 000c8c90 0621
.org 0xc8c92
	bl 0x129198	@ 000c8c92 60f081fa
.org 0xc8c96
	lsls r0, r0, #24	@ 000c8c96 0006
.org 0xc8c98
	lsrs r0, r0, #22	@ 000c8c98 800d
.org 0xc8c9a
	adds r0, r0, r4	@ 000c8c9a 0019
.org 0xc8c9c
	ldr r1, [r6, #84]	@ 000c8c9c 716d
.org 0xc8c9e
	ldr r0, [r0, #0]	@ 000c8c9e 0068
.org 0xc8ca0
	adds r1, r1, r0	@ 000c8ca0 0918
.org 0xc8ca2
	mov r8, r1	@ 000c8ca2 8846
.org 0xc8ca4
	ldr r4, [pc, #40]	@ 000c8ca4 0a4c
.org 0xc8ca6
	adds r0, r5, #0	@ 000c8ca6 281c
.org 0xc8ca8
	movs r1, #6	@ 000c8ca8 0621
.org 0xc8caa
	bl 0x129120	@ 000c8caa 60f039fa
.org 0xc8cae
	lsls r0, r0, #24	@ 000c8cae 0006
.org 0xc8cb0
	lsrs r0, r0, #22	@ 000c8cb0 800d
.org 0xc8cb2
	adds r0, r0, r4	@ 000c8cb2 0019
.org 0xc8cb4
	ldr r1, [r6, #88]	@ 000c8cb4 b16d
.org 0xc8cb6
	ldr r0, [r0, #0]	@ 000c8cb6 0068
.org 0xc8cb8
	adds r5, r1, r0	@ 000c8cb8 0d18
.org 0xc8cba
	ldrb r0, [r7, #13]	@ 000c8cba 787b
.org 0xc8cbc
	cmp r0, #4	@ 000c8cbc 0428
.org 0xc8cbe
	bls.n 0xc8cc2	@ 000c8cbe 00d9
.org 0xc8cc0
	b.n 0xc8f10	@ 000c8cc0 26e1
.org 0xc8cc2
	lsls r0, r0, #2	@ 000c8cc2 8000
.org 0xc8cc4
	ldr r1, [pc, #12]	@ 000c8cc4 0349
.org 0xc8cc6
	adds r0, r0, r1	@ 000c8cc6 4018
.org 0xc8cc8
	ldr r0, [r0, #0]	@ 000c8cc8 0068
.org 0xc8cca
	mov pc, r0	@ 000c8cca 8746
.org 0xc8ccc
	.byte 0x28,0x61,0x86,0x08	@ 000c8ccc data
.org 0xc8cd0
	.byte 0x40,0x61,0x86,0x08	@ 000c8cd0 data
