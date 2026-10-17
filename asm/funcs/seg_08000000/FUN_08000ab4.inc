@ FUN_08000ab4  entry 0x08000ab4  size 118
.thumb
.org 0xab4
FUN_08000ab4:
	push {r4, r5, r6, r7, lr}	@ 00000ab4 f0b5
.org 0xab6
	sub sp, #8	@ 00000ab6 82b0
.org 0xab8
	adds r6, r1, #0	@ 00000ab8 0e1c
.org 0xaba
	adds r5, r2, #0	@ 00000aba 151c
.org 0xabc
	lsls r0, r0, #16	@ 00000abc 0004
.org 0xabe
	lsrs r1, r0, #16	@ 00000abe 010c
.org 0xac0
	adds r7, r1, #0	@ 00000ac0 0f1c
.org 0xac2
	movs r0, #2	@ 00000ac2 0220
.org 0xac4
	negs r0, r0	@ 00000ac4 4042
.org 0xac6
	ands r5, r0	@ 00000ac6 0540
.org 0xac8
	cmp r5, #0	@ 00000ac8 002d
.org 0xaca
	beq.n 0xb22	@ 00000aca 2ad0
.org 0xacc
	ands r6, r0	@ 00000acc 0640
.org 0xace
	movs r0, #2	@ 00000ace 0220
.org 0xad0
	ands r0, r6	@ 00000ad0 3040
.org 0xad2
	cmp r0, #0	@ 00000ad2 0028
.org 0xad4
	beq.n 0xae0	@ 00000ad4 04d0
.org 0xad6
	strh r1, [r6, #0]	@ 00000ad6 3180
.org 0xad8
	subs r5, #2	@ 00000ad8 023d
.org 0xada
	cmp r5, #0	@ 00000ada 002d
.org 0xadc
	beq.n 0xb22	@ 00000adc 21d0
.org 0xade
	adds r6, #2	@ 00000ade 0236
.org 0xae0
	cmp r5, #32	@ 00000ae0 202d
.org 0xae2
	bls.n 0xb0e	@ 00000ae2 14d9
.org 0xae4
	lsls r0, r1, #16	@ 00000ae4 0804
.org 0xae6
	orrs r0, r1	@ 00000ae6 0843
.org 0xae8
	str r0, [sp, #0]	@ 00000ae8 0090
.org 0xaea
	movs r4, #32	@ 00000aea 2024
.org 0xaec
	negs r4, r4	@ 00000aec 6442
.org 0xaee
	ands r4, r5	@ 00000aee 2c40
.org 0xaf0
	lsrs r2, r4, #2	@ 00000af0 a208
.org 0xaf2
	ldr r0, [pc, #56]	@ 00000af2 0e48
.org 0xaf4
	ands r2, r0	@ 00000af4 0240
.org 0xaf6
	movs r0, #128	@ 00000af6 8020
.org 0xaf8
	lsls r0, r0, #17	@ 00000af8 4004
.org 0xafa
	orrs r2, r0	@ 00000afa 0243
.org 0xafc
	mov r0, sp	@ 00000afc 6846
.org 0xafe
	adds r1, r6, #0	@ 00000afe 311c
.org 0xb00
	bl 0x128be0	@ 00000b00 28f16ef8
.org 0xb04
	adds r6, r6, r4	@ 00000b04 3619
.org 0xb06
	movs r0, #31	@ 00000b06 1f20
.org 0xb08
	ands r5, r0	@ 00000b08 0540
.org 0xb0a
	cmp r5, #0	@ 00000b0a 002d
.org 0xb0c
	beq.n 0xb22	@ 00000b0c 09d0
.org 0xb0e
	add r0, sp, #4	@ 00000b0e 01a8
.org 0xb10
	strh r7, [r0, #0]	@ 00000b10 0780
.org 0xb12
	lsls r2, r5, #10	@ 00000b12 aa02
.org 0xb14
	lsrs r2, r2, #11	@ 00000b14 d20a
.org 0xb16
	movs r1, #128	@ 00000b16 8021
.org 0xb18
	lsls r1, r1, #17	@ 00000b18 4904
.org 0xb1a
	orrs r2, r1	@ 00000b1a 0a43
.org 0xb1c
	adds r1, r6, #0	@ 00000b1c 311c
.org 0xb1e
	bl 0x128be4	@ 00000b1e 28f161f8
.org 0xb22
	add sp, #8	@ 00000b22 02b0
.org 0xb24
	pop {r4, r5, r6, r7}	@ 00000b24 f0bc
.org 0xb26
	pop {r0}	@ 00000b26 01bc
.org 0xb28
	bx r0	@ 00000b28 0047
