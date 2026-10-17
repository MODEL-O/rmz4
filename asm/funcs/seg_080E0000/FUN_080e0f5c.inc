@ FUN_080e0f5c  entry 0x080e0f5c  size 118
.thumb
.org 0xe0f5c
FUN_080e0f5c:
	push {r4, r5, lr}	@ 000e0f5c 30b5
.org 0xe0f5e
	sub sp, #8	@ 000e0f5e 82b0
.org 0xe0f60
	adds r4, r0, #0	@ 000e0f60 041c
.org 0xe0f62
	ldrb r5, [r4, #16]	@ 000e0f62 257c
.org 0xe0f64
	ldrb r0, [r4, #15]	@ 000e0f64 e07b
.org 0xe0f66
	cmp r0, #0	@ 000e0f66 0028
.org 0xe0f68
	bne.n 0xe0f9c	@ 000e0f68 18d1
.org 0xe0f6a
	movs r0, #42	@ 000e0f6a 2a20
.org 0xe0f6c
	bl 0x2b10	@ 000e0f6c 21f7d0fd
.org 0xe0f70
	ldr r0, [r4, #84]	@ 000e0f70 606d
.org 0xe0f72
	str r0, [sp, #0]	@ 000e0f72 0090
.org 0xe0f74
	ldr r0, [r4, #88]	@ 000e0f74 a06d
.org 0xe0f76
	str r0, [sp, #4]	@ 000e0f76 0190
.org 0xe0f78
	movs r0, #1	@ 000e0f78 0120
.org 0xe0f7a
	mov r1, sp	@ 000e0f7a 6946
.org 0xe0f7c
	bl 0xd0c88	@ 000e0f7c eff784fe
.org 0xe0f80
	adds r0, r4, #0	@ 000e0f80 201c
.org 0xe0f82
	bl 0xe1024	@ 000e0f82 00f04ff8
.org 0xe0f86
	ldrb r1, [r4, #10]	@ 000e0f86 a17a
.org 0xe0f88
	movs r0, #254	@ 000e0f88 fe20
.org 0xe0f8a
	ands r0, r1	@ 000e0f8a 0840
.org 0xe0f8c
	strb r0, [r4, #10]	@ 000e0f8c a072
.org 0xe0f8e
	cmp r5, #0	@ 000e0f8e 002d
.org 0xe0f90
	beq.n 0xe0fb8	@ 000e0f90 12d0
.org 0xe0f92
	movs r0, #48	@ 000e0f92 3020
.org 0xe0f94
	strb r0, [r4, #18]	@ 000e0f94 a074
.org 0xe0f96
	ldrb r0, [r4, #15]	@ 000e0f96 e07b
.org 0xe0f98
	adds r0, #1	@ 000e0f98 0130
.org 0xe0f9a
	strb r0, [r4, #15]	@ 000e0f9a e073
.org 0xe0f9c
	ldrb r0, [r4, #18]	@ 000e0f9c a07c
.org 0xe0f9e
	subs r0, #1	@ 000e0f9e 0138
.org 0xe0fa0
	strb r0, [r4, #18]	@ 000e0fa0 a074
.org 0xe0fa2
	lsls r0, r0, #24	@ 000e0fa2 0006
.org 0xe0fa4
	cmp r0, #0	@ 000e0fa4 0028
.org 0xe0fa6
	bne.n 0xe0fca	@ 000e0fa6 10d1
.org 0xe0fa8
	ldr r0, [pc, #40]	@ 000e0fa8 0a48
.org 0xe0faa
	adds r1, r0, #0	@ 000e0faa 011c
.org 0xe0fac
	adds r1, #38	@ 000e0fac 2631
.org 0xe0fae
	ldrb r0, [r1, #0]	@ 000e0fae 0878
.org 0xe0fb0
	cmp r0, #0	@ 000e0fb0 0028
.org 0xe0fb2
	beq.n 0xe0fb8	@ 000e0fb2 01d0
.org 0xe0fb4
	adds r0, #255	@ 000e0fb4 ff30
.org 0xe0fb6
	strb r0, [r1, #0]	@ 000e0fb6 0870
.org 0xe0fb8
	ldr r1, [pc, #28]	@ 000e0fb8 0749
.org 0xe0fba
	ldrb r0, [r4, #9]	@ 000e0fba 607a
.org 0xe0fbc
	lsls r0, r0, #2	@ 000e0fbc 8000
.org 0xe0fbe
	adds r0, r0, r1	@ 000e0fbe 4018
.org 0xe0fc0
	movs r1, #4	@ 000e0fc0 0421
.org 0xe0fc2
	str r1, [r4, #12]	@ 000e0fc2 e160
.org 0xe0fc4
	ldr r0, [r0, #0]	@ 000e0fc4 0068
.org 0xe0fc6
	ldr r0, [r0, #16]	@ 000e0fc6 0069
.org 0xe0fc8
	str r0, [r4, #20]	@ 000e0fc8 6061
.org 0xe0fca
	add sp, #8	@ 000e0fca 02b0
.org 0xe0fcc
	pop {r4, r5}	@ 000e0fcc 30bc
.org 0xe0fce
	pop {r0}	@ 000e0fce 01bc
.org 0xe0fd0
	bx r0	@ 000e0fd0 0047
