@ FUN_0809c620  entry 0x0809c620  size 20
.thumb
.org 0x9c620
FUN_0809c620:
	push {lr}	@ 0009c620 00b5
.org 0x9c622
	ldr r2, [pc, #16]	@ 0009c622 044a
.org 0x9c624
	ldrb r1, [r0, #16]	@ 0009c624 017c
.org 0x9c626
	lsls r1, r1, #2	@ 0009c626 8900
.org 0x9c628
	adds r1, r1, r2	@ 0009c628 8918
.org 0x9c62a
	ldr r1, [r1, #0]	@ 0009c62a 0968
.org 0x9c62c
	bl 0x128f80	@ 0009c62c 8cf0a8fc
.org 0x9c630
	pop {r0}	@ 0009c630 01bc
.org 0x9c632
	bx r0	@ 0009c632 0047
