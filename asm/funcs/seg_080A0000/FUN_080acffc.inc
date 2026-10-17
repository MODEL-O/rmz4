@ FUN_080acffc  entry 0x080acffc  size 76
.thumb
.org 0xacffc
FUN_080acffc:
	push {r4, r5, r6, lr}	@ 000acffc 70b5
.org 0xacffe
	sub sp, #16	@ 000acffe 84b0
.org 0xad000
	adds r4, r0, #0	@ 000ad000 041c
.org 0xad002
	mov r1, sp	@ 000ad002 6946
.org 0xad004
	ldr r0, [pc, #64]	@ 000ad004 1048
.org 0xad006
	ldmia r0!, {r2, r3, r5}	@ 000ad006 2cc8
.org 0xad008
	stmia r1!, {r2, r3, r5}	@ 000ad008 2cc1
.org 0xad00a
	ldr r0, [r0, #0]	@ 000ad00a 0068
.org 0xad00c
	str r0, [r1, #0]	@ 000ad00c 0860
.org 0xad00e
	ldr r5, [r4, #40]	@ 000ad00e a56a
.org 0xad010
	ldrb r1, [r4, #17]	@ 000ad010 617c
.org 0xad012
	adds r6, r1, #0	@ 000ad012 0e1c
.org 0xad014
	ldrb r0, [r4, #15]	@ 000ad014 e07b
.org 0xad016
	cmp r0, #0	@ 000ad016 0028
.org 0xad018
	bne.n 0xad02c	@ 000ad018 08d1
.org 0xad01a
	lsls r0, r1, #2	@ 000ad01a 8800
.org 0xad01c
	add r0, sp	@ 000ad01c 6844
.org 0xad01e
	ldrh r1, [r0, #0]	@ 000ad01e 0188
.org 0xad020
	adds r0, r4, #0	@ 000ad020 201c
.org 0xad022
	bl 0x1cf00	@ 000ad022 6ff76dff
.org 0xad026
	ldrb r0, [r4, #15]	@ 000ad026 e07b
.org 0xad028
	adds r0, #1	@ 000ad028 0130
.org 0xad02a
	strb r0, [r4, #15]	@ 000ad02a e073
.org 0xad02c
	adds r0, r4, #0	@ 000ad02c 201c
.org 0xad02e
	bl 0x1cff0	@ 000ad02e 6ff7dfff
.org 0xad032
	adds r2, r5, #0	@ 000ad032 2a1c
.org 0xad034
	adds r2, #181	@ 000ad034 b532
.org 0xad036
	movs r1, #1	@ 000ad036 0121
.org 0xad038
	lsls r1, r6	@ 000ad038 b140
.org 0xad03a
	ldrb r0, [r2, #0]	@ 000ad03a 1078
.org 0xad03c
	bics r0, r1	@ 000ad03c 8843
.org 0xad03e
	strb r0, [r2, #0]	@ 000ad03e 1070
.org 0xad040
	add sp, #16	@ 000ad040 04b0
.org 0xad042
	pop {r4, r5, r6}	@ 000ad042 70bc
.org 0xad044
	pop {r0}	@ 000ad044 01bc
.org 0xad046
	bx r0	@ 000ad046 0047
