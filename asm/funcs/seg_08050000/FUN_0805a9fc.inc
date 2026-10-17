@ FUN_0805a9fc  entry 0x0805a9fc  size 70
.thumb
.org 0x5a9fc
FUN_0805a9fc:
	push {r4, lr}	@ 0005a9fc 10b5
.org 0x5a9fe
	adds r4, r0, #0	@ 0005a9fe 041c
.org 0x5aa00
	ldrb r0, [r4, #15]	@ 0005aa00 e07b
.org 0x5aa02
	cmp r0, #0	@ 0005aa02 0028
.org 0x5aa04
	bne.n 0x5aa26	@ 0005aa04 0fd1
.org 0x5aa06
	adds r0, r4, #0	@ 0005aa06 201c
.org 0x5aa08
	adds r0, #116	@ 0005aa08 7430
.org 0x5aa0a
	ldr r1, [pc, #56]	@ 0005aa0a 0e49
.org 0x5aa0c
	bl 0x5784	@ 0005aa0c aaf7bafe
.org 0x5aa10
	ldr r1, [pc, #52]	@ 0005aa10 0d49
.org 0x5aa12
	adds r0, r4, #0	@ 0005aa12 201c
.org 0x5aa14
	bl 0x1cf00	@ 0005aa14 c2f774fa
.org 0x5aa18
	adds r1, r4, #0	@ 0005aa18 211c
.org 0x5aa1a
	adds r1, #189	@ 0005aa1a bd31
.org 0x5aa1c
	movs r0, #1	@ 0005aa1c 0120
.org 0x5aa1e
	strb r0, [r1, #0]	@ 0005aa1e 0870
.org 0x5aa20
	ldrb r0, [r4, #15]	@ 0005aa20 e07b
.org 0x5aa22
	adds r0, #1	@ 0005aa22 0130
.org 0x5aa24
	strb r0, [r4, #15]	@ 0005aa24 e073
.org 0x5aa26
	adds r0, r4, #0	@ 0005aa26 201c
.org 0x5aa28
	bl 0x1cff0	@ 0005aa28 c2f7e2fa
.org 0x5aa2c
	adds r0, r4, #0	@ 0005aa2c 201c
.org 0x5aa2e
	adds r0, #115	@ 0005aa2e 7330
.org 0x5aa30
	ldrb r1, [r0, #0]	@ 0005aa30 0178
.org 0x5aa32
	cmp r1, #3	@ 0005aa32 0329
.org 0x5aa34
	bne.n 0x5aa3c	@ 0005aa34 02d1
.org 0x5aa36
	movs r0, #0	@ 0005aa36 0020
.org 0x5aa38
	strb r1, [r4, #14]	@ 0005aa38 a173
.org 0x5aa3a
	strb r0, [r4, #15]	@ 0005aa3a e073
.org 0x5aa3c
	pop {r4}	@ 0005aa3c 10bc
.org 0x5aa3e
	pop {r0}	@ 0005aa3e 01bc
.org 0x5aa40
	bx r0	@ 0005aa40 0047
