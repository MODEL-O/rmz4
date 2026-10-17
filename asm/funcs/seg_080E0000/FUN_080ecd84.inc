@ FUN_080ecd84  entry 0x080ecd84  size 66
.thumb
.org 0xecd84
FUN_080ecd84:
	push {r4, r5, r6, lr}	@ 000ecd84 70b5
.org 0xecd86
	adds r4, r0, #0	@ 000ecd86 041c
.org 0xecd88
	ldrb r1, [r4, #10]	@ 000ecd88 a17a
.org 0xecd8a
	movs r0, #4	@ 000ecd8a 0420
.org 0xecd8c
	movs r6, #0	@ 000ecd8c 0026
.org 0xecd8e
	orrs r0, r1	@ 000ecd8e 0843
.org 0xecd90
	strb r0, [r4, #10]	@ 000ecd90 a072
.org 0xecd92
	adds r5, r4, #0	@ 000ecd92 251c
.org 0xecd94
	adds r5, #116	@ 000ecd94 7435
.org 0xecd96
	ldr r1, [pc, #48]	@ 000ecd96 0c49
.org 0xecd98
	adds r2, r4, #0	@ 000ecd98 221c
.org 0xecd9a
	adds r2, #84	@ 000ecd9a 5432
.org 0xecd9c
	adds r0, r5, #0	@ 000ecd9c 281c
.org 0xecd9e
	movs r3, #1	@ 000ecd9e 0123
.org 0xecda0
	bl 0x5760	@ 000ecda0 18f7defc
.org 0xecda4
	str r4, [r5, #44]	@ 000ecda4 ec62
.org 0xecda6
	str r6, [r5, #36]	@ 000ecda6 6e62
.org 0xecda8
	ldr r1, [pc, #32]	@ 000ecda8 0849
.org 0xecdaa
	ldrb r0, [r4, #9]	@ 000ecdaa 607a
.org 0xecdac
	lsls r0, r0, #2	@ 000ecdac 8000
.org 0xecdae
	adds r0, r0, r1	@ 000ecdae 4018
.org 0xecdb0
	movs r1, #1	@ 000ecdb0 0121
.org 0xecdb2
	str r1, [r4, #12]	@ 000ecdb2 e160
.org 0xecdb4
	ldr r0, [r0, #0]	@ 000ecdb4 0068
.org 0xecdb6
	ldr r0, [r0, #4]	@ 000ecdb6 4068
.org 0xecdb8
	str r0, [r4, #20]	@ 000ecdb8 6061
.org 0xecdba
	adds r0, r4, #0	@ 000ecdba 201c
.org 0xecdbc
	bl 0xecefc	@ 000ecdbc 00f09ef8
.org 0xecdc0
	pop {r4, r5, r6}	@ 000ecdc0 70bc
.org 0xecdc2
	pop {r0}	@ 000ecdc2 01bc
.org 0xecdc4
	bx r0	@ 000ecdc4 0047
