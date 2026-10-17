@ FUN_08043c68  entry 0x08043c68  size 194
.thumb
.org 0x43c68
FUN_08043c68:
	push {r4, r5, r6, r7, lr}	@ 00043c68 f0b5
.org 0x43c6a
	mov r7, sl	@ 00043c6a 5746
.org 0x43c6c
	mov r6, r9	@ 00043c6c 4e46
.org 0x43c6e
	mov r5, r8	@ 00043c6e 4546
.org 0x43c70
	push {r5, r6, r7}	@ 00043c70 e0b4
.org 0x43c72
	sub sp, #8	@ 00043c72 82b0
.org 0x43c74
	str r0, [sp, #0]	@ 00043c74 0090
.org 0x43c76
	lsls r1, r1, #24	@ 00043c76 0906
.org 0x43c78
	lsrs r1, r1, #24	@ 00043c78 090e
.org 0x43c7a
	str r1, [sp, #4]	@ 00043c7a 0191
.org 0x43c7c
	ldr r0, [pc, #108]	@ 00043c7c 1b48
.org 0x43c7e
	ldr r0, [r0, #0]	@ 00043c7e 0068
.org 0x43c80
	bl 0x5500	@ 00043c80 c1f73efc
.org 0x43c84
	adds r2, r0, #0	@ 00043c84 021c
.org 0x43c86
	cmp r2, #0	@ 00043c86 002a
.org 0x43c88
	beq.n 0x43d28	@ 00043c88 4ed0
.org 0x43c8a
	ldr r7, [pc, #100]	@ 00043c8a 194f
.org 0x43c8c
	movs r6, #18	@ 00043c8c 1226
.org 0x43c8e
	strb r6, [r2, #9]	@ 00043c8e 5672
.org 0x43c90
	ldr r0, [r7, #72]	@ 00043c90 b86c
.org 0x43c92
	ldr r0, [r0, #0]	@ 00043c92 0068
.org 0x43c94
	str r0, [r2, #20]	@ 00043c94 5061
.org 0x43c96
	ldrb r1, [r2, #11]	@ 00043c96 d17a
.org 0x43c98
	movs r0, #191	@ 00043c98 bf20
.org 0x43c9a
	mov r9, r0	@ 00043c9a 8146
.org 0x43c9c
	ands r0, r1	@ 00043c9c 0840
.org 0x43c9e
	strb r0, [r2, #11]	@ 00043c9e d072
.org 0x43ca0
	adds r3, r2, #0	@ 00043ca0 131c
.org 0x43ca2
	adds r3, #37	@ 00043ca2 2533
.org 0x43ca4
	movs r1, #16	@ 00043ca4 1021
.org 0x43ca6
	mov r8, r1	@ 00043ca6 8846
.org 0x43ca8
	mov r0, r8	@ 00043ca8 4046
.org 0x43caa
	strb r0, [r3, #0]	@ 00043caa 1870
.org 0x43cac
	ldr r5, [pc, #68]	@ 00043cac 114d
.org 0x43cae
	ldrh r0, [r5, #0]	@ 00043cae 2888
.org 0x43cb0
	strh r0, [r2, #32]	@ 00043cb0 1084
.org 0x43cb2
	ldr r4, [pc, #68]	@ 00043cb2 114c
.org 0x43cb4
	ldrb r0, [r4, #0]	@ 00043cb4 2078
.org 0x43cb6
	movs r1, #34	@ 00043cb6 2221
.org 0x43cb8
	adds r1, r1, r2	@ 00043cb8 8918
.org 0x43cba
	mov ip, r1	@ 00043cba 8c46
.org 0x43cbc
	strb r0, [r1, #0]	@ 00043cbc 0870
.org 0x43cbe
	ldr r0, [sp, #0]	@ 00043cbe 0098
.org 0x43cc0
	adds r0, #248	@ 00043cc0 f830
.org 0x43cc2
	ldrb r0, [r0, #0]	@ 00043cc2 0078
.org 0x43cc4
	adds r1, r7, #0	@ 00043cc4 391c
.org 0x43cc6
	cmp r0, #2	@ 00043cc6 0228
.org 0x43cc8
	bne.n 0x43cfc	@ 00043cc8 18d1
.org 0x43cca
	strb r6, [r2, #9]	@ 00043cca 5672
.org 0x43ccc
	ldr r0, [r1, #72]	@ 00043ccc 886c
.org 0x43cce
	ldr r0, [r0, #0]	@ 00043cce 0068
.org 0x43cd0
	str r0, [r2, #20]	@ 00043cd0 5061
.org 0x43cd2
	ldrb r1, [r2, #11]	@ 00043cd2 d17a
.org 0x43cd4
	mov r0, r9	@ 00043cd4 4846
.org 0x43cd6
	ands r0, r1	@ 00043cd6 0840
.org 0x43cd8
	strb r0, [r2, #11]	@ 00043cd8 d072
.org 0x43cda
	mov r0, r8	@ 00043cda 4046
.org 0x43cdc
	strb r0, [r3, #0]	@ 00043cdc 1870
.org 0x43cde
	ldrh r0, [r5, #0]	@ 00043cde 2888
.org 0x43ce0
	strh r0, [r2, #32]	@ 00043ce0 1084
.org 0x43ce2
	adds r1, r4, #0	@ 00043ce2 211c
.org 0x43ce4
	ldrb r0, [r1, #0]	@ 00043ce4 0878
.org 0x43ce6
	mov r3, ip	@ 00043ce6 6346
.org 0x43ce8
	strb r0, [r3, #0]	@ 00043ce8 1870
.org 0x43cea
	b.n 0x43d1a	@ 00043cea 16e0
.org 0x43cec
	.byte 0x88,0xed,0x02,0x02	@ 00043cec data
.org 0x43cf0
	.byte 0xf8,0x39,0x85,0x08	@ 00043cf0 data
.org 0x43cf4
	.byte 0xfc,0x36,0x85,0x08	@ 00043cf4 data
.org 0x43cf8
	.byte 0x04,0x37,0x85,0x08	@ 00043cf8 data
.org 0x43cfc
	strb r6, [r2, #9]	@ 00043cfc 5672
.org 0x43cfe
	ldr r0, [r7, #72]	@ 00043cfe b86c
.org 0x43d00
	ldr r0, [r0, #0]	@ 00043d00 0068
.org 0x43d02
	str r0, [r2, #20]	@ 00043d02 5061
.org 0x43d04
	ldrb r1, [r2, #11]	@ 00043d04 d17a
.org 0x43d06
	mov r0, r9	@ 00043d06 4846
.org 0x43d08
	ands r0, r1	@ 00043d08 0840
.org 0x43d0a
	strb r0, [r2, #11]	@ 00043d0a d072
.org 0x43d0c
	mov r0, r8	@ 00043d0c 4046
.org 0x43d0e
	strb r0, [r3, #0]	@ 00043d0e 1870
.org 0x43d10
	ldrh r0, [r5, #2]	@ 00043d10 6888
.org 0x43d12
	strh r0, [r2, #32]	@ 00043d12 1084
.org 0x43d14
	ldrb r0, [r4, #1]	@ 00043d14 6078
.org 0x43d16
	mov r1, ip	@ 00043d16 6146
.org 0x43d18
	strb r0, [r1, #0]	@ 00043d18 0870
.org 0x43d1a
	ldr r3, [sp, #0]	@ 00043d1a 009b
.org 0x43d1c
	str r3, [r2, #40]	@ 00043d1c 9362
.org 0x43d1e
	movs r0, #0	@ 00043d1e 0020
.org 0x43d20
	mov r1, sp	@ 00043d20 6946
.org 0x43d22
	ldrb r1, [r1, #4]	@ 00043d22 0979
.org 0x43d24
	strb r1, [r2, #16]	@ 00043d24 1174
.org 0x43d26
	strb r0, [r2, #17]	@ 00043d26 5074
.org 0x43d28
	adds r0, r2, #0	@ 00043d28 101c
