@ FUN_08000fd4  entry 0x08000fd4  size 80
.thumb
.org 0xfd4
FUN_08000fd4:
	push {r4, r5, lr}	@ 00000fd4 30b5
.org 0xfd6
	sub sp, #4	@ 00000fd6 81b0
.org 0xfd8
	mov r1, sp	@ 00000fd8 6946
.org 0xfda
	ldr r0, [pc, #72]	@ 00000fda 1248
.org 0xfdc
	ldrh r0, [r0, #0]	@ 00000fdc 0088
.org 0xfde
	strh r0, [r1, #0]	@ 00000fde 0880
.org 0xfe0
	mov r0, sp	@ 00000fe0 6846
.org 0xfe2
	ldrh r0, [r0, #0]	@ 00000fe2 0088
.org 0xfe4
	cmp r0, #159	@ 00000fe4 9f28
.org 0xfe6
	bls.n 0xff0	@ 00000fe6 03d9
.org 0xfe8
	mov r0, sp	@ 00000fe8 6846
.org 0xfea
	ldrh r0, [r0, #0]	@ 00000fea 0088
.org 0xfec
	cmp r0, #227	@ 00000fec e328
.org 0xfee
	bne.n 0x101c	@ 00000fee 15d1
.org 0xff0
	ldr r4, [pc, #52]	@ 00000ff0 0d4c
.org 0xff2
	ldr r2, [r4, #12]	@ 00000ff2 e268
.org 0xff4
	ldr r3, [r4, #4]	@ 00000ff4 6368
.org 0xff6
	ldrh r1, [r4, #32]	@ 00000ff6 218c
.org 0xff8
	cmp r1, #0	@ 00000ff8 0029
.org 0xffa
	beq.n 0x101a	@ 00000ffa 0ed0
.org 0xffc
	ldrh r0, [r2, #0]	@ 00000ffc 1088
.org 0xffe
	strh r0, [r3, #0]	@ 00000ffe 1880
.org 0x1000
	movs r5, #30	@ 00001000 1e25
.org 0x1002
	ldrsh r0, [r4, r5]	@ 00001002 605f
.org 0x1004
	lsls r0, r0, #1	@ 00001004 4000
.org 0x1006
	adds r3, r3, r0	@ 00001006 1b18
.org 0x1008
	movs r5, #28	@ 00001008 1c25
.org 0x100a
	ldrsh r0, [r4, r5]	@ 0000100a 605f
.org 0x100c
	lsls r0, r0, #1	@ 0000100c 4000
.org 0x100e
	adds r2, r2, r0	@ 0000100e 1218
.org 0x1010
	subs r0, r1, #1	@ 00001010 481e
.org 0x1012
	lsls r0, r0, #16	@ 00001012 0004
.org 0x1014
	lsrs r1, r0, #16	@ 00001014 010c
.org 0x1016
	cmp r1, #0	@ 00001016 0029
.org 0x1018
	bne.n 0xffc	@ 00001018 f0d1
.org 0x101a
	str r2, [r4, #12]	@ 0000101a e260
.org 0x101c
	add sp, #4	@ 0000101c 01b0
.org 0x101e
	pop {r4, r5}	@ 0000101e 30bc
.org 0x1020
	pop {r0}	@ 00001020 01bc
.org 0x1022
	bx r0	@ 00001022 0047
