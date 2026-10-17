@ FUN_0809c07c  entry 0x0809c07c  size 158
.thumb
.org 0x9c07c
FUN_0809c07c:
	push {r4, r5, r6, lr}	@ 0009c07c 70b5
.org 0x9c07e
	sub sp, #20	@ 0009c07e 85b0
.org 0x9c080
	adds r4, r0, #0	@ 0009c080 041c
.org 0x9c082
	mov r1, sp	@ 0009c082 6946
.org 0x9c084
	ldr r0, [pc, #148]	@ 0009c084 2548
.org 0x9c086
	ldmia r0!, {r2, r3, r5}	@ 0009c086 2cc8
.org 0x9c088
	stmia r1!, {r2, r3, r5}	@ 0009c088 2cc1
.org 0x9c08a
	ldr r0, [r0, #0]	@ 0009c08a 0068
.org 0x9c08c
	str r0, [r1, #0]	@ 0009c08c 0860
.org 0x9c08e
	add r5, sp, #16	@ 0009c08e 04ad
.org 0x9c090
	ldr r1, [pc, #140]	@ 0009c090 2349
.org 0x9c092
	adds r0, r5, #0	@ 0009c092 281c
.org 0x9c094
	movs r2, #4	@ 0009c094 0422
.org 0x9c096
	bl 0x129258	@ 0009c096 8df0dff8
.org 0x9c09a
	ldrb r1, [r4, #17]	@ 0009c09a 617c
.org 0x9c09c
	adds r6, r1, #0	@ 0009c09c 0e1c
.org 0x9c09e
	ldrb r0, [r4, #15]	@ 0009c09e e07b
.org 0x9c0a0
	cmp r0, #0	@ 0009c0a0 0028
.org 0x9c0a2
	bne.n 0x9c0c6	@ 0009c0a2 10d1
.org 0x9c0a4
	lsls r0, r1, #2	@ 0009c0a4 8800
.org 0x9c0a6
	add r0, sp	@ 0009c0a6 6844
.org 0x9c0a8
	ldrh r1, [r0, #0]	@ 0009c0a8 0188
.org 0x9c0aa
	adds r0, r4, #0	@ 0009c0aa 201c
.org 0x9c0ac
	bl 0x1cf00	@ 0009c0ac 80f728ff
.org 0x9c0b0
	adds r0, r4, #0	@ 0009c0b0 201c
.org 0x9c0b2
	adds r0, #180	@ 0009c0b2 b430
.org 0x9c0b4
	ldr r0, [r0, #0]	@ 0009c0b4 0068
.org 0x9c0b6
	str r0, [r4, #84]	@ 0009c0b6 6065
.org 0x9c0b8
	adds r0, r4, #0	@ 0009c0b8 201c
.org 0x9c0ba
	adds r0, #184	@ 0009c0ba b830
.org 0x9c0bc
	ldr r0, [r0, #0]	@ 0009c0bc 0068
.org 0x9c0be
	str r0, [r4, #88]	@ 0009c0be a065
.org 0x9c0c0
	ldrb r0, [r4, #15]	@ 0009c0c0 e07b
.org 0x9c0c2
	adds r0, #1	@ 0009c0c2 0130
.org 0x9c0c4
	strb r0, [r4, #15]	@ 0009c0c4 e073
.org 0x9c0c6
	adds r0, r4, #0	@ 0009c0c6 201c
.org 0x9c0c8
	bl 0x1cff0	@ 0009c0c8 80f792ff
.org 0x9c0cc
	adds r0, r4, #0	@ 0009c0cc 201c
.org 0x9c0ce
	adds r0, #116	@ 0009c0ce 7430
.org 0x9c0d0
	ldr r3, [pc, #80]	@ 0009c0d0 144b
.org 0x9c0d2
	adds r1, r5, r6	@ 0009c0d2 a919
.org 0x9c0d4
	ldrb r2, [r1, #0]	@ 0009c0d4 0a78
.org 0x9c0d6
	lsls r2, r2, #2	@ 0009c0d6 9200
.org 0x9c0d8
	adds r2, r2, r3	@ 0009c0d8 d218
.org 0x9c0da
	adds r1, r4, #0	@ 0009c0da 211c
.org 0x9c0dc
	adds r1, #113	@ 0009c0dc 7131
.org 0x9c0de
	ldrb r1, [r1, #0]	@ 0009c0de 0978
.org 0x9c0e0
	lsls r1, r1, #24	@ 0009c0e0 0906
.org 0x9c0e2
	asrs r1, r1, #24	@ 0009c0e2 0916
.org 0x9c0e4
	ldr r2, [r2, #0]	@ 0009c0e4 1268
.org 0x9c0e6
	lsls r1, r1, #2	@ 0009c0e6 8900
.org 0x9c0e8
	adds r1, r1, r2	@ 0009c0e8 8918
.org 0x9c0ea
	ldr r1, [r1, #0]	@ 0009c0ea 0968
.org 0x9c0ec
	bl 0x5784	@ 0009c0ec 69f74afb
.org 0x9c0f0
	adds r0, r4, #0	@ 0009c0f0 201c
.org 0x9c0f2
	adds r0, #115	@ 0009c0f2 7330
.org 0x9c0f4
	ldrb r0, [r0, #0]	@ 0009c0f4 0078
.org 0x9c0f6
	cmp r0, #3	@ 0009c0f6 0328
.org 0x9c0f8
	bne.n 0x9c112	@ 0009c0f8 0bd1
.org 0x9c0fa
	ldr r1, [pc, #44]	@ 0009c0fa 0b49
.org 0x9c0fc
	ldrb r0, [r4, #9]	@ 0009c0fc 607a
.org 0x9c0fe
	lsls r0, r0, #2	@ 0009c0fe 8000
.org 0x9c100
	adds r0, r0, r1	@ 0009c100 4018
.org 0x9c102
	movs r1, #2	@ 0009c102 0221
.org 0x9c104
	str r1, [r4, #12]	@ 0009c104 e160
.org 0x9c106
	ldr r0, [r0, #0]	@ 0009c106 0068
.org 0x9c108
	ldr r0, [r0, #8]	@ 0009c108 8068
.org 0x9c10a
	str r0, [r4, #20]	@ 0009c10a 6061
.org 0x9c10c
	adds r0, r4, #0	@ 0009c10c 201c
.org 0x9c10e
	bl 0x9c34c	@ 0009c10e 00f01df9
.org 0x9c112
	add sp, #20	@ 0009c112 05b0
.org 0x9c114
	pop {r4, r5, r6}	@ 0009c114 70bc
.org 0x9c116
	pop {r0}	@ 0009c116 01bc
.org 0x9c118
	bx r0	@ 0009c118 0047
