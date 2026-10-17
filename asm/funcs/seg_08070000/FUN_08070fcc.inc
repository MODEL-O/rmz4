@ FUN_08070fcc  entry 0x08070fcc  size 90
.thumb
.org 0x70fcc
FUN_08070fcc:
	push {r4, r5, lr}	@ 00070fcc 30b5
.org 0x70fce
	sub sp, #8	@ 00070fce 82b0
.org 0x70fd0
	adds r4, r0, #0	@ 00070fd0 041c
.org 0x70fd2
	ldr r1, [pc, #84]	@ 00070fd2 1549
.org 0x70fd4
	mov r0, sp	@ 00070fd4 6846
.org 0x70fd6
	movs r2, #5	@ 00070fd6 0522
.org 0x70fd8
	bl 0x129258	@ 00070fd8 b8f03ef9
.org 0x70fdc
	adds r0, r4, #0	@ 00070fdc 201c
.org 0x70fde
	adds r0, #180	@ 00070fde b430
.org 0x70fe0
	ldr r0, [r0, #0]	@ 00070fe0 0068
.org 0x70fe2
	adds r0, #180	@ 00070fe2 b430
.org 0x70fe4
	movs r5, #0	@ 00070fe4 0025
.org 0x70fe6
	movs r1, #1	@ 00070fe6 0121
.org 0x70fe8
	strb r1, [r0, #0]	@ 00070fe8 0170
.org 0x70fea
	adds r0, r4, #0	@ 00070fea 201c
.org 0x70fec
	bl 0x73e00	@ 00070fec 02f008ff
.org 0x70ff0
	adds r1, r4, #0	@ 00070ff0 211c
.org 0x70ff2
	adds r1, #195	@ 00070ff2 c331
.org 0x70ff4
	strb r0, [r1, #0]	@ 00070ff4 0870
.org 0x70ff6
	mov r0, sp	@ 00070ff6 6846
.org 0x70ff8
	movs r1, #5	@ 00070ff8 0521
.org 0x70ffa
	bl 0x73e30	@ 00070ffa 02f019ff
.org 0x70ffe
	adds r0, #1	@ 00070ffe 0130
.org 0x71000
	adds r1, r4, #0	@ 00071000 211c
.org 0x71002
	adds r1, #194	@ 00071002 c231
.org 0x71004
	strb r0, [r1, #0]	@ 00071004 0870
.org 0x71006
	ldrb r0, [r4, #14]	@ 00071006 a07b
.org 0x71008
	adds r0, #1	@ 00071008 0130
.org 0x7100a
	strb r0, [r4, #14]	@ 0007100a a073
.org 0x7100c
	strb r5, [r4, #15]	@ 0007100c e573
.org 0x7100e
	ldr r1, [pc, #28]	@ 0007100e 0749
.org 0x71010
	ldrb r0, [r4, #13]	@ 00071010 607b
.org 0x71012
	lsls r0, r0, #2	@ 00071012 8000
.org 0x71014
	adds r0, r0, r1	@ 00071014 4018
.org 0x71016
	ldr r1, [r0, #0]	@ 00071016 0168
.org 0x71018
	adds r0, r4, #0	@ 00071018 201c
.org 0x7101a
	bl 0x128f80	@ 0007101a b7f0b1ff
.org 0x7101e
	add sp, #8	@ 0007101e 02b0
.org 0x71020
	pop {r4, r5}	@ 00071020 30bc
.org 0x71022
	pop {r0}	@ 00071022 01bc
.org 0x71024
	bx r0	@ 00071024 0047
