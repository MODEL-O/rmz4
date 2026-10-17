@ FUN_0811facc  entry 0x0811facc  size 86
.thumb
.org 0x11facc
FUN_0811facc:
	push {r4, lr}	@ 0011facc 10b5
.org 0x11face
	adds r2, r0, #0	@ 0011face 021c
.org 0x11fad0
	ldrh r0, [r2, #4]	@ 0011fad0 9088
.org 0x11fad2
	subs r0, #1	@ 0011fad2 0138
.org 0x11fad4
	movs r3, #0	@ 0011fad4 0023
.org 0x11fad6
	adds r1, r0, #0	@ 0011fad6 011c
.org 0x11fad8
	strh r0, [r2, #4]	@ 0011fad8 9080
.org 0x11fada
	lsls r0, r0, #16	@ 0011fada 0004
.org 0x11fadc
	cmp r0, #0	@ 0011fadc 0028
.org 0x11fade
	bne.n 0x11fb0c	@ 0011fade 15d1
.org 0x11fae0
	ldr r0, [pc, #32]	@ 0011fae0 0848
.org 0x11fae2
	ldr r4, [pc, #36]	@ 0011fae2 094c
.org 0x11fae4
	adds r1, r0, r4	@ 0011fae4 0119
.org 0x11fae6
	strb r3, [r1, #0]	@ 0011fae6 0b70
.org 0x11fae8
	subs r4, #1	@ 0011fae8 013c
.org 0x11faea
	adds r1, r0, r4	@ 0011faea 0119
.org 0x11faec
	strb r3, [r1, #0]	@ 0011faec 0b70
.org 0x11faee
	movs r1, #128	@ 0011faee 8021
.org 0x11faf0
	lsls r1, r1, #3	@ 0011faf0 c900
.org 0x11faf2
	adds r0, r0, r1	@ 0011faf2 4018
.org 0x11faf4
	strb r3, [r0, #0]	@ 0011faf4 0370
.org 0x11faf6
	movs r0, #4	@ 0011faf6 0420
.org 0x11faf8
	strb r0, [r2, #1]	@ 0011faf8 5070
.org 0x11fafa
	adds r0, r2, #0	@ 0011fafa 101c
.org 0x11fafc
	bl 0x11fb38	@ 0011fafc 00f01cf8
.org 0x11fb00
	b.n 0x11fb26	@ 0011fb00 11e0
.org 0x11fb02
	.byte 0x00	@ 0011fb02 data
.org 0x11fb03
	.byte 0x00	@ 0011fb03 data
.org 0x11fb04
	.byte 0xc0,0x2a,0x00,0x03	@ 0011fb04 data
.org 0x11fb08
	.byte 0x02,0x04,0x00,0x00	@ 0011fb08 data
.org 0x11fb0c
	ldr r2, [pc, #28]	@ 0011fb0c 074a
.org 0x11fb0e
	ldr r3, [pc, #32]	@ 0011fb0e 084b
.org 0x11fb10
	adds r0, r2, r3	@ 0011fb10 d018
.org 0x11fb12
	strb r1, [r0, #0]	@ 0011fb12 0170
.org 0x11fb14
	movs r0, #255	@ 0011fb14 ff20
.org 0x11fb16
	ands r0, r1	@ 0011fb16 0840
.org 0x11fb18
	ldr r4, [pc, #24]	@ 0011fb18 064c
.org 0x11fb1a
	adds r1, r2, r4	@ 0011fb1a 1119
.org 0x11fb1c
	strb r0, [r1, #0]	@ 0011fb1c 0870
.org 0x11fb1e
	movs r1, #128	@ 0011fb1e 8021
.org 0x11fb20
	lsls r1, r1, #3	@ 0011fb20 c900
