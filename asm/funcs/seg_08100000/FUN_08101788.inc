@ FUN_08101788  entry 0x08101788  size 20
.thumb
.org 0x101788
FUN_08101788:
	push {lr}	@ 00101788 00b5
.org 0x10178a
	ldr r2, [pc, #16]	@ 0010178a 044a
.org 0x10178c
	ldrb r1, [r0, #16]	@ 0010178c 017c
.org 0x10178e
	lsls r1, r1, #2	@ 0010178e 8900
.org 0x101790
	adds r1, r1, r2	@ 00101790 8918
.org 0x101792
	ldr r1, [r1, #0]	@ 00101792 0968
.org 0x101794
	bl 0x128f80	@ 00101794 27f0f4fb
.org 0x101798
	pop {r0}	@ 00101798 01bc
.org 0x10179a
	bx r0	@ 0010179a 0047
