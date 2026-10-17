@ FUN_080b9790  entry 0x080b9790  size 60
.thumb
.org 0xb9790
FUN_080b9790:
	push {r4, r5, r6, r7, lr}	@ 000b9790 f0b5
.org 0xb9792
	sub sp, #8	@ 000b9792 82b0
.org 0xb9794
	ldrb r1, [r0, #10]	@ 000b9794 817a
.org 0xb9796
	lsrs r1, r1, #4	@ 000b9796 0909
.org 0xb9798
	movs r2, #1	@ 000b9798 0122
.org 0xb979a
	ands r1, r2	@ 000b979a 1140
.org 0xb979c
	ldr r2, [r0, #84]	@ 000b979c 426d
.org 0xb979e
	str r2, [sp, #0]	@ 000b979e 0092
.org 0xb97a0
	ldr r0, [r0, #88]	@ 000b97a0 806d
.org 0xb97a2
	str r0, [sp, #4]	@ 000b97a2 0190
.org 0xb97a4
	lsls r0, r1, #4	@ 000b97a4 0801
.org 0xb97a6
	orrs r1, r0	@ 000b97a6 0143
.org 0xb97a8
	lsls r6, r1, #24	@ 000b97a8 0e06
.org 0xb97aa
	movs r5, #0	@ 000b97aa 0025
.org 0xb97ac
	ldr r7, [pc, #28]	@ 000b97ac 074f
.org 0xb97ae
	movs r4, #2	@ 000b97ae 0224
.org 0xb97b0
	adds r1, r5, r7	@ 000b97b0 e919
.org 0xb97b2
	mov r0, sp	@ 000b97b2 6846
.org 0xb97b4
	movs r2, #0	@ 000b97b4 0022
.org 0xb97b6
	lsrs r3, r6, #24	@ 000b97b6 330e
.org 0xb97b8
	bl 0xd4c8c	@ 000b97b8 1bf068fa
.org 0xb97bc
	adds r5, #28	@ 000b97bc 1c35
.org 0xb97be
	subs r4, #1	@ 000b97be 013c
.org 0xb97c0
	cmp r4, #0	@ 000b97c0 002c
.org 0xb97c2
	bge.n 0xb97b0	@ 000b97c2 f5da
.org 0xb97c4
	add sp, #8	@ 000b97c4 02b0
.org 0xb97c6
	pop {r4, r5, r6, r7}	@ 000b97c6 f0bc
.org 0xb97c8
	pop {r0}	@ 000b97c8 01bc
.org 0xb97ca
	bx r0	@ 000b97ca 0047
