@ FUN_0807081c  entry 0x0807081c  size 20
.thumb
.org 0x7081c
FUN_0807081c:
	push {lr}	@ 0007081c 00b5
.org 0x7081e
	ldr r2, [pc, #16]	@ 0007081e 044a
.org 0x70820
	ldrb r1, [r0, #14]	@ 00070820 817b
.org 0x70822
	lsls r1, r1, #2	@ 00070822 8900
.org 0x70824
	adds r1, r1, r2	@ 00070824 8918
.org 0x70826
	ldr r1, [r1, #0]	@ 00070826 0968
.org 0x70828
	bl 0x128f80	@ 00070828 b8f0aafb
.org 0x7082c
	pop {r0}	@ 0007082c 01bc
.org 0x7082e
	bx r0	@ 0007082e 0047
