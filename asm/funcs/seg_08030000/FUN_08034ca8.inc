@ FUN_08034ca8  entry 0x08034ca8  size 136
.thumb
.org 0x34ca8
FUN_08034ca8:
	push {r4, lr}	@ 00034ca8 10b5
.org 0x34caa
	adds r4, r0, #0	@ 00034caa 041c
.org 0x34cac
	adds r0, #180	@ 00034cac b430
.org 0x34cae
	ldrb r0, [r0, #12]	@ 00034cae 007b
.org 0x34cb0
	cmp r0, #0	@ 00034cb0 0028
.org 0x34cb2
	bne.n 0x34cc4	@ 00034cb2 07d1
.org 0x34cb4
	ldr r0, [pc, #8]	@ 00034cb4 0248
.org 0x34cb6
	adds r2, r4, r0	@ 00034cb6 2218
.org 0x34cb8
	ldrb r0, [r2, #0]	@ 00034cb8 1078
.org 0x34cba
	movs r1, #16	@ 00034cba 1021
.org 0x34cbc
	b.n 0x34ccc	@ 00034cbc 06e0
.org 0x34cbe
	.byte 0x00	@ 00034cbe data
.org 0x34cbf
	.byte 0x00	@ 00034cbf data
.org 0x34cc0
	.byte 0x53,0x01,0x00,0x00	@ 00034cc0 data
.org 0x34cc4
	ldr r1, [pc, #64]	@ 00034cc4 1049
.org 0x34cc6
	adds r2, r4, r1	@ 00034cc6 6218
.org 0x34cc8
	ldrb r0, [r2, #0]	@ 00034cc8 1078
.org 0x34cca
	movs r1, #32	@ 00034cca 2021
.org 0x34ccc
	orrs r0, r1	@ 00034ccc 0843
.org 0x34cce
	strb r0, [r2, #0]	@ 00034cce 1070
.org 0x34cd0
	ldrb r0, [r4, #30]	@ 00034cd0 a07f
.org 0x34cd2
	lsls r0, r0, #8	@ 00034cd2 0002
.org 0x34cd4
	adds r1, r4, #0	@ 00034cd4 211c
.org 0x34cd6
	adds r1, #112	@ 00034cd6 7031
.org 0x34cd8
	ldrb r2, [r1, #0]	@ 00034cd8 0a78
.org 0x34cda
	orrs r2, r0	@ 00034cda 0243
.org 0x34cdc
	ldr r1, [pc, #44]	@ 00034cdc 0b49
.org 0x34cde
	cmp r2, r1	@ 00034cde 8a42
.org 0x34ce0
	beq.n 0x34d1a	@ 00034ce0 1bd0
.org 0x34ce2
	movs r0, #144	@ 00034ce2 9020
.org 0x34ce4
	lsls r0, r0, #4	@ 00034ce4 0001
.org 0x34ce6
	cmp r2, r0	@ 00034ce6 8242
.org 0x34ce8
	bne.n 0x34d10	@ 00034ce8 12d1
.org 0x34cea
	adds r0, r4, #0	@ 00034cea 201c
.org 0x34cec
	adds r0, #113	@ 00034cec 7130
.org 0x34cee
	movs r2, #0	@ 00034cee 0022
.org 0x34cf0
	ldrsb r2, [r0, r2]	@ 00034cf0 8256
.org 0x34cf2
	lsls r2, r2, #16	@ 00034cf2 1204
.org 0x34cf4
	lsrs r2, r2, #16	@ 00034cf4 120c
.org 0x34cf6
	adds r0, #1	@ 00034cf6 0130
.org 0x34cf8
	movs r3, #0	@ 00034cf8 0023
.org 0x34cfa
	ldrsb r3, [r0, r3]	@ 00034cfa c356
.org 0x34cfc
	lsls r3, r3, #16	@ 00034cfc 1b04
.org 0x34cfe
	lsrs r3, r3, #16	@ 00034cfe 1b0c
.org 0x34d00
	adds r0, r4, #0	@ 00034d00 201c
.org 0x34d02
	bl 0x1cfc8	@ 00034d02 e8f761f9
.org 0x34d06
	b.n 0x34d1a	@ 00034d06 08e0
.org 0x34d08
	.byte 0x53,0x01,0x00,0x00	@ 00034d08 data
.org 0x34d0c
	.byte 0x01,0x09,0x00,0x00	@ 00034d0c data
.org 0x34d10
	adds r0, r4, #0	@ 00034d10 201c
.org 0x34d12
	movs r2, #0	@ 00034d12 0022
.org 0x34d14
	movs r3, #1	@ 00034d14 0123
.org 0x34d16
	bl 0x1cfc8	@ 00034d16 e8f757f9
.org 0x34d1a
	movs r2, #170	@ 00034d1a aa22
.org 0x34d1c
	lsls r2, r2, #1	@ 00034d1c 5200
.org 0x34d1e
	adds r0, r4, r2	@ 00034d1e a018
.org 0x34d20
	ldrb r0, [r0, #0]	@ 00034d20 0078
.org 0x34d22
	cmp r0, #3	@ 00034d22 0328
.org 0x34d24
	bne.n 0x34d2c	@ 00034d24 02d1
.org 0x34d26
	subs r2, #83	@ 00034d26 533a
.org 0x34d28
	adds r1, r4, r2	@ 00034d28 a118
.org 0x34d2a
	b.n 0x34d36	@ 00034d2a 04e0
.org 0x34d2c
	cmp r0, #2	@ 00034d2c 0228
.org 0x34d2e
	bne.n 0x34d38	@ 00034d2e 03d1
