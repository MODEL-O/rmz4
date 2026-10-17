@ FUN_08046b64  entry 0x08046b64  size 194
.thumb
.org 0x46b64
FUN_08046b64:
	push {r4, r5, r6, r7, lr}	@ 00046b64 f0b5
.org 0x46b66
	mov r7, sl	@ 00046b66 5746
.org 0x46b68
	mov r6, r9	@ 00046b68 4e46
.org 0x46b6a
	mov r5, r8	@ 00046b6a 4546
.org 0x46b6c
	push {r5, r6, r7}	@ 00046b6c e0b4
.org 0x46b6e
	sub sp, #8	@ 00046b6e 82b0
.org 0x46b70
	str r0, [sp, #0]	@ 00046b70 0090
.org 0x46b72
	lsls r1, r1, #24	@ 00046b72 0906
.org 0x46b74
	lsrs r1, r1, #24	@ 00046b74 090e
.org 0x46b76
	str r1, [sp, #4]	@ 00046b76 0191
.org 0x46b78
	ldr r0, [pc, #108]	@ 00046b78 1b48
.org 0x46b7a
	ldr r0, [r0, #0]	@ 00046b7a 0068
.org 0x46b7c
	bl 0x5500	@ 00046b7c bef7c0fc
.org 0x46b80
	adds r2, r0, #0	@ 00046b80 021c
.org 0x46b82
	cmp r2, #0	@ 00046b82 002a
.org 0x46b84
	beq.n 0x46c24	@ 00046b84 4ed0
.org 0x46b86
	ldr r7, [pc, #100]	@ 00046b86 194f
.org 0x46b88
	movs r6, #26	@ 00046b88 1a26
.org 0x46b8a
	strb r6, [r2, #9]	@ 00046b8a 5672
.org 0x46b8c
	ldr r0, [r7, #104]	@ 00046b8c b86e
.org 0x46b8e
	ldr r0, [r0, #0]	@ 00046b8e 0068
.org 0x46b90
	str r0, [r2, #20]	@ 00046b90 5061
.org 0x46b92
	ldrb r1, [r2, #11]	@ 00046b92 d17a
.org 0x46b94
	movs r0, #191	@ 00046b94 bf20
.org 0x46b96
	mov r9, r0	@ 00046b96 8146
.org 0x46b98
	ands r0, r1	@ 00046b98 0840
.org 0x46b9a
	strb r0, [r2, #11]	@ 00046b9a d072
.org 0x46b9c
	adds r3, r2, #0	@ 00046b9c 131c
.org 0x46b9e
	adds r3, #37	@ 00046b9e 2533
.org 0x46ba0
	movs r1, #16	@ 00046ba0 1021
.org 0x46ba2
	mov r8, r1	@ 00046ba2 8846
.org 0x46ba4
	mov r0, r8	@ 00046ba4 4046
.org 0x46ba6
	strb r0, [r3, #0]	@ 00046ba6 1870
.org 0x46ba8
	ldr r5, [pc, #68]	@ 00046ba8 114d
.org 0x46baa
	ldrh r0, [r5, #0]	@ 00046baa 2888
.org 0x46bac
	strh r0, [r2, #32]	@ 00046bac 1084
.org 0x46bae
	ldr r4, [pc, #68]	@ 00046bae 114c
.org 0x46bb0
	ldrb r0, [r4, #0]	@ 00046bb0 2078
.org 0x46bb2
	movs r1, #34	@ 00046bb2 2221
.org 0x46bb4
	adds r1, r1, r2	@ 00046bb4 8918
.org 0x46bb6
	mov ip, r1	@ 00046bb6 8c46
.org 0x46bb8
	strb r0, [r1, #0]	@ 00046bb8 0870
.org 0x46bba
	ldr r0, [sp, #0]	@ 00046bba 0098
.org 0x46bbc
	adds r0, #248	@ 00046bbc f830
.org 0x46bbe
	ldrb r0, [r0, #0]	@ 00046bbe 0078
.org 0x46bc0
	adds r1, r7, #0	@ 00046bc0 391c
.org 0x46bc2
	cmp r0, #2	@ 00046bc2 0228
.org 0x46bc4
	bne.n 0x46bf8	@ 00046bc4 18d1
.org 0x46bc6
	strb r6, [r2, #9]	@ 00046bc6 5672
.org 0x46bc8
	ldr r0, [r1, #104]	@ 00046bc8 886e
.org 0x46bca
	ldr r0, [r0, #0]	@ 00046bca 0068
.org 0x46bcc
	str r0, [r2, #20]	@ 00046bcc 5061
.org 0x46bce
	ldrb r1, [r2, #11]	@ 00046bce d17a
.org 0x46bd0
	mov r0, r9	@ 00046bd0 4846
.org 0x46bd2
	ands r0, r1	@ 00046bd2 0840
.org 0x46bd4
	strb r0, [r2, #11]	@ 00046bd4 d072
.org 0x46bd6
	mov r0, r8	@ 00046bd6 4046
.org 0x46bd8
	strb r0, [r3, #0]	@ 00046bd8 1870
.org 0x46bda
	ldrh r0, [r5, #0]	@ 00046bda 2888
.org 0x46bdc
	strh r0, [r2, #32]	@ 00046bdc 1084
.org 0x46bde
	adds r1, r4, #0	@ 00046bde 211c
.org 0x46be0
	ldrb r0, [r1, #0]	@ 00046be0 0878
.org 0x46be2
	mov r3, ip	@ 00046be2 6346
.org 0x46be4
	strb r0, [r3, #0]	@ 00046be4 1870
.org 0x46be6
	b.n 0x46c16	@ 00046be6 16e0
.org 0x46be8
	.byte 0x88,0xed,0x02,0x02	@ 00046be8 data
.org 0x46bec
	.byte 0xf8,0x39,0x85,0x08	@ 00046bec data
.org 0x46bf0
	.byte 0xfc,0x36,0x85,0x08	@ 00046bf0 data
.org 0x46bf4
	.byte 0x04,0x37,0x85,0x08	@ 00046bf4 data
.org 0x46bf8
	strb r6, [r2, #9]	@ 00046bf8 5672
.org 0x46bfa
	ldr r0, [r7, #104]	@ 00046bfa b86e
.org 0x46bfc
	ldr r0, [r0, #0]	@ 00046bfc 0068
.org 0x46bfe
	str r0, [r2, #20]	@ 00046bfe 5061
.org 0x46c00
	ldrb r1, [r2, #11]	@ 00046c00 d17a
.org 0x46c02
	mov r0, r9	@ 00046c02 4846
.org 0x46c04
	ands r0, r1	@ 00046c04 0840
.org 0x46c06
	strb r0, [r2, #11]	@ 00046c06 d072
.org 0x46c08
	mov r0, r8	@ 00046c08 4046
.org 0x46c0a
	strb r0, [r3, #0]	@ 00046c0a 1870
.org 0x46c0c
	ldrh r0, [r5, #2]	@ 00046c0c 6888
.org 0x46c0e
	strh r0, [r2, #32]	@ 00046c0e 1084
.org 0x46c10
	ldrb r0, [r4, #1]	@ 00046c10 6078
.org 0x46c12
	mov r1, ip	@ 00046c12 6146
.org 0x46c14
	strb r0, [r1, #0]	@ 00046c14 0870
.org 0x46c16
	ldr r3, [sp, #0]	@ 00046c16 009b
.org 0x46c18
	str r3, [r2, #40]	@ 00046c18 9362
.org 0x46c1a
	movs r0, #0	@ 00046c1a 0020
.org 0x46c1c
	mov r1, sp	@ 00046c1c 6946
.org 0x46c1e
	ldrb r1, [r1, #4]	@ 00046c1e 0979
.org 0x46c20
	strb r1, [r2, #16]	@ 00046c20 1174
.org 0x46c22
	strb r0, [r2, #17]	@ 00046c22 5074
.org 0x46c24
	adds r0, r2, #0	@ 00046c24 101c
