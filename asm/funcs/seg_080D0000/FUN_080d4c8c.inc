@ FUN_080d4c8c  entry 0x080d4c8c  size 138
.thumb
.org 0xd4c8c
FUN_080d4c8c:
	push {r4, r5, r6, r7, lr}	@ 000d4c8c f0b5
.org 0xd4c8e
	mov r7, sl	@ 000d4c8e 5746
.org 0xd4c90
	mov r6, r9	@ 000d4c90 4e46
.org 0xd4c92
	mov r5, r8	@ 000d4c92 4546
.org 0xd4c94
	push {r5, r6, r7}	@ 000d4c94 e0b4
.org 0xd4c96
	adds r5, r0, #0	@ 000d4c96 051c
.org 0xd4c98
	mov sl, r1	@ 000d4c98 8a46
.org 0xd4c9a
	lsls r2, r2, #24	@ 000d4c9a 1206
.org 0xd4c9c
	lsrs r7, r2, #24	@ 000d4c9c 170e
.org 0xd4c9e
	lsls r6, r3, #24	@ 000d4c9e 1e06
.org 0xd4ca0
	lsrs r0, r6, #24	@ 000d4ca0 300e
.org 0xd4ca2
	mov r8, r0	@ 000d4ca2 8046
.org 0xd4ca4
	ldr r0, [pc, #112]	@ 000d4ca4 1c48
.org 0xd4ca6
	ldr r0, [r0, #0]	@ 000d4ca6 0068
.org 0xd4ca8
	bl 0x5500	@ 000d4ca8 30f72afc
.org 0xd4cac
	mov ip, r0	@ 000d4cac 8446
.org 0xd4cae
	cmp r0, #0	@ 000d4cae 0028
.org 0xd4cb0
	beq.n 0xd4d06	@ 000d4cb0 29d0
.org 0xd4cb2
	adds r0, #37	@ 000d4cb2 2530
.org 0xd4cb4
	movs r3, #0	@ 000d4cb4 0023
.org 0xd4cb6
	movs r1, #1	@ 000d4cb6 0121
.org 0xd4cb8
	mov r9, r1	@ 000d4cb8 8946
.org 0xd4cba
	movs r4, #1	@ 000d4cba 0124
.org 0xd4cbc
	strb r4, [r0, #0]	@ 000d4cbc 0470
.org 0xd4cbe
	ldr r1, [pc, #92]	@ 000d4cbe 1749
.org 0xd4cc0
	movs r0, #16	@ 000d4cc0 1020
.org 0xd4cc2
	mov r2, ip	@ 000d4cc2 6246
.org 0xd4cc4
	strb r0, [r2, #9]	@ 000d4cc4 5072
.org 0xd4cc6
	ldr r0, [r1, #64]	@ 000d4cc6 086c
.org 0xd4cc8
	ldr r0, [r0, #0]	@ 000d4cc8 0068
.org 0xd4cca
	str r0, [r2, #20]	@ 000d4cca 5061
.org 0xd4ccc
	movs r2, #0	@ 000d4ccc 0022
.org 0xd4cce
	mov r0, ip	@ 000d4cce 6046
.org 0xd4cd0
	strh r3, [r0, #32]	@ 000d4cd0 0384
.org 0xd4cd2
	adds r0, #34	@ 000d4cd2 2230
.org 0xd4cd4
	strb r2, [r0, #0]	@ 000d4cd4 0270
.org 0xd4cd6
	ldr r0, [r5, #0]	@ 000d4cd6 2868
.org 0xd4cd8
	ldr r1, [r5, #4]	@ 000d4cd8 6968
.org 0xd4cda
	mov r3, ip	@ 000d4cda 6346
.org 0xd4cdc
	str r0, [r3, #84]	@ 000d4cdc 5865
.org 0xd4cde
	str r1, [r3, #88]	@ 000d4cde 9965
.org 0xd4ce0
	strb r7, [r3, #16]	@ 000d4ce0 1f74
.org 0xd4ce2
	strb r2, [r3, #17]	@ 000d4ce2 5a74
.org 0xd4ce4
	lsrs r0, r6, #28	@ 000d4ce4 300f
.org 0xd4ce6
	mov r1, r9	@ 000d4ce6 4946
.org 0xd4ce8
	ands r0, r1	@ 000d4ce8 0840
.org 0xd4cea
	mov r1, ip	@ 000d4cea 6146
.org 0xd4cec
	adds r1, #120	@ 000d4cec 7831
.org 0xd4cee
	strb r0, [r1, #0]	@ 000d4cee 0870
.org 0xd4cf0
	mov r0, r8	@ 000d4cf0 4046
.org 0xd4cf2
	ands r0, r4	@ 000d4cf2 2040
.org 0xd4cf4
	adds r1, #1	@ 000d4cf4 0131
.org 0xd4cf6
	strb r0, [r1, #0]	@ 000d4cf6 0870
.org 0xd4cf8
	lsrs r0, r6, #29	@ 000d4cf8 700f
.org 0xd4cfa
	mov r2, r9	@ 000d4cfa 4a46
.org 0xd4cfc
	ands r0, r2	@ 000d4cfc 1040
.org 0xd4cfe
	adds r1, #1	@ 000d4cfe 0131
.org 0xd4d00
	strb r0, [r1, #0]	@ 000d4d00 0870
.org 0xd4d02
	mov r0, sl	@ 000d4d02 5046
.org 0xd4d04
	str r0, [r3, #124]	@ 000d4d04 d867
.org 0xd4d06
	mov r0, ip	@ 000d4d06 6046
.org 0xd4d08
	pop {r3, r4, r5}	@ 000d4d08 38bc
.org 0xd4d0a
	mov r8, r3	@ 000d4d0a 9846
.org 0xd4d0c
	mov r9, r4	@ 000d4d0c a146
.org 0xd4d0e
	mov sl, r5	@ 000d4d0e aa46
.org 0xd4d10
	pop {r4, r5, r6, r7}	@ 000d4d10 f0bc
.org 0xd4d12
	pop {r1}	@ 000d4d12 02bc
.org 0xd4d14
	bx r1	@ 000d4d14 0847
