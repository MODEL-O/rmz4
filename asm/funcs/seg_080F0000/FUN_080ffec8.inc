@ FUN_080ffec8  entry 0x080ffec8  size 88
.thumb
.org 0xffec8
FUN_080ffec8:
	push {r4, r5, lr}	@ 000ffec8 30b5
.org 0xffeca
	adds r2, r0, #0	@ 000ffeca 021c
.org 0xffecc
	ldr r0, [r2, #12]	@ 000ffecc d068
.org 0xffece
	ldr r3, [r0, #44]	@ 000ffece c36a
.org 0xffed0
	ldr r4, [r2, #44]	@ 000ffed0 d46a
.org 0xffed2
	ldr r0, [r2, #20]	@ 000ffed2 5069
.org 0xffed4
	movs r1, #1	@ 000ffed4 0121
.org 0xffed6
	ands r0, r1	@ 000ffed6 0840
.org 0xffed8
	cmp r0, #0	@ 000ffed8 0028
.org 0xffeda
	beq.n 0xfff1a	@ 000ffeda 1ed0
.org 0xffedc
	movs r5, #0	@ 000ffedc 0025
.org 0xffede
	ldr r1, [r3, #84]	@ 000ffede 596d
.org 0xffee0
	ldr r0, [r4, #84]	@ 000ffee0 606d
.org 0xffee2
	cmp r1, r0	@ 000ffee2 8142
.org 0xffee4
	ble.n 0xffee8	@ 000ffee4 00dd
.org 0xffee6
	movs r5, #1	@ 000ffee6 0125
.org 0xffee8
	adds r0, r4, #0	@ 000ffee8 201c
.org 0xffeea
	adds r0, #188	@ 000ffeea bc30
.org 0xffeec
	strb r5, [r0, #0]	@ 000ffeec 0570
.org 0xffeee
	ldr r1, [r2, #20]	@ 000ffeee 5169
.org 0xffef0
	movs r0, #128	@ 000ffef0 8020
.org 0xffef2
	lsls r0, r0, #2	@ 000ffef2 8000
.org 0xffef4
	ands r0, r1	@ 000ffef4 0840
.org 0xffef6
	cmp r0, #0	@ 000ffef6 0028
.org 0xffef8
	beq.n 0xfff1a	@ 000ffef8 0fd0
.org 0xffefa
	movs r0, #128	@ 000ffefa 8020
.org 0xffefc
	lsls r0, r0, #10	@ 000ffefc 8002
.org 0xffefe
	ands r1, r0	@ 000ffefe 0140
.org 0xfff00
	cmp r1, #0	@ 000fff00 0029
.org 0xfff02
	beq.n 0xfff1a	@ 000fff02 0ad0
.org 0xfff04
	ldr r0, [pc, #24]	@ 000fff04 0648
.org 0xfff06
	ldr r0, [r0, #0]	@ 000fff06 0068
.org 0xfff08
	cmp r0, #0	@ 000fff08 0028
.org 0xfff0a
	beq.n 0xfff1a	@ 000fff0a 06d0
.org 0xfff0c
	movs r1, #7	@ 000fff0c 0721
.org 0xfff0e
	movs r2, #4	@ 000fff0e 0422
.org 0xfff10
	bl 0x3a578	@ 000fff10 3af732fb
.org 0xfff14
	adds r1, r4, #0	@ 000fff14 211c
.org 0xfff16
	adds r1, #189	@ 000fff16 bd31
.org 0xfff18
	strb r0, [r1, #0]	@ 000fff18 0870
.org 0xfff1a
	pop {r4, r5}	@ 000fff1a 30bc
.org 0xfff1c
	pop {r0}	@ 000fff1c 01bc
.org 0xfff1e
	bx r0	@ 000fff1e 0047
