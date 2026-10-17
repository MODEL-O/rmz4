@ FUN_08008c4c  entry 0x08008c4c  size 172
.thumb
.org 0x8c4c
FUN_08008c4c:
	push {r4, r5, r6, r7, lr}	@ 00008c4c f0b5
.org 0x8c4e
	mov r7, r9	@ 00008c4e 4f46
.org 0x8c50
	mov r6, r8	@ 00008c50 4646
.org 0x8c52
	push {r6, r7}	@ 00008c52 c0b4
.org 0x8c54
	sub sp, #4	@ 00008c54 81b0
.org 0x8c56
	adds r4, r0, #0	@ 00008c56 041c
.org 0x8c58
	mov r9, r1	@ 00008c58 8946
.org 0x8c5a
	mov r8, r2	@ 00008c5a 9046
.org 0x8c5c
	ldr r2, [pc, #124]	@ 00008c5c 1f4a
.org 0x8c5e
	movs r1, #232	@ 00008c5e e821
.org 0x8c60
	lsls r1, r1, #1	@ 00008c60 4900
.org 0x8c62
	adds r0, r2, r1	@ 00008c62 5018
.org 0x8c64
	ldrh r0, [r0, #0]	@ 00008c64 0088
.org 0x8c66
	cmp r0, #4	@ 00008c66 0428
.org 0x8c68
	bne.n 0x8c82	@ 00008c68 0bd1
.org 0x8c6a
	ldr r0, [pc, #116]	@ 00008c6a 1d48
.org 0x8c6c
	add r0, r9	@ 00008c6c 4844
.org 0x8c6e
	movs r1, #240	@ 00008c6e f021
.org 0x8c70
	lsls r1, r1, #10	@ 00008c70 8902
.org 0x8c72
	str r2, [sp, #0]	@ 00008c72 0092
.org 0x8c74
	bl 0x129050	@ 00008c74 20f1ecf9
.org 0x8c78
	movs r3, #240	@ 00008c78 f023
.org 0x8c7a
	lsls r3, r3, #8	@ 00008c7a 1b02
.org 0x8c7c
	adds r3, r3, r0	@ 00008c7c 1b18
.org 0x8c7e
	mov r9, r3	@ 00008c7e 9946
.org 0x8c80
	ldr r2, [sp, #0]	@ 00008c80 009a
.org 0x8c82
	adds r4, #1	@ 00008c82 0134
.org 0x8c84
	movs r7, #233	@ 00008c84 e927
.org 0x8c86
	lsls r7, r7, #1	@ 00008c86 7f00
.org 0x8c88
	adds r0, r2, r7	@ 00008c88 d019
.org 0x8c8a
	ldrb r0, [r0, #0]	@ 00008c8a 0078
.org 0x8c8c
	cmp r4, r0	@ 00008c8c 8442
.org 0x8c8e
	bge.n 0x8cf0	@ 00008c8e 2fda
.org 0x8c90
	mov ip, r0	@ 00008c90 8446
.org 0x8c92
	lsls r0, r4, #1	@ 00008c92 6000
.org 0x8c94
	adds r0, r0, r4	@ 00008c94 0019
.org 0x8c96
	lsls r0, r0, #3	@ 00008c96 c000
.org 0x8c98
	movs r3, #240	@ 00008c98 f023
.org 0x8c9a
	lsls r3, r3, #1	@ 00008c9a 5b00
.org 0x8c9c
	adds r1, r0, r3	@ 00008c9c c118
.org 0x8c9e
	adds r6, r1, r2	@ 00008c9e 8e18
.org 0x8ca0
	adds r7, #10	@ 00008ca0 0a37
.org 0x8ca2
	adds r1, r0, r7	@ 00008ca2 c119
.org 0x8ca4
	adds r5, r1, r2	@ 00008ca4 8d18
.org 0x8ca6
	adds r3, r0, r2	@ 00008ca6 8318
.org 0x8ca8
	movs r1, #236	@ 00008ca8 ec21
.org 0x8caa
	lsls r1, r1, #1	@ 00008caa 4900
.org 0x8cac
	adds r0, r3, r1	@ 00008cac 5818
.org 0x8cae
	ldrh r1, [r0, #0]	@ 00008cae 0188
.org 0x8cb0
	lsls r2, r1, #1	@ 00008cb0 4a00
.org 0x8cb2
	ldr r0, [r5, #0]	@ 00008cb2 2868
.org 0x8cb4
	mov r7, r9	@ 00008cb4 4f46
.org 0x8cb6
	subs r0, r7, r0	@ 00008cb6 381a
.org 0x8cb8
	adds r0, r0, r1	@ 00008cb8 4018
.org 0x8cba
	cmp r2, r0	@ 00008cba 8242
.org 0x8cbc
	bls.n 0x8ce4	@ 00008cbc 12d9
.org 0x8cbe
	movs r1, #237	@ 00008cbe ed21
.org 0x8cc0
	lsls r1, r1, #1	@ 00008cc0 4900
.org 0x8cc2
	adds r0, r3, r1	@ 00008cc2 5818
.org 0x8cc4
	ldrh r0, [r0, #0]	@ 00008cc4 0088
.org 0x8cc6
	lsls r2, r0, #1	@ 00008cc6 4200
.org 0x8cc8
	ldr r1, [r6, #0]	@ 00008cc8 3168
.org 0x8cca
	mov r7, r8	@ 00008cca 4746
.org 0x8ccc
	subs r1, r7, r1	@ 00008ccc 791a
.org 0x8cce
	adds r1, r1, r0	@ 00008cce 0918
.org 0x8cd0
	subs r1, #1	@ 00008cd0 0139
.org 0x8cd2
	cmp r2, r1	@ 00008cd2 8a42
.org 0x8cd4
	bls.n 0x8ce4	@ 00008cd4 06d9
.org 0x8cd6
	adds r0, r4, #0	@ 00008cd6 201c
.org 0x8cd8
	b.n 0x8cf4	@ 00008cd8 0ce0
.org 0x8cda
	.byte 0x00	@ 00008cda data
.org 0x8cdb
	.byte 0x00	@ 00008cdb data
.org 0x8cdc
	.byte 0xb0,0x0a,0x00,0x02	@ 00008cdc data
.org 0x8ce0
	.byte 0x00,0x10,0xff,0xff	@ 00008ce0 data
.org 0x8ce4
	adds r6, #24	@ 00008ce4 1836
.org 0x8ce6
	adds r5, #24	@ 00008ce6 1835
.org 0x8ce8
	adds r3, #24	@ 00008ce8 1833
.org 0x8cea
	adds r4, #1	@ 00008cea 0134
.org 0x8cec
	cmp r4, ip	@ 00008cec 6445
.org 0x8cee
	blt.n 0x8ca8	@ 00008cee dbdb
.org 0x8cf0
	movs r0, #1	@ 00008cf0 0120
.org 0x8cf2
	negs r0, r0	@ 00008cf2 4042
.org 0x8cf4
	add sp, #4	@ 00008cf4 01b0
.org 0x8cf6
	pop {r3, r4}	@ 00008cf6 18bc
