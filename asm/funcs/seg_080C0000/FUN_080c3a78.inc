@ FUN_080c3a78  entry 0x080c3a78  size 114
.thumb
.org 0xc3a78
FUN_080c3a78:
	push {r4, r5, r6, lr}	@ 000c3a78 70b5
.org 0xc3a7a
	adds r4, r0, #0	@ 000c3a7a 041c
.org 0xc3a7c
	bl 0x1cc9c	@ 000c3a7c 59f70ef9
.org 0xc3a80
	ldrb r1, [r4, #10]	@ 000c3a80 a17a
.org 0xc3a82
	movs r0, #1	@ 000c3a82 0120
.org 0xc3a84
	movs r6, #0	@ 000c3a84 0026
.org 0xc3a86
	orrs r0, r1	@ 000c3a86 0843
.org 0xc3a88
	movs r1, #2	@ 000c3a88 0221
.org 0xc3a8a
	orrs r0, r1	@ 000c3a8a 0843
.org 0xc3a8c
	strb r0, [r4, #10]	@ 000c3a8c a072
.org 0xc3a8e
	ldr r1, [pc, #92]	@ 000c3a8e 1749
.org 0xc3a90
	adds r0, r4, #0	@ 000c3a90 201c
.org 0xc3a92
	bl 0x1cf00	@ 000c3a92 59f735fa
.org 0xc3a96
	adds r0, r4, #0	@ 000c3a96 201c
.org 0xc3a98
	bl 0x1cff0	@ 000c3a98 59f7aafa
.org 0xc3a9c
	ldrb r1, [r4, #10]	@ 000c3a9c a17a
.org 0xc3a9e
	movs r0, #4	@ 000c3a9e 0420
.org 0xc3aa0
	orrs r0, r1	@ 000c3aa0 0843
.org 0xc3aa2
	strb r0, [r4, #10]	@ 000c3aa2 a072
.org 0xc3aa4
	adds r5, r4, #0	@ 000c3aa4 251c
.org 0xc3aa6
	adds r5, #116	@ 000c3aa6 7435
.org 0xc3aa8
	ldr r1, [pc, #68]	@ 000c3aa8 1149
.org 0xc3aaa
	adds r2, r4, #0	@ 000c3aaa 221c
.org 0xc3aac
	adds r2, #84	@ 000c3aac 5432
.org 0xc3aae
	adds r0, r5, #0	@ 000c3aae 281c
.org 0xc3ab0
	movs r3, #8	@ 000c3ab0 0823
.org 0xc3ab2
	bl 0x5760	@ 000c3ab2 41f755fe
.org 0xc3ab6
	str r4, [r5, #44]	@ 000c3ab6 ec62
.org 0xc3ab8
	str r6, [r5, #36]	@ 000c3ab8 6e62
.org 0xc3aba
	ldr r0, [r4, #84]	@ 000c3aba 606d
.org 0xc3abc
	ldr r1, [r4, #88]	@ 000c3abc a16d
.org 0xc3abe
	bl 0x8534	@ 000c3abe 44f739fd
.org 0xc3ac2
	str r0, [r4, #88]	@ 000c3ac2 a065
.org 0xc3ac4
	strb r6, [r4, #18]	@ 000c3ac4 a674
.org 0xc3ac6
	movs r0, #169	@ 000c3ac6 a920
.org 0xc3ac8
	bl 0x2b10	@ 000c3ac8 3ff722f8
.org 0xc3acc
	ldr r1, [pc, #36]	@ 000c3acc 0949
.org 0xc3ace
	ldrb r0, [r4, #9]	@ 000c3ace 607a
.org 0xc3ad0
	lsls r0, r0, #2	@ 000c3ad0 8000
.org 0xc3ad2
	adds r0, r0, r1	@ 000c3ad2 4018
.org 0xc3ad4
	movs r1, #1	@ 000c3ad4 0121
.org 0xc3ad6
	str r1, [r4, #12]	@ 000c3ad6 e160
.org 0xc3ad8
	ldr r0, [r0, #0]	@ 000c3ad8 0068
.org 0xc3ada
	ldr r0, [r0, #4]	@ 000c3ada 4068
.org 0xc3adc
	str r0, [r4, #20]	@ 000c3adc 6061
.org 0xc3ade
	adds r0, r4, #0	@ 000c3ade 201c
.org 0xc3ae0
	bl 0xc3a48	@ 000c3ae0 fff7b2ff
.org 0xc3ae4
	pop {r4, r5, r6}	@ 000c3ae4 70bc
.org 0xc3ae6
	pop {r0}	@ 000c3ae6 01bc
.org 0xc3ae8
	bx r0	@ 000c3ae8 0047
