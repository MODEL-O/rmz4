@ FUN_080ffb20  entry 0x080ffb20  size 108
.thumb
.org 0xffb20
FUN_080ffb20:
	push {r4, lr}	@ 000ffb20 10b5
.org 0xffb22
	adds r4, r0, #0	@ 000ffb22 041c
.org 0xffb24
	bl 0x1cc9c	@ 000ffb24 1df7baf8
.org 0xffb28
	ldrb r1, [r4, #10]	@ 000ffb28 a17a
.org 0xffb2a
	movs r0, #1	@ 000ffb2a 0120
.org 0xffb2c
	orrs r0, r1	@ 000ffb2c 0843
.org 0xffb2e
	movs r1, #2	@ 000ffb2e 0221
.org 0xffb30
	orrs r0, r1	@ 000ffb30 0843
.org 0xffb32
	strb r0, [r4, #10]	@ 000ffb32 a072
.org 0xffb34
	movs r1, #180	@ 000ffb34 b421
.org 0xffb36
	lsls r1, r1, #7	@ 000ffb36 c901
.org 0xffb38
	adds r0, r4, #0	@ 000ffb38 201c
.org 0xffb3a
	bl 0x1cf00	@ 000ffb3a 1df7e1f9
.org 0xffb3e
	ldrb r1, [r4, #11]	@ 000ffb3e e17a
.org 0xffb40
	movs r0, #8	@ 000ffb40 0820
.org 0xffb42
	orrs r0, r1	@ 000ffb42 0843
.org 0xffb44
	strb r0, [r4, #11]	@ 000ffb44 e072
.org 0xffb46
	ldr r0, [pc, #68]	@ 000ffb46 1148
.org 0xffb48
	str r0, [r4, #48]	@ 000ffb48 2063
.org 0xffb4a
	movs r2, #1	@ 000ffb4a 0122
.org 0xffb4c
	strh r2, [r4, #38]	@ 000ffb4c e284
.org 0xffb4e
	ldr r0, [r4, #88]	@ 000ffb4e a06d
.org 0xffb50
	adds r0, #1	@ 000ffb50 0130
.org 0xffb52
	str r0, [r4, #88]	@ 000ffb52 a065
.org 0xffb54
	adds r1, r4, #0	@ 000ffb54 211c
.org 0xffb56
	adds r1, #180	@ 000ffb56 b431
.org 0xffb58
	str r0, [r1, #0]	@ 000ffb58 0860
.org 0xffb5a
	ldr r1, [pc, #52]	@ 000ffb5a 0d49
.org 0xffb5c
	ldrb r0, [r4, #9]	@ 000ffb5c 607a
.org 0xffb5e
	lsls r0, r0, #2	@ 000ffb5e 8000
.org 0xffb60
	adds r0, r0, r1	@ 000ffb60 4018
.org 0xffb62
	str r2, [r4, #12]	@ 000ffb62 e260
.org 0xffb64
	ldr r0, [r0, #0]	@ 000ffb64 0068
.org 0xffb66
	ldr r0, [r0, #4]	@ 000ffb66 4068
.org 0xffb68
	str r0, [r4, #20]	@ 000ffb68 6061
.org 0xffb6a
	ldr r0, [pc, #40]	@ 000ffb6a 0a48
.org 0xffb6c
	ldr r1, [pc, #40]	@ 000ffb6c 0a49
.org 0xffb6e
	adds r0, r0, r1	@ 000ffb6e 4018
.org 0xffb70
	ldrb r0, [r0, #0]	@ 000ffb70 0078
.org 0xffb72
	ldrb r1, [r4, #16]	@ 000ffb72 217c
.org 0xffb74
	asrs r0, r1	@ 000ffb74 0841
.org 0xffb76
	ands r0, r2	@ 000ffb76 1040
.org 0xffb78
	cmp r0, #0	@ 000ffb78 0028
.org 0xffb7a
	bne.n 0xffb80	@ 000ffb7a 01d1
.org 0xffb7c
	movs r0, #1	@ 000ffb7c 0120
.org 0xffb7e
	strb r0, [r4, #13]	@ 000ffb7e 6073
.org 0xffb80
	adds r0, r4, #0	@ 000ffb80 201c
.org 0xffb82
	bl 0xffb9c	@ 000ffb82 00f00bf8
.org 0xffb86
	pop {r4}	@ 000ffb86 10bc
.org 0xffb88
	pop {r0}	@ 000ffb88 01bc
.org 0xffb8a
	bx r0	@ 000ffb8a 0047
