@ FUN_08120cb0  entry 0x08120cb0  size 162
.thumb
.org 0x120cb0
FUN_08120cb0:
	push {r4, r5, r6, r7, lr}	@ 00120cb0 f0b5
.org 0x120cb2
	mov r7, r8	@ 00120cb2 4746
.org 0x120cb4
	push {r7}	@ 00120cb4 80b4
.org 0x120cb6
	adds r7, r0, #0	@ 00120cb6 071c
.org 0x120cb8
	movs r3, #0	@ 00120cb8 0023
.org 0x120cba
	ldr r0, [pc, #112]	@ 00120cba 1c48
.org 0x120cbc
	adds r2, r7, r0	@ 00120cbc 3a18
.org 0x120cbe
	movs r4, #255	@ 00120cbe ff24
.org 0x120cc0
	mov ip, r2	@ 00120cc0 9446
.org 0x120cc2
	adds r0, r2, r3	@ 00120cc2 d018
.org 0x120cc4
	ldrb r1, [r0, #0]	@ 00120cc4 0178
.org 0x120cc6
	orrs r1, r4	@ 00120cc6 2143
.org 0x120cc8
	strb r1, [r0, #0]	@ 00120cc8 0170
.org 0x120cca
	adds r0, r3, #1	@ 00120cca 581c
.org 0x120ccc
	lsls r0, r0, #24	@ 00120ccc 0006
.org 0x120cce
	lsrs r3, r0, #24	@ 00120cce 030e
.org 0x120cd0
	cmp r3, #6	@ 00120cd0 062b
.org 0x120cd2
	bls.n 0x120cc2	@ 00120cd2 f6d9
.org 0x120cd4
	ldr r0, [pc, #88]	@ 00120cd4 1648
.org 0x120cd6
	adds r1, r7, r0	@ 00120cd6 3918
.org 0x120cd8
	movs r0, #0	@ 00120cd8 0020
.org 0x120cda
	strb r0, [r1, #14]	@ 00120cda 8873
.org 0x120cdc
	strb r0, [r1, #15]	@ 00120cdc c873
.org 0x120cde
	strb r0, [r1, #3]	@ 00120cde c870
.org 0x120ce0
	movs r3, #0	@ 00120ce0 0023
.org 0x120ce2
	movs r5, #0	@ 00120ce2 0025
.org 0x120ce4
	movs r4, #0	@ 00120ce4 0024
.org 0x120ce6
	ldr r0, [pc, #76]	@ 00120ce6 1348
.org 0x120ce8
	mov r8, r0	@ 00120ce8 8046
.org 0x120cea
	movs r6, #1	@ 00120cea 0126
.org 0x120cec
	adds r2, r3, #0	@ 00120cec 1a1c
.org 0x120cee
	adds r2, #84	@ 00120cee 5432
.org 0x120cf0
	asrs r0, r2, #3	@ 00120cf0 d010
.org 0x120cf2
	add r0, r8	@ 00120cf2 4044
.org 0x120cf4
	ldrb r1, [r0, #0]	@ 00120cf4 0178
.org 0x120cf6
	movs r0, #7	@ 00120cf6 0720
.org 0x120cf8
	ands r2, r0	@ 00120cf8 0240
.org 0x120cfa
	asrs r1, r2	@ 00120cfa 1141
.org 0x120cfc
	ands r1, r6	@ 00120cfc 3140
.org 0x120cfe
	cmp r1, #0	@ 00120cfe 0029
.org 0x120d00
	beq.n 0x120d4c	@ 00120d00 24d0
.org 0x120d02
	ldr r0, [pc, #44]	@ 00120d02 0b48
.org 0x120d04
	adds r2, r7, r0	@ 00120d04 3a18
.org 0x120d06
	ldrb r0, [r2, #13]	@ 00120d06 507b
.org 0x120d08
	adds r0, r0, r4	@ 00120d08 0019
.org 0x120d0a
	cmp r5, r0	@ 00120d0a 8542
.org 0x120d0c
	bne.n 0x120d38	@ 00120d0c 14d1
.org 0x120d0e
	mov r0, ip	@ 00120d0e 6046
.org 0x120d10
	adds r1, r0, r4	@ 00120d10 0119
.org 0x120d12
	adds r0, r3, #0	@ 00120d12 181c
.org 0x120d14
	adds r0, #80	@ 00120d14 5030
.org 0x120d16
	strb r0, [r1, #0]	@ 00120d16 0870
.org 0x120d18
	ldrb r0, [r2, #3]	@ 00120d18 d078
.org 0x120d1a
	adds r0, #1	@ 00120d1a 0130
.org 0x120d1c
	strb r0, [r2, #3]	@ 00120d1c d070
.org 0x120d1e
	cmp r4, #5	@ 00120d1e 052c
.org 0x120d20
	bhi.n 0x120d46	@ 00120d20 11d8
.org 0x120d22
	adds r0, r4, #1	@ 00120d22 601c
.org 0x120d24
	lsls r0, r0, #24	@ 00120d24 0006
.org 0x120d26
	lsrs r4, r0, #24	@ 00120d26 040e
.org 0x120d28
	b.n 0x120d46	@ 00120d28 0de0
.org 0x120d2a
	.byte 0x00	@ 00120d2a data
.org 0x120d2b
	.byte 0x00	@ 00120d2b data
.org 0x120d2c
	.byte 0xd2,0x0d,0x00,0x00	@ 00120d2c data
.org 0x120d30
	.byte 0xcc,0x0d,0x00,0x00	@ 00120d30 data
.org 0x120d34
	.byte 0x70,0x0a,0x00,0x02	@ 00120d34 data
.org 0x120d38
	cmp r4, #0	@ 00120d38 002c
.org 0x120d3a
	beq.n 0x120d44	@ 00120d3a 03d0
.org 0x120d3c
	cmp r4, #6	@ 00120d3c 062c
.org 0x120d3e
	bne.n 0x120d46	@ 00120d3e 02d1
.org 0x120d40
	strb r6, [r2, #15]	@ 00120d40 d673
.org 0x120d42
	b.n 0x120d56	@ 00120d42 08e0
.org 0x120d44
	strb r6, [r2, #14]	@ 00120d44 9673
.org 0x120d46
	adds r0, r5, #1	@ 00120d46 681c
.org 0x120d48
	lsls r0, r0, #24	@ 00120d48 0006
.org 0x120d4a
	lsrs r5, r0, #24	@ 00120d4a 050e
.org 0x120d4c
	adds r0, r3, #1	@ 00120d4c 581c
.org 0x120d4e
	lsls r0, r0, #24	@ 00120d4e 0006
.org 0x120d50
	lsrs r3, r0, #24	@ 00120d50 030e
