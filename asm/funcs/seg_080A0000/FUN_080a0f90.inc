@ FUN_080a0f90  entry 0x080a0f90  size 170
.thumb
.org 0xa0f90
FUN_080a0f90:
	push {r4, r5, lr}	@ 000a0f90 30b5
.org 0xa0f92
	sub sp, #4	@ 000a0f92 81b0
.org 0xa0f94
	adds r4, r0, #0	@ 000a0f94 041c
.org 0xa0f96
	ldr r1, [pc, #164]	@ 000a0f96 2949
.org 0xa0f98
	mov r0, sp	@ 000a0f98 6846
.org 0xa0f9a
	movs r2, #4	@ 000a0f9a 0422
.org 0xa0f9c
	bl 0x129258	@ 000a0f9c 88f05cf9
.org 0xa0fa0
	ldrb r5, [r4, #16]	@ 000a0fa0 257c
.org 0xa0fa2
	ldrb r0, [r4, #15]	@ 000a0fa2 e07b
.org 0xa0fa4
	cmp r0, #0	@ 000a0fa4 0028
.org 0xa0fa6
	bne.n 0xa0fbc	@ 000a0fa6 09d1
.org 0xa0fa8
	movs r0, #169	@ 000a0fa8 a920
.org 0xa0faa
	bl 0x2b10	@ 000a0faa 61f7b1fd
.org 0xa0fae
	ldr r1, [pc, #144]	@ 000a0fae 2449
.org 0xa0fb0
	adds r0, r4, #0	@ 000a0fb0 201c
.org 0xa0fb2
	bl 0x1cf00	@ 000a0fb2 7bf7a5ff
.org 0xa0fb6
	ldrb r0, [r4, #15]	@ 000a0fb6 e07b
.org 0xa0fb8
	adds r0, #1	@ 000a0fb8 0130
.org 0xa0fba
	strb r0, [r4, #15]	@ 000a0fba e073
.org 0xa0fbc
	adds r0, r4, #0	@ 000a0fbc 201c
.org 0xa0fbe
	bl 0x1cff0	@ 000a0fbe 7cf717f8
.org 0xa0fc2
	adds r0, r4, #0	@ 000a0fc2 201c
.org 0xa0fc4
	adds r0, #116	@ 000a0fc4 7430
.org 0xa0fc6
	adds r1, r4, #0	@ 000a0fc6 211c
.org 0xa0fc8
	adds r1, #113	@ 000a0fc8 7131
.org 0xa0fca
	ldrb r1, [r1, #0]	@ 000a0fca 0978
.org 0xa0fcc
	lsls r1, r1, #24	@ 000a0fcc 0906
.org 0xa0fce
	asrs r1, r1, #24	@ 000a0fce 0916
.org 0xa0fd0
	add r1, sp	@ 000a0fd0 6944
.org 0xa0fd2
	ldrb r2, [r1, #0]	@ 000a0fd2 0a78
.org 0xa0fd4
	lsls r1, r2, #1	@ 000a0fd4 5100
.org 0xa0fd6
	adds r1, r1, r2	@ 000a0fd6 8918
.org 0xa0fd8
	lsls r1, r1, #3	@ 000a0fd8 c900
.org 0xa0fda
	ldr r2, [pc, #104]	@ 000a0fda 1a4a
.org 0xa0fdc
	adds r1, r1, r2	@ 000a0fdc 8918
.org 0xa0fde
	bl 0x5784	@ 000a0fde 64f7d1fb
.org 0xa0fe2
	adds r0, r4, #0	@ 000a0fe2 201c
.org 0xa0fe4
	adds r0, #115	@ 000a0fe4 7330
.org 0xa0fe6
	ldrb r0, [r0, #0]	@ 000a0fe6 0078
.org 0xa0fe8
	cmp r0, #3	@ 000a0fe8 0328
.org 0xa0fea
	bne.n 0xa1032	@ 000a0fea 22d1
.org 0xa0fec
	cmp r5, #1	@ 000a0fec 012d
.org 0xa0fee
	bne.n 0xa1000	@ 000a0fee 07d1
.org 0xa0ff0
	ldr r0, [pc, #84]	@ 000a0ff0 1548
.org 0xa0ff2
	adds r1, r0, #0	@ 000a0ff2 011c
.org 0xa0ff4
	adds r1, #38	@ 000a0ff4 2631
.org 0xa0ff6
	ldrb r0, [r1, #0]	@ 000a0ff6 0878
.org 0xa0ff8
	cmp r0, #0	@ 000a0ff8 0028
.org 0xa0ffa
	beq.n 0xa1000	@ 000a0ffa 01d0
.org 0xa0ffc
	adds r0, #255	@ 000a0ffc ff30
.org 0xa0ffe
	strb r0, [r1, #0]	@ 000a0ffe 0870
.org 0xa1000
	ldrb r1, [r4, #10]	@ 000a1000 a17a
.org 0xa1002
	movs r0, #254	@ 000a1002 fe20
.org 0xa1004
	ands r0, r1	@ 000a1004 0840
.org 0xa1006
	movs r1, #0	@ 000a1006 0021
.org 0xa1008
	strb r0, [r4, #10]	@ 000a1008 a072
.org 0xa100a
	adds r0, r4, #0	@ 000a100a 201c
.org 0xa100c
	adds r0, #140	@ 000a100c 8c30
.org 0xa100e
	str r1, [r0, #0]	@ 000a100e 0160
.org 0xa1010
	adds r0, #4	@ 000a1010 0430
.org 0xa1012
	str r1, [r0, #0]	@ 000a1012 0160
.org 0xa1014
	adds r0, #4	@ 000a1014 0430
.org 0xa1016
	strb r1, [r0, #0]	@ 000a1016 0170
.org 0xa1018
	ldrb r1, [r4, #10]	@ 000a1018 a17a
.org 0xa101a
	movs r0, #251	@ 000a101a fb20
.org 0xa101c
	ands r0, r1	@ 000a101c 0840
.org 0xa101e
	strb r0, [r4, #10]	@ 000a101e a072
.org 0xa1020
	ldr r1, [pc, #40]	@ 000a1020 0a49
.org 0xa1022
	ldrb r0, [r4, #9]	@ 000a1022 607a
.org 0xa1024
	lsls r0, r0, #2	@ 000a1024 8000
.org 0xa1026
	adds r0, r0, r1	@ 000a1026 4018
.org 0xa1028
	movs r1, #4	@ 000a1028 0421
.org 0xa102a
	str r1, [r4, #12]	@ 000a102a e160
.org 0xa102c
	ldr r0, [r0, #0]	@ 000a102c 0068
.org 0xa102e
	ldr r0, [r0, #16]	@ 000a102e 0069
.org 0xa1030
	str r0, [r4, #20]	@ 000a1030 6061
.org 0xa1032
	add sp, #4	@ 000a1032 01b0
.org 0xa1034
	pop {r4, r5}	@ 000a1034 30bc
.org 0xa1036
	pop {r0}	@ 000a1036 01bc
.org 0xa1038
	bx r0	@ 000a1038 0047
