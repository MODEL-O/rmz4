@ FUN_08012918  entry 0x08012918  size 26
.thumb
.org 0x12918
FUN_08012918:
	push {lr}	@ 00012918 00b5
.org 0x1291a
	adds r3, r0, #0	@ 0001291a 031c
.org 0x1291c
	ldrb r2, [r3, #14]	@ 0001291c 9a7b
.org 0x1291e
	cmp r2, #0	@ 0001291e 002a
.org 0x12920
	bne.n 0x1292e	@ 00012920 05d1
.org 0x12922
	ldr r0, [pc, #16]	@ 00012922 0448
.org 0x12924
	movs r1, #240	@ 00012924 f021
.org 0x12926
	lsls r1, r1, #11	@ 00012926 c902
.org 0x12928
	str r1, [r0, #0]	@ 00012928 0160
.org 0x1292a
	adds r0, r2, #1	@ 0001292a 501c
.org 0x1292c
	strb r0, [r3, #14]	@ 0001292c 9873
.org 0x1292e
	pop {r0}	@ 0001292e 01bc
.org 0x12930
	bx r0	@ 00012930 0047
