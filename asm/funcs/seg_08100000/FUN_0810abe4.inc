@ FUN_0810abe4  entry 0x0810abe4  size 76
.thumb
.org 0x10abe4
FUN_0810abe4:
	push {r4, r5, lr}	@ 0010abe4 30b5
.org 0x10abe6
	adds r5, r0, #0	@ 0010abe6 051c
.org 0x10abe8
	lsls r1, r1, #24	@ 0010abe8 0906
.org 0x10abea
	lsrs r4, r1, #24	@ 0010abea 0c0e
.org 0x10abec
	ldr r0, [pc, #64]	@ 0010abec 1048
.org 0x10abee
	ldr r0, [r0, #0]	@ 0010abee 0068
.org 0x10abf0
	bl 0x5500	@ 0010abf0 faf686fc
.org 0x10abf4
	adds r3, r0, #0	@ 0010abf4 031c
.org 0x10abf6
	cmp r3, #0	@ 0010abf6 002b
.org 0x10abf8
	beq.n 0x10ac28	@ 0010abf8 16d0
.org 0x10abfa
	adds r1, r3, #0	@ 0010abfa 191c
.org 0x10abfc
	adds r1, #37	@ 0010abfc 2531
.org 0x10abfe
	movs r2, #0	@ 0010abfe 0022
.org 0x10ac00
	movs r0, #16	@ 0010ac00 1020
.org 0x10ac02
	strb r0, [r1, #0]	@ 0010ac02 0870
.org 0x10ac04
	ldr r1, [pc, #44]	@ 0010ac04 0b49
.org 0x10ac06
	movs r0, #3	@ 0010ac06 0320
.org 0x10ac08
	strb r0, [r3, #9]	@ 0010ac08 5872
.org 0x10ac0a
	ldr r0, [r1, #12]	@ 0010ac0a c868
.org 0x10ac0c
	ldr r0, [r0, #0]	@ 0010ac0c 0068
.org 0x10ac0e
	str r0, [r3, #20]	@ 0010ac0e 5861
.org 0x10ac10
	movs r1, #0	@ 0010ac10 0021
.org 0x10ac12
	strh r2, [r3, #32]	@ 0010ac12 1a84
.org 0x10ac14
	adds r0, r3, #0	@ 0010ac14 181c
.org 0x10ac16
	adds r0, #34	@ 0010ac16 2230
.org 0x10ac18
	strb r1, [r0, #0]	@ 0010ac18 0170
.org 0x10ac1a
	str r5, [r3, #40]	@ 0010ac1a 9d62
.org 0x10ac1c
	strb r4, [r3, #16]	@ 0010ac1c 1c74
.org 0x10ac1e
	strb r1, [r3, #17]	@ 0010ac1e 5974
.org 0x10ac20
	str r2, [r3, #116]	@ 0010ac20 5a67
.org 0x10ac22
	str r2, [r3, #120]	@ 0010ac22 9a67
.org 0x10ac24
	adds r0, #90	@ 0010ac24 5a30
.org 0x10ac26
	strb r1, [r0, #0]	@ 0010ac26 0170
.org 0x10ac28
	adds r0, r3, #0	@ 0010ac28 181c
.org 0x10ac2a
	pop {r4, r5}	@ 0010ac2a 30bc
.org 0x10ac2c
	pop {r1}	@ 0010ac2c 02bc
.org 0x10ac2e
	bx r1	@ 0010ac2e 0847
