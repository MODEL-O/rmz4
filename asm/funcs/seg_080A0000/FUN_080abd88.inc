@ FUN_080abd88  entry 0x080abd88  size 102
.thumb
.org 0xabd88
FUN_080abd88:
	push {r4, r5, lr}	@ 000abd88 30b5
.org 0xabd8a
	adds r4, r0, #0	@ 000abd8a 041c
.org 0xabd8c
	ldr r5, [r4, #40]	@ 000abd8c a56a
.org 0xabd8e
	ldrb r0, [r4, #15]	@ 000abd8e e07b
.org 0xabd90
	cmp r0, #0	@ 000abd90 0028
.org 0xabd92
	bne.n 0xabda4	@ 000abd92 07d1
.org 0xabd94
	adds r0, r4, #0	@ 000abd94 201c
.org 0xabd96
	adds r0, #116	@ 000abd96 7430
.org 0xabd98
	ldr r1, [pc, #84]	@ 000abd98 1549
.org 0xabd9a
	bl 0x5784	@ 000abd9a 59f7f3fc
.org 0xabd9e
	ldrb r0, [r4, #15]	@ 000abd9e e07b
.org 0xabda0
	adds r0, #1	@ 000abda0 0130
.org 0xabda2
	strb r0, [r4, #15]	@ 000abda2 e073
.org 0xabda4
	adds r0, r4, #0	@ 000abda4 201c
.org 0xabda6
	bl 0xac300	@ 000abda6 00f0abfa
.org 0xabdaa
	adds r0, r5, #0	@ 000abdaa 281c
.org 0xabdac
	adds r0, #200	@ 000abdac c830
.org 0xabdae
	ldrb r2, [r0, #0]	@ 000abdae 0278
.org 0xabdb0
	cmp r2, #0	@ 000abdb0 002a
.org 0xabdb2
	bne.n 0xabde8	@ 000abdb2 19d1
.org 0xabdb4
	ldrb r1, [r4, #10]	@ 000abdb4 a17a
.org 0xabdb6
	movs r0, #254	@ 000abdb6 fe20
.org 0xabdb8
	ands r0, r1	@ 000abdb8 0840
.org 0xabdba
	movs r1, #253	@ 000abdba fd21
.org 0xabdbc
	ands r0, r1	@ 000abdbc 0840
.org 0xabdbe
	strb r0, [r4, #10]	@ 000abdbe a072
.org 0xabdc0
	adds r0, r4, #0	@ 000abdc0 201c
.org 0xabdc2
	adds r0, #140	@ 000abdc2 8c30
.org 0xabdc4
	str r2, [r0, #0]	@ 000abdc4 0260
.org 0xabdc6
	adds r0, #4	@ 000abdc6 0430
.org 0xabdc8
	str r2, [r0, #0]	@ 000abdc8 0260
.org 0xabdca
	adds r0, #4	@ 000abdca 0430
.org 0xabdcc
	strb r2, [r0, #0]	@ 000abdcc 0270
.org 0xabdce
	ldrb r1, [r4, #10]	@ 000abdce a17a
.org 0xabdd0
	movs r0, #251	@ 000abdd0 fb20
.org 0xabdd2
	ands r0, r1	@ 000abdd2 0840
.org 0xabdd4
	strb r0, [r4, #10]	@ 000abdd4 a072
.org 0xabdd6
	ldr r1, [pc, #28]	@ 000abdd6 0749
.org 0xabdd8
	ldrb r0, [r4, #9]	@ 000abdd8 607a
.org 0xabdda
	lsls r0, r0, #2	@ 000abdda 8000
.org 0xabddc
	adds r0, r0, r1	@ 000abddc 4018
.org 0xabdde
	movs r1, #3	@ 000abdde 0321
.org 0xabde0
	str r1, [r4, #12]	@ 000abde0 e160
.org 0xabde2
	ldr r0, [r0, #0]	@ 000abde2 0068
.org 0xabde4
	ldr r0, [r0, #12]	@ 000abde4 c068
.org 0xabde6
	str r0, [r4, #20]	@ 000abde6 6061
.org 0xabde8
	pop {r4, r5}	@ 000abde8 30bc
.org 0xabdea
	pop {r0}	@ 000abdea 01bc
.org 0xabdec
	bx r0	@ 000abdec 0047
