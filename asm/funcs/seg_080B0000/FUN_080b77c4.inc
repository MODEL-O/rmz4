@ FUN_080b77c4  entry 0x080b77c4  size 90
.thumb
.org 0xb77c4
FUN_080b77c4:
	push {r4, lr}	@ 000b77c4 10b5
.org 0xb77c6
	adds r4, r0, #0	@ 000b77c6 041c
.org 0xb77c8
	ldrb r0, [r4, #14]	@ 000b77c8 a07b
.org 0xb77ca
	cmp r0, #0	@ 000b77ca 0028
.org 0xb77cc
	bne.n 0xb77ec	@ 000b77cc 0ed1
.org 0xb77ce
	ldr r1, [pc, #52]	@ 000b77ce 0d49
.org 0xb77d0
	adds r0, r4, #0	@ 000b77d0 201c
.org 0xb77d2
	adds r0, #180	@ 000b77d2 b430
.org 0xb77d4
	ldrb r0, [r0, #0]	@ 000b77d4 0078
.org 0xb77d6
	lsls r0, r0, #1	@ 000b77d6 4000
.org 0xb77d8
	adds r0, r0, r1	@ 000b77d8 4018
.org 0xb77da
	ldrh r1, [r0, #0]	@ 000b77da 0188
.org 0xb77dc
	adds r0, r4, #0	@ 000b77dc 201c
.org 0xb77de
	bl 0x1cf00	@ 000b77de 65f78ffb
.org 0xb77e2
	movs r0, #48	@ 000b77e2 3020
.org 0xb77e4
	strb r0, [r4, #18]	@ 000b77e4 a074
.org 0xb77e6
	ldrb r0, [r4, #14]	@ 000b77e6 a07b
.org 0xb77e8
	adds r0, #1	@ 000b77e8 0130
.org 0xb77ea
	strb r0, [r4, #14]	@ 000b77ea a073
.org 0xb77ec
	ldrb r0, [r4, #18]	@ 000b77ec a07c
.org 0xb77ee
	cmp r0, #0	@ 000b77ee 0028
.org 0xb77f0
	bne.n 0xb781a	@ 000b77f0 13d1
.org 0xb77f2
	adds r0, r4, #0	@ 000b77f2 201c
.org 0xb77f4
	adds r0, #180	@ 000b77f4 b430
.org 0xb77f6
	ldrb r0, [r0, #0]	@ 000b77f6 0078
.org 0xb77f8
	cmp r0, #0	@ 000b77f8 0028
.org 0xb77fa
	beq.n 0xb7808	@ 000b77fa 05d0
.org 0xb77fc
	movs r0, #3	@ 000b77fc 0320
.org 0xb77fe
	strb r0, [r4, #13]	@ 000b77fe 6073
.org 0xb7800
	b.n 0xb7814	@ 000b7800 08e0
.org 0xb7802
	.byte 0x00	@ 000b7802 data
.org 0xb7803
	.byte 0x00	@ 000b7803 data
.org 0xb7804
	.byte 0xe0,0x3f,0x86,0x08	@ 000b7804 data
.org 0xb7808
	movs r0, #1	@ 000b7808 0120
.org 0xb780a
	strb r0, [r4, #13]	@ 000b780a 6073
.org 0xb780c
	movs r0, #159	@ 000b780c 9f20
.org 0xb780e
	lsls r0, r0, #1	@ 000b780e 4000
.org 0xb7810
	bl 0x2b10	@ 000b7810 4bf77ef9
.org 0xb7814
	movs r0, #0	@ 000b7814 0020
.org 0xb7816
	strb r0, [r4, #14]	@ 000b7816 a073
.org 0xb7818
	b.n 0xb781e	@ 000b7818 01e0
.org 0xb781a
	subs r0, #1	@ 000b781a 0138
.org 0xb781c
	strb r0, [r4, #18]	@ 000b781c a074
