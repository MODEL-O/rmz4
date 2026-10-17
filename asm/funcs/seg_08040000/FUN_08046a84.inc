@ FUN_08046a84  entry 0x08046a84  size 100
.thumb
.org 0x46a84
FUN_08046a84:
	push {r4, r5, lr}	@ 00046a84 30b5
.org 0x46a86
	adds r4, r0, #0	@ 00046a86 041c
.org 0x46a88
	bl 0x1cff0	@ 00046a88 d6f7b2fa
.org 0x46a8c
	ldr r1, [r4, #84]	@ 00046a8c 616d
.org 0x46a8e
	ldr r0, [r4, #92]	@ 00046a8e e06d
.org 0x46a90
	adds r3, r1, r0	@ 00046a90 0b18
.org 0x46a92
	str r3, [r4, #84]	@ 00046a92 6365
.org 0x46a94
	ldr r1, [r4, #88]	@ 00046a94 a16d
.org 0x46a96
	ldr r0, [r4, #96]	@ 00046a96 206e
.org 0x46a98
	adds r2, r1, r0	@ 00046a98 0a18
.org 0x46a9a
	str r2, [r4, #88]	@ 00046a9a a265
.org 0x46a9c
	adds r5, r4, #0	@ 00046a9c 251c
.org 0x46a9e
	adds r5, #140	@ 00046a9e 8c35
.org 0x46aa0
	ldr r0, [r5, #0]	@ 00046aa0 2868
.org 0x46aa2
	ldr r1, [pc, #68]	@ 00046aa2 1149
.org 0x46aa4
	ands r0, r1	@ 00046aa4 0840
.org 0x46aa6
	cmp r0, #0	@ 00046aa6 0028
.org 0x46aa8
	bne.n 0x46ab8	@ 00046aa8 06d1
.org 0x46aaa
	adds r0, r3, #0	@ 00046aaa 181c
.org 0x46aac
	adds r1, r2, #0	@ 00046aac 111c
.org 0x46aae
	bl 0x46b50	@ 00046aae 00f04ff8
.org 0x46ab2
	lsls r0, r0, #16	@ 00046ab2 0004
.org 0x46ab4
	cmp r0, #0	@ 00046ab4 0028
.org 0x46ab6
	beq.n 0x46ae2	@ 00046ab6 14d0
.org 0x46ab8
	ldr r0, [r5, #0]	@ 00046ab8 2868
.org 0x46aba
	movs r1, #128	@ 00046aba 8021
.org 0x46abc
	lsls r1, r1, #5	@ 00046abc 4901
.org 0x46abe
	ands r0, r1	@ 00046abe 0840
.org 0x46ac0
	cmp r0, #0	@ 00046ac0 0028
.org 0x46ac2
	beq.n 0x46aca	@ 00046ac2 02d0
.org 0x46ac4
	movs r0, #43	@ 00046ac4 2b20
.org 0x46ac6
	bl 0x2b10	@ 00046ac6 bcf723f8
.org 0x46aca
	ldr r1, [pc, #32]	@ 00046aca 0849
.org 0x46acc
	ldrb r0, [r4, #9]	@ 00046acc 607a
.org 0x46ace
	lsls r0, r0, #2	@ 00046ace 8000
.org 0x46ad0
	adds r0, r0, r1	@ 00046ad0 4018
.org 0x46ad2
	movs r1, #2	@ 00046ad2 0221
.org 0x46ad4
	str r1, [r4, #12]	@ 00046ad4 e160
.org 0x46ad6
	ldr r0, [r0, #0]	@ 00046ad6 0068
.org 0x46ad8
	ldr r0, [r0, #8]	@ 00046ad8 8068
.org 0x46ada
	str r0, [r4, #20]	@ 00046ada 6061
.org 0x46adc
	adds r0, r4, #0	@ 00046adc 201c
.org 0x46ade
	bl 0x46af0	@ 00046ade 00f007f8
.org 0x46ae2
	pop {r4, r5}	@ 00046ae2 30bc
.org 0x46ae4
	pop {r0}	@ 00046ae4 01bc
.org 0x46ae6
	bx r0	@ 00046ae6 0047
