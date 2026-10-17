@ FUN_080c6088  entry 0x080c6088  size 70
.thumb
.org 0xc6088
FUN_080c6088:
	push {r4, r5, r6, r7, lr}	@ 000c6088 f0b5
.org 0xc608a
	sub sp, #8	@ 000c608a 82b0
.org 0xc608c
	adds r5, r0, #0	@ 000c608c 051c
.org 0xc608e
	ldrb r0, [r5, #10]	@ 000c608e a87a
.org 0xc6090
	lsrs r0, r0, #4	@ 000c6090 0009
.org 0xc6092
	movs r1, #1	@ 000c6092 0121
.org 0xc6094
	ands r0, r1	@ 000c6094 0840
.org 0xc6096
	movs r4, #0	@ 000c6096 0024
.org 0xc6098
	mov r7, sp	@ 000c6098 6f46
.org 0xc609a
	lsls r1, r0, #4	@ 000c609a 0101
.org 0xc609c
	orrs r0, r1	@ 000c609c 0843
.org 0xc609e
	lsls r6, r0, #24	@ 000c609e 0606
.org 0xc60a0
	ldr r0, [r5, #84]	@ 000c60a0 686d
.org 0xc60a2
	str r0, [sp, #0]	@ 000c60a2 0090
.org 0xc60a4
	ldr r0, [r5, #88]	@ 000c60a4 a86d
.org 0xc60a6
	str r0, [r7, #4]	@ 000c60a6 7860
.org 0xc60a8
	adds r4, #1	@ 000c60a8 0134
.org 0xc60aa
	movs r0, #3	@ 000c60aa 0320
.org 0xc60ac
	ands r0, r4	@ 000c60ac 2040
.org 0xc60ae
	lsls r1, r0, #3	@ 000c60ae c100
.org 0xc60b0
	subs r1, r1, r0	@ 000c60b0 091a
.org 0xc60b2
	lsls r1, r1, #2	@ 000c60b2 8900
.org 0xc60b4
	ldr r0, [pc, #24]	@ 000c60b4 0648
.org 0xc60b6
	adds r1, r1, r0	@ 000c60b6 0918
.org 0xc60b8
	mov r0, sp	@ 000c60b8 6846
.org 0xc60ba
	movs r2, #0	@ 000c60ba 0022
.org 0xc60bc
	lsrs r3, r6, #24	@ 000c60bc 330e
.org 0xc60be
	bl 0xd4c8c	@ 000c60be 0ef0e5fd
.org 0xc60c2
	cmp r4, #1	@ 000c60c2 012c
.org 0xc60c4
	ble.n 0xc60a0	@ 000c60c4 ecdd
.org 0xc60c6
	add sp, #8	@ 000c60c6 02b0
.org 0xc60c8
	pop {r4, r5, r6, r7}	@ 000c60c8 f0bc
.org 0xc60ca
	pop {r0}	@ 000c60ca 01bc
.org 0xc60cc
	bx r0	@ 000c60cc 0047
