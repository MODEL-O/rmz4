@ FUN_080cfc50  entry 0x080cfc50  size 118
.thumb
.org 0xcfc50
FUN_080cfc50:
	push {r4, r5, lr}	@ 000cfc50 30b5
.org 0xcfc52
	adds r4, r0, #0	@ 000cfc52 041c
.org 0xcfc54
	ldr r5, [r4, #40]	@ 000cfc54 a56a
.org 0xcfc56
	ldrb r1, [r4, #15]	@ 000cfc56 e17b
.org 0xcfc58
	cmp r1, #0	@ 000cfc58 0029
.org 0xcfc5a
	bne.n 0xcfc7e	@ 000cfc5a 10d1
.org 0xcfc5c
	adds r0, #140	@ 000cfc5c 8c30
.org 0xcfc5e
	str r1, [r0, #0]	@ 000cfc5e 0160
.org 0xcfc60
	adds r0, #4	@ 000cfc60 0430
.org 0xcfc62
	str r1, [r0, #0]	@ 000cfc62 0160
.org 0xcfc64
	adds r0, #4	@ 000cfc64 0430
.org 0xcfc66
	strb r1, [r0, #0]	@ 000cfc66 0170
.org 0xcfc68
	ldrb r1, [r4, #10]	@ 000cfc68 a17a
.org 0xcfc6a
	movs r0, #251	@ 000cfc6a fb20
.org 0xcfc6c
	ands r0, r1	@ 000cfc6c 0840
.org 0xcfc6e
	strb r0, [r4, #10]	@ 000cfc6e a072
.org 0xcfc70
	ldr r1, [pc, #84]	@ 000cfc70 1549
.org 0xcfc72
	adds r0, r4, #0	@ 000cfc72 201c
.org 0xcfc74
	bl 0x1cf00	@ 000cfc74 4df744f9
.org 0xcfc78
	ldrb r0, [r4, #15]	@ 000cfc78 e07b
.org 0xcfc7a
	adds r0, #1	@ 000cfc7a 0130
.org 0xcfc7c
	strb r0, [r4, #15]	@ 000cfc7c e073
.org 0xcfc7e
	adds r0, r4, #0	@ 000cfc7e 201c
.org 0xcfc80
	bl 0x1cff0	@ 000cfc80 4df7b6f9
.org 0xcfc84
	adds r0, r4, #0	@ 000cfc84 201c
.org 0xcfc86
	adds r0, #115	@ 000cfc86 7330
.org 0xcfc88
	ldrb r0, [r0, #0]	@ 000cfc88 0078
.org 0xcfc8a
	cmp r0, #3	@ 000cfc8a 0328
.org 0xcfc8c
	bne.n 0xcfcc0	@ 000cfc8c 18d1
.org 0xcfc8e
	movs r0, #197	@ 000cfc8e c520
.org 0xcfc90
	bl 0x2624	@ 000cfc90 32f7c8fc
.org 0xcfc94
	adds r1, r5, #0	@ 000cfc94 291c
.org 0xcfc96
	adds r1, #204	@ 000cfc96 cc31
.org 0xcfc98
	ldrh r2, [r1, #0]	@ 000cfc98 0a88
.org 0xcfc9a
	movs r3, #0	@ 000cfc9a 0023
.org 0xcfc9c
	ldrsh r0, [r1, r3]	@ 000cfc9c c85e
.org 0xcfc9e
	cmp r0, #0	@ 000cfc9e 0028
.org 0xcfca0
	beq.n 0xcfca6	@ 000cfca0 01d0
.org 0xcfca2
	subs r0, r2, #1	@ 000cfca2 501e
.org 0xcfca4
	strh r0, [r1, #0]	@ 000cfca4 0880
.org 0xcfca6
	ldrb r1, [r4, #10]	@ 000cfca6 a17a
.org 0xcfca8
	movs r0, #254	@ 000cfca8 fe20
.org 0xcfcaa
	ands r0, r1	@ 000cfcaa 0840
.org 0xcfcac
	strb r0, [r4, #10]	@ 000cfcac a072
.org 0xcfcae
	ldr r1, [pc, #28]	@ 000cfcae 0749
.org 0xcfcb0
	ldrb r0, [r4, #9]	@ 000cfcb0 607a
.org 0xcfcb2
	lsls r0, r0, #2	@ 000cfcb2 8000
.org 0xcfcb4
	adds r0, r0, r1	@ 000cfcb4 4018
.org 0xcfcb6
	movs r1, #4	@ 000cfcb6 0421
.org 0xcfcb8
	str r1, [r4, #12]	@ 000cfcb8 e160
.org 0xcfcba
	ldr r0, [r0, #0]	@ 000cfcba 0068
.org 0xcfcbc
	ldr r0, [r0, #16]	@ 000cfcbc 0069
.org 0xcfcbe
	str r0, [r4, #20]	@ 000cfcbe 6061
.org 0xcfcc0
	pop {r4, r5}	@ 000cfcc0 30bc
.org 0xcfcc2
	pop {r0}	@ 000cfcc2 01bc
.org 0xcfcc4
	bx r0	@ 000cfcc4 0047
