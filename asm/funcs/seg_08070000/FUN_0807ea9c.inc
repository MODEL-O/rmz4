@ FUN_0807ea9c  entry 0x0807ea9c  size 26
.thumb
.org 0x7ea9c
FUN_0807ea9c:
	push {lr}	@ 0007ea9c 00b5
.org 0x7ea9e
	adds r0, #164	@ 0007ea9e a430
.org 0x7eaa0
	movs r2, #0	@ 0007eaa0 0022
.org 0x7eaa2
	ldrsh r1, [r0, r2]	@ 0007eaa2 815e
.org 0x7eaa4
	movs r0, #2	@ 0007eaa4 0220
.org 0x7eaa6
	cmp r1, #32	@ 0007eaa6 2029
.org 0x7eaa8
	ble.n 0x7eab2	@ 0007eaa8 03dd
.org 0x7eaaa
	movs r0, #0	@ 0007eaaa 0020
.org 0x7eaac
	cmp r1, #64	@ 0007eaac 4029
.org 0x7eaae
	bgt.n 0x7eab2	@ 0007eaae 00dc
.org 0x7eab0
	movs r0, #1	@ 0007eab0 0120
.org 0x7eab2
	pop {r1}	@ 0007eab2 02bc
.org 0x7eab4
	bx r1	@ 0007eab4 0847
