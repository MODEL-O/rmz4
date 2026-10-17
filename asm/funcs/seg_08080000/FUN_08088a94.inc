@ FUN_08088a94  entry 0x08088a94  size 238
.thumb
.org 0x88a94
FUN_08088a94:
	push {r4, r5, r6, r7, lr}	@ 00088a94 f0b5
.org 0x88a96
	mov r7, r8	@ 00088a96 4746
.org 0x88a98
	push {r7}	@ 00088a98 80b4
.org 0x88a9a
	sub sp, #16	@ 00088a9a 84b0
.org 0x88a9c
	adds r7, r0, #0	@ 00088a9c 071c
.org 0x88a9e
	ldrb r1, [r7, #10]	@ 00088a9e b97a
.org 0x88aa0
	movs r0, #254	@ 00088aa0 fe20
.org 0x88aa2
	ands r0, r1	@ 00088aa2 0840
.org 0x88aa4
	movs r1, #0	@ 00088aa4 0021
.org 0x88aa6
	mov r8, r1	@ 00088aa6 8846
.org 0x88aa8
	strb r0, [r7, #10]	@ 00088aa8 b872
.org 0x88aaa
	adds r0, r7, #0	@ 00088aaa 381c
.org 0x88aac
	adds r0, #140	@ 00088aac 8c30
.org 0x88aae
	str r1, [r0, #0]	@ 00088aae 0160
.org 0x88ab0
	adds r0, #4	@ 00088ab0 0430
.org 0x88ab2
	str r1, [r0, #0]	@ 00088ab2 0160
.org 0x88ab4
	adds r0, #4	@ 00088ab4 0430
.org 0x88ab6
	mov r1, r8	@ 00088ab6 4146
.org 0x88ab8
	strb r1, [r0, #0]	@ 00088ab8 0170
.org 0x88aba
	ldrb r1, [r7, #10]	@ 00088aba b97a
.org 0x88abc
	movs r0, #251	@ 00088abc fb20
.org 0x88abe
	ands r0, r1	@ 00088abe 0840
.org 0x88ac0
	strb r0, [r7, #10]	@ 00088ac0 b872
.org 0x88ac2
	ldr r6, [pc, #120]	@ 00088ac2 1e4e
.org 0x88ac4
	ldr r0, [r6, #0]	@ 00088ac4 3068
.org 0x88ac6
	ldr r5, [pc, #120]	@ 00088ac6 1e4d
.org 0x88ac8
	muls r0, r5	@ 00088ac8 6843
.org 0x88aca
	ldr r2, [pc, #120]	@ 00088aca 1e4a
.org 0x88acc
	adds r0, r0, r2	@ 00088acc 8018
.org 0x88ace
	lsls r0, r0, #1	@ 00088ace 4000
.org 0x88ad0
	lsrs r4, r0, #1	@ 00088ad0 4408
.org 0x88ad2
	lsrs r0, r0, #17	@ 00088ad2 400c
.org 0x88ad4
	movs r3, #7	@ 00088ad4 0723
.org 0x88ad6
	ands r0, r3	@ 00088ad6 1840
.org 0x88ad8
	subs r0, #3	@ 00088ad8 0338
.org 0x88ada
	lsls r0, r0, #8	@ 00088ada 0002
.org 0x88adc
	ldr r1, [r7, #84]	@ 00088adc 796d
.org 0x88ade
	adds r1, r1, r0	@ 00088ade 0918
.org 0x88ae0
	str r1, [sp, #0]	@ 00088ae0 0091
.org 0x88ae2
	adds r0, r4, #0	@ 00088ae2 201c
.org 0x88ae4
	muls r0, r5	@ 00088ae4 6843
.org 0x88ae6
	adds r0, r0, r2	@ 00088ae6 8018
.org 0x88ae8
	lsls r0, r0, #1	@ 00088ae8 4000
.org 0x88aea
	lsrs r1, r0, #1	@ 00088aea 4108
.org 0x88aec
	str r1, [r6, #0]	@ 00088aec 3160
.org 0x88aee
	lsrs r0, r0, #17	@ 00088aee 400c
.org 0x88af0
	ands r0, r3	@ 00088af0 1840
.org 0x88af2
	subs r0, #3	@ 00088af2 0338
.org 0x88af4
	lsls r0, r0, #8	@ 00088af4 0002
.org 0x88af6
	ldr r1, [r7, #88]	@ 00088af6 b96d
.org 0x88af8
	adds r1, r1, r0	@ 00088af8 0918
.org 0x88afa
	str r1, [sp, #4]	@ 00088afa 0191
.org 0x88afc
	movs r0, #1	@ 00088afc 0120
.org 0x88afe
	mov r1, sp	@ 00088afe 6946
.org 0x88b00
	bl 0xd0c88	@ 00088b00 48f0c2f8
.org 0x88b04
	adds r0, r7, #0	@ 00088b04 381c
.org 0x88b06
	bl 0x88d74	@ 00088b06 00f035f9
.org 0x88b0a
	ldr r0, [pc, #60]	@ 00088b0a 0f48
.org 0x88b0c
	ldr r1, [pc, #60]	@ 00088b0c 0f49
.org 0x88b0e
	adds r0, r0, r1	@ 00088b0e 4018
.org 0x88b10
	ldr r1, [r7, #88]	@ 00088b10 b96d
.org 0x88b12
	ldr r0, [r0, #0]	@ 00088b12 0068
.org 0x88b14
	cmp r1, r0	@ 00088b14 8142
.org 0x88b16
	ble.n 0x88b50	@ 00088b16 1bdd
.org 0x88b18
	movs r0, #49	@ 00088b18 3120
.org 0x88b1a
	bl 0x2b10	@ 00088b1a 79f7f9ff
.org 0x88b1e
	movs r0, #128	@ 00088b1e 8020
.org 0x88b20
	lsls r0, r0, #4	@ 00088b20 0001
.org 0x88b22
	str r0, [sp, #8]	@ 00088b22 0290
.org 0x88b24
	add r1, sp, #8	@ 00088b24 02a9
.org 0x88b26
	mov r0, r8	@ 00088b26 4046
.org 0x88b28
	str r0, [r1, #4]	@ 00088b28 4860
.org 0x88b2a
	adds r4, r7, #0	@ 00088b2a 3c1c
.org 0x88b2c
	adds r4, #84	@ 00088b2c 5434
.org 0x88b2e
	adds r0, r4, #0	@ 00088b2e 201c
.org 0x88b30
	movs r2, #3	@ 00088b30 0322
.org 0x88b32
	movs r3, #4	@ 00088b32 0423
.org 0x88b34
	bl 0x88ff0	@ 00088b34 00f05cfa
.org 0x88b38
	b.n 0x88b5a	@ 00088b38 0fe0
.org 0x88b3a
	.byte 0x00	@ 00088b3a data
.org 0x88b3b
	.byte 0x00	@ 00088b3b data
.org 0x88b3c
	.byte 0x38,0xdc,0x02,0x02	@ 00088b3c data
.org 0x88b40
	.byte 0xfd,0x43,0x03,0x00	@ 00088b40 data
.org 0x88b44
	.byte 0xc3,0x9e,0x26,0x00	@ 00088b44 data
.org 0x88b48
	.byte 0xb0,0x0a,0x00,0x02	@ 00088b48 data
.org 0x88b4c
	.byte 0x0c,0xc0,0x02,0x00	@ 00088b4c data
.org 0x88b50
	movs r0, #42	@ 00088b50 2a20
.org 0x88b52
	bl 0x2b10	@ 00088b52 79f7ddff
.org 0x88b56
	adds r4, r7, #0	@ 00088b56 3c1c
.org 0x88b58
	adds r4, #84	@ 00088b58 5434
.org 0x88b5a
	adds r2, r4, #0	@ 00088b5a 221c
.org 0x88b5c
	movs r0, #4	@ 00088b5c 0420
.org 0x88b5e
	movs r1, #47	@ 00088b5e 2f21
.org 0x88b60
	bl 0x2ab88	@ 00088b60 a2f712f8
.org 0x88b64
	ldr r2, [pc, #48]	@ 00088b64 0c4a
.org 0x88b66
	ldrh r1, [r2, #12]	@ 00088b66 9189
.org 0x88b68
	ldr r0, [pc, #48]	@ 00088b68 0c48
.org 0x88b6a
	cmp r1, r0	@ 00088b6a 8142
.org 0x88b6c
	bhi.n 0x88b72	@ 00088b6c 01d8
.org 0x88b6e
	adds r0, r1, #1	@ 00088b6e 481c
.org 0x88b70
	strh r0, [r2, #12]	@ 00088b70 9081
.org 0x88b72
	adds r0, r7, #0	@ 00088b72 381c
.org 0x88b74
	adds r1, r4, #0	@ 00088b74 211c
.org 0x88b76
	bl 0x2abe0	@ 00088b76 a2f733f8
.org 0x88b7a
	ldr r1, [pc, #36]	@ 00088b7a 0949
.org 0x88b7c
	ldrb r0, [r7, #9]	@ 00088b7c 787a
.org 0x88b7e
	lsls r0, r0, #2	@ 00088b7e 8000
.org 0x88b80
	adds r0, r0, r1	@ 00088b80 4018
