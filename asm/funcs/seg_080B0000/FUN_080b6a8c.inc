@ FUN_080b6a8c  entry 0x080b6a8c  size 78
.thumb
.org 0xb6a8c
FUN_080b6a8c:
	push {r4, r5, r6, r7, lr}	@ 000b6a8c f0b5
.org 0xb6a8e
	sub sp, #16	@ 000b6a8e 84b0
.org 0xb6a90
	ldr r1, [pc, #72]	@ 000b6a90 1249
.org 0xb6a92
	ldr r2, [r1, #4]	@ 000b6a92 4a68
.org 0xb6a94
	ldr r1, [r1, #0]	@ 000b6a94 0968
.org 0xb6a96
	str r1, [sp, #8]	@ 000b6a96 0291
.org 0xb6a98
	str r2, [sp, #12]	@ 000b6a98 0392
.org 0xb6a9a
	ldrb r3, [r0, #16]	@ 000b6a9a 037c
.org 0xb6a9c
	ldrb r2, [r0, #10]	@ 000b6a9c 827a
.org 0xb6a9e
	lsrs r2, r2, #4	@ 000b6a9e 1209
.org 0xb6aa0
	movs r1, #1	@ 000b6aa0 0121
.org 0xb6aa2
	ands r2, r1	@ 000b6aa2 0a40
.org 0xb6aa4
	ldr r1, [r0, #84]	@ 000b6aa4 416d
.org 0xb6aa6
	str r1, [sp, #0]	@ 000b6aa6 0091
.org 0xb6aa8
	ldr r0, [r0, #88]	@ 000b6aa8 806d
.org 0xb6aaa
	str r0, [sp, #4]	@ 000b6aaa 0190
.org 0xb6aac
	add r0, sp, #8	@ 000b6aac 02a8
.org 0xb6aae
	lsls r3, r3, #2	@ 000b6aae 9b00
.org 0xb6ab0
	adds r7, r3, r0	@ 000b6ab0 1f18
.org 0xb6ab2
	movs r5, #0	@ 000b6ab2 0025
.org 0xb6ab4
	lsls r0, r2, #4	@ 000b6ab4 1001
.org 0xb6ab6
	orrs r2, r0	@ 000b6ab6 0243
.org 0xb6ab8
	lsls r6, r2, #24	@ 000b6ab8 1606
.org 0xb6aba
	movs r4, #3	@ 000b6aba 0324
.org 0xb6abc
	ldr r1, [r7, #0]	@ 000b6abc 3968
.org 0xb6abe
	adds r1, r1, r5	@ 000b6abe 4919
.org 0xb6ac0
	mov r0, sp	@ 000b6ac0 6846
.org 0xb6ac2
	movs r2, #0	@ 000b6ac2 0022
.org 0xb6ac4
	lsrs r3, r6, #24	@ 000b6ac4 330e
.org 0xb6ac6
	bl 0xd4c8c	@ 000b6ac6 1ef0e1f8
.org 0xb6aca
	adds r5, #28	@ 000b6aca 1c35
.org 0xb6acc
	subs r4, #1	@ 000b6acc 013c
.org 0xb6ace
	cmp r4, #0	@ 000b6ace 002c
.org 0xb6ad0
	bge.n 0xb6abc	@ 000b6ad0 f4da
.org 0xb6ad2
	add sp, #16	@ 000b6ad2 04b0
.org 0xb6ad4
	pop {r4, r5, r6, r7}	@ 000b6ad4 f0bc
.org 0xb6ad6
	pop {r0}	@ 000b6ad6 01bc
.org 0xb6ad8
	bx r0	@ 000b6ad8 0047
