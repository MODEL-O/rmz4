@ FUN_080497fc  entry 0x080497fc  size 20
.thumb
.org 0x497fc
FUN_080497fc:
	push {lr}	@ 000497fc 00b5
.org 0x497fe
	ldr r2, [pc, #16]	@ 000497fe 044a
.org 0x49800
	ldrb r1, [r0, #16]	@ 00049800 017c
.org 0x49802
	lsls r1, r1, #2	@ 00049802 8900
.org 0x49804
	adds r1, r1, r2	@ 00049804 8918
.org 0x49806
	ldr r1, [r1, #0]	@ 00049806 0968
.org 0x49808
	bl 0x128f80	@ 00049808 dff0bafb
.org 0x4980c
	pop {r0}	@ 0004980c 01bc
.org 0x4980e
	bx r0	@ 0004980e 0047
