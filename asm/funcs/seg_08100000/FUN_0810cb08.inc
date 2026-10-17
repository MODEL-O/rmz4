@ FUN_0810cb08  entry 0x0810cb08  size 172
.thumb
.org 0x10cb08
FUN_0810cb08:
	push {r4, r5, lr}	@ 0010cb08 30b5
.org 0x10cb0a
	adds r4, r0, #0	@ 0010cb0a 041c
.org 0x10cb0c
	ldr r0, [r4, #40]	@ 0010cb0c a06a
.org 0x10cb0e
	ldr r1, [pc, #40]	@ 0010cb0e 0a49
.org 0x10cb10
	adds r5, r0, r1	@ 0010cb10 4518
.org 0x10cb12
	ldrb r0, [r5, #5]	@ 0010cb12 6879
.org 0x10cb14
	cmp r0, #0	@ 0010cb14 0028
.org 0x10cb16
	beq.n 0x10cb40	@ 0010cb16 13d0
.org 0x10cb18
	ldrb r1, [r4, #10]	@ 0010cb18 a17a
.org 0x10cb1a
	movs r0, #254	@ 0010cb1a fe20
.org 0x10cb1c
	ands r0, r1	@ 0010cb1c 0840
.org 0x10cb1e
	movs r1, #253	@ 0010cb1e fd21
.org 0x10cb20
	ands r0, r1	@ 0010cb20 0840
.org 0x10cb22
	strb r0, [r4, #10]	@ 0010cb22 a072
.org 0x10cb24
	ldr r1, [pc, #20]	@ 0010cb24 0549
.org 0x10cb26
	ldrb r0, [r4, #9]	@ 0010cb26 607a
.org 0x10cb28
	lsls r0, r0, #2	@ 0010cb28 8000
.org 0x10cb2a
	adds r0, r0, r1	@ 0010cb2a 4018
.org 0x10cb2c
	movs r1, #3	@ 0010cb2c 0321
.org 0x10cb2e
	str r1, [r4, #12]	@ 0010cb2e e160
.org 0x10cb30
	ldr r0, [r0, #0]	@ 0010cb30 0068
.org 0x10cb32
	ldr r0, [r0, #12]	@ 0010cb32 c068
.org 0x10cb34
	str r0, [r4, #20]	@ 0010cb34 6061
.org 0x10cb36
	b.n 0x10cbb6	@ 0010cb36 3ee0
.org 0x10cb38
	.byte 0xcc,0x0d,0x00,0x00	@ 0010cb38 data
.org 0x10cb3c
	.byte 0xf8,0xca,0x86,0x08	@ 0010cb3c data
.org 0x10cb40
	ldrb r0, [r5, #19]	@ 0010cb40 e87c
.org 0x10cb42
	cmp r0, #0	@ 0010cb42 0028
.org 0x10cb44
	beq.n 0x10cbae	@ 0010cb44 33d0
.org 0x10cb46
	ldrb r1, [r4, #10]	@ 0010cb46 a17a
.org 0x10cb48
	movs r0, #1	@ 0010cb48 0120
.org 0x10cb4a
	orrs r0, r1	@ 0010cb4a 0843
.org 0x10cb4c
	strb r0, [r4, #10]	@ 0010cb4c a072
.org 0x10cb4e
	adds r0, r4, #0	@ 0010cb4e 201c
.org 0x10cb50
	bl 0x1cff0	@ 0010cb50 10f74efa
.org 0x10cb54
	ldrb r0, [r4, #16]	@ 0010cb54 207c
.org 0x10cb56
	cmp r0, #1	@ 0010cb56 0128
.org 0x10cb58
	beq.n 0x10cb80	@ 0010cb58 12d0
.org 0x10cb5a
	cmp r0, #1	@ 0010cb5a 0128
.org 0x10cb5c
	bgt.n 0x10cb64	@ 0010cb5c 02dc
.org 0x10cb5e
	cmp r0, #0	@ 0010cb5e 0028
.org 0x10cb60
	beq.n 0x10cb6e	@ 0010cb60 05d0
.org 0x10cb62
	b.n 0x10cbb6	@ 0010cb62 28e0
.org 0x10cb64
	cmp r0, #2	@ 0010cb64 0228
.org 0x10cb66
	beq.n 0x10cb90	@ 0010cb66 13d0
.org 0x10cb68
	cmp r0, #3	@ 0010cb68 0328
.org 0x10cb6a
	beq.n 0x10cb9c	@ 0010cb6a 17d0
.org 0x10cb6c
	b.n 0x10cbb6	@ 0010cb6c 23e0
.org 0x10cb6e
	ldrb r1, [r5, #19]	@ 0010cb6e e97c
.org 0x10cb70
	movs r0, #64	@ 0010cb70 4020
.org 0x10cb72
	subs r0, r0, r1	@ 0010cb72 401a
.org 0x10cb74
	lsls r0, r0, #8	@ 0010cb74 0002
.org 0x10cb76
	str r0, [r4, #84]	@ 0010cb76 6065
.org 0x10cb78
	ldrb r1, [r5, #20]	@ 0010cb78 297d
.org 0x10cb7a
	movs r0, #80	@ 0010cb7a 5020
.org 0x10cb7c
	subs r0, r0, r1	@ 0010cb7c 401a
.org 0x10cb7e
	b.n 0x10cba8	@ 0010cb7e 13e0
.org 0x10cb80
	ldrb r0, [r5, #19]	@ 0010cb80 e87c
.org 0x10cb82
	adds r0, #64	@ 0010cb82 4030
.org 0x10cb84
	lsls r0, r0, #8	@ 0010cb84 0002
.org 0x10cb86
	str r0, [r4, #84]	@ 0010cb86 6065
.org 0x10cb88
	ldrb r1, [r5, #20]	@ 0010cb88 297d
.org 0x10cb8a
	movs r0, #80	@ 0010cb8a 5020
.org 0x10cb8c
	subs r0, r0, r1	@ 0010cb8c 401a
.org 0x10cb8e
	b.n 0x10cba8	@ 0010cb8e 0be0
.org 0x10cb90
	ldrb r0, [r5, #19]	@ 0010cb90 e87c
.org 0x10cb92
	movs r1, #64	@ 0010cb92 4021
.org 0x10cb94
	subs r1, r1, r0	@ 0010cb94 091a
.org 0x10cb96
	lsls r1, r1, #8	@ 0010cb96 0902
.org 0x10cb98
	str r1, [r4, #84]	@ 0010cb98 6165
.org 0x10cb9a
	b.n 0x10cba4	@ 0010cb9a 03e0
.org 0x10cb9c
	ldrb r0, [r5, #19]	@ 0010cb9c e87c
.org 0x10cb9e
	adds r0, #64	@ 0010cb9e 4030
.org 0x10cba0
	lsls r0, r0, #8	@ 0010cba0 0002
.org 0x10cba2
	str r0, [r4, #84]	@ 0010cba2 6065
.org 0x10cba4
	ldrb r0, [r5, #20]	@ 0010cba4 287d
.org 0x10cba6
	adds r0, #80	@ 0010cba6 5030
.org 0x10cba8
	lsls r0, r0, #8	@ 0010cba8 0002
.org 0x10cbaa
	str r0, [r4, #88]	@ 0010cbaa a065
.org 0x10cbac
	b.n 0x10cbb6	@ 0010cbac 03e0
.org 0x10cbae
	ldrb r1, [r4, #10]	@ 0010cbae a17a
.org 0x10cbb0
	movs r0, #254	@ 0010cbb0 fe20
.org 0x10cbb2
	ands r0, r1	@ 0010cbb2 0840
