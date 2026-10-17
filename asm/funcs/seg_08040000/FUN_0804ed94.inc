@ FUN_0804ed94  entry 0x0804ed94  size 100
.thumb
.org 0x4ed94
FUN_0804ed94:
	push {r4, r5, r6, lr}	@ 0004ed94 70b5
.org 0x4ed96
	adds r4, r0, #0	@ 0004ed96 041c
.org 0x4ed98
	ldr r6, [r4, #40]	@ 0004ed98 a66a
.org 0x4ed9a
	ldr r1, [pc, #92]	@ 0004ed9a 1749
.org 0x4ed9c
	ldrb r0, [r4, #9]	@ 0004ed9c 607a
.org 0x4ed9e
	lsls r0, r0, #2	@ 0004ed9e 8000
.org 0x4eda0
	adds r0, r0, r1	@ 0004eda0 4018
.org 0x4eda2
	movs r1, #1	@ 0004eda2 0121
.org 0x4eda4
	str r1, [r4, #12]	@ 0004eda4 e160
.org 0x4eda6
	ldr r0, [r0, #0]	@ 0004eda6 0068
.org 0x4eda8
	ldr r0, [r0, #4]	@ 0004eda8 4068
.org 0x4edaa
	str r0, [r4, #20]	@ 0004edaa 6061
.org 0x4edac
	adds r0, r4, #0	@ 0004edac 201c
.org 0x4edae
	bl 0x1cc9c	@ 0004edae cdf775ff
.org 0x4edb2
	adds r0, r4, #0	@ 0004edb2 201c
.org 0x4edb4
	bl 0x1ceec	@ 0004edb4 cef79af8
.org 0x4edb8
	ldrb r1, [r4, #10]	@ 0004edb8 a17a
.org 0x4edba
	movs r0, #254	@ 0004edba fe20
.org 0x4edbc
	ands r0, r1	@ 0004edbc 0840
.org 0x4edbe
	movs r5, #0	@ 0004edbe 0025
.org 0x4edc0
	movs r1, #2	@ 0004edc0 0221
.org 0x4edc2
	orrs r0, r1	@ 0004edc2 0843
.org 0x4edc4
	strb r0, [r4, #10]	@ 0004edc4 a072
.org 0x4edc6
	ldr r1, [pc, #52]	@ 0004edc6 0d49
.org 0x4edc8
	adds r0, r4, #0	@ 0004edc8 201c
.org 0x4edca
	bl 0x1cf00	@ 0004edca cef799f8
.org 0x4edce
	movs r0, #8	@ 0004edce 0820
.org 0x4edd0
	strb r0, [r4, #18]	@ 0004edd0 a074
.org 0x4edd2
	strb r5, [r4, #19]	@ 0004edd2 e574
.org 0x4edd4
	adds r0, r4, #0	@ 0004edd4 201c
.org 0x4edd6
	adds r0, #189	@ 0004edd6 bd30
.org 0x4edd8
	strb r5, [r0, #0]	@ 0004edd8 0570
.org 0x4edda
	ldr r0, [r6, #84]	@ 0004edda 706d
.org 0x4eddc
	ldr r1, [r6, #88]	@ 0004eddc b16d
.org 0x4edde
	bl 0x864c	@ 0004edde b9f735fc
.org 0x4ede2
	adds r1, r4, #0	@ 0004ede2 211c
.org 0x4ede4
	adds r1, #184	@ 0004ede4 b831
.org 0x4ede6
	ldr r2, [pc, #24]	@ 0004ede6 064a
.org 0x4ede8
	adds r0, r0, r2	@ 0004ede8 8018
.org 0x4edea
	str r0, [r1, #0]	@ 0004edea 0860
.org 0x4edec
	adds r0, r4, #0	@ 0004edec 201c
.org 0x4edee
	bl 0x4ee04	@ 0004edee 00f009f8
.org 0x4edf2
	pop {r4, r5, r6}	@ 0004edf2 70bc
.org 0x4edf4
	pop {r0}	@ 0004edf4 01bc
.org 0x4edf6
	bx r0	@ 0004edf6 0047
