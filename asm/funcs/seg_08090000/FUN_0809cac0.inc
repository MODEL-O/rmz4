@ FUN_0809cac0  entry 0x0809cac0  size 390
.thumb
.org 0x9cac0
FUN_0809cac0:
	push {r4, r5, lr}	@ 0009cac0 30b5
.org 0x9cac2
	adds r4, r0, #0	@ 0009cac2 041c
.org 0x9cac4
	ldr r5, [r4, #40]	@ 0009cac4 a56a
.org 0x9cac6
	bl 0x1cff0	@ 0009cac6 80f793fa
.org 0x9caca
	ldrb r0, [r5, #12]	@ 0009caca 287b
.org 0x9cacc
	cmp r0, #1	@ 0009cacc 0128
.org 0x9cace
	bls.n 0x9cb0c	@ 0009cace 1dd9
.org 0x9cad0
	ldrb r1, [r4, #10]	@ 0009cad0 a17a
.org 0x9cad2
	movs r0, #254	@ 0009cad2 fe20
.org 0x9cad4
	ands r0, r1	@ 0009cad4 0840
.org 0x9cad6
	movs r2, #0	@ 0009cad6 0022
.org 0x9cad8
	movs r1, #253	@ 0009cad8 fd21
.org 0x9cada
	ands r0, r1	@ 0009cada 0840
.org 0x9cadc
	strb r0, [r4, #10]	@ 0009cadc a072
.org 0x9cade
	adds r0, r4, #0	@ 0009cade 201c
.org 0x9cae0
	adds r0, #140	@ 0009cae0 8c30
.org 0x9cae2
	str r2, [r0, #0]	@ 0009cae2 0260
.org 0x9cae4
	adds r0, #4	@ 0009cae4 0430
.org 0x9cae6
	str r2, [r0, #0]	@ 0009cae6 0260
.org 0x9cae8
	adds r0, #4	@ 0009cae8 0430
.org 0x9caea
	strb r2, [r0, #0]	@ 0009caea 0270
.org 0x9caec
	ldrb r1, [r4, #10]	@ 0009caec a17a
.org 0x9caee
	movs r0, #251	@ 0009caee fb20
.org 0x9caf0
	ands r0, r1	@ 0009caf0 0840
.org 0x9caf2
	strb r0, [r4, #10]	@ 0009caf2 a072
.org 0x9caf4
	ldr r1, [pc, #16]	@ 0009caf4 0449
.org 0x9caf6
	ldrb r0, [r4, #9]	@ 0009caf6 607a
.org 0x9caf8
	lsls r0, r0, #2	@ 0009caf8 8000
.org 0x9cafa
	adds r0, r0, r1	@ 0009cafa 4018
.org 0x9cafc
	movs r1, #3	@ 0009cafc 0321
.org 0x9cafe
	str r1, [r4, #12]	@ 0009cafe e160
.org 0x9cb00
	ldr r0, [r0, #0]	@ 0009cb00 0068
.org 0x9cb02
	ldr r0, [r0, #12]	@ 0009cb02 c068
.org 0x9cb04
	str r0, [r4, #20]	@ 0009cb04 6061
.org 0x9cb06
	b.n 0x9cc64	@ 0009cb06 ade0
.org 0x9cb08
	.byte 0x40,0xdb,0x85,0x08	@ 0009cb08 data
.org 0x9cb0c
	ldr r0, [r5, #88]	@ 0009cb0c a86d
.org 0x9cb0e
	ldr r2, [pc, #12]	@ 0009cb0e 034a
.org 0x9cb10
	adds r1, r0, r2	@ 0009cb10 8118
.org 0x9cb12
	ldr r0, [r4, #88]	@ 0009cb12 a06d
.org 0x9cb14
	cmp r0, r1	@ 0009cb14 8842
.org 0x9cb16
	ble.n 0x9cb20	@ 0009cb16 03dd
.org 0x9cb18
	str r1, [r4, #88]	@ 0009cb18 a165
.org 0x9cb1a
	b.n 0x9cb24	@ 0009cb1a 03e0
.org 0x9cb1c
	.byte 0x00,0xf5,0xff,0xff	@ 0009cb1c data
.org 0x9cb20
	adds r0, #64	@ 0009cb20 4030
.org 0x9cb22
	str r0, [r4, #88]	@ 0009cb22 a065
.org 0x9cb24
	ldrb r0, [r4, #13]	@ 0009cb24 607b
.org 0x9cb26
	cmp r0, #1	@ 0009cb26 0128
.org 0x9cb28
	beq.n 0x9cba4	@ 0009cb28 3cd0
.org 0x9cb2a
	cmp r0, #1	@ 0009cb2a 0128
.org 0x9cb2c
	bgt.n 0x9cb34	@ 0009cb2c 02dc
.org 0x9cb2e
	cmp r0, #0	@ 0009cb2e 0028
.org 0x9cb30
	beq.n 0x9cb40	@ 0009cb30 06d0
.org 0x9cb32
	b.n 0x9cc64	@ 0009cb32 97e0
.org 0x9cb34
	cmp r0, #2	@ 0009cb34 0228
.org 0x9cb36
	beq.n 0x9cbec	@ 0009cb36 59d0
.org 0x9cb38
	cmp r0, #3	@ 0009cb38 0328
.org 0x9cb3a
	bne.n 0x9cb3e	@ 0009cb3a 00d1
.org 0x9cb3c
	b.n 0x9cc4c	@ 0009cb3c 86e0
.org 0x9cb3e
	b.n 0x9cc64	@ 0009cb3e 91e0
.org 0x9cb40
	ldr r0, [r4, #84]	@ 0009cb40 606d
.org 0x9cb42
	ldr r2, [r4, #92]	@ 0009cb42 e26d
.org 0x9cb44
	adds r0, r0, r2	@ 0009cb44 8018
.org 0x9cb46
	str r0, [r4, #84]	@ 0009cb46 6065
.org 0x9cb48
	ldrb r1, [r5, #10]	@ 0009cb48 a97a
.org 0x9cb4a
	movs r0, #16	@ 0009cb4a 1020
.org 0x9cb4c
	ands r0, r1	@ 0009cb4c 0840
.org 0x9cb4e
	cmp r0, #0	@ 0009cb4e 0028
.org 0x9cb50
	beq.n 0x9cb7c	@ 0009cb50 14d0
.org 0x9cb52
	adds r0, r2, #0	@ 0009cb52 101c
.org 0x9cb54
	adds r0, #64	@ 0009cb54 4030
.org 0x9cb56
	str r0, [r4, #92]	@ 0009cb56 e065
.org 0x9cb58
	movs r1, #128	@ 0009cb58 8021
.org 0x9cb5a
	lsls r1, r1, #3	@ 0009cb5a c900
.org 0x9cb5c
	cmp r0, r1	@ 0009cb5c 8842
.org 0x9cb5e
	ble.n 0x9cb62	@ 0009cb5e 00dd
.org 0x9cb60
	str r1, [r4, #92]	@ 0009cb60 e165
.org 0x9cb62
	ldr r0, [r4, #84]	@ 0009cb62 606d
.org 0x9cb64
	ldr r1, [r4, #88]	@ 0009cb64 a16d
.org 0x9cb66
	bl 0x8868	@ 0009cb66 6bf77ffe
.org 0x9cb6a
	ldr r1, [pc, #12]	@ 0009cb6a 0349
.org 0x9cb6c
	adds r0, r0, r1	@ 0009cb6c 4018
.org 0x9cb6e
	ldr r1, [r4, #84]	@ 0009cb6e 616d
.org 0x9cb70
	cmp r1, r0	@ 0009cb70 8142
.org 0x9cb72
	ble.n 0x9cc64	@ 0009cb72 77dd
.org 0x9cb74
	b.n 0x9cc38	@ 0009cb74 60e0
.org 0x9cb76
	.byte 0x00	@ 0009cb76 data
.org 0x9cb77
	.byte 0x00	@ 0009cb77 data
.org 0x9cb78
	.byte 0x00,0xc0,0xff,0xff	@ 0009cb78 data
.org 0x9cb7c
	adds r0, r2, #0	@ 0009cb7c 101c
.org 0x9cb7e
	subs r0, #64	@ 0009cb7e 4038
.org 0x9cb80
	str r0, [r4, #92]	@ 0009cb80 e065
.org 0x9cb82
	ldr r1, [pc, #28]	@ 0009cb82 0749
.org 0x9cb84
	cmp r0, r1	@ 0009cb84 8842
.org 0x9cb86
	bge.n 0x9cb8a	@ 0009cb86 00da
.org 0x9cb88
	str r1, [r4, #92]	@ 0009cb88 e165
.org 0x9cb8a
	ldr r0, [r4, #84]	@ 0009cb8a 606d
.org 0x9cb8c
	ldr r1, [r4, #88]	@ 0009cb8c a16d
.org 0x9cb8e
	bl 0x8988	@ 0009cb8e 6bf7fbfe
.org 0x9cb92
	movs r2, #128	@ 0009cb92 8022
.org 0x9cb94
	lsls r2, r2, #7	@ 0009cb94 d201
.org 0x9cb96
	adds r0, r0, r2	@ 0009cb96 8018
.org 0x9cb98
	ldr r1, [r4, #84]	@ 0009cb98 616d
.org 0x9cb9a
	cmp r1, r0	@ 0009cb9a 8142
.org 0x9cb9c
	bge.n 0x9cc64	@ 0009cb9c 62da
.org 0x9cb9e
	b.n 0x9cc38	@ 0009cb9e 4be0
.org 0x9cba0
	.byte 0x00,0xfc,0xff,0xff	@ 0009cba0 data
.org 0x9cba4
	ldr r0, [r4, #84]	@ 0009cba4 606d
.org 0x9cba6
	ldr r2, [r4, #92]	@ 0009cba6 e26d
.org 0x9cba8
	adds r0, r0, r2	@ 0009cba8 8018
.org 0x9cbaa
	str r0, [r4, #84]	@ 0009cbaa 6065
.org 0x9cbac
	ldrb r1, [r5, #10]	@ 0009cbac a97a
.org 0x9cbae
	movs r0, #16	@ 0009cbae 1020
.org 0x9cbb0
	ands r0, r1	@ 0009cbb0 0840
.org 0x9cbb2
	cmp r0, #0	@ 0009cbb2 0028
.org 0x9cbb4
	beq.n 0x9cbbc	@ 0009cbb4 02d0
.org 0x9cbb6
	adds r0, r2, #0	@ 0009cbb6 101c
.org 0x9cbb8
	subs r0, #32	@ 0009cbb8 2038
.org 0x9cbba
	b.n 0x9cbc0	@ 0009cbba 01e0
.org 0x9cbbc
	adds r0, r2, #0	@ 0009cbbc 101c
.org 0x9cbbe
	adds r0, #32	@ 0009cbbe 2030
.org 0x9cbc0
	str r0, [r4, #92]	@ 0009cbc0 e065
.org 0x9cbc2
	ldr r0, [r4, #92]	@ 0009cbc2 e06d
.org 0x9cbc4
	cmp r0, #0	@ 0009cbc4 0028
.org 0x9cbc6
	bne.n 0x9cc64	@ 0009cbc6 4dd1
.org 0x9cbc8
	ldrb r1, [r5, #10]	@ 0009cbc8 a97a
.org 0x9cbca
	movs r0, #16	@ 0009cbca 1020
.org 0x9cbcc
	ands r0, r1	@ 0009cbcc 0840
.org 0x9cbce
	cmp r0, #0	@ 0009cbce 0028
.org 0x9cbd0
	beq.n 0x9cbdc	@ 0009cbd0 04d0
.org 0x9cbd2
	ldr r0, [pc, #4]	@ 0009cbd2 0148
.org 0x9cbd4
	b.n 0x9cbe0	@ 0009cbd4 04e0
.org 0x9cbd6
	.byte 0x00	@ 0009cbd6 data
.org 0x9cbd7
	.byte 0x00	@ 0009cbd7 data
.org 0x9cbd8
	.byte 0x00,0xfd,0xff,0xff	@ 0009cbd8 data
.org 0x9cbdc
	movs r0, #192	@ 0009cbdc c020
.org 0x9cbde
	lsls r0, r0, #2	@ 0009cbde 8000
.org 0x9cbe0
	str r0, [r4, #92]	@ 0009cbe0 e065
.org 0x9cbe2
	movs r1, #0	@ 0009cbe2 0021
.org 0x9cbe4
	movs r0, #128	@ 0009cbe4 8020
.org 0x9cbe6
	strb r0, [r4, #18]	@ 0009cbe6 a074
.org 0x9cbe8
	strb r1, [r4, #19]	@ 0009cbe8 e174
.org 0x9cbea
	b.n 0x9cc38	@ 0009cbea 25e0
.org 0x9cbec
	ldr r0, [r4, #84]	@ 0009cbec 606d
.org 0x9cbee
	ldr r1, [r4, #92]	@ 0009cbee e16d
.org 0x9cbf0
	adds r0, r0, r1	@ 0009cbf0 4018
.org 0x9cbf2
	str r0, [r4, #84]	@ 0009cbf2 6065
.org 0x9cbf4
	ldrb r1, [r4, #19]	@ 0009cbf4 e17c
.org 0x9cbf6
	adds r2, r1, #0	@ 0009cbf6 0a1c
.org 0x9cbf8
	cmp r2, #17	@ 0009cbf8 112a
.org 0x9cbfa
	bhi.n 0x9cc12	@ 0009cbfa 0ad8
.org 0x9cbfc
	ldr r0, [pc, #64]	@ 0009cbfc 1048
.org 0x9cbfe
	adds r1, #1	@ 0009cbfe 0131
.org 0x9cc00
	strb r1, [r4, #19]	@ 0009cc00 e174
.org 0x9cc02
	adds r0, r2, r0	@ 0009cc02 1018
.org 0x9cc04
	ldrb r2, [r0, #0]	@ 0009cc04 0278
.org 0x9cc06
	adds r0, r4, #0	@ 0009cc06 201c
.org 0x9cc08
	movs r1, #3	@ 0009cc08 0321
.org 0x9cc0a
	movs r3, #0	@ 0009cc0a 0023
.org 0x9cc0c
	bl 0xc87d4	@ 0009cc0c 2bf0e2fd
.org 0x9cc10
	str r0, [r4, #44]	@ 0009cc10 e062
.org 0x9cc12
	ldrb r0, [r5, #30]	@ 0009cc12 a87f
.org 0x9cc14
	lsls r0, r0, #8	@ 0009cc14 0002
.org 0x9cc16
	adds r1, r5, #0	@ 0009cc16 291c
.org 0x9cc18
	adds r1, #112	@ 0009cc18 7031
.org 0x9cc1a
	ldrb r1, [r1, #0]	@ 0009cc1a 0978
.org 0x9cc1c
	orrs r0, r1	@ 0009cc1c 0843
.org 0x9cc1e
	ldr r1, [pc, #36]	@ 0009cc1e 0949
.org 0x9cc20
	cmp r0, r1	@ 0009cc20 8842
.org 0x9cc22
	bne.n 0x9cc64	@ 0009cc22 1fd1
.org 0x9cc24
	adds r0, r5, #0	@ 0009cc24 281c
.org 0x9cc26
	adds r0, #113	@ 0009cc26 7130
.org 0x9cc28
	ldrb r0, [r0, #0]	@ 0009cc28 0078
.org 0x9cc2a
	lsls r0, r0, #24	@ 0009cc2a 0006
.org 0x9cc2c
	asrs r0, r0, #24	@ 0009cc2c 0016
.org 0x9cc2e
	cmp r0, #3	@ 0009cc2e 0328
.org 0x9cc30
	ble.n 0x9cc64	@ 0009cc30 18dd
.org 0x9cc32
	ldr r0, [pc, #20]	@ 0009cc32 0548
.org 0x9cc34
	bl 0x2b10	@ 0009cc34 65f76cff
.org 0x9cc38
	ldrb r0, [r4, #13]	@ 0009cc38 607b
.org 0x9cc3a
	adds r0, #1	@ 0009cc3a 0130
.org 0x9cc3c
	strb r0, [r4, #13]	@ 0009cc3c 6073
.org 0x9cc3e
	b.n 0x9cc64	@ 0009cc3e 11e0
.org 0x9cc40
	.byte 0x2e,0x14,0x86,0x08	@ 0009cc40 data
.org 0x9cc44
	.byte 0x1c,0xa9,0x00,0x00	@ 0009cc44 data
