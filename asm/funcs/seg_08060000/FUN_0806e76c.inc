@ FUN_0806e76c  entry 0x0806e76c  size 20
.thumb
.org 0x6e76c
FUN_0806e76c:
	push {lr}	@ 0006e76c 00b5
.org 0x6e76e
	ldr r2, [pc, #16]	@ 0006e76e 044a
.org 0x6e770
	ldrb r1, [r0, #14]	@ 0006e770 817b
.org 0x6e772
	lsls r1, r1, #2	@ 0006e772 8900
.org 0x6e774
	adds r1, r1, r2	@ 0006e774 8918
.org 0x6e776
	ldr r1, [r1, #0]	@ 0006e776 0968
.org 0x6e778
	bl 0x128f80	@ 0006e778 baf002fc
.org 0x6e77c
	pop {r0}	@ 0006e77c 01bc
.org 0x6e77e
	bx r0	@ 0006e77e 0047
