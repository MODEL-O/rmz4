@ FUN_08100c7c  entry 0x08100c7c  size 134
.thumb
.org 0x100c7c
FUN_08100c7c:
	push {r4, r5, r6, lr}	@ 00100c7c 70b5
.org 0x100c7e
	ldr r3, [r0, #44]	@ 00100c7e c36a
.org 0x100c80
	ldr r0, [r0, #12]	@ 00100c80 c068
.org 0x100c82
	ldr r5, [r0, #44]	@ 00100c82 c56a
.org 0x100c84
	movs r0, #8	@ 00100c84 0820
.org 0x100c86
	ldrsb r0, [r5, r0]	@ 00100c86 2856
.org 0x100c88
	cmp r0, #0	@ 00100c88 0028
.org 0x100c8a
	bne.n 0x100d02	@ 00100c8a 3ad1
.org 0x100c8c
	ldrb r2, [r3, #16]	@ 00100c8c 1a7c
.org 0x100c8e
	movs r6, #2	@ 00100c8e 0226
.org 0x100c90
	adds r0, r6, #0	@ 00100c90 301c
.org 0x100c92
	ands r0, r2	@ 00100c92 1040
.org 0x100c94
	lsls r0, r0, #24	@ 00100c94 0006
.org 0x100c96
	lsrs r4, r0, #24	@ 00100c96 040e
.org 0x100c98
	cmp r4, #0	@ 00100c98 002c
.org 0x100c9a
	beq.n 0x100cc8	@ 00100c9a 15d0
.org 0x100c9c
	ldr r0, [pc, #36]	@ 00100c9c 0948
.org 0x100c9e
	ldrb r1, [r0, #4]	@ 00100c9e 0179
.org 0x100ca0
	movs r0, #8	@ 00100ca0 0820
.org 0x100ca2
	ands r0, r1	@ 00100ca2 0840
.org 0x100ca4
	lsls r0, r0, #24	@ 00100ca4 0006
.org 0x100ca6
	lsrs r4, r0, #24	@ 00100ca6 040e
.org 0x100ca8
	cmp r4, #0	@ 00100ca8 002c
.org 0x100caa
	bne.n 0x100d02	@ 00100caa 2ad1
.org 0x100cac
	ldr r1, [r3, #88]	@ 00100cac 996d
.org 0x100cae
	ldr r0, [r5, #88]	@ 00100cae a86d
.org 0x100cb0
	cmp r1, r0	@ 00100cb0 8142
.org 0x100cb2
	ble.n 0x100cde	@ 00100cb2 14dd
.org 0x100cb4
	movs r1, #1	@ 00100cb4 0121
.org 0x100cb6
	adds r0, r1, #0	@ 00100cb6 081c
.org 0x100cb8
	ands r0, r2	@ 00100cb8 1040
.org 0x100cba
	cmp r0, #0	@ 00100cba 0028
.org 0x100cbc
	bne.n 0x100d02	@ 00100cbc 21d1
.org 0x100cbe
	strb r1, [r3, #13]	@ 00100cbe 5973
.org 0x100cc0
	b.n 0x100ce8	@ 00100cc0 12e0
.org 0x100cc2
	.byte 0x00	@ 00100cc2 data
.org 0x100cc3
	.byte 0x00	@ 00100cc3 data
.org 0x100cc4
	.byte 0xb0,0xe8,0x02,0x02	@ 00100cc4 data
.org 0x100cc8
	ldr r1, [r3, #88]	@ 00100cc8 996d
.org 0x100cca
	ldr r0, [r5, #88]	@ 00100cca a86d
.org 0x100ccc
	cmp r1, r0	@ 00100ccc 8142
.org 0x100cce
	ble.n 0x100cde	@ 00100cce 06dd
.org 0x100cd0
	movs r1, #1	@ 00100cd0 0121
.org 0x100cd2
	adds r0, r1, #0	@ 00100cd2 081c
.org 0x100cd4
	ands r0, r2	@ 00100cd4 1040
.org 0x100cd6
	cmp r0, #0	@ 00100cd6 0028
.org 0x100cd8
	bne.n 0x100d02	@ 00100cd8 13d1
.org 0x100cda
	strb r1, [r3, #13]	@ 00100cda 5973
.org 0x100cdc
	b.n 0x100ce8	@ 00100cdc 04e0
.org 0x100cde
	movs r0, #1	@ 00100cde 0120
.org 0x100ce0
	ands r0, r2	@ 00100ce0 1040
.org 0x100ce2
	cmp r0, #0	@ 00100ce2 0028
.org 0x100ce4
	beq.n 0x100d02	@ 00100ce4 0dd0
.org 0x100ce6
	strb r6, [r3, #13]	@ 00100ce6 5e73
.org 0x100ce8
	strb r4, [r3, #14]	@ 00100ce8 9c73
.org 0x100cea
	ldr r0, [pc, #28]	@ 00100cea 0748
.org 0x100cec
	adds r1, r5, r0	@ 00100cec 2918
.org 0x100cee
	movs r0, #2	@ 00100cee 0220
.org 0x100cf0
	strb r0, [r1, #0]	@ 00100cf0 0870
.org 0x100cf2
	ldr r2, [pc, #24]	@ 00100cf2 064a
.org 0x100cf4
	ldrh r1, [r2, #20]	@ 00100cf4 918a
.org 0x100cf6
	movs r0, #1	@ 00100cf6 0120
.org 0x100cf8
	orrs r0, r1	@ 00100cf8 0843
.org 0x100cfa
	strh r0, [r2, #20]	@ 00100cfa 9082
.org 0x100cfc
	adds r0, r3, #0	@ 00100cfc 181c
.org 0x100cfe
	adds r0, #180	@ 00100cfe b430
.org 0x100d00
	str r5, [r0, #0]	@ 00100d00 0560
