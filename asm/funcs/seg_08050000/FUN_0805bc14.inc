@ FUN_0805bc14  entry 0x0805bc14  size 50
.thumb
.org 0x5bc14
FUN_0805bc14:
	push {r4, r5, r6, r7, lr}	@ 0005bc14 f0b5
.org 0x5bc16
	sub sp, #24	@ 0005bc16 86b0
.org 0x5bc18
	adds r5, r0, #0	@ 0005bc18 051c
.org 0x5bc1a
	ldr r0, [pc, #36]	@ 0005bc1a 0948
.org 0x5bc1c
	ldr r1, [r0, #4]	@ 0005bc1c 4168
.org 0x5bc1e
	ldr r0, [r0, #0]	@ 0005bc1e 0068
.org 0x5bc20
	str r0, [sp, #0]	@ 0005bc20 0090
.org 0x5bc22
	str r1, [sp, #4]	@ 0005bc22 0191
.org 0x5bc24
	ldrb r0, [r5, #10]	@ 0005bc24 a87a
.org 0x5bc26
	lsrs r7, r0, #4	@ 0005bc26 0709
.org 0x5bc28
	movs r0, #1	@ 0005bc28 0120
.org 0x5bc2a
	ands r7, r0	@ 0005bc2a 0740
.org 0x5bc2c
	ldrb r0, [r5, #15]	@ 0005bc2c e87b
.org 0x5bc2e
	cmp r0, #7	@ 0005bc2e 0728
.org 0x5bc30
	bls.n 0x5bc34	@ 0005bc30 00d9
.org 0x5bc32
	b.n 0x5bf3a	@ 0005bc32 82e1
.org 0x5bc34
	lsls r0, r0, #2	@ 0005bc34 8000
.org 0x5bc36
	ldr r1, [pc, #12]	@ 0005bc36 0349
.org 0x5bc38
	adds r0, r0, r1	@ 0005bc38 4018
.org 0x5bc3a
	ldr r0, [r0, #0]	@ 0005bc3a 0068
.org 0x5bc3c
	mov pc, r0	@ 0005bc3c 8746
.org 0x5bc3e
	.byte 0x00	@ 0005bc3e data
.org 0x5bc3f
	.byte 0x00	@ 0005bc3f data
.org 0x5bc40
	.byte 0xd0,0x96,0x12,0x08	@ 0005bc40 data
.org 0x5bc44
	.byte 0x48,0xbc,0x05,0x08	@ 0005bc44 data
