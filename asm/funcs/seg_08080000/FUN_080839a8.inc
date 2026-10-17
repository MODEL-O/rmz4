@ FUN_080839a8  entry 0x080839a8  size 96
.thumb
.org 0x839a8
FUN_080839a8:
	push {lr}	@ 000839a8 00b5
.org 0x839aa
	adds r3, r0, #0	@ 000839aa 031c
.org 0x839ac
	ldr r0, [pc, #64]	@ 000839ac 1048
.org 0x839ae
	ldrb r1, [r0, #9]	@ 000839ae 417a
.org 0x839b0
	movs r0, #4	@ 000839b0 0420
.org 0x839b2
	ands r0, r1	@ 000839b2 0840
.org 0x839b4
	cmp r0, #0	@ 000839b4 0028
.org 0x839b6
	beq.n 0x839f8	@ 000839b6 1fd0
.org 0x839b8
	ldrb r1, [r3, #10]	@ 000839b8 997a
.org 0x839ba
	movs r0, #254	@ 000839ba fe20
.org 0x839bc
	ands r0, r1	@ 000839bc 0840
.org 0x839be
	movs r2, #0	@ 000839be 0022
.org 0x839c0
	movs r1, #253	@ 000839c0 fd21
.org 0x839c2
	ands r0, r1	@ 000839c2 0840
.org 0x839c4
	strb r0, [r3, #10]	@ 000839c4 9872
.org 0x839c6
	adds r0, r3, #0	@ 000839c6 181c
.org 0x839c8
	adds r0, #140	@ 000839c8 8c30
.org 0x839ca
	str r2, [r0, #0]	@ 000839ca 0260
.org 0x839cc
	adds r0, #4	@ 000839cc 0430
.org 0x839ce
	str r2, [r0, #0]	@ 000839ce 0260
.org 0x839d0
	adds r0, #4	@ 000839d0 0430
.org 0x839d2
	strb r2, [r0, #0]	@ 000839d2 0270
.org 0x839d4
	ldrb r1, [r3, #10]	@ 000839d4 997a
.org 0x839d6
	movs r0, #251	@ 000839d6 fb20
.org 0x839d8
	ands r0, r1	@ 000839d8 0840
.org 0x839da
	strb r0, [r3, #10]	@ 000839da 9872
.org 0x839dc
	ldr r1, [pc, #20]	@ 000839dc 0549
.org 0x839de
	ldrb r0, [r3, #9]	@ 000839de 587a
.org 0x839e0
	lsls r0, r0, #2	@ 000839e0 8000
.org 0x839e2
	adds r0, r0, r1	@ 000839e2 4018
.org 0x839e4
	movs r1, #3	@ 000839e4 0321
.org 0x839e6
	str r1, [r3, #12]	@ 000839e6 d960
.org 0x839e8
	ldr r0, [r0, #0]	@ 000839e8 0068
.org 0x839ea
	ldr r0, [r0, #12]	@ 000839ea c068
.org 0x839ec
	str r0, [r3, #20]	@ 000839ec 5861
.org 0x839ee
	b.n 0x83a0c	@ 000839ee 0de0
.org 0x839f0
	.byte 0xb0,0xe8,0x02,0x02	@ 000839f0 data
.org 0x839f4
	.byte 0x40,0xdb,0x85,0x08	@ 000839f4 data
.org 0x839f8
	ldrb r0, [r3, #16]	@ 000839f8 187c
.org 0x839fa
	cmp r0, #0	@ 000839fa 0028
.org 0x839fc
	beq.n 0x83a06	@ 000839fc 03d0
.org 0x839fe
	adds r0, r3, #0	@ 000839fe 181c
.org 0x83a00
	bl 0x83e54	@ 00083a00 00f028fa
.org 0x83a04
	b.n 0x83a0c	@ 00083a04 02e0
.org 0x83a06
	adds r0, r3, #0	@ 00083a06 181c
