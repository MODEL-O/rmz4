@ FUN_080d6914  entry 0x080d6914  size 20
.thumb
.org 0xd6914
FUN_080d6914:
	push {lr}	@ 000d6914 00b5
.org 0xd6916
	ldr r2, [pc, #16]	@ 000d6916 044a
.org 0xd6918
	ldrb r1, [r0, #16]	@ 000d6918 017c
.org 0xd691a
	lsls r1, r1, #2	@ 000d691a 8900
.org 0xd691c
	adds r1, r1, r2	@ 000d691c 8918
.org 0xd691e
	ldr r1, [r1, #0]	@ 000d691e 0968
.org 0xd6920
	bl 0x128f80	@ 000d6920 52f02efb
.org 0xd6924
	pop {r0}	@ 000d6924 01bc
.org 0xd6926
	bx r0	@ 000d6926 0047
