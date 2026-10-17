@ FUN_0809dbb4  entry 0x0809dbb4  size 198
.thumb
.org 0x9dbb4
FUN_0809dbb4:
	push {r4, r5, r6, r7, lr}	@ 0009dbb4 f0b5
.org 0x9dbb6
	sub sp, #4	@ 0009dbb6 81b0
.org 0x9dbb8
	adds r5, r0, #0	@ 0009dbb8 051c
.org 0x9dbba
	movs r6, #0	@ 0009dbba 0026
.org 0x9dbbc
	ldr r0, [pc, #48]	@ 0009dbbc 0c48
.org 0x9dbbe
	ldr r0, [r0, #0]	@ 0009dbbe 0068
.org 0x9dbc0
	ldr r1, [r5, #84]	@ 0009dbc0 696d
.org 0x9dbc2
	ldr r0, [r0, #84]	@ 0009dbc2 406d
.org 0x9dbc4
	cmp r1, r0	@ 0009dbc4 8142
.org 0x9dbc6
	ble.n 0x9dbca	@ 0009dbc6 00dd
.org 0x9dbc8
	movs r6, #1	@ 0009dbc8 0126
.org 0x9dbca
	adds r0, r5, #0	@ 0009dbca 281c
.org 0x9dbcc
	adds r0, #140	@ 0009dbcc 8c30
.org 0x9dbce
	ldr r1, [r0, #0]	@ 0009dbce 0168
.org 0x9dbd0
	movs r2, #128	@ 0009dbd0 8022
.org 0x9dbd2
	lsls r2, r2, #9	@ 0009dbd2 5202
.org 0x9dbd4
	ands r1, r2	@ 0009dbd4 1140
.org 0x9dbd6
	adds r7, r0, #0	@ 0009dbd6 071c
.org 0x9dbd8
	cmp r1, #0	@ 0009dbd8 0029
.org 0x9dbda
	beq.n 0x9dbf4	@ 0009dbda 0bd0
.org 0x9dbdc
	adds r4, r5, #0	@ 0009dbdc 2c1c
.org 0x9dbde
	adds r4, #84	@ 0009dbde 5434
.org 0x9dbe0
	ldrb r3, [r5, #10]	@ 0009dbe0 ab7a
.org 0x9dbe2
	lsrs r3, r3, #4	@ 0009dbe2 1b09
.org 0x9dbe4
	movs r0, #1	@ 0009dbe4 0120
.org 0x9dbe6
	ands r3, r0	@ 0009dbe6 0340
.org 0x9dbe8
	str r6, [sp, #0]	@ 0009dbe8 0096
.org 0x9dbea
	adds r0, r4, #0	@ 0009dbea 201c
.org 0x9dbec
	movs r1, #0	@ 0009dbec 0021
.org 0x9dbee
	b.n 0x9dc0e	@ 0009dbee 0ee0
.org 0x9dbf0
	.byte 0xf0,0xdb,0x02,0x02	@ 0009dbf0 data
.org 0x9dbf4
	adds r0, r5, #0	@ 0009dbf4 281c
.org 0x9dbf6
	adds r0, #190	@ 0009dbf6 be30
.org 0x9dbf8
	ldrb r0, [r0, #0]	@ 0009dbf8 0078
.org 0x9dbfa
	cmp r0, #1	@ 0009dbfa 0128
.org 0x9dbfc
	bne.n 0x9dc16	@ 0009dbfc 0bd1
.org 0x9dbfe
	adds r4, r5, #0	@ 0009dbfe 2c1c
.org 0x9dc00
	adds r4, #84	@ 0009dc00 5434
.org 0x9dc02
	ldrb r3, [r5, #10]	@ 0009dc02 ab7a
.org 0x9dc04
	lsrs r3, r3, #4	@ 0009dc04 1b09
.org 0x9dc06
	ands r3, r0	@ 0009dc06 0340
.org 0x9dc08
	str r6, [sp, #0]	@ 0009dc08 0096
.org 0x9dc0a
	adds r0, r4, #0	@ 0009dc0a 201c
.org 0x9dc0c
	movs r1, #2	@ 0009dc0c 0221
.org 0x9dc0e
	movs r2, #255	@ 0009dc0e ff22
.org 0x9dc10
	bl 0xdf2ec	@ 0009dc10 41f06cfb
.org 0x9dc14
	b.n 0x9dc2e	@ 0009dc14 0be0
.org 0x9dc16
	adds r4, r5, #0	@ 0009dc16 2c1c
.org 0x9dc18
	adds r4, #84	@ 0009dc18 5434
.org 0x9dc1a
	ldrb r3, [r5, #10]	@ 0009dc1a ab7a
.org 0x9dc1c
	lsrs r3, r3, #4	@ 0009dc1c 1b09
.org 0x9dc1e
	movs r0, #1	@ 0009dc1e 0120
.org 0x9dc20
	ands r3, r0	@ 0009dc20 0340
.org 0x9dc22
	str r6, [sp, #0]	@ 0009dc22 0096
.org 0x9dc24
	adds r0, r4, #0	@ 0009dc24 201c
.org 0x9dc26
	movs r1, #1	@ 0009dc26 0121
.org 0x9dc28
	movs r2, #255	@ 0009dc28 ff22
.org 0x9dc2a
	bl 0xdf2ec	@ 0009dc2a 41f05ffb
.org 0x9dc2e
	adds r2, r4, #0	@ 0009dc2e 221c
.org 0x9dc30
	movs r0, #4	@ 0009dc30 0420
.org 0x9dc32
	movs r1, #26	@ 0009dc32 1a21
.org 0x9dc34
	bl 0x2ab88	@ 0009dc34 8cf7a8ff
.org 0x9dc38
	ldr r2, [pc, #68]	@ 0009dc38 114a
.org 0x9dc3a
	ldrh r1, [r2, #12]	@ 0009dc3a 9189
.org 0x9dc3c
	ldr r0, [pc, #68]	@ 0009dc3c 1148
.org 0x9dc3e
	cmp r1, r0	@ 0009dc3e 8142
.org 0x9dc40
	bhi.n 0x9dc46	@ 0009dc40 01d8
.org 0x9dc42
	adds r0, r1, #1	@ 0009dc42 481c
.org 0x9dc44
	strh r0, [r2, #12]	@ 0009dc44 9081
.org 0x9dc46
	adds r0, r5, #0	@ 0009dc46 281c
.org 0x9dc48
	adds r1, r4, #0	@ 0009dc48 211c
.org 0x9dc4a
	bl 0x2abe0	@ 0009dc4a 8cf7c9ff
.org 0x9dc4e
	movs r1, #0	@ 0009dc4e 0021
.org 0x9dc50
	str r1, [r7, #0]	@ 0009dc50 3960
.org 0x9dc52
	adds r0, r5, #0	@ 0009dc52 281c
.org 0x9dc54
	adds r0, #144	@ 0009dc54 9030
.org 0x9dc56
	str r1, [r0, #0]	@ 0009dc56 0160
.org 0x9dc58
	adds r0, #4	@ 0009dc58 0430
.org 0x9dc5a
	strb r1, [r0, #0]	@ 0009dc5a 0170
.org 0x9dc5c
	ldrb r1, [r5, #10]	@ 0009dc5c a97a
.org 0x9dc5e
	movs r0, #251	@ 0009dc5e fb20
.org 0x9dc60
	ands r0, r1	@ 0009dc60 0840
.org 0x9dc62
	strb r0, [r5, #10]	@ 0009dc62 a872
.org 0x9dc64
	ldr r1, [pc, #32]	@ 0009dc64 0849
.org 0x9dc66
	ldrb r0, [r5, #9]	@ 0009dc66 687a
.org 0x9dc68
	lsls r0, r0, #2	@ 0009dc68 8000
.org 0x9dc6a
	adds r0, r0, r1	@ 0009dc6a 4018
.org 0x9dc6c
	movs r1, #4	@ 0009dc6c 0421
.org 0x9dc6e
	str r1, [r5, #12]	@ 0009dc6e e960
.org 0x9dc70
	ldr r0, [r0, #0]	@ 0009dc70 0068
.org 0x9dc72
	ldr r0, [r0, #16]	@ 0009dc72 0069
.org 0x9dc74
	str r0, [r5, #20]	@ 0009dc74 6861
.org 0x9dc76
	add sp, #4	@ 0009dc76 01b0
.org 0x9dc78
	pop {r4, r5, r6, r7}	@ 0009dc78 f0bc
