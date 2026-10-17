@ FUN_08009194  entry 0x08009194  size 36
.thumb
.org 0x9194
FUN_08009194:
	push {lr}	@ 00009194 00b5
.org 0x9196
	adds r2, r0, #0	@ 00009196 021c
.org 0x9198
	ldr r0, [pc, #8]	@ 00009198 0248
.org 0x919a
	cmp r2, r0	@ 0000919a 8242
.org 0x919c
	ble.n 0x91a8	@ 0000919c 04dd
.org 0x919e
	mvns r0, r1	@ 0000919e c843
.org 0x91a0
	b.n 0x91be	@ 000091a0 0de0
.org 0x91a2
	.byte 0x00	@ 000091a2 data
.org 0x91a3
	.byte 0x00	@ 000091a3 data
.org 0x91a4
	.byte 0xff,0x03,0x00,0x00	@ 000091a4 data
.org 0x91a8
	ldr r0, [pc, #12]	@ 000091a8 0348
.org 0x91aa
	adds r1, r1, r0	@ 000091aa 0918
.org 0x91ac
	lsls r0, r2, #2	@ 000091ac 9000
.org 0x91ae
	adds r0, r1, r0	@ 000091ae 0818
.org 0x91b0
	cmp r0, #0	@ 000091b0 0028
.org 0x91b2
	bgt.n 0x91bc	@ 000091b2 03dc
.org 0x91b4
	movs r0, #0	@ 000091b4 0020
.org 0x91b6
	b.n 0x91be	@ 000091b6 02e0
