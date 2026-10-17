@ FUN_0806e95c  entry 0x0806e95c  size 20
.thumb
.org 0x6e95c
FUN_0806e95c:
	push {lr}	@ 0006e95c 00b5
.org 0x6e95e
	ldr r2, [pc, #16]	@ 0006e95e 044a
.org 0x6e960
	ldrb r1, [r0, #14]	@ 0006e960 817b
.org 0x6e962
	lsls r1, r1, #2	@ 0006e962 8900
.org 0x6e964
	adds r1, r1, r2	@ 0006e964 8918
.org 0x6e966
	ldr r1, [r1, #0]	@ 0006e966 0968
.org 0x6e968
	bl 0x128f80	@ 0006e968 baf00afb
.org 0x6e96c
	pop {r0}	@ 0006e96c 01bc
.org 0x6e96e
	bx r0	@ 0006e96e 0047
