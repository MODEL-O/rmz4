@ FUN_08007098  entry 0x08007098  size 24
.thumb
.org 0x7098
FUN_08007098:
	push {lr}	@ 00007098 00b5
.org 0x709a
	bl 0x7770	@ 0000709a 00f069fb
.org 0x709e
	movs r1, #0	@ 0000709e 0021
.org 0x70a0
	lsls r0, r0, #24	@ 000070a0 0006
.org 0x70a2
	lsrs r0, r0, #24	@ 000070a2 000e
.org 0x70a4
	cmp r0, #240	@ 000070a4 f028
.org 0x70a6
	bne.n 0x70aa	@ 000070a6 00d1
.org 0x70a8
	movs r1, #1	@ 000070a8 0121
.org 0x70aa
	adds r0, r1, #0	@ 000070aa 081c
.org 0x70ac
	pop {r1}	@ 000070ac 02bc
.org 0x70ae
	bx r1	@ 000070ae 0847
