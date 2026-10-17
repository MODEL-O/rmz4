@ FUN_0805aa4c  entry 0x0805aa4c  size 116
.thumb
.org 0x5aa4c
FUN_0805aa4c:
	push {r4, lr}	@ 0005aa4c 10b5
.org 0x5aa4e
	adds r4, r0, #0	@ 0005aa4e 041c
.org 0x5aa50
	ldrb r0, [r4, #15]	@ 0005aa50 e07b
.org 0x5aa52
	cmp r0, #0	@ 0005aa52 0028
.org 0x5aa54
	bne.n 0x5aa8a	@ 0005aa54 19d1
.org 0x5aa56
	adds r0, r4, #0	@ 0005aa56 201c
.org 0x5aa58
	adds r0, #116	@ 0005aa58 7430
.org 0x5aa5a
	ldr r1, [pc, #100]	@ 0005aa5a 1949
.org 0x5aa5c
	bl 0x5784	@ 0005aa5c aaf792fe
.org 0x5aa60
	ldrb r0, [r4, #30]	@ 0005aa60 a07f
.org 0x5aa62
	lsls r0, r0, #8	@ 0005aa62 0002
.org 0x5aa64
	adds r1, r4, #0	@ 0005aa64 211c
.org 0x5aa66
	adds r1, #112	@ 0005aa66 7031
.org 0x5aa68
	ldrb r1, [r1, #0]	@ 0005aa68 0978
.org 0x5aa6a
	orrs r0, r1	@ 0005aa6a 0843
.org 0x5aa6c
	ldr r1, [pc, #84]	@ 0005aa6c 1549
.org 0x5aa6e
	cmp r0, r1	@ 0005aa6e 8842
.org 0x5aa70
	beq.n 0x5aa80	@ 0005aa70 06d0
.org 0x5aa72
	adds r0, r4, #0	@ 0005aa72 201c
.org 0x5aa74
	bl 0x1cf00	@ 0005aa74 c2f744fa
.org 0x5aa78
	adds r1, r4, #0	@ 0005aa78 211c
.org 0x5aa7a
	adds r1, #189	@ 0005aa7a bd31
.org 0x5aa7c
	movs r0, #1	@ 0005aa7c 0120
.org 0x5aa7e
	strb r0, [r1, #0]	@ 0005aa7e 0870
.org 0x5aa80
	movs r0, #128	@ 0005aa80 8020
.org 0x5aa82
	strb r0, [r4, #18]	@ 0005aa82 a074
.org 0x5aa84
	ldrb r0, [r4, #15]	@ 0005aa84 e07b
.org 0x5aa86
	adds r0, #1	@ 0005aa86 0130
.org 0x5aa88
	strb r0, [r4, #15]	@ 0005aa88 e073
.org 0x5aa8a
	adds r0, r4, #0	@ 0005aa8a 201c
.org 0x5aa8c
	bl 0x1cff0	@ 0005aa8c c2f7b0fa
.org 0x5aa90
	ldrb r0, [r4, #18]	@ 0005aa90 a07c
.org 0x5aa92
	cmp r0, #0	@ 0005aa92 0028
.org 0x5aa94
	beq.n 0x5aaa0	@ 0005aa94 04d0
.org 0x5aa96
	subs r0, #1	@ 0005aa96 0138
.org 0x5aa98
	strb r0, [r4, #18]	@ 0005aa98 a074
.org 0x5aa9a
	lsls r0, r0, #24	@ 0005aa9a 0006
.org 0x5aa9c
	cmp r0, #0	@ 0005aa9c 0028
.org 0x5aa9e
	bne.n 0x5aaba	@ 0005aa9e 0cd1
.org 0x5aaa0
	adds r0, r4, #0	@ 0005aaa0 201c
.org 0x5aaa2
	adds r0, #200	@ 0005aaa2 c830
.org 0x5aaa4
	ldr r0, [r0, #0]	@ 0005aaa4 0068
.org 0x5aaa6
	cmp r0, #0	@ 0005aaa6 0028
.org 0x5aaa8
	beq.n 0x5aab4	@ 0005aaa8 04d0
.org 0x5aaaa
	adds r0, r4, #0	@ 0005aaaa 201c
.org 0x5aaac
	adds r0, #191	@ 0005aaac bf30
.org 0x5aaae
	ldrb r0, [r0, #0]	@ 0005aaae 0078
.org 0x5aab0
	cmp r0, #1	@ 0005aab0 0128
.org 0x5aab2
	beq.n 0x5aaba	@ 0005aab2 02d0
.org 0x5aab4
	adds r0, r4, #0	@ 0005aab4 201c
.org 0x5aab6
	bl 0x5bf8c	@ 0005aab6 01f069fa
.org 0x5aaba
	pop {r4}	@ 0005aaba 10bc
.org 0x5aabc
	pop {r0}	@ 0005aabc 01bc
.org 0x5aabe
	bx r0	@ 0005aabe 0047
