@ FUN_0811df04  entry 0x0811df04  size 130
.thumb
.org 0x11df04
FUN_0811df04:
	push {r4, r5, lr}	@ 0011df04 30b5
.org 0x11df06
	adds r4, r0, #0	@ 0011df06 041c
.org 0x11df08
	ldr r0, [pc, #92]	@ 0011df08 1748
.org 0x11df0a
	adds r0, #120	@ 0011df0a 7830
.org 0x11df0c
	ldrh r0, [r0, #0]	@ 0011df0c 0088
.org 0x11df0e
	ldr r1, [pc, #92]	@ 0011df0e 1749
.org 0x11df10
	adds r0, r0, r1	@ 0011df10 4018
.org 0x11df12
	movs r1, #8	@ 0011df12 0821
.org 0x11df14
	movs r2, #13	@ 0011df14 0d22
.org 0x11df16
	bl 0x10d85c	@ 0011df16 eff7a1fc
.org 0x11df1a
	adds r0, r4, #0	@ 0011df1a 201c
.org 0x11df1c
	bl 0x11ebb0	@ 0011df1c 00f048fe
.org 0x11df20
	movs r0, #63	@ 0011df20 3f20
.org 0x11df22
	bl 0x25d8	@ 0011df22 e4f659fb
.org 0x11df26
	movs r0, #64	@ 0011df26 4020
.org 0x11df28
	bl 0x25d8	@ 0011df28 e4f656fb
.org 0x11df2c
	ldrh r0, [r4, #4]	@ 0011df2c a088
.org 0x11df2e
	adds r0, #1	@ 0011df2e 0130
.org 0x11df30
	movs r3, #0	@ 0011df30 0023
.org 0x11df32
	adds r1, r0, #0	@ 0011df32 011c
.org 0x11df34
	strh r0, [r4, #4]	@ 0011df34 a080
.org 0x11df36
	lsls r0, r0, #16	@ 0011df36 0004
.org 0x11df38
	asrs r0, r0, #16	@ 0011df38 0014
.org 0x11df3a
	cmp r0, #15	@ 0011df3a 0f28
.org 0x11df3c
	ble.n 0x11df7c	@ 0011df3c 1edd
.org 0x11df3e
	ldr r1, [pc, #48]	@ 0011df3e 0c49
.org 0x11df40
	ldr r2, [pc, #48]	@ 0011df40 0c4a
.org 0x11df42
	adds r0, r1, r2	@ 0011df42 8818
.org 0x11df44
	movs r2, #32	@ 0011df44 2022
.org 0x11df46
	strb r2, [r0, #0]	@ 0011df46 0270
.org 0x11df48
	ldr r5, [pc, #44]	@ 0011df48 0b4d
.org 0x11df4a
	adds r0, r1, r5	@ 0011df4a 4819
.org 0x11df4c
	strb r2, [r0, #0]	@ 0011df4c 0270
.org 0x11df4e
	movs r0, #128	@ 0011df4e 8020
.org 0x11df50
	lsls r0, r0, #3	@ 0011df50 c000
.org 0x11df52
	adds r1, r1, r0	@ 0011df52 0918
.org 0x11df54
	strb r2, [r1, #0]	@ 0011df54 0a70
.org 0x11df56
	movs r0, #2	@ 0011df56 0220
.org 0x11df58
	strb r0, [r4, #1]	@ 0011df58 6070
.org 0x11df5a
	strb r3, [r4, #3]	@ 0011df5a e370
.org 0x11df5c
	strb r3, [r4, #2]	@ 0011df5c a370
.org 0x11df5e
	adds r0, r4, #0	@ 0011df5e 201c
.org 0x11df60
	bl 0x11dfa8	@ 0011df60 00f022f8
.org 0x11df64
	b.n 0x11df96	@ 0011df64 17e0
.org 0x11df66
	.byte 0x00	@ 0011df66 data
.org 0x11df67
	.byte 0x00	@ 0011df67 data
.org 0x11df68
	.byte 0xf8,0xcf,0x86,0x08	@ 0011df68 data
.org 0x11df6c
	.byte 0x5f,0x0e,0x01,0x09	@ 0011df6c data
.org 0x11df70
	.byte 0xc0,0x2a,0x00,0x03	@ 0011df70 data
.org 0x11df74
	.byte 0x02,0x04,0x00,0x00	@ 0011df74 data
.org 0x11df78
	.byte 0x01,0x04,0x00,0x00	@ 0011df78 data
.org 0x11df7c
	ldr r2, [pc, #28]	@ 0011df7c 074a
.org 0x11df7e
	ldr r3, [pc, #32]	@ 0011df7e 084b
.org 0x11df80
	adds r0, r2, r3	@ 0011df80 d018
.org 0x11df82
	strb r1, [r0, #0]	@ 0011df82 0170
.org 0x11df84
	movs r0, #255	@ 0011df84 ff20
