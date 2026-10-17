@ FUN_08119978  entry 0x08119978  size 46
.thumb
.org 0x119978
FUN_08119978:
	push {lr}	@ 00119978 00b5
.org 0x11997a
	ldr r1, [pc, #44]	@ 0011997a 0b49
.org 0x11997c
	adds r0, r0, r1	@ 0011997c 4018
.org 0x11997e
	ldr r0, [r0, #0]	@ 0011997e 0068
.org 0x119980
	movs r2, #0	@ 00119980 0022
.org 0x119982
	movs r1, #0	@ 00119982 0021
.org 0x119984
	adds r3, r0, #0	@ 00119984 031c
.org 0x119986
	adds r3, #188	@ 00119986 bc33
.org 0x119988
	adds r0, r3, r1	@ 00119988 5818
.org 0x11998a
	ldrb r0, [r0, #0]	@ 0011998a 0078
.org 0x11998c
	cmp r0, #255	@ 0011998c ff28
.org 0x11998e
	beq.n 0x119996	@ 0011998e 02d0
.org 0x119990
	adds r0, r2, #1	@ 00119990 501c
.org 0x119992
	lsls r0, r0, #24	@ 00119992 0006
.org 0x119994
	lsrs r2, r0, #24	@ 00119994 020e
.org 0x119996
	adds r0, r1, #1	@ 00119996 481c
.org 0x119998
	lsls r0, r0, #24	@ 00119998 0006
.org 0x11999a
	lsrs r1, r0, #24	@ 0011999a 010e
.org 0x11999c
	cmp r1, #3	@ 0011999c 0329
.org 0x11999e
	bls.n 0x119988	@ 0011999e f3d9
.org 0x1199a0
	adds r0, r2, #0	@ 001199a0 101c
.org 0x1199a2
	pop {r1}	@ 001199a2 02bc
.org 0x1199a4
	bx r1	@ 001199a4 0847
