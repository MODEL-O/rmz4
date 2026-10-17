@ FUN_0801ceec  entry 0x0801ceec  size 20
.thumb
.org 0x1ceec
FUN_0801ceec:
	movs r1, #255	@ 0001ceec ff21
.org 0x1ceee
	strb r1, [r0, #30]	@ 0001ceee 8177
.org 0x1cef0
	movs r1, #1	@ 0001cef0 0121
.org 0x1cef2
	negs r1, r1	@ 0001cef2 4942
.org 0x1cef4
	strb r1, [r0, #31]	@ 0001cef4 c177
.org 0x1cef6
	ldrb r2, [r0, #11]	@ 0001cef6 c27a
.org 0x1cef8
	movs r1, #4	@ 0001cef8 0421
.org 0x1cefa
	orrs r1, r2	@ 0001cefa 1143
.org 0x1cefc
	strb r1, [r0, #11]	@ 0001cefc c172
.org 0x1cefe
	bx lr	@ 0001cefe 7047
