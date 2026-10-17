@ FUN_08032edc  entry 0x08032edc  size 58
.thumb
.org 0x32edc
FUN_08032edc:
	push {lr}	@ 00032edc 00b5
.org 0x32ede
	adds r2, r0, #0	@ 00032ede 021c
.org 0x32ee0
	ldr r1, [pc, #36]	@ 00032ee0 0949
.org 0x32ee2
	adds r0, r2, r1	@ 00032ee2 5018
.org 0x32ee4
	ldrb r3, [r0, #0]	@ 00032ee4 0378
.org 0x32ee6
	cmp r3, #0	@ 00032ee6 002b
.org 0x32ee8
	bne.n 0x32f16	@ 00032ee8 15d1
.org 0x32eea
	ldrb r1, [r2, #30]	@ 00032eea 917f
.org 0x32eec
	lsls r1, r1, #8	@ 00032eec 0902
.org 0x32eee
	adds r0, r2, #0	@ 00032eee 101c
.org 0x32ef0
	adds r0, #112	@ 00032ef0 7030
.org 0x32ef2
	ldrb r0, [r0, #0]	@ 00032ef2 0078
.org 0x32ef4
	orrs r0, r1	@ 00032ef4 0843
.org 0x32ef6
	movs r1, #128	@ 00032ef6 8021
.org 0x32ef8
	lsls r1, r1, #2	@ 00032ef8 8900
.org 0x32efa
	cmp r0, r1	@ 00032efa 8842
.org 0x32efc
	bne.n 0x32f0c	@ 00032efc 06d1
.org 0x32efe
	strb r3, [r2, #13]	@ 00032efe 5373
.org 0x32f00
	strb r3, [r2, #14]	@ 00032f00 9373
.org 0x32f02
	strb r3, [r2, #15]	@ 00032f02 d373
.org 0x32f04
	str r3, [r2, #92]	@ 00032f04 d365
.org 0x32f06
	b.n 0x32f16	@ 00032f06 06e0
.org 0x32f08
	.byte 0x43,0x01,0x00,0x00	@ 00032f08 data
.org 0x32f0c
	movs r0, #1	@ 00032f0c 0120
.org 0x32f0e
	strb r0, [r2, #13]	@ 00032f0e 5073
.org 0x32f10
	movs r0, #2	@ 00032f10 0220
.org 0x32f12
	strb r0, [r2, #14]	@ 00032f12 9073
.org 0x32f14
	strb r3, [r2, #15]	@ 00032f14 d373
