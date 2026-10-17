@ FUN_0810de84  entry 0x0810de84  size 178
.thumb
.org 0x10de84
FUN_0810de84:
	push {r4, lr}	@ 0010de84 10b5
.org 0x10de86
	sub sp, #4	@ 0010de86 81b0
.org 0x10de88
	ldr r2, [pc, #56]	@ 0010de88 0e4a
.org 0x10de8a
	ldrb r1, [r2, #14]	@ 0010de8a 917b
.org 0x10de8c
	movs r0, #1	@ 0010de8c 0120
.org 0x10de8e
	orrs r0, r1	@ 0010de8e 0843
.org 0x10de90
	strb r0, [r2, #14]	@ 0010de90 9073
.org 0x10de92
	ldr r0, [pc, #52]	@ 0010de92 0d48
.org 0x10de94
	ldrh r1, [r0, #4]	@ 0010de94 8188
.org 0x10de96
	adds r4, r0, #0	@ 0010de96 041c
.org 0x10de98
	cmp r1, #0	@ 0010de98 0029
.org 0x10de9a
	bne.n 0x10defc	@ 0010de9a 2fd1
.org 0x10de9c
	ldr r0, [pc, #44]	@ 0010de9c 0b48
.org 0x10de9e
	ldrb r1, [r0, #4]	@ 0010de9e 0179
.org 0x10dea0
	movs r0, #64	@ 0010dea0 4020
.org 0x10dea2
	ands r0, r1	@ 0010dea2 0840
.org 0x10dea4
	cmp r0, #0	@ 0010dea4 0028
.org 0x10dea6
	bne.n 0x10dedc	@ 0010dea6 19d1
.org 0x10dea8
	ldr r0, [pc, #36]	@ 0010dea8 0948
.org 0x10deaa
	ldr r1, [pc, #40]	@ 0010deaa 0a49
.org 0x10deac
	ldrh r2, [r1, #0]	@ 0010deac 0a88
.org 0x10deae
	movs r1, #12	@ 0010deae 0c21
.org 0x10deb0
	ands r1, r2	@ 0010deb0 1140
.org 0x10deb2
	lsls r1, r1, #12	@ 0010deb2 0903
.org 0x10deb4
	bl 0x1d30	@ 0010deb4 f3f63cff
.org 0x10deb8
	ldr r0, [pc, #28]	@ 0010deb8 0748
.org 0x10deba
	movs r1, #0	@ 0010deba 0021
.org 0x10debc
	bl 0x2208	@ 0010debc f4f6a4f9
.org 0x10dec0
	b.n 0x10def4	@ 0010dec0 18e0
.org 0x10dec2
	.byte 0x00	@ 0010dec2 data
.org 0x10dec3
	.byte 0x00	@ 0010dec3 data
.org 0x10dec4
	.byte 0x50,0x0a,0x00,0x02	@ 0010dec4 data
.org 0x10dec8
	.byte 0x60,0xf3,0x02,0x02	@ 0010dec8 data
.org 0x10decc
	.byte 0xb0,0xe8,0x02,0x02	@ 0010decc data
.org 0x10ded0
	.byte 0xc8,0xc0,0xb6,0x08	@ 0010ded0 data
.org 0x10ded4
	.byte 0x04,0x0a,0x00,0x02	@ 0010ded4 data
.org 0x10ded8
	.byte 0xd4,0xc0,0xb6,0x08	@ 0010ded8 data
.org 0x10dedc
	ldr r0, [pc, #56]	@ 0010dedc 0e48
.org 0x10dede
	ldr r1, [pc, #60]	@ 0010dede 0f49
.org 0x10dee0
	ldrh r2, [r1, #0]	@ 0010dee0 0a88
.org 0x10dee2
	movs r1, #12	@ 0010dee2 0c21
.org 0x10dee4
	ands r1, r2	@ 0010dee4 1140
.org 0x10dee6
	lsls r1, r1, #12	@ 0010dee6 0903
.org 0x10dee8
	bl 0x1d30	@ 0010dee8 f3f622ff
.org 0x10deec
	ldr r0, [pc, #48]	@ 0010deec 0c48
.org 0x10deee
	movs r1, #0	@ 0010deee 0021
.org 0x10def0
	bl 0x2208	@ 0010def0 f4f68af9
.org 0x10def4
	ldr r1, [pc, #44]	@ 0010def4 0b49
.org 0x10def6
	movs r0, #1	@ 0010def6 0120
.org 0x10def8
	strh r0, [r1, #4]	@ 0010def8 8880
.org 0x10defa
	adds r4, r1, #0	@ 0010defa 0c1c
.org 0x10defc
	ldr r0, [pc, #40]	@ 0010defc 0a48
.org 0x10defe
	ldrb r1, [r0, #4]	@ 0010defe 0179
.org 0x10df00
	movs r0, #64	@ 0010df00 4020
.org 0x10df02
	ands r0, r1	@ 0010df02 0840
.org 0x10df04
	cmp r0, #0	@ 0010df04 0028
.org 0x10df06
	bne.n 0x10df2c	@ 0010df06 11d1
.org 0x10df08
	adds r0, r4, #0	@ 0010df08 201c
.org 0x10df0a
	bl 0x10df98	@ 0010df0a 00f045f8
.org 0x10df0e
	adds r0, r4, #0	@ 0010df0e 201c
.org 0x10df10
	bl 0x10e248	@ 0010df10 00f09af9
.org 0x10df14
	b.n 0x10df5e	@ 0010df14 23e0
.org 0x10df16
	.byte 0x00	@ 0010df16 data
.org 0x10df17
	.byte 0x00	@ 0010df17 data
.org 0x10df18
	.byte 0x68,0xc1,0xb6,0x08	@ 0010df18 data
.org 0x10df1c
	.byte 0x04,0x0a,0x00,0x02	@ 0010df1c data
.org 0x10df20
	.byte 0x74,0xc1,0xb6,0x08	@ 0010df20 data
.org 0x10df24
	.byte 0x60,0xf3,0x02,0x02	@ 0010df24 data
.org 0x10df28
	.byte 0xb0,0xe8,0x02,0x02	@ 0010df28 data
.org 0x10df2c
	ldr r2, [pc, #56]	@ 0010df2c 0e4a
.org 0x10df2e
	ldrh r1, [r2, #0]	@ 0010df2e 1188
.org 0x10df30
	movs r3, #128	@ 0010df30 8023
.org 0x10df32
	lsls r3, r3, #1	@ 0010df32 5b00
.org 0x10df34
	adds r0, r3, #0	@ 0010df34 181c
