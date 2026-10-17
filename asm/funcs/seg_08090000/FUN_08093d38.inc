@ FUN_08093d38  entry 0x08093d38  size 54
.thumb
.org 0x93d38
FUN_08093d38:
	push {r4, r5, r6, r7, lr}	@ 00093d38 f0b5
.org 0x93d3a
	mov r7, r8	@ 00093d3a 4746
.org 0x93d3c
	push {r7}	@ 00093d3c 80b4
.org 0x93d3e
	sub sp, #12	@ 00093d3e 83b0
.org 0x93d40
	adds r5, r0, #0	@ 00093d40 051c
.org 0x93d42
	ldrb r0, [r5, #10]	@ 00093d42 a87a
.org 0x93d44
	lsrs r0, r0, #4	@ 00093d44 0009
.org 0x93d46
	mov r8, r0	@ 00093d46 8046
.org 0x93d48
	movs r0, #1	@ 00093d48 0120
.org 0x93d4a
	mov r1, r8	@ 00093d4a 4146
.org 0x93d4c
	ands r1, r0	@ 00093d4c 0140
.org 0x93d4e
	mov r8, r1	@ 00093d4e 8846
.org 0x93d50
	ldrb r0, [r5, #15]	@ 00093d50 e87b
.org 0x93d52
	cmp r0, #4	@ 00093d52 0428
.org 0x93d54
	bls.n 0x93d58	@ 00093d54 00d9
.org 0x93d56
	b.n 0x93f28	@ 00093d56 e7e0
.org 0x93d58
	lsls r0, r0, #2	@ 00093d58 8000
.org 0x93d5a
	ldr r1, [pc, #8]	@ 00093d5a 0249
.org 0x93d5c
	adds r0, r0, r1	@ 00093d5c 4018
.org 0x93d5e
	ldr r0, [r0, #0]	@ 00093d5e 0068
.org 0x93d60
	mov pc, r0	@ 00093d60 8746
.org 0x93d62
	.byte 0x00	@ 00093d62 data
.org 0x93d63
	.byte 0x00	@ 00093d63 data
.org 0x93d64
	.byte 0x68,0x3d,0x09,0x08	@ 00093d64 data
.org 0x93d68
	.byte 0x84,0x3d,0x09,0x08	@ 00093d68 data
.org 0x93d6c
	.byte 0x9a,0x3d,0x09,0x08	@ 00093d6c data
