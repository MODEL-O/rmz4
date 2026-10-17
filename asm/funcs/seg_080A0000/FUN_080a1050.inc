@ FUN_080a1050  entry 0x080a1050  size 20
.thumb
.org 0xa1050
FUN_080a1050:
	push {lr}	@ 000a1050 00b5
.org 0xa1052
	ldr r2, [pc, #16]	@ 000a1052 044a
.org 0xa1054
	ldrb r1, [r0, #16]	@ 000a1054 017c
.org 0xa1056
	lsls r1, r1, #2	@ 000a1056 8900
.org 0xa1058
	adds r1, r1, r2	@ 000a1058 8918
.org 0xa105a
	ldr r1, [r1, #0]	@ 000a105a 0968
.org 0xa105c
	bl 0x128f80	@ 000a105c 87f090ff
.org 0xa1060
	pop {r0}	@ 000a1060 01bc
.org 0xa1062
	bx r0	@ 000a1062 0047
