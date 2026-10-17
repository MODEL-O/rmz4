@ FUN_08081ac4  entry 0x08081ac4  size 172
.thumb
.org 0x81ac4
FUN_08081ac4:
	push {r4, r5, r6, r7, lr}	@ 00081ac4 f0b5
.org 0x81ac6
	sub sp, #8	@ 00081ac6 82b0
.org 0x81ac8
	adds r7, r0, #0	@ 00081ac8 071c
.org 0x81aca
	movs r0, #42	@ 00081aca 2a20
.org 0x81acc
	bl 0x2b10	@ 00081acc 81f720f8
.org 0x81ad0
	ldrb r1, [r7, #10]	@ 00081ad0 b97a
.org 0x81ad2
	movs r0, #254	@ 00081ad2 fe20
.org 0x81ad4
	ands r0, r1	@ 00081ad4 0840
.org 0x81ad6
	movs r1, #0	@ 00081ad6 0021
.org 0x81ad8
	strb r0, [r7, #10]	@ 00081ad8 b872
.org 0x81ada
	adds r0, r7, #0	@ 00081ada 381c
.org 0x81adc
	adds r0, #140	@ 00081adc 8c30
.org 0x81ade
	str r1, [r0, #0]	@ 00081ade 0160
.org 0x81ae0
	adds r0, #4	@ 00081ae0 0430
.org 0x81ae2
	str r1, [r0, #0]	@ 00081ae2 0160
.org 0x81ae4
	adds r0, #4	@ 00081ae4 0430
.org 0x81ae6
	strb r1, [r0, #0]	@ 00081ae6 0170
.org 0x81ae8
	ldrb r1, [r7, #10]	@ 00081ae8 b97a
.org 0x81aea
	movs r0, #251	@ 00081aea fb20
.org 0x81aec
	ands r0, r1	@ 00081aec 0840
.org 0x81aee
	strb r0, [r7, #10]	@ 00081aee b872
.org 0x81af0
	ldr r6, [pc, #124]	@ 00081af0 1f4e
.org 0x81af2
	ldr r0, [r6, #0]	@ 00081af2 3068
.org 0x81af4
	ldr r5, [pc, #124]	@ 00081af4 1f4d
.org 0x81af6
	muls r0, r5	@ 00081af6 6843
.org 0x81af8
	ldr r2, [pc, #124]	@ 00081af8 1f4a
.org 0x81afa
	adds r0, r0, r2	@ 00081afa 8018
.org 0x81afc
	lsls r0, r0, #1	@ 00081afc 4000
.org 0x81afe
	lsrs r4, r0, #1	@ 00081afe 4408
.org 0x81b00
	lsrs r0, r0, #17	@ 00081b00 400c
.org 0x81b02
	movs r3, #7	@ 00081b02 0723
.org 0x81b04
	ands r0, r3	@ 00081b04 1840
.org 0x81b06
	subs r0, #3	@ 00081b06 0338
.org 0x81b08
	lsls r0, r0, #8	@ 00081b08 0002
.org 0x81b0a
	ldr r1, [r7, #84]	@ 00081b0a 796d
.org 0x81b0c
	adds r1, r1, r0	@ 00081b0c 0918
.org 0x81b0e
	str r1, [sp, #0]	@ 00081b0e 0091
.org 0x81b10
	adds r0, r4, #0	@ 00081b10 201c
.org 0x81b12
	muls r0, r5	@ 00081b12 6843
.org 0x81b14
	adds r0, r0, r2	@ 00081b14 8018
.org 0x81b16
	lsls r0, r0, #1	@ 00081b16 4000
.org 0x81b18
	lsrs r1, r0, #1	@ 00081b18 4108
.org 0x81b1a
	str r1, [r6, #0]	@ 00081b1a 3160
.org 0x81b1c
	lsrs r0, r0, #17	@ 00081b1c 400c
.org 0x81b1e
	ands r0, r3	@ 00081b1e 1840
.org 0x81b20
	subs r0, #3	@ 00081b20 0338
.org 0x81b22
	lsls r0, r0, #8	@ 00081b22 0002
.org 0x81b24
	ldr r1, [r7, #88]	@ 00081b24 b96d
.org 0x81b26
	adds r1, r1, r0	@ 00081b26 0918
.org 0x81b28
	str r1, [sp, #4]	@ 00081b28 0191
.org 0x81b2a
	movs r0, #1	@ 00081b2a 0120
.org 0x81b2c
	mov r1, sp	@ 00081b2c 6946
.org 0x81b2e
	bl 0xd0c88	@ 00081b2e 4ff0abf8
.org 0x81b32
	adds r4, r7, #0	@ 00081b32 3c1c
.org 0x81b34
	adds r4, #84	@ 00081b34 5434
.org 0x81b36
	movs r0, #4	@ 00081b36 0420
.org 0x81b38
	movs r1, #46	@ 00081b38 2e21
.org 0x81b3a
	adds r2, r4, #0	@ 00081b3a 221c
.org 0x81b3c
	bl 0x2ab88	@ 00081b3c a9f724f8
.org 0x81b40
	ldr r2, [pc, #56]	@ 00081b40 0e4a
.org 0x81b42
	ldrh r1, [r2, #12]	@ 00081b42 9189
.org 0x81b44
	ldr r0, [pc, #56]	@ 00081b44 0e48
.org 0x81b46
	cmp r1, r0	@ 00081b46 8142
.org 0x81b48
	bhi.n 0x81b4e	@ 00081b48 01d8
.org 0x81b4a
	adds r0, r1, #1	@ 00081b4a 481c
.org 0x81b4c
	strh r0, [r2, #12]	@ 00081b4c 9081
.org 0x81b4e
	adds r0, r7, #0	@ 00081b4e 381c
.org 0x81b50
	adds r1, r4, #0	@ 00081b50 211c
.org 0x81b52
	bl 0x2abe0	@ 00081b52 a9f745f8
.org 0x81b56
	ldr r1, [pc, #44]	@ 00081b56 0b49
.org 0x81b58
	ldrb r0, [r7, #9]	@ 00081b58 787a
.org 0x81b5a
	lsls r0, r0, #2	@ 00081b5a 8000
.org 0x81b5c
	adds r0, r0, r1	@ 00081b5c 4018
.org 0x81b5e
	movs r1, #4	@ 00081b5e 0421
.org 0x81b60
	str r1, [r7, #12]	@ 00081b60 f960
.org 0x81b62
	ldr r0, [r0, #0]	@ 00081b62 0068
.org 0x81b64
	ldr r0, [r0, #16]	@ 00081b64 0069
.org 0x81b66
	str r0, [r7, #20]	@ 00081b66 7861
.org 0x81b68
	add sp, #8	@ 00081b68 02b0
.org 0x81b6a
	pop {r4, r5, r6, r7}	@ 00081b6a f0bc
.org 0x81b6c
	pop {r0}	@ 00081b6c 01bc
.org 0x81b6e
	bx r0	@ 00081b6e 0047
