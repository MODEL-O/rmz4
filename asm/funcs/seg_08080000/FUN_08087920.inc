@ FUN_08087920  entry 0x08087920  size 20
.thumb
.org 0x87920
FUN_08087920:
	push {lr}	@ 00087920 00b5
.org 0x87922
	ldr r2, [pc, #16]	@ 00087922 044a
.org 0x87924
	ldrb r1, [r0, #14]	@ 00087924 817b
.org 0x87926
	lsls r1, r1, #2	@ 00087926 8900
.org 0x87928
	adds r1, r1, r2	@ 00087928 8918
.org 0x8792a
	ldr r1, [r1, #0]	@ 0008792a 0968
.org 0x8792c
	bl 0x128f80	@ 0008792c a1f028fb
.org 0x87930
	pop {r0}	@ 00087930 01bc
.org 0x87932
	bx r0	@ 00087932 0047
