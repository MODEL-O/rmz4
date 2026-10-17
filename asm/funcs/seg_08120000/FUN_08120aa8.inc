@ FUN_08120aa8  entry 0x08120aa8  size 162
.thumb
.org 0x120aa8
FUN_08120aa8:
	push {r4, r5, r6, r7, lr}	@ 00120aa8 f0b5
.org 0x120aaa
	mov r7, r8	@ 00120aaa 4746
.org 0x120aac
	push {r7}	@ 00120aac 80b4
.org 0x120aae
	adds r7, r0, #0	@ 00120aae 071c
.org 0x120ab0
	movs r3, #0	@ 00120ab0 0023
.org 0x120ab2
	ldr r0, [pc, #112]	@ 00120ab2 1c48
.org 0x120ab4
	adds r2, r7, r0	@ 00120ab4 3a18
.org 0x120ab6
	movs r4, #255	@ 00120ab6 ff24
.org 0x120ab8
	mov ip, r2	@ 00120ab8 9446
.org 0x120aba
	adds r0, r2, r3	@ 00120aba d018
.org 0x120abc
	ldrb r1, [r0, #0]	@ 00120abc 0178
.org 0x120abe
	orrs r1, r4	@ 00120abe 2143
.org 0x120ac0
	strb r1, [r0, #0]	@ 00120ac0 0170
.org 0x120ac2
	adds r0, r3, #1	@ 00120ac2 581c
.org 0x120ac4
	lsls r0, r0, #24	@ 00120ac4 0006
.org 0x120ac6
	lsrs r3, r0, #24	@ 00120ac6 030e
.org 0x120ac8
	cmp r3, #6	@ 00120ac8 062b
.org 0x120aca
	bls.n 0x120aba	@ 00120aca f6d9
.org 0x120acc
	ldr r0, [pc, #88]	@ 00120acc 1648
.org 0x120ace
	adds r1, r7, r0	@ 00120ace 3918
.org 0x120ad0
	movs r0, #0	@ 00120ad0 0020
.org 0x120ad2
	strb r0, [r1, #14]	@ 00120ad2 8873
.org 0x120ad4
	strb r0, [r1, #15]	@ 00120ad4 c873
.org 0x120ad6
	strb r0, [r1, #3]	@ 00120ad6 c870
.org 0x120ad8
	movs r3, #0	@ 00120ad8 0023
.org 0x120ada
	movs r5, #0	@ 00120ada 0025
.org 0x120adc
	movs r4, #0	@ 00120adc 0024
.org 0x120ade
	ldr r0, [pc, #76]	@ 00120ade 1348
.org 0x120ae0
	mov r8, r0	@ 00120ae0 8046
.org 0x120ae2
	movs r6, #1	@ 00120ae2 0126
.org 0x120ae4
	adds r2, r3, #0	@ 00120ae4 1a1c
.org 0x120ae6
	adds r2, #60	@ 00120ae6 3c32
.org 0x120ae8
	asrs r0, r2, #3	@ 00120ae8 d010
.org 0x120aea
	add r0, r8	@ 00120aea 4044
.org 0x120aec
	ldrb r1, [r0, #0]	@ 00120aec 0178
.org 0x120aee
	movs r0, #7	@ 00120aee 0720
.org 0x120af0
	ands r2, r0	@ 00120af0 0240
.org 0x120af2
	asrs r1, r2	@ 00120af2 1141
.org 0x120af4
	ands r1, r6	@ 00120af4 3140
.org 0x120af6
	cmp r1, #0	@ 00120af6 0029
.org 0x120af8
	beq.n 0x120b44	@ 00120af8 24d0
.org 0x120afa
	ldr r0, [pc, #44]	@ 00120afa 0b48
.org 0x120afc
	adds r2, r7, r0	@ 00120afc 3a18
.org 0x120afe
	ldrb r0, [r2, #13]	@ 00120afe 507b
.org 0x120b00
	adds r0, r0, r4	@ 00120b00 0019
.org 0x120b02
	cmp r5, r0	@ 00120b02 8542
.org 0x120b04
	bne.n 0x120b30	@ 00120b04 14d1
.org 0x120b06
	mov r0, ip	@ 00120b06 6046
.org 0x120b08
	adds r1, r0, r4	@ 00120b08 0119
.org 0x120b0a
	adds r0, r3, #0	@ 00120b0a 181c
.org 0x120b0c
	adds r0, #56	@ 00120b0c 3830
.org 0x120b0e
	strb r0, [r1, #0]	@ 00120b0e 0870
.org 0x120b10
	ldrb r0, [r2, #3]	@ 00120b10 d078
.org 0x120b12
	adds r0, #1	@ 00120b12 0130
.org 0x120b14
	strb r0, [r2, #3]	@ 00120b14 d070
.org 0x120b16
	cmp r4, #5	@ 00120b16 052c
.org 0x120b18
	bhi.n 0x120b3e	@ 00120b18 11d8
.org 0x120b1a
	adds r0, r4, #1	@ 00120b1a 601c
.org 0x120b1c
	lsls r0, r0, #24	@ 00120b1c 0006
.org 0x120b1e
	lsrs r4, r0, #24	@ 00120b1e 040e
.org 0x120b20
	b.n 0x120b3e	@ 00120b20 0de0
.org 0x120b22
	.byte 0x00	@ 00120b22 data
.org 0x120b23
	.byte 0x00	@ 00120b23 data
.org 0x120b24
	.byte 0xd2,0x0d,0x00,0x00	@ 00120b24 data
.org 0x120b28
	.byte 0xcc,0x0d,0x00,0x00	@ 00120b28 data
.org 0x120b2c
	.byte 0x70,0x0a,0x00,0x02	@ 00120b2c data
.org 0x120b30
	cmp r4, #0	@ 00120b30 002c
.org 0x120b32
	beq.n 0x120b3c	@ 00120b32 03d0
.org 0x120b34
	cmp r4, #6	@ 00120b34 062c
.org 0x120b36
	bne.n 0x120b3e	@ 00120b36 02d1
.org 0x120b38
	strb r6, [r2, #15]	@ 00120b38 d673
.org 0x120b3a
	b.n 0x120b4e	@ 00120b3a 08e0
.org 0x120b3c
	strb r6, [r2, #14]	@ 00120b3c 9673
.org 0x120b3e
	adds r0, r5, #1	@ 00120b3e 681c
.org 0x120b40
	lsls r0, r0, #24	@ 00120b40 0006
.org 0x120b42
	lsrs r5, r0, #24	@ 00120b42 050e
.org 0x120b44
	adds r0, r3, #1	@ 00120b44 581c
.org 0x120b46
	lsls r0, r0, #24	@ 00120b46 0006
.org 0x120b48
	lsrs r3, r0, #24	@ 00120b48 030e
