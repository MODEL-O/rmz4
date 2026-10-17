@ FUN_080f5914  entry 0x080f5914  size 20
.thumb
.org 0xf5914
FUN_080f5914:
	push {lr}	@ 000f5914 00b5
.org 0xf5916
	ldr r2, [pc, #16]	@ 000f5916 044a
.org 0xf5918
	ldrb r1, [r0, #16]	@ 000f5918 017c
.org 0xf591a
	lsls r1, r1, #2	@ 000f591a 8900
.org 0xf591c
	adds r1, r1, r2	@ 000f591c 8918
.org 0xf591e
	ldr r1, [r1, #0]	@ 000f591e 0968
.org 0xf5920
	bl 0x128f80	@ 000f5920 33f02efb
.org 0xf5924
	pop {r0}	@ 000f5924 01bc
.org 0xf5926
	bx r0	@ 000f5926 0047
