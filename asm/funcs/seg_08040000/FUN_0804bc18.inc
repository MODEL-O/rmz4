@ FUN_0804bc18  entry 0x0804bc18  size 106
.thumb
.org 0x4bc18
FUN_0804bc18:
	push {lr}	@ 0004bc18 00b5
.org 0x4bc1a
	adds r3, r0, #0	@ 0004bc1a 031c
.org 0x4bc1c
	ldr r0, [r3, #40]	@ 0004bc1c 986a
.org 0x4bc1e
	adds r2, r0, #0	@ 0004bc1e 021c
.org 0x4bc20
	adds r2, #180	@ 0004bc20 b432
.org 0x4bc22
	movs r1, #173	@ 0004bc22 ad21
.org 0x4bc24
	lsls r1, r1, #1	@ 0004bc24 4900
.org 0x4bc26
	adds r0, r0, r1	@ 0004bc26 4018
.org 0x4bc28
	ldrh r1, [r0, #0]	@ 0004bc28 0188
.org 0x4bc2a
	movs r0, #1	@ 0004bc2a 0120
.org 0x4bc2c
	ands r0, r1	@ 0004bc2c 0840
.org 0x4bc2e
	cmp r0, #0	@ 0004bc2e 0028
.org 0x4bc30
	beq.n 0x4bc3c	@ 0004bc30 04d0
.org 0x4bc32
	ldrb r1, [r3, #10]	@ 0004bc32 997a
.org 0x4bc34
	movs r0, #254	@ 0004bc34 fe20
.org 0x4bc36
	ands r0, r1	@ 0004bc36 0840
.org 0x4bc38
	movs r2, #0	@ 0004bc38 0022
.org 0x4bc3a
	b.n 0x4bc50	@ 0004bc3a 09e0
.org 0x4bc3c
	ldrh r1, [r2, #20]	@ 0004bc3c 918a
.org 0x4bc3e
	movs r0, #4	@ 0004bc3e 0420
.org 0x4bc40
	ands r0, r1	@ 0004bc40 0840
.org 0x4bc42
	lsls r0, r0, #16	@ 0004bc42 0004
.org 0x4bc44
	lsrs r2, r0, #18	@ 0004bc44 820c
.org 0x4bc46
	cmp r2, #0	@ 0004bc46 002a
.org 0x4bc48
	bne.n 0x4bc7e	@ 0004bc48 19d1
.org 0x4bc4a
	ldrb r1, [r3, #10]	@ 0004bc4a 997a
.org 0x4bc4c
	movs r0, #254	@ 0004bc4c fe20
.org 0x4bc4e
	ands r0, r1	@ 0004bc4e 0840
.org 0x4bc50
	movs r1, #253	@ 0004bc50 fd21
.org 0x4bc52
	ands r0, r1	@ 0004bc52 0840
.org 0x4bc54
	strb r0, [r3, #10]	@ 0004bc54 9872
.org 0x4bc56
	adds r0, r3, #0	@ 0004bc56 181c
.org 0x4bc58
	adds r0, #140	@ 0004bc58 8c30
.org 0x4bc5a
	str r2, [r0, #0]	@ 0004bc5a 0260
.org 0x4bc5c
	adds r0, #4	@ 0004bc5c 0430
.org 0x4bc5e
	str r2, [r0, #0]	@ 0004bc5e 0260
.org 0x4bc60
	adds r0, #4	@ 0004bc60 0430
.org 0x4bc62
	strb r2, [r0, #0]	@ 0004bc62 0270
.org 0x4bc64
	ldrb r1, [r3, #10]	@ 0004bc64 997a
.org 0x4bc66
	movs r0, #251	@ 0004bc66 fb20
.org 0x4bc68
	ands r0, r1	@ 0004bc68 0840
.org 0x4bc6a
	strb r0, [r3, #10]	@ 0004bc6a 9872
.org 0x4bc6c
	ldr r1, [pc, #20]	@ 0004bc6c 0549
.org 0x4bc6e
	ldrb r0, [r3, #9]	@ 0004bc6e 587a
.org 0x4bc70
	lsls r0, r0, #2	@ 0004bc70 8000
.org 0x4bc72
	adds r0, r0, r1	@ 0004bc72 4018
.org 0x4bc74
	movs r1, #3	@ 0004bc74 0321
.org 0x4bc76
	str r1, [r3, #12]	@ 0004bc76 d960
.org 0x4bc78
	ldr r0, [r0, #0]	@ 0004bc78 0068
.org 0x4bc7a
	ldr r0, [r0, #12]	@ 0004bc7a c068
.org 0x4bc7c
	str r0, [r3, #20]	@ 0004bc7c 5861
.org 0x4bc7e
	pop {r0}	@ 0004bc7e 01bc
.org 0x4bc80
	bx r0	@ 0004bc80 0047
