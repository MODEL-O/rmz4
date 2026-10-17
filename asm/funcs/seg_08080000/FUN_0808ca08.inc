@ FUN_0808ca08  entry 0x0808ca08  size 84
.thumb
.org 0x8ca08
FUN_0808ca08:
	push {r4, lr}	@ 0008ca08 10b5
.org 0x8ca0a
	adds r4, r0, #0	@ 0008ca0a 041c
.org 0x8ca0c
	ldrb r1, [r4, #10]	@ 0008ca0c a17a
.org 0x8ca0e
	movs r0, #254	@ 0008ca0e fe20
.org 0x8ca10
	ands r0, r1	@ 0008ca10 0840
.org 0x8ca12
	movs r1, #0	@ 0008ca12 0021
.org 0x8ca14
	strb r0, [r4, #10]	@ 0008ca14 a072
.org 0x8ca16
	adds r0, r4, #0	@ 0008ca16 201c
.org 0x8ca18
	adds r0, #140	@ 0008ca18 8c30
.org 0x8ca1a
	str r1, [r0, #0]	@ 0008ca1a 0160
.org 0x8ca1c
	adds r0, #4	@ 0008ca1c 0430
.org 0x8ca1e
	str r1, [r0, #0]	@ 0008ca1e 0160
.org 0x8ca20
	adds r0, #4	@ 0008ca20 0430
.org 0x8ca22
	strb r1, [r0, #0]	@ 0008ca22 0170
.org 0x8ca24
	ldrb r1, [r4, #10]	@ 0008ca24 a17a
.org 0x8ca26
	movs r0, #251	@ 0008ca26 fb20
.org 0x8ca28
	ands r0, r1	@ 0008ca28 0840
.org 0x8ca2a
	strb r0, [r4, #10]	@ 0008ca2a a072
.org 0x8ca2c
	ldr r2, [pc, #44]	@ 0008ca2c 0b4a
.org 0x8ca2e
	ldrh r1, [r2, #12]	@ 0008ca2e 9189
.org 0x8ca30
	ldr r0, [pc, #44]	@ 0008ca30 0b48
.org 0x8ca32
	cmp r1, r0	@ 0008ca32 8142
.org 0x8ca34
	bhi.n 0x8ca3a	@ 0008ca34 01d8
.org 0x8ca36
	adds r0, r1, #1	@ 0008ca36 481c
.org 0x8ca38
	strh r0, [r2, #12]	@ 0008ca38 9081
.org 0x8ca3a
	adds r1, r4, #0	@ 0008ca3a 211c
.org 0x8ca3c
	adds r1, #84	@ 0008ca3c 5431
.org 0x8ca3e
	adds r0, r4, #0	@ 0008ca3e 201c
.org 0x8ca40
	bl 0x2abe0	@ 0008ca40 9ef7cef8
.org 0x8ca44
	ldr r1, [pc, #28]	@ 0008ca44 0749
.org 0x8ca46
	ldrb r0, [r4, #9]	@ 0008ca46 607a
.org 0x8ca48
	lsls r0, r0, #2	@ 0008ca48 8000
.org 0x8ca4a
	adds r0, r0, r1	@ 0008ca4a 4018
.org 0x8ca4c
	movs r1, #4	@ 0008ca4c 0421
.org 0x8ca4e
	str r1, [r4, #12]	@ 0008ca4e e160
.org 0x8ca50
	ldr r0, [r0, #0]	@ 0008ca50 0068
.org 0x8ca52
	ldr r0, [r0, #16]	@ 0008ca52 0069
.org 0x8ca54
	str r0, [r4, #20]	@ 0008ca54 6061
.org 0x8ca56
	pop {r4}	@ 0008ca56 10bc
.org 0x8ca58
	pop {r0}	@ 0008ca58 01bc
.org 0x8ca5a
	bx r0	@ 0008ca5a 0047
