@ FUN_080c0aa0  entry 0x080c0aa0  size 98
.thumb
.org 0xc0aa0
FUN_080c0aa0:
	push {r4, r5, lr}	@ 000c0aa0 30b5
.org 0xc0aa2
	sub sp, #8	@ 000c0aa2 82b0
.org 0xc0aa4
	adds r4, r0, #0	@ 000c0aa4 041c
.org 0xc0aa6
	ldr r0, [pc, #92]	@ 000c0aa6 1748
.org 0xc0aa8
	ldr r1, [r0, #4]	@ 000c0aa8 4168
.org 0xc0aaa
	ldr r0, [r0, #0]	@ 000c0aaa 0068
.org 0xc0aac
	str r0, [sp, #0]	@ 000c0aac 0090
.org 0xc0aae
	str r1, [sp, #4]	@ 000c0aae 0191
.org 0xc0ab0
	ldrb r5, [r4, #17]	@ 000c0ab0 657c
.org 0xc0ab2
	ldrb r0, [r4, #15]	@ 000c0ab2 e07b
.org 0xc0ab4
	cmp r0, #0	@ 000c0ab4 0028
.org 0xc0ab6
	bne.n 0xc0ae0	@ 000c0ab6 13d1
.org 0xc0ab8
	adds r0, r4, #0	@ 000c0ab8 201c
.org 0xc0aba
	adds r0, #116	@ 000c0aba 7430
.org 0xc0abc
	ldr r1, [pc, #72]	@ 000c0abc 1249
.org 0xc0abe
	bl 0x5784	@ 000c0abe 44f761fe
.org 0xc0ac2
	ldrb r1, [r4, #10]	@ 000c0ac2 a17a
.org 0xc0ac4
	movs r0, #1	@ 000c0ac4 0120
.org 0xc0ac6
	orrs r0, r1	@ 000c0ac6 0843
.org 0xc0ac8
	strb r0, [r4, #10]	@ 000c0ac8 a072
.org 0xc0aca
	lsls r0, r5, #2	@ 000c0aca a800
.org 0xc0acc
	add r0, sp	@ 000c0acc 6844
.org 0xc0ace
	ldrh r1, [r0, #0]	@ 000c0ace 0188
.org 0xc0ad0
	adds r0, r4, #0	@ 000c0ad0 201c
.org 0xc0ad2
	bl 0x1cf00	@ 000c0ad2 5cf715fa
.org 0xc0ad6
	movs r0, #16	@ 000c0ad6 1020
.org 0xc0ad8
	strb r0, [r4, #18]	@ 000c0ad8 a074
.org 0xc0ada
	ldrb r0, [r4, #15]	@ 000c0ada e07b
.org 0xc0adc
	adds r0, #1	@ 000c0adc 0130
.org 0xc0ade
	strb r0, [r4, #15]	@ 000c0ade e073
.org 0xc0ae0
	adds r0, r4, #0	@ 000c0ae0 201c
.org 0xc0ae2
	bl 0x1cff0	@ 000c0ae2 5cf785fa
.org 0xc0ae6
	ldrb r0, [r4, #18]	@ 000c0ae6 a07c
.org 0xc0ae8
	subs r0, #1	@ 000c0ae8 0138
.org 0xc0aea
	strb r0, [r4, #18]	@ 000c0aea a074
.org 0xc0aec
	lsls r0, r0, #24	@ 000c0aec 0006
.org 0xc0aee
	lsrs r1, r0, #24	@ 000c0aee 010e
.org 0xc0af0
	cmp r1, #0	@ 000c0af0 0029
.org 0xc0af2
	bne.n 0xc0afa	@ 000c0af2 02d1
.org 0xc0af4
	movs r0, #1	@ 000c0af4 0120
.org 0xc0af6
	strb r0, [r4, #14]	@ 000c0af6 a073
.org 0xc0af8
	strb r1, [r4, #15]	@ 000c0af8 e173
.org 0xc0afa
	add sp, #8	@ 000c0afa 02b0
.org 0xc0afc
	pop {r4, r5}	@ 000c0afc 30bc
.org 0xc0afe
	pop {r0}	@ 000c0afe 01bc
.org 0xc0b00
	bx r0	@ 000c0b00 0047
