@ FUN_080484ac  entry 0x080484ac  size 82
.thumb
.org 0x484ac
FUN_080484ac:
	push {r4, r5, lr}	@ 000484ac 30b5
.org 0x484ae
	adds r4, r0, #0	@ 000484ae 041c
.org 0x484b0
	ldr r1, [pc, #76]	@ 000484b0 1349
.org 0x484b2
	ldrb r0, [r4, #9]	@ 000484b2 607a
.org 0x484b4
	lsls r0, r0, #2	@ 000484b4 8000
.org 0x484b6
	adds r0, r0, r1	@ 000484b6 4018
.org 0x484b8
	movs r1, #1	@ 000484b8 0121
.org 0x484ba
	str r1, [r4, #12]	@ 000484ba e160
.org 0x484bc
	ldr r0, [r0, #0]	@ 000484bc 0068
.org 0x484be
	ldr r0, [r0, #4]	@ 000484be 4068
.org 0x484c0
	str r0, [r4, #20]	@ 000484c0 6061
.org 0x484c2
	adds r0, r4, #0	@ 000484c2 201c
.org 0x484c4
	bl 0x1cc9c	@ 000484c4 d4f7eafb
.org 0x484c8
	adds r0, r4, #0	@ 000484c8 201c
.org 0x484ca
	bl 0x1ceec	@ 000484ca d4f70ffd
.org 0x484ce
	ldrb r1, [r4, #10]	@ 000484ce a17a
.org 0x484d0
	movs r0, #254	@ 000484d0 fe20
.org 0x484d2
	ands r0, r1	@ 000484d2 0840
.org 0x484d4
	movs r5, #0	@ 000484d4 0025
.org 0x484d6
	movs r1, #2	@ 000484d6 0221
.org 0x484d8
	orrs r0, r1	@ 000484d8 0843
.org 0x484da
	strb r0, [r4, #10]	@ 000484da a072
.org 0x484dc
	ldr r1, [pc, #36]	@ 000484dc 0949
.org 0x484de
	adds r0, r4, #0	@ 000484de 201c
.org 0x484e0
	bl 0x1cf00	@ 000484e0 d4f70efd
.org 0x484e4
	movs r0, #8	@ 000484e4 0820
.org 0x484e6
	strb r0, [r4, #18]	@ 000484e6 a074
.org 0x484e8
	movs r0, #40	@ 000484e8 2820
.org 0x484ea
	strb r0, [r4, #19]	@ 000484ea e074
.org 0x484ec
	adds r0, r4, #0	@ 000484ec 201c
.org 0x484ee
	adds r0, #189	@ 000484ee bd30
.org 0x484f0
	strb r5, [r0, #0]	@ 000484f0 0570
.org 0x484f2
	adds r0, r4, #0	@ 000484f2 201c
.org 0x484f4
	bl 0x48410	@ 000484f4 fff78cff
.org 0x484f8
	pop {r4, r5}	@ 000484f8 30bc
.org 0x484fa
	pop {r0}	@ 000484fa 01bc
.org 0x484fc
	bx r0	@ 000484fc 0047
