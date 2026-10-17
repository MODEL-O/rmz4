@ FUN_080b5cac  entry 0x080b5cac  size 106
.thumb
.org 0xb5cac
FUN_080b5cac:
	push {r4, r5, r6, r7, lr}	@ 000b5cac f0b5
.org 0xb5cae
	adds r5, r0, #0	@ 000b5cae 051c
.org 0xb5cb0
	adds r6, r1, #0	@ 000b5cb0 0e1c
.org 0xb5cb2
	lsls r2, r2, #24	@ 000b5cb2 1206
.org 0xb5cb4
	lsrs r7, r2, #24	@ 000b5cb4 170e
.org 0xb5cb6
	ldr r0, [pc, #96]	@ 000b5cb6 1848
.org 0xb5cb8
	ldr r0, [r0, #0]	@ 000b5cb8 0068
.org 0xb5cba
	bl 0x5500	@ 000b5cba 4ff721fc
.org 0xb5cbe
	adds r4, r0, #0	@ 000b5cbe 041c
.org 0xb5cc0
	cmp r4, #0	@ 000b5cc0 002c
.org 0xb5cc2
	beq.n 0xb5d0e	@ 000b5cc2 24d0
.org 0xb5cc4
	adds r1, r4, #0	@ 000b5cc4 211c
.org 0xb5cc6
	adds r1, #37	@ 000b5cc6 2531
.org 0xb5cc8
	movs r3, #0	@ 000b5cc8 0023
.org 0xb5cca
	movs r0, #24	@ 000b5cca 1820
.org 0xb5ccc
	strb r0, [r1, #0]	@ 000b5ccc 0870
.org 0xb5cce
	ldr r0, [pc, #76]	@ 000b5cce 1348
.org 0xb5cd0
	movs r1, #97	@ 000b5cd0 6121
.org 0xb5cd2
	strb r1, [r4, #9]	@ 000b5cd2 6172
.org 0xb5cd4
	movs r1, #194	@ 000b5cd4 c221
.org 0xb5cd6
	lsls r1, r1, #1	@ 000b5cd6 4900
.org 0xb5cd8
	adds r0, r0, r1	@ 000b5cd8 4018
.org 0xb5cda
	ldr r0, [r0, #0]	@ 000b5cda 0068
.org 0xb5cdc
	ldr r0, [r0, #0]	@ 000b5cdc 0068
.org 0xb5cde
	str r0, [r4, #20]	@ 000b5cde 6061
.org 0xb5ce0
	movs r2, #0	@ 000b5ce0 0022
.org 0xb5ce2
	strh r3, [r4, #32]	@ 000b5ce2 2384
.org 0xb5ce4
	adds r0, r4, #0	@ 000b5ce4 201c
.org 0xb5ce6
	adds r0, #34	@ 000b5ce6 2230
.org 0xb5ce8
	strb r2, [r0, #0]	@ 000b5ce8 0270
.org 0xb5cea
	ldrb r1, [r4, #11]	@ 000b5cea e17a
.org 0xb5cec
	movs r0, #16	@ 000b5cec 1020
.org 0xb5cee
	orrs r0, r1	@ 000b5cee 0843
.org 0xb5cf0
	strb r0, [r4, #11]	@ 000b5cf0 e072
.org 0xb5cf2
	ldrb r0, [r4, #28]	@ 000b5cf2 207f
.org 0xb5cf4
	strb r0, [r4, #29]	@ 000b5cf4 6077
.org 0xb5cf6
	str r5, [r4, #40]	@ 000b5cf6 a562
.org 0xb5cf8
	ldr r0, [r6, #0]	@ 000b5cf8 3068
.org 0xb5cfa
	ldr r1, [r6, #4]	@ 000b5cfa 7168
.org 0xb5cfc
	str r0, [r4, #84]	@ 000b5cfc 6065
.org 0xb5cfe
	str r1, [r4, #88]	@ 000b5cfe a165
.org 0xb5d00
	strb r2, [r4, #16]	@ 000b5d00 2274
.org 0xb5d02
	strb r7, [r4, #17]	@ 000b5d02 6774
.org 0xb5d04
	adds r1, r5, #0	@ 000b5d04 291c
.org 0xb5d06
	adds r1, #204	@ 000b5d06 cc31
.org 0xb5d08
	ldrh r0, [r1, #0]	@ 000b5d08 0888
.org 0xb5d0a
	adds r0, #1	@ 000b5d0a 0130
.org 0xb5d0c
	strh r0, [r1, #0]	@ 000b5d0c 0880
.org 0xb5d0e
	adds r0, r4, #0	@ 000b5d0e 201c
.org 0xb5d10
	pop {r4, r5, r6, r7}	@ 000b5d10 f0bc
.org 0xb5d12
	pop {r1}	@ 000b5d12 02bc
.org 0xb5d14
	bx r1	@ 000b5d14 0847
