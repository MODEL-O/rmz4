@ FUN_08117b28  entry 0x08117b28  size 174
.thumb
.org 0x117b28
FUN_08117b28:
	push {r4, r5, lr}	@ 00117b28 30b5
.org 0x117b2a
	adds r4, r0, #0	@ 00117b2a 041c
.org 0x117b2c
	ldr r5, [pc, #136]	@ 00117b2c 224d
.org 0x117b2e
	ldrh r1, [r5, #6]	@ 00117b2e e988
.org 0x117b30
	movs r0, #128	@ 00117b30 8020
.org 0x117b32
	ands r0, r1	@ 00117b32 0840
.org 0x117b34
	cmp r0, #0	@ 00117b34 0028
.org 0x117b36
	beq.n 0x117b4c	@ 00117b36 09d0
.org 0x117b38
	movs r0, #1	@ 00117b38 0120
.org 0x117b3a
	bl 0x2b10	@ 00117b3a eaf6e9ff
.org 0x117b3e
	movs r1, #10	@ 00117b3e 0a21
.org 0x117b40
	ldrsh r0, [r4, r1]	@ 00117b40 605e
.org 0x117b42
	adds r0, #1	@ 00117b42 0130
.org 0x117b44
	movs r1, #3	@ 00117b44 0321
.org 0x117b46
	bl 0x129050	@ 00117b46 11f083fa
.org 0x117b4a
	strh r0, [r4, #10]	@ 00117b4a 6081
.org 0x117b4c
	ldrh r1, [r5, #6]	@ 00117b4c e988
.org 0x117b4e
	movs r0, #64	@ 00117b4e 4020
.org 0x117b50
	ands r0, r1	@ 00117b50 0840
.org 0x117b52
	cmp r0, #0	@ 00117b52 0028
.org 0x117b54
	beq.n 0x117b6a	@ 00117b54 09d0
.org 0x117b56
	movs r0, #1	@ 00117b56 0120
.org 0x117b58
	bl 0x2b10	@ 00117b58 eaf6daff
.org 0x117b5c
	movs r1, #10	@ 00117b5c 0a21
.org 0x117b5e
	ldrsh r0, [r4, r1]	@ 00117b5e 605e
.org 0x117b60
	adds r0, #2	@ 00117b60 0230
.org 0x117b62
	movs r1, #3	@ 00117b62 0321
.org 0x117b64
	bl 0x129050	@ 00117b64 11f074fa
.org 0x117b68
	strh r0, [r4, #10]	@ 00117b68 6081
.org 0x117b6a
	ldr r0, [pc, #80]	@ 00117b6a 1448
.org 0x117b6c
	ldrh r1, [r0, #0]	@ 00117b6c 0188
.org 0x117b6e
	ldr r0, [pc, #80]	@ 00117b6e 1448
.org 0x117b70
	adds r5, r1, r0	@ 00117b70 0d18
.org 0x117b72
	movs r2, #0	@ 00117b72 0022
.org 0x117b74
	ldr r0, [pc, #76]	@ 00117b74 1348
.org 0x117b76
	ldrb r1, [r0, #6]	@ 00117b76 8179
.org 0x117b78
	adds r3, r0, #0	@ 00117b78 031c
.org 0x117b7a
	cmp r1, #0	@ 00117b7a 0029
.org 0x117b7c
	bne.n 0x117b84	@ 00117b7c 02d1
.org 0x117b7e
	ldrb r0, [r3, #4]	@ 00117b7e 1879
.org 0x117b80
	cmp r0, #1	@ 00117b80 0128
.org 0x117b82
	bne.n 0x117b86	@ 00117b82 00d1
.org 0x117b84
	movs r2, #1	@ 00117b84 0122
.org 0x117b86
	lsls r0, r2, #3	@ 00117b86 d000
.org 0x117b88
	subs r0, r0, r2	@ 00117b88 801a
.org 0x117b8a
	movs r1, #8	@ 00117b8a 0821
.org 0x117b8c
	subs r1, r1, r0	@ 00117b8c 091a
.org 0x117b8e
	movs r0, #10	@ 00117b8e 0a20
.org 0x117b90
	ldrsh r2, [r4, r0]	@ 00117b90 225e
.org 0x117b92
	lsls r2, r2, #1	@ 00117b92 5200
.org 0x117b94
	ldrb r3, [r3, #5]	@ 00117b94 5b79
.org 0x117b96
	adds r2, r2, r3	@ 00117b96 d218
.org 0x117b98
	adds r0, r5, #0	@ 00117b98 281c
.org 0x117b9a
	bl 0x10d85c	@ 00117b9a f5f75ffe
.org 0x117b9e
	ldr r0, [pc, #24]	@ 00117b9e 0648
.org 0x117ba0
	ldrh r1, [r0, #4]	@ 00117ba0 8188
.org 0x117ba2
	movs r0, #2	@ 00117ba2 0220
.org 0x117ba4
	ands r0, r1	@ 00117ba4 0840
.org 0x117ba6
	cmp r0, #0	@ 00117ba6 0028
.org 0x117ba8
	beq.n 0x117bc8	@ 00117ba8 0ed0
.org 0x117baa
	movs r0, #3	@ 00117baa 0320
.org 0x117bac
	bl 0x2b10	@ 00117bac eaf6b0ff
.org 0x117bb0
	movs r0, #2	@ 00117bb0 0220
.org 0x117bb2
	negs r0, r0	@ 00117bb2 4042
.org 0x117bb4
	b.n 0x117be2	@ 00117bb4 15e0
.org 0x117bb6
	.byte 0x00	@ 00117bb6 data
.org 0x117bb7
	.byte 0x00	@ 00117bb7 data
.org 0x117bb8
	.byte 0x60,0x07,0x00,0x02	@ 00117bb8 data
.org 0x117bbc
	.byte 0xf8,0xcf,0x86,0x08	@ 00117bbc data
.org 0x117bc0
	.byte 0x5f,0x0e,0x01,0x09	@ 00117bc0 data
.org 0x117bc4
	.byte 0x88,0xf3,0x02,0x02	@ 00117bc4 data
.org 0x117bc8
	movs r0, #1	@ 00117bc8 0120
.org 0x117bca
	ands r0, r1	@ 00117bca 0840
.org 0x117bcc
	cmp r0, #0	@ 00117bcc 0028
.org 0x117bce
	bne.n 0x117bd4	@ 00117bce 01d1
.org 0x117bd0
	movs r0, #0	@ 00117bd0 0020
.org 0x117bd2
	b.n 0x117be2	@ 00117bd2 06e0
.org 0x117bd4
	movs r0, #2	@ 00117bd4 0220
