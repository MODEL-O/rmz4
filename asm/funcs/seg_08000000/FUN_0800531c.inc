@ FUN_0800531c  entry 0x0800531c  size 10
.thumb
.org 0x531c
FUN_0800531c:
	ldrh r2, [r0, #8]	@ 0000531c 0289
.org 0x531e
	strh r2, [r1, #0]	@ 0000531e 0a80
.org 0x5320
	ldrh r0, [r0, #10]	@ 00005320 4089
.org 0x5322
	strh r0, [r1, #2]	@ 00005322 4880
.org 0x5324
	bx lr	@ 00005324 7047
