@ FUN_08037bc8  entry 0x08037bc8  size 20
.thumb
.org 0x37bc8
FUN_08037bc8:
	push {lr}	@ 00037bc8 00b5
.org 0x37bca
	movs r1, #128	@ 00037bca 8021
.org 0x37bcc
	lsls r1, r1, #1	@ 00037bcc 4900
.org 0x37bce
	adds r2, r0, r1	@ 00037bce 4218
.org 0x37bd0
	movs r1, #1	@ 00037bd0 0121
.org 0x37bd2
	strb r1, [r2, #0]	@ 00037bd2 1170
.org 0x37bd4
	bl 0x37bdc	@ 00037bd4 00f002f8
.org 0x37bd8
	pop {r0}	@ 00037bd8 01bc
.org 0x37bda
	bx r0	@ 00037bda 0047
