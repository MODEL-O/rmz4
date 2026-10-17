@ FUN_080deebc  entry 0x080deebc  size 204
.thumb
.org 0xdeebc
FUN_080deebc:
	push {r4, lr}	@ 000deebc 10b5
.org 0xdeebe
	adds r4, r0, #0	@ 000deebe 041c
.org 0xdeec0
	ldr r1, [r4, #40]	@ 000deec0 a16a
.org 0xdeec2
	ldrb r0, [r1, #12]	@ 000deec2 087b
.org 0xdeec4
	cmp r0, #1	@ 000deec4 0128
.org 0xdeec6
	bhi.n 0xdeed8	@ 000deec6 07d8
.org 0xdeec8
	ldrb r0, [r1, #30]	@ 000deec8 887f
.org 0xdeeca
	lsls r0, r0, #8	@ 000deeca 0002
.org 0xdeecc
	adds r1, #112	@ 000deecc 7031
.org 0xdeece
	ldrb r1, [r1, #0]	@ 000deece 0978
.org 0xdeed0
	orrs r0, r1	@ 000deed0 0843
.org 0xdeed2
	ldr r1, [pc, #36]	@ 000deed2 0949
.org 0xdeed4
	cmp r0, r1	@ 000deed4 8842
.org 0xdeed6
	bne.n 0xdef00	@ 000deed6 13d1
.org 0xdeed8
	ldrb r1, [r4, #10]	@ 000deed8 a17a
.org 0xdeeda
	movs r0, #254	@ 000deeda fe20
.org 0xdeedc
	ands r0, r1	@ 000deedc 0840
.org 0xdeede
	movs r1, #253	@ 000deede fd21
.org 0xdeee0
	ands r0, r1	@ 000deee0 0840
.org 0xdeee2
	strb r0, [r4, #10]	@ 000deee2 a072
.org 0xdeee4
	ldr r1, [pc, #20]	@ 000deee4 0549
.org 0xdeee6
	ldrb r0, [r4, #9]	@ 000deee6 607a
.org 0xdeee8
	lsls r0, r0, #2	@ 000deee8 8000
.org 0xdeeea
	adds r0, r0, r1	@ 000deeea 4018
.org 0xdeeec
	movs r1, #3	@ 000deeec 0321
.org 0xdeeee
	str r1, [r4, #12]	@ 000deeee e160
.org 0xdeef0
	ldr r0, [r0, #0]	@ 000deef0 0068
.org 0xdeef2
	ldr r0, [r0, #12]	@ 000deef2 c068
.org 0xdeef4
	str r0, [r4, #20]	@ 000deef4 6061
.org 0xdeef6
	b.n 0xdef8e	@ 000deef6 4ae0
.org 0xdeef8
	.byte 0x18,0xa9,0x00,0x00	@ 000deef8 data
.org 0xdeefc
	.byte 0x64,0x6f,0x86,0x08	@ 000deefc data
.org 0xdef00
	ldrb r0, [r4, #13]	@ 000def00 607b
.org 0xdef02
	cmp r0, #0	@ 000def02 0028
.org 0xdef04
	bne.n 0xdef4c	@ 000def04 22d1
.org 0xdef06
	ldrb r0, [r4, #19]	@ 000def06 e07c
.org 0xdef08
	adds r0, #1	@ 000def08 0130
.org 0xdef0a
	strb r0, [r4, #19]	@ 000def0a e074
.org 0xdef0c
	ldrb r0, [r4, #19]	@ 000def0c e07c
.org 0xdef0e
	lsls r0, r0, #6	@ 000def0e 8001
.org 0xdef10
	adds r1, r4, #0	@ 000def10 211c
.org 0xdef12
	adds r1, #80	@ 000def12 5031
.org 0xdef14
	strh r0, [r1, #0]	@ 000def14 0880
.org 0xdef16
	ldrb r0, [r4, #19]	@ 000def16 e07c
.org 0xdef18
	lsls r0, r0, #6	@ 000def18 8001
.org 0xdef1a
	adds r1, #2	@ 000def1a 0231
.org 0xdef1c
	strh r0, [r1, #0]	@ 000def1c 0880
.org 0xdef1e
	ldrb r0, [r4, #19]	@ 000def1e e07c
.org 0xdef20
	cmp r0, #4	@ 000def20 0428
.org 0xdef22
	bne.n 0xdef64	@ 000def22 1fd1
.org 0xdef24
	adds r0, r4, #0	@ 000def24 201c
.org 0xdef26
	bl 0x1cc9c	@ 000def26 3df7b9fe
.org 0xdef2a
	adds r0, r4, #0	@ 000def2a 201c
.org 0xdef2c
	bl 0x1ceec	@ 000def2c 3df7deff
.org 0xdef30
	ldr r1, [pc, #20]	@ 000def30 0549
.org 0xdef32
	ldrb r0, [r4, #17]	@ 000def32 607c
.org 0xdef34
	lsls r0, r0, #1	@ 000def34 4000
.org 0xdef36
	adds r0, r0, r1	@ 000def36 4018
.org 0xdef38
	ldrh r1, [r0, #0]	@ 000def38 0188
.org 0xdef3a
	adds r0, r4, #0	@ 000def3a 201c
.org 0xdef3c
	bl 0x1cf00	@ 000def3c 3df7e0ff
.org 0xdef40
	ldrb r0, [r4, #13]	@ 000def40 607b
.org 0xdef42
	adds r0, #1	@ 000def42 0130
.org 0xdef44
	strb r0, [r4, #13]	@ 000def44 6073
.org 0xdef46
	b.n 0xdef64	@ 000def46 0de0
.org 0xdef48
	.byte 0xae,0x87,0x86,0x08	@ 000def48 data
.org 0xdef4c
	ldrb r0, [r4, #18]	@ 000def4c a07c
.org 0xdef4e
	cmp r0, #3	@ 000def4e 0328
.org 0xdef50
	bhi.n 0xdef64	@ 000def50 08d8
.org 0xdef52
	ldrb r0, [r4, #19]	@ 000def52 e07c
.org 0xdef54
	lsls r0, r0, #6	@ 000def54 8001
.org 0xdef56
	adds r1, r4, #0	@ 000def56 211c
.org 0xdef58
	adds r1, #80	@ 000def58 5031
.org 0xdef5a
	strh r0, [r1, #0]	@ 000def5a 0880
.org 0xdef5c
	ldrb r0, [r4, #19]	@ 000def5c e07c
.org 0xdef5e
	lsls r0, r0, #6	@ 000def5e 8001
.org 0xdef60
	adds r1, #2	@ 000def60 0231
.org 0xdef62
	strh r0, [r1, #0]	@ 000def62 0880
.org 0xdef64
	adds r0, r4, #0	@ 000def64 201c
.org 0xdef66
	bl 0x1cff0	@ 000def66 3ef743f8
.org 0xdef6a
	ldrb r0, [r4, #18]	@ 000def6a a07c
.org 0xdef6c
	subs r0, #1	@ 000def6c 0138
.org 0xdef6e
	strb r0, [r4, #18]	@ 000def6e a074
.org 0xdef70
	lsls r0, r0, #24	@ 000def70 0006
.org 0xdef72
	cmp r0, #0	@ 000def72 0028
.org 0xdef74
	bne.n 0xdef8e	@ 000def74 0bd1
.org 0xdef76
	ldr r1, [pc, #28]	@ 000def76 0749
.org 0xdef78
	ldrb r0, [r4, #9]	@ 000def78 607a
.org 0xdef7a
	lsls r0, r0, #2	@ 000def7a 8000
.org 0xdef7c
	adds r0, r0, r1	@ 000def7c 4018
.org 0xdef7e
	movs r1, #2	@ 000def7e 0221
.org 0xdef80
	str r1, [r4, #12]	@ 000def80 e160
.org 0xdef82
	ldr r0, [r0, #0]	@ 000def82 0068
.org 0xdef84
	ldr r0, [r0, #8]	@ 000def84 8068
.org 0xdef86
	str r0, [r4, #20]	@ 000def86 6061
