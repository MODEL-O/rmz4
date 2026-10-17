@ FUN_080ddf60  entry 0x080ddf60  size 104
.thumb
.org 0xddf60
FUN_080ddf60:
	push {r4, r5, r6, lr}	@ 000ddf60 70b5
.org 0xddf62
	sub sp, #8	@ 000ddf62 82b0
.org 0xddf64
	adds r5, r0, #0	@ 000ddf64 051c
.org 0xddf66
	ldr r0, [r5, #84]	@ 000ddf66 686d
.org 0xddf68
	str r0, [sp, #0]	@ 000ddf68 0090
.org 0xddf6a
	ldr r0, [r5, #88]	@ 000ddf6a a86d
.org 0xddf6c
	ldr r1, [pc, #88]	@ 000ddf6c 1649
.org 0xddf6e
	adds r0, r0, r1	@ 000ddf6e 4018
.org 0xddf70
	str r0, [sp, #4]	@ 000ddf70 0190
.org 0xddf72
	ldr r6, [pc, #88]	@ 000ddf72 164e
.org 0xddf74
	ldrb r0, [r5, #10]	@ 000ddf74 a87a
.org 0xddf76
	movs r4, #16	@ 000ddf76 1024
.org 0xddf78
	adds r3, r4, #0	@ 000ddf78 231c
.org 0xddf7a
	ands r3, r0	@ 000ddf7a 0340
.org 0xddf7c
	lsls r3, r3, #24	@ 000ddf7c 1b06
.org 0xddf7e
	lsrs r3, r3, #24	@ 000ddf7e 1b0e
.org 0xddf80
	mov r0, sp	@ 000ddf80 6846
.org 0xddf82
	adds r1, r6, #0	@ 000ddf82 311c
.org 0xddf84
	movs r2, #0	@ 000ddf84 0022
.org 0xddf86
	bl 0xd4c8c	@ 000ddf86 f6f781fe
.org 0xddf8a
	adds r6, #28	@ 000ddf8a 1c36
.org 0xddf8c
	ldrb r0, [r5, #10]	@ 000ddf8c a87a
.org 0xddf8e
	ands r4, r0	@ 000ddf8e 0440
.org 0xddf90
	lsls r4, r4, #24	@ 000ddf90 2406
.org 0xddf92
	lsrs r4, r4, #24	@ 000ddf92 240e
.org 0xddf94
	mov r0, sp	@ 000ddf94 6846
.org 0xddf96
	adds r1, r6, #0	@ 000ddf96 311c
.org 0xddf98
	movs r2, #0	@ 000ddf98 0022
.org 0xddf9a
	adds r3, r4, #0	@ 000ddf9a 231c
.org 0xddf9c
	bl 0xd4c8c	@ 000ddf9c f6f776fe
.org 0xddfa0
	movs r0, #1	@ 000ddfa0 0120
.org 0xddfa2
	mov r1, sp	@ 000ddfa2 6946
.org 0xddfa4
	bl 0xd0c88	@ 000ddfa4 f2f770fe
.org 0xddfa8
	movs r0, #42	@ 000ddfa8 2a20
.org 0xddfaa
	bl 0x2b10	@ 000ddfaa 24f7b1fd
.org 0xddfae
	ldr r1, [pc, #32]	@ 000ddfae 0849
.org 0xddfb0
	ldrb r0, [r5, #9]	@ 000ddfb0 687a
.org 0xddfb2
	lsls r0, r0, #2	@ 000ddfb2 8000
.org 0xddfb4
	adds r0, r0, r1	@ 000ddfb4 4018
.org 0xddfb6
	movs r1, #4	@ 000ddfb6 0421
.org 0xddfb8
	str r1, [r5, #12]	@ 000ddfb8 e960
.org 0xddfba
	ldr r0, [r0, #0]	@ 000ddfba 0068
.org 0xddfbc
	ldr r0, [r0, #16]	@ 000ddfbc 0069
.org 0xddfbe
	str r0, [r5, #20]	@ 000ddfbe 6861
.org 0xddfc0
	add sp, #8	@ 000ddfc0 02b0
.org 0xddfc2
	pop {r4, r5, r6}	@ 000ddfc2 70bc
.org 0xddfc4
	pop {r0}	@ 000ddfc4 01bc
.org 0xddfc6
	bx r0	@ 000ddfc6 0047
