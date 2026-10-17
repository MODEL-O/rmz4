@ FUN_0811c33c  entry 0x0811c33c  size 32
.thumb
.org 0x11c33c
FUN_0811c33c:
	push {r4, lr}	@ 0011c33c 10b5
.org 0x11c33e
	adds r4, r0, #0	@ 0011c33e 041c
.org 0x11c340
	ldr r1, [pc, #24]	@ 0011c340 0649
.org 0x11c342
	ldrb r0, [r4, #1]	@ 0011c342 6078
.org 0x11c344
	lsls r0, r0, #2	@ 0011c344 8000
.org 0x11c346
	adds r0, r0, r1	@ 0011c346 4018
.org 0x11c348
	ldr r1, [r0, #0]	@ 0011c348 0168
.org 0x11c34a
	adds r0, r4, #0	@ 0011c34a 201c
.org 0x11c34c
	bl 0x128f80	@ 0011c34c 0cf018fe
.org 0x11c350
	adds r0, r4, #0	@ 0011c350 201c
.org 0x11c352
	bl 0x11c768	@ 0011c352 00f009fa
.org 0x11c356
	pop {r4}	@ 0011c356 10bc
.org 0x11c358
	pop {r0}	@ 0011c358 01bc
.org 0x11c35a
	bx r0	@ 0011c35a 0047
