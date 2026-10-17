@ FUN_080dde80  entry 0x080dde80  size 104
.thumb
.org 0xdde80
FUN_080dde80:
	push {r4, r5, r6, lr}	@ 000dde80 70b5
.org 0xdde82
	sub sp, #8	@ 000dde82 82b0
.org 0xdde84
	adds r5, r0, #0	@ 000dde84 051c
.org 0xdde86
	ldr r0, [r5, #84]	@ 000dde86 686d
.org 0xdde88
	str r0, [sp, #0]	@ 000dde88 0090
.org 0xdde8a
	ldr r0, [r5, #88]	@ 000dde8a a86d
.org 0xdde8c
	ldr r1, [pc, #88]	@ 000dde8c 1649
.org 0xdde8e
	adds r0, r0, r1	@ 000dde8e 4018
.org 0xdde90
	str r0, [sp, #4]	@ 000dde90 0190
.org 0xdde92
	ldr r6, [pc, #88]	@ 000dde92 164e
.org 0xdde94
	ldrb r0, [r5, #10]	@ 000dde94 a87a
.org 0xdde96
	movs r4, #16	@ 000dde96 1024
.org 0xdde98
	adds r3, r4, #0	@ 000dde98 231c
.org 0xdde9a
	ands r3, r0	@ 000dde9a 0340
.org 0xdde9c
	lsls r3, r3, #24	@ 000dde9c 1b06
.org 0xdde9e
	lsrs r3, r3, #24	@ 000dde9e 1b0e
.org 0xddea0
	mov r0, sp	@ 000ddea0 6846
.org 0xddea2
	adds r1, r6, #0	@ 000ddea2 311c
.org 0xddea4
	movs r2, #0	@ 000ddea4 0022
.org 0xddea6
	bl 0xd4c8c	@ 000ddea6 f6f7f1fe
.org 0xddeaa
	adds r6, #28	@ 000ddeaa 1c36
.org 0xddeac
	ldrb r0, [r5, #10]	@ 000ddeac a87a
.org 0xddeae
	ands r4, r0	@ 000ddeae 0440
.org 0xddeb0
	lsls r4, r4, #24	@ 000ddeb0 2406
.org 0xddeb2
	lsrs r4, r4, #24	@ 000ddeb2 240e
.org 0xddeb4
	mov r0, sp	@ 000ddeb4 6846
.org 0xddeb6
	adds r1, r6, #0	@ 000ddeb6 311c
.org 0xddeb8
	movs r2, #0	@ 000ddeb8 0022
.org 0xddeba
	adds r3, r4, #0	@ 000ddeba 231c
.org 0xddebc
	bl 0xd4c8c	@ 000ddebc f6f7e6fe
.org 0xddec0
	movs r0, #1	@ 000ddec0 0120
.org 0xddec2
	mov r1, sp	@ 000ddec2 6946
.org 0xddec4
	bl 0xd0c88	@ 000ddec4 f2f7e0fe
.org 0xddec8
	movs r0, #42	@ 000ddec8 2a20
.org 0xddeca
	bl 0x2b10	@ 000ddeca 24f721fe
.org 0xddece
	ldr r1, [pc, #32]	@ 000ddece 0849
.org 0xdded0
	ldrb r0, [r5, #9]	@ 000dded0 687a
.org 0xdded2
	lsls r0, r0, #2	@ 000dded2 8000
.org 0xdded4
	adds r0, r0, r1	@ 000dded4 4018
.org 0xdded6
	movs r1, #4	@ 000dded6 0421
.org 0xdded8
	str r1, [r5, #12]	@ 000dded8 e960
.org 0xddeda
	ldr r0, [r0, #0]	@ 000ddeda 0068
.org 0xddedc
	ldr r0, [r0, #16]	@ 000ddedc 0069
.org 0xddede
	str r0, [r5, #20]	@ 000ddede 6861
.org 0xddee0
	add sp, #8	@ 000ddee0 02b0
.org 0xddee2
	pop {r4, r5, r6}	@ 000ddee2 70bc
.org 0xddee4
	pop {r0}	@ 000ddee4 01bc
.org 0xddee6
	bx r0	@ 000ddee6 0047
