@ FUN_080b5f5c  entry 0x080b5f5c  size 142
.thumb
.org 0xb5f5c
FUN_080b5f5c:
	push {r4, r5, r6, lr}	@ 000b5f5c 70b5
.org 0xb5f5e
	adds r4, r0, #0	@ 000b5f5e 041c
.org 0xb5f60
	ldr r6, [r4, #40]	@ 000b5f60 a66a
.org 0xb5f62
	ldrb r0, [r4, #15]	@ 000b5f62 e07b
.org 0xb5f64
	cmp r0, #0	@ 000b5f64 0028
.org 0xb5f66
	bne.n 0xb5f80	@ 000b5f66 0bd1
.org 0xb5f68
	adds r0, r4, #0	@ 000b5f68 201c
.org 0xb5f6a
	adds r0, #116	@ 000b5f6a 7430
.org 0xb5f6c
	ldr r1, [pc, #124]	@ 000b5f6c 1f49
.org 0xb5f6e
	bl 0x5784	@ 000b5f6e 4ff709fc
.org 0xb5f72
	ldr r1, [pc, #124]	@ 000b5f72 1f49
.org 0xb5f74
	adds r0, r4, #0	@ 000b5f74 201c
.org 0xb5f76
	bl 0x1cf00	@ 000b5f76 66f7c3ff
.org 0xb5f7a
	ldrb r0, [r4, #15]	@ 000b5f7a e07b
.org 0xb5f7c
	adds r0, #1	@ 000b5f7c 0130
.org 0xb5f7e
	strb r0, [r4, #15]	@ 000b5f7e e073
.org 0xb5f80
	adds r0, r4, #0	@ 000b5f80 201c
.org 0xb5f82
	bl 0x1cff0	@ 000b5f82 67f735f8
.org 0xb5f86
	adds r0, r4, #0	@ 000b5f86 201c
.org 0xb5f88
	adds r0, #115	@ 000b5f88 7330
.org 0xb5f8a
	ldrb r5, [r0, #0]	@ 000b5f8a 0578
.org 0xb5f8c
	cmp r5, #3	@ 000b5f8c 032d
.org 0xb5f8e
	bne.n 0xb5fe4	@ 000b5f8e 29d1
.org 0xb5f90
	adds r1, r6, #0	@ 000b5f90 311c
.org 0xb5f92
	adds r1, #164	@ 000b5f92 a431
.org 0xb5f94
	ldrh r0, [r1, #0]	@ 000b5f94 0888
.org 0xb5f96
	adds r0, #2	@ 000b5f96 0230
.org 0xb5f98
	movs r6, #0	@ 000b5f98 0026
.org 0xb5f9a
	strh r0, [r1, #0]	@ 000b5f9a 0880
.org 0xb5f9c
	lsls r0, r0, #16	@ 000b5f9c 0004
.org 0xb5f9e
	asrs r0, r0, #16	@ 000b5f9e 0014
.org 0xb5fa0
	cmp r0, #96	@ 000b5fa0 6028
.org 0xb5fa2
	ble.n 0xb5fa8	@ 000b5fa2 01dd
.org 0xb5fa4
	movs r0, #96	@ 000b5fa4 6020
.org 0xb5fa6
	strh r0, [r1, #0]	@ 000b5fa6 0880
.org 0xb5fa8
	adds r0, r4, #0	@ 000b5fa8 201c
.org 0xb5faa
	bl 0xb6094	@ 000b5faa 00f073f8
.org 0xb5fae
	ldrb r1, [r4, #10]	@ 000b5fae a17a
.org 0xb5fb0
	movs r0, #254	@ 000b5fb0 fe20
.org 0xb5fb2
	ands r0, r1	@ 000b5fb2 0840
.org 0xb5fb4
	movs r1, #253	@ 000b5fb4 fd21
.org 0xb5fb6
	ands r0, r1	@ 000b5fb6 0840
.org 0xb5fb8
	strb r0, [r4, #10]	@ 000b5fb8 a072
.org 0xb5fba
	adds r0, r4, #0	@ 000b5fba 201c
.org 0xb5fbc
	adds r0, #140	@ 000b5fbc 8c30
.org 0xb5fbe
	str r6, [r0, #0]	@ 000b5fbe 0660
.org 0xb5fc0
	adds r0, #4	@ 000b5fc0 0430
.org 0xb5fc2
	str r6, [r0, #0]	@ 000b5fc2 0660
.org 0xb5fc4
	adds r1, r4, #0	@ 000b5fc4 211c
.org 0xb5fc6
	adds r1, #148	@ 000b5fc6 9431
.org 0xb5fc8
	movs r0, #0	@ 000b5fc8 0020
.org 0xb5fca
	strb r0, [r1, #0]	@ 000b5fca 0870
.org 0xb5fcc
	ldrb r1, [r4, #10]	@ 000b5fcc a17a
.org 0xb5fce
	movs r0, #251	@ 000b5fce fb20
.org 0xb5fd0
	ands r0, r1	@ 000b5fd0 0840
.org 0xb5fd2
	strb r0, [r4, #10]	@ 000b5fd2 a072
.org 0xb5fd4
	ldr r1, [pc, #28]	@ 000b5fd4 0749
.org 0xb5fd6
	ldrb r0, [r4, #9]	@ 000b5fd6 607a
.org 0xb5fd8
	lsls r0, r0, #2	@ 000b5fd8 8000
.org 0xb5fda
	adds r0, r0, r1	@ 000b5fda 4018
.org 0xb5fdc
	str r5, [r4, #12]	@ 000b5fdc e560
.org 0xb5fde
	ldr r0, [r0, #0]	@ 000b5fde 0068
.org 0xb5fe0
	ldr r0, [r0, #12]	@ 000b5fe0 c068
.org 0xb5fe2
	str r0, [r4, #20]	@ 000b5fe2 6061
.org 0xb5fe4
	pop {r4, r5, r6}	@ 000b5fe4 70bc
.org 0xb5fe6
	pop {r0}	@ 000b5fe6 01bc
.org 0xb5fe8
	bx r0	@ 000b5fe8 0047
