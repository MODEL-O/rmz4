@ FUN_0806dafc  entry 0x0806dafc  size 234
.thumb
.org 0x6dafc
FUN_0806dafc:
	push {r4, r5, r6, lr}	@ 0006dafc 70b5
.org 0x6dafe
	adds r4, r0, #0	@ 0006dafe 041c
.org 0x6db00
	adds r0, #140	@ 0006db00 8c30
.org 0x6db02
	ldr r0, [r0, #0]	@ 0006db02 0068
.org 0x6db04
	movs r1, #1	@ 0006db04 0121
.org 0x6db06
	ands r0, r1	@ 0006db06 0840
.org 0x6db08
	cmp r0, #0	@ 0006db08 0028
.org 0x6db0a
	beq.n 0x6db12	@ 0006db0a 02d0
.org 0x6db0c
	movs r0, #75	@ 0006db0c 4b20
.org 0x6db0e
	bl 0x6984	@ 0006db0e 98f739ff
.org 0x6db12
	adds r5, r4, #0	@ 0006db12 251c
.org 0x6db14
	adds r5, #204	@ 0006db14 cc35
.org 0x6db16
	ldrb r0, [r5, #0]	@ 0006db16 2878
.org 0x6db18
	cmp r0, #0	@ 0006db18 0028
.org 0x6db1a
	bne.n 0x6db3a	@ 0006db1a 0ed1
.org 0x6db1c
	ldr r0, [pc, #116]	@ 0006db1c 1d48
.org 0x6db1e
	ldr r1, [pc, #120]	@ 0006db1e 1e49
.org 0x6db20
	adds r0, r0, r1	@ 0006db20 4018
.org 0x6db22
	ldrh r6, [r0, #0]	@ 0006db22 0688
.org 0x6db24
	cmp r6, #1	@ 0006db24 012e
.org 0x6db26
	bne.n 0x6db34	@ 0006db26 05d1
.org 0x6db28
	movs r1, #176	@ 0006db28 b021
.org 0x6db2a
	lsls r1, r1, #2	@ 0006db2a 8900
.org 0x6db2c
	movs r0, #120	@ 0006db2c 7820
.org 0x6db2e
	bl 0x249c	@ 0006db2e 94f7b5fc
.org 0x6db32
	strb r6, [r5, #0]	@ 0006db32 2e70
.org 0x6db34
	ldrb r0, [r5, #0]	@ 0006db34 2878
.org 0x6db36
	cmp r0, #0	@ 0006db36 0028
.org 0x6db38
	beq.n 0x6db40	@ 0006db38 02d0
.org 0x6db3a
	movs r0, #120	@ 0006db3a 7820
.org 0x6db3c
	bl 0x25d8	@ 0006db3c 94f74cfd
.org 0x6db40
	adds r0, r4, #0	@ 0006db40 201c
.org 0x6db42
	adds r0, #140	@ 0006db42 8c30
.org 0x6db44
	ldr r1, [r0, #0]	@ 0006db44 0168
.org 0x6db46
	movs r2, #128	@ 0006db46 8022
.org 0x6db48
	lsls r2, r2, #2	@ 0006db48 9200
.org 0x6db4a
	ands r1, r2	@ 0006db4a 1140
.org 0x6db4c
	adds r3, r0, #0	@ 0006db4c 031c
.org 0x6db4e
	cmp r1, #0	@ 0006db4e 0029
.org 0x6db50
	bne.n 0x6db5c	@ 0006db50 04d1
.org 0x6db52
	adds r0, #24	@ 0006db52 1830
.org 0x6db54
	movs r1, #0	@ 0006db54 0021
.org 0x6db56
	ldrsh r0, [r0, r1]	@ 0006db56 405e
.org 0x6db58
	cmp r0, #0	@ 0006db58 0028
.org 0x6db5a
	bne.n 0x6dbb2	@ 0006db5a 2ad1
.org 0x6db5c
	ldr r0, [pc, #60]	@ 0006db5c 0f48
.org 0x6db5e
	ldrh r1, [r0, #8]	@ 0006db5e 0189
.org 0x6db60
	movs r0, #8	@ 0006db60 0820
.org 0x6db62
	ands r0, r1	@ 0006db62 0840
.org 0x6db64
	lsls r0, r0, #16	@ 0006db64 0004
.org 0x6db66
	lsrs r2, r0, #16	@ 0006db66 020c
.org 0x6db68
	cmp r2, #0	@ 0006db68 002a
.org 0x6db6a
	bne.n 0x6dbb2	@ 0006db6a 22d1
.org 0x6db6c
	ldr r1, [pc, #48]	@ 0006db6c 0c49
.org 0x6db6e
	ldrb r0, [r4, #9]	@ 0006db6e 607a
.org 0x6db70
	lsls r0, r0, #2	@ 0006db70 8000
.org 0x6db72
	adds r0, r0, r1	@ 0006db72 4018
.org 0x6db74
	movs r1, #2	@ 0006db74 0221
.org 0x6db76
	str r1, [r4, #12]	@ 0006db76 e160
.org 0x6db78
	ldr r0, [r0, #0]	@ 0006db78 0068
.org 0x6db7a
	ldr r0, [r0, #8]	@ 0006db7a 8068
.org 0x6db7c
	str r0, [r4, #20]	@ 0006db7c 6061
.org 0x6db7e
	ldr r1, [r3, #0]	@ 0006db7e 1968
.org 0x6db80
	movs r0, #128	@ 0006db80 8020
.org 0x6db82
	lsls r0, r0, #9	@ 0006db82 4002
.org 0x6db84
	ands r1, r0	@ 0006db84 0140
.org 0x6db86
	cmp r1, #0	@ 0006db86 0029
.org 0x6db88
	beq.n 0x6dba4	@ 0006db88 0cd0
.org 0x6db8a
	movs r0, #1	@ 0006db8a 0120
.org 0x6db8c
	strb r0, [r4, #13]	@ 0006db8c 6073
.org 0x6db8e
	strb r2, [r4, #14]	@ 0006db8e a273
.org 0x6db90
	strb r2, [r4, #15]	@ 0006db90 e273
.org 0x6db92
	b.n 0x6dbaa	@ 0006db92 0ae0
.org 0x6db94
	.byte 0xb0,0x0a,0x00,0x02	@ 0006db94 data
.org 0x6db98
	.byte 0x36,0xd0,0x02,0x00	@ 0006db98 data
.org 0x6db9c
	.byte 0x10,0xe9,0x02,0x02	@ 0006db9c data
.org 0x6dba0
	.byte 0x70,0x7d,0x85,0x08	@ 0006dba0 data
.org 0x6dba4
	strb r1, [r4, #13]	@ 0006dba4 6173
.org 0x6dba6
	strb r1, [r4, #14]	@ 0006dba6 a173
.org 0x6dba8
	strb r1, [r4, #15]	@ 0006dba8 e173
.org 0x6dbaa
	adds r0, r4, #0	@ 0006dbaa 201c
.org 0x6dbac
	bl 0x6ed8c	@ 0006dbac 01f0eef8
.org 0x6dbb0
	b.n 0x6dbf0	@ 0006dbb0 1ee0
.org 0x6dbb2
	ldr r0, [r3, #0]	@ 0006dbb2 1868
.org 0x6dbb4
	movs r1, #1	@ 0006dbb4 0121
.org 0x6dbb6
	ands r0, r1	@ 0006dbb6 0840
.org 0x6dbb8
	cmp r0, #0	@ 0006dbb8 0028
.org 0x6dbba
	beq.n 0x6dbce	@ 0006dbba 08d0
.org 0x6dbbc
	ldr r0, [r4, #44]	@ 0006dbbc e06a
.org 0x6dbbe
	cmp r0, #0	@ 0006dbbe 0028
.org 0x6dbc0
	bne.n 0x6dbd4	@ 0006dbc0 08d1
.org 0x6dbc2
	ldr r2, [pc, #52]	@ 0006dbc2 0d4a
.org 0x6dbc4
	movs r0, #21	@ 0006dbc4 1520
.org 0x6dbc6
	adds r1, r4, #0	@ 0006dbc6 211c
.org 0x6dbc8
	bl 0x2adac	@ 0006dbc8 bdf7f0f8
.org 0x6dbcc
	str r0, [r4, #44]	@ 0006dbcc e062
.org 0x6dbce
	ldr r0, [r4, #44]	@ 0006dbce e06a
.org 0x6dbd0
	cmp r0, #0	@ 0006dbd0 0028
.org 0x6dbd2
	beq.n 0x6dbe0	@ 0006dbd2 05d0
.org 0x6dbd4
	bl 0x2b3e4	@ 0006dbd4 bdf706fc
.org 0x6dbd8
	cmp r0, #0	@ 0006dbd8 0028
.org 0x6dbda
	beq.n 0x6dbe0	@ 0006dbda 01d0
.org 0x6dbdc
	movs r0, #0	@ 0006dbdc 0020
.org 0x6dbde
	str r0, [r4, #44]	@ 0006dbde e062
.org 0x6dbe0
	ldr r0, [pc, #24]	@ 0006dbe0 0648
.org 0x6dbe2
	ldrb r1, [r4, #13]	@ 0006dbe2 617b
.org 0x6dbe4
	lsls r1, r1, #2	@ 0006dbe4 8900
