@ FUN_080abb2c  entry 0x080abb2c  size 80
.thumb
.org 0xabb2c
FUN_080abb2c:
	push {r4, lr}	@ 000abb2c 10b5
.org 0xabb2e
	adds r4, r0, #0	@ 000abb2e 041c
.org 0xabb30
	ldrb r0, [r4, #15]	@ 000abb30 e07b
.org 0xabb32
	cmp r0, #0	@ 000abb32 0028
.org 0xabb34
	bne.n 0xabb4a	@ 000abb34 09d1
.org 0xabb36
	adds r1, r4, #0	@ 000abb36 211c
.org 0xabb38
	adds r1, #188	@ 000abb38 bc31
.org 0xabb3a
	ldrb r0, [r1, #0]	@ 000abb3a 0878
.org 0xabb3c
	adds r0, #1	@ 000abb3c 0130
.org 0xabb3e
	strb r0, [r1, #0]	@ 000abb3e 0870
.org 0xabb40
	movs r0, #20	@ 000abb40 1420
.org 0xabb42
	strb r0, [r4, #18]	@ 000abb42 a074
.org 0xabb44
	ldrb r0, [r4, #15]	@ 000abb44 e07b
.org 0xabb46
	adds r0, #1	@ 000abb46 0130
.org 0xabb48
	strb r0, [r4, #15]	@ 000abb48 e073
.org 0xabb4a
	ldrb r1, [r4, #18]	@ 000abb4a a17c
.org 0xabb4c
	subs r1, #1	@ 000abb4c 0139
.org 0xabb4e
	strb r1, [r4, #18]	@ 000abb4e a174
.org 0xabb50
	movs r0, #20	@ 000abb50 1420
.org 0xabb52
	subs r0, r0, r1	@ 000abb52 401a
.org 0xabb54
	lsls r0, r0, #24	@ 000abb54 0006
.org 0xabb56
	lsrs r0, r0, #16	@ 000abb56 000c
.org 0xabb58
	movs r1, #20	@ 000abb58 1421
.org 0xabb5a
	bl 0x128fb8	@ 000abb5a 7df02dfa
.org 0xabb5e
	adds r1, r4, #0	@ 000abb5e 211c
.org 0xabb60
	adds r1, #194	@ 000abb60 c231
.org 0xabb62
	movs r2, #0	@ 000abb62 0022
.org 0xabb64
	strh r0, [r1, #0]	@ 000abb64 0880
.org 0xabb66
	ldrb r0, [r4, #18]	@ 000abb66 a07c
.org 0xabb68
	cmp r0, #0	@ 000abb68 0028
.org 0xabb6a
	bne.n 0xabb76	@ 000abb6a 04d1
.org 0xabb6c
	ldrb r0, [r4, #13]	@ 000abb6c 607b
.org 0xabb6e
	adds r0, #1	@ 000abb6e 0130
.org 0xabb70
	strb r0, [r4, #13]	@ 000abb70 6073
.org 0xabb72
	strb r2, [r4, #14]	@ 000abb72 a273
.org 0xabb74
	strb r2, [r4, #15]	@ 000abb74 e273
.org 0xabb76
	pop {r4}	@ 000abb76 10bc
.org 0xabb78
	pop {r0}	@ 000abb78 01bc
.org 0xabb7a
	bx r0	@ 000abb7a 0047
