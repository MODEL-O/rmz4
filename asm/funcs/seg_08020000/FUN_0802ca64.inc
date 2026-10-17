@ FUN_0802ca64  entry 0x0802ca64  size 320
.thumb
.org 0x2ca64
FUN_0802ca64:
	push {r4, r5, r6, r7, lr}	@ 0002ca64 f0b5
.org 0x2ca66
	mov r7, r8	@ 0002ca66 4746
.org 0x2ca68
	push {r7}	@ 0002ca68 80b4
.org 0x2ca6a
	sub sp, #4	@ 0002ca6a 81b0
.org 0x2ca6c
	adds r7, r0, #0	@ 0002ca6c 071c
.org 0x2ca6e
	ldrb r0, [r7, #30]	@ 0002ca6e b87f
.org 0x2ca70
	lsls r0, r0, #8	@ 0002ca70 0002
.org 0x2ca72
	adds r1, r7, #0	@ 0002ca72 391c
.org 0x2ca74
	adds r1, #112	@ 0002ca74 7031
.org 0x2ca76
	ldrb r1, [r1, #0]	@ 0002ca76 0978
.org 0x2ca78
	orrs r1, r0	@ 0002ca78 0143
.org 0x2ca7a
	ldr r0, [pc, #28]	@ 0002ca7a 0748
.org 0x2ca7c
	cmp r1, r0	@ 0002ca7c 8142
.org 0x2ca7e
	beq.n 0x2caec	@ 0002ca7e 35d0
.org 0x2ca80
	cmp r1, r0	@ 0002ca80 8142
.org 0x2ca82
	bgt.n 0x2caa0	@ 0002ca82 0ddc
.org 0x2ca84
	subs r0, #4	@ 0002ca84 0438
.org 0x2ca86
	cmp r1, r0	@ 0002ca86 8142
.org 0x2ca88
	beq.n 0x2cadc	@ 0002ca88 28d0
.org 0x2ca8a
	cmp r1, r0	@ 0002ca8a 8142
.org 0x2ca8c
	ble.n 0x2caaa	@ 0002ca8c 0ddd
.org 0x2ca8e
	ldr r0, [pc, #12]	@ 0002ca8e 0348
.org 0x2ca90
	cmp r1, r0	@ 0002ca90 8142
.org 0x2ca92
	beq.n 0x2cacc	@ 0002ca92 1bd0
.org 0x2ca94
	b.n 0x2cafc	@ 0002ca94 32e0
.org 0x2ca96
	.byte 0x00	@ 0002ca96 data
.org 0x2ca97
	.byte 0x00	@ 0002ca97 data
.org 0x2ca98
	.byte 0x06,0x27,0x00,0x00	@ 0002ca98 data
.org 0x2ca9c
	.byte 0x04,0x27,0x00,0x00	@ 0002ca9c data
.org 0x2caa0
	ldr r0, [pc, #16]	@ 0002caa0 0448
.org 0x2caa2
	cmp r1, r0	@ 0002caa2 8142
.org 0x2caa4
	beq.n 0x2cadc	@ 0002caa4 1ad0
.org 0x2caa6
	cmp r1, r0	@ 0002caa6 8142
.org 0x2caa8
	bgt.n 0x2cab8	@ 0002caa8 06dc
.org 0x2caaa
	subs r0, #2	@ 0002caaa 0238
.org 0x2caac
	cmp r1, r0	@ 0002caac 8142
.org 0x2caae
	beq.n 0x2cb0c	@ 0002caae 2dd0
.org 0x2cab0
	b.n 0x2cafc	@ 0002cab0 24e0
.org 0x2cab2
	.byte 0x00	@ 0002cab2 data
.org 0x2cab3
	.byte 0x00	@ 0002cab3 data
.org 0x2cab4
	.byte 0x02,0x28,0x00,0x00	@ 0002cab4 data
.org 0x2cab8
	ldr r0, [pc, #12]	@ 0002cab8 0348
.org 0x2caba
	cmp r1, r0	@ 0002caba 8142
.org 0x2cabc
	beq.n 0x2cacc	@ 0002cabc 06d0
.org 0x2cabe
	adds r0, #2	@ 0002cabe 0230
.org 0x2cac0
	cmp r1, r0	@ 0002cac0 8142
.org 0x2cac2
	beq.n 0x2caec	@ 0002cac2 13d0
.org 0x2cac4
	b.n 0x2cafc	@ 0002cac4 1ae0
.org 0x2cac6
	.byte 0x00	@ 0002cac6 data
.org 0x2cac7
	.byte 0x00	@ 0002cac7 data
.org 0x2cac8
	.byte 0x04,0x28,0x00,0x00	@ 0002cac8 data
.org 0x2cacc
	ldr r3, [pc, #4]	@ 0002cacc 014b
.org 0x2cace
	ldr r2, [pc, #8]	@ 0002cace 024a
.org 0x2cad0
	b.n 0x2cb1c	@ 0002cad0 24e0
.org 0x2cad2
	.byte 0x00	@ 0002cad2 data
.org 0x2cad3
	.byte 0x00	@ 0002cad3 data
.org 0x2cad4
	.byte 0x00,0xe8,0xff,0xff	@ 0002cad4 data
.org 0x2cad8
	.byte 0x00,0xea,0xff,0xff	@ 0002cad8 data
.org 0x2cadc
	ldr r3, [pc, #4]	@ 0002cadc 014b
.org 0x2cade
	ldr r2, [pc, #8]	@ 0002cade 024a
.org 0x2cae0
	b.n 0x2cb1c	@ 0002cae0 1ce0
.org 0x2cae2
	.byte 0x00	@ 0002cae2 data
.org 0x2cae3
	.byte 0x00	@ 0002cae3 data
.org 0x2cae4
	.byte 0x00,0xee,0xff,0xff	@ 0002cae4 data
.org 0x2cae8
	.byte 0x00,0xd8,0xff,0xff	@ 0002cae8 data
.org 0x2caec
	ldr r3, [pc, #4]	@ 0002caec 014b
.org 0x2caee
	ldr r2, [pc, #8]	@ 0002caee 024a
.org 0x2caf0
	b.n 0x2cb1c	@ 0002caf0 14e0
.org 0x2caf2
	.byte 0x00	@ 0002caf2 data
.org 0x2caf3
	.byte 0x00	@ 0002caf3 data
.org 0x2caf4
	.byte 0x00,0xea,0xff,0xff	@ 0002caf4 data
.org 0x2caf8
	.byte 0x00,0xf6,0xff,0xff	@ 0002caf8 data
.org 0x2cafc
	ldrb r0, [r7, #13]	@ 0002cafc 787b
.org 0x2cafe
	cmp r0, #1	@ 0002cafe 0128
.org 0x2cb00
	bne.n 0x2cb18	@ 0002cb00 0ad1
.org 0x2cb02
	movs r0, #171	@ 0002cb02 ab20
.org 0x2cb04
	lsls r0, r0, #1	@ 0002cb04 4000
.org 0x2cb06
	adds r1, r7, r0	@ 0002cb06 3918
.org 0x2cb08
	movs r0, #3	@ 0002cb08 0320
.org 0x2cb0a
	strb r0, [r1, #0]	@ 0002cb0a 0870
.org 0x2cb0c
	movs r3, #0	@ 0002cb0c 0023
.org 0x2cb0e
	ldr r2, [pc, #4]	@ 0002cb0e 014a
.org 0x2cb10
	b.n 0x2cb1c	@ 0002cb10 04e0
.org 0x2cb12
	.byte 0x00	@ 0002cb12 data
.org 0x2cb13
	.byte 0x00	@ 0002cb13 data
.org 0x2cb14
	.byte 0x00,0xd3,0xff,0xff	@ 0002cb14 data
.org 0x2cb18
	movs r3, #0	@ 0002cb18 0023
.org 0x2cb1a
	movs r2, #0	@ 0002cb1a 0022
.org 0x2cb1c
	ldrb r1, [r7, #10]	@ 0002cb1c b97a
.org 0x2cb1e
	movs r0, #16	@ 0002cb1e 1020
.org 0x2cb20
	ands r0, r1	@ 0002cb20 0840
.org 0x2cb22
	cmp r0, #0	@ 0002cb22 0028
.org 0x2cb24
	beq.n 0x2cb2c	@ 0002cb24 02d0
.org 0x2cb26
	ldr r0, [r7, #84]	@ 0002cb26 786d
.org 0x2cb28
	subs r6, r0, r3	@ 0002cb28 c61a
.org 0x2cb2a
	b.n 0x2cb30	@ 0002cb2a 01e0
.org 0x2cb2c
	ldr r0, [r7, #84]	@ 0002cb2c 786d
.org 0x2cb2e
	adds r6, r0, r3	@ 0002cb2e c618
.org 0x2cb30
	ldr r0, [r7, #88]	@ 0002cb30 b86d
.org 0x2cb32
	adds r5, r0, r2	@ 0002cb32 8518
.org 0x2cb34
	adds r0, r6, #0	@ 0002cb34 301c
.org 0x2cb36
	adds r1, r5, #0	@ 0002cb36 291c
.org 0x2cb38
	bl 0x7020	@ 0002cb38 daf772fa
.org 0x2cb3c
	movs r3, #15	@ 0002cb3c 0f23
.org 0x2cb3e
	ands r3, r0	@ 0002cb3e 0340
.org 0x2cb40
	cmp r3, #15	@ 0002cb40 0f2b
.org 0x2cb42
	bne.n 0x2cbca	@ 0002cb42 42d1
.org 0x2cb44
	movs r1, #228	@ 0002cb44 e421
.org 0x2cb46
	lsls r1, r1, #1	@ 0002cb46 4900
.org 0x2cb48
	adds r4, r7, r1	@ 0002cb48 7c18
.org 0x2cb4a
	ldr r2, [pc, #60]	@ 0002cb4a 0f4a
.org 0x2cb4c
	mov r8, r2	@ 0002cb4c 9046
.org 0x2cb4e
	ands r5, r2	@ 0002cb4e 1540
.org 0x2cb50
	movs r1, #128	@ 0002cb50 8021
.org 0x2cb52
	lsls r1, r1, #4	@ 0002cb52 0901
.org 0x2cb54
	adds r1, r5, r1	@ 0002cb54 6918
.org 0x2cb56
	str r1, [r4, #0]	@ 0002cb56 2160
.org 0x2cb58
	movs r2, #144	@ 0002cb58 9022
.org 0x2cb5a
	lsls r2, r2, #4	@ 0002cb5a 1201
.org 0x2cb5c
	adds r0, r6, r2	@ 0002cb5c b018
.org 0x2cb5e
	str r3, [sp, #0]	@ 0002cb5e 0093
.org 0x2cb60
	bl 0x7020	@ 0002cb60 daf75efa
.org 0x2cb64
	lsls r0, r0, #16	@ 0002cb64 0004
.org 0x2cb66
	lsrs r2, r0, #16	@ 0002cb66 020c
.org 0x2cb68
	ldr r3, [sp, #0]	@ 0002cb68 009b
.org 0x2cb6a
	cmp r2, #0	@ 0002cb6a 002a
.org 0x2cb6c
	beq.n 0x2cb8c	@ 0002cb6c 0ed0
.org 0x2cb6e
	ands r2, r3	@ 0002cb6e 1a40
.org 0x2cb70
	cmp r2, #15	@ 0002cb70 0f2a
.org 0x2cb72
	beq.n 0x2cb8c	@ 0002cb72 0bd0
.org 0x2cb74
	movs r0, #226	@ 0002cb74 e220
.org 0x2cb76
	lsls r0, r0, #1	@ 0002cb76 4000
.org 0x2cb78
	adds r1, r7, r0	@ 0002cb78 3918
.org 0x2cb7a
	mov r2, r8	@ 0002cb7a 4246
.org 0x2cb7c
	ands r6, r2	@ 0002cb7c 1640
.org 0x2cb7e
	movs r0, #224	@ 0002cb7e e020
.org 0x2cb80
	lsls r0, r0, #3	@ 0002cb80 c000
.org 0x2cb82
	adds r0, r6, r0	@ 0002cb82 3018
.org 0x2cb84
	str r0, [r1, #0]	@ 0002cb84 0860
.org 0x2cb86
	b.n 0x2cbde	@ 0002cb86 2ae0
.org 0x2cb88
	.byte 0x00,0xf0,0xff,0xff	@ 0002cb88 data
.org 0x2cb8c
	ldr r1, [pc, #40]	@ 0002cb8c 0a49
.org 0x2cb8e
	adds r0, r6, r1	@ 0002cb8e 7018
.org 0x2cb90
	ldr r1, [r4, #0]	@ 0002cb90 2168
.org 0x2cb92
	bl 0x7020	@ 0002cb92 daf745fa
.org 0x2cb96
	lsls r0, r0, #16	@ 0002cb96 0004
.org 0x2cb98
	lsrs r2, r0, #16	@ 0002cb98 020c
.org 0x2cb9a
	cmp r2, #0	@ 0002cb9a 002a
.org 0x2cb9c
	beq.n 0x2cbc0	@ 0002cb9c 10d0
.org 0x2cb9e
	movs r0, #15	@ 0002cb9e 0f20
.org 0x2cba0
	ands r2, r0	@ 0002cba0 0240
.org 0x2cba2
	cmp r2, #15	@ 0002cba2 0f2a
